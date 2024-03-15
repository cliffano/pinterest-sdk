/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

import (
	"encoding/json"
	"net/http"
	"strings"
	"reflect"

	"github.com/gorilla/mux"
)

// TermsAPIController binds http requests to an api service and writes the service results to the http response
type TermsAPIController struct {
	service TermsAPIServicer
	errorHandler ErrorHandler
}

// TermsAPIOption for how the controller is set up.
type TermsAPIOption func(*TermsAPIController)

// WithTermsAPIErrorHandler inject ErrorHandler into controller
func WithTermsAPIErrorHandler(h ErrorHandler) TermsAPIOption {
	return func(c *TermsAPIController) {
		c.errorHandler = h
	}
}

// NewTermsAPIController creates a default api controller
func NewTermsAPIController(s TermsAPIServicer, opts ...TermsAPIOption) Router {
	controller := &TermsAPIController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all the api routes for the TermsAPIController
func (c *TermsAPIController) Routes() Routes {
	return Routes{
		"TermsRelatedList": Route{
			strings.ToUpper("Get"),
			"/v5/terms/related",
			c.TermsRelatedList,
		},
		"TermsSuggestedList": Route{
			strings.ToUpper("Get"),
			"/v5/terms/suggested",
			c.TermsSuggestedList,
		},
	}
}

// TermsRelatedList - List related terms
func (c *TermsAPIController) TermsRelatedList(w http.ResponseWriter, r *http.Request) {
	query, err := parseQuery(r.URL.RawQuery)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	var termsParam []string
	if query.Has("terms") {
		termsParam = strings.Split(query.Get("terms"), ",")
	}
	result, err := c.service.TermsRelatedList(r.Context(), termsParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}

// TermsSuggestedList - List suggested terms
func (c *TermsAPIController) TermsSuggestedList(w http.ResponseWriter, r *http.Request) {
	query, err := parseQuery(r.URL.RawQuery)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	var termParam string
	if query.Has("term") {
		param := query.Get("term")

		termParam = param
	} else {
		c.errorHandler(w, r, &RequiredError{Field: "term"}, nil)
		return
	}
	var limitParam int32
	if query.Has("limit") {
		param, err := parseNumericParameter[int32](
			query.Get("limit"),
			WithParse[int32](parseInt32),
			WithMinimum[int32](1),
			WithMaximum[int32](10),
		)
		if err != nil {
			c.errorHandler(w, r, &ParsingError{Err: err}, nil)
			return
		}

		limitParam = param
	} else {
		var param int32 = 4
		limitParam = param
	}
	result, err := c.service.TermsSuggestedList(r.Context(), termParam, limitParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}