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

	"github.com/gorilla/mux"
)

// AudiencesAPIController binds http requests to an api service and writes the service results to the http response
type AudiencesAPIController struct {
	service AudiencesAPIServicer
	errorHandler ErrorHandler
}

// AudiencesAPIOption for how the controller is set up.
type AudiencesAPIOption func(*AudiencesAPIController)

// WithAudiencesAPIErrorHandler inject ErrorHandler into controller
func WithAudiencesAPIErrorHandler(h ErrorHandler) AudiencesAPIOption {
	return func(c *AudiencesAPIController) {
		c.errorHandler = h
	}
}

// NewAudiencesAPIController creates a default api controller
func NewAudiencesAPIController(s AudiencesAPIServicer, opts ...AudiencesAPIOption) Router {
	controller := &AudiencesAPIController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all the api routes for the AudiencesAPIController
func (c *AudiencesAPIController) Routes() Routes {
	return Routes{
		"AudiencesCreate": Route{
			strings.ToUpper("Post"),
			"/v5/ad_accounts/{ad_account_id}/audiences",
			c.AudiencesCreate,
		},
		"AudiencesCreateCustom": Route{
			strings.ToUpper("Post"),
			"/v5/ad_accounts/{ad_account_id}/audiences/custom",
			c.AudiencesCreateCustom,
		},
		"AudiencesGet": Route{
			strings.ToUpper("Get"),
			"/v5/ad_accounts/{ad_account_id}/audiences/{audience_id}",
			c.AudiencesGet,
		},
		"AudiencesList": Route{
			strings.ToUpper("Get"),
			"/v5/ad_accounts/{ad_account_id}/audiences",
			c.AudiencesList,
		},
		"AudiencesUpdate": Route{
			strings.ToUpper("Patch"),
			"/v5/ad_accounts/{ad_account_id}/audiences/{audience_id}",
			c.AudiencesUpdate,
		},
	}
}

// AudiencesCreate - Create audience
func (c *AudiencesAPIController) AudiencesCreate(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	adAccountIdParam := params["ad_account_id"]
	if adAccountIdParam == "" {
		c.errorHandler(w, r, &RequiredError{"ad_account_id"}, nil)
		return
	}
	audienceCreateRequestParam := AudienceCreateRequest{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&audienceCreateRequestParam); err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	if err := AssertAudienceCreateRequestRequired(audienceCreateRequestParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	if err := AssertAudienceCreateRequestConstraints(audienceCreateRequestParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	result, err := c.service.AudiencesCreate(r.Context(), adAccountIdParam, audienceCreateRequestParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}

// AudiencesCreateCustom - Create custom audience
func (c *AudiencesAPIController) AudiencesCreateCustom(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	adAccountIdParam := params["ad_account_id"]
	if adAccountIdParam == "" {
		c.errorHandler(w, r, &RequiredError{"ad_account_id"}, nil)
		return
	}
	audienceCreateCustomRequestParam := AudienceCreateCustomRequest{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&audienceCreateCustomRequestParam); err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	if err := AssertAudienceCreateCustomRequestRequired(audienceCreateCustomRequestParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	if err := AssertAudienceCreateCustomRequestConstraints(audienceCreateCustomRequestParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	result, err := c.service.AudiencesCreateCustom(r.Context(), adAccountIdParam, audienceCreateCustomRequestParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}

// AudiencesGet - Get audience
func (c *AudiencesAPIController) AudiencesGet(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	adAccountIdParam := params["ad_account_id"]
	if adAccountIdParam == "" {
		c.errorHandler(w, r, &RequiredError{"ad_account_id"}, nil)
		return
	}
	audienceIdParam := params["audience_id"]
	if audienceIdParam == "" {
		c.errorHandler(w, r, &RequiredError{"audience_id"}, nil)
		return
	}
	result, err := c.service.AudiencesGet(r.Context(), adAccountIdParam, audienceIdParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}

// AudiencesList - List audiences
func (c *AudiencesAPIController) AudiencesList(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	query, err := parseQuery(r.URL.RawQuery)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	adAccountIdParam := params["ad_account_id"]
	if adAccountIdParam == "" {
		c.errorHandler(w, r, &RequiredError{"ad_account_id"}, nil)
		return
	}
	var bookmarkParam string
	if query.Has("bookmark") {
		param := query.Get("bookmark")

		bookmarkParam = param
	} else {
	}
	var orderParam string
	if query.Has("order") {
		param := query.Get("order")

		orderParam = param
	} else {
	}
	var pageSizeParam int32
	if query.Has("page_size") {
		param, err := parseNumericParameter[int32](
			query.Get("page_size"),
			WithParse[int32](parseInt32),
			WithMinimum[int32](1),
			WithMaximum[int32](250),
		)
		if err != nil {
			c.errorHandler(w, r, &ParsingError{Err: err}, nil)
			return
		}

		pageSizeParam = param
	} else {
		var param int32 = 25
		pageSizeParam = param
	}
	var ownershipTypeParam string
	if query.Has("ownership_type") {
		param := query.Get("ownership_type")

		ownershipTypeParam = param
	} else {
		param := OWNED
		ownershipTypeParam = param
	}
	result, err := c.service.AudiencesList(r.Context(), adAccountIdParam, bookmarkParam, orderParam, pageSizeParam, ownershipTypeParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}

// AudiencesUpdate - Update audience
func (c *AudiencesAPIController) AudiencesUpdate(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	adAccountIdParam := params["ad_account_id"]
	if adAccountIdParam == "" {
		c.errorHandler(w, r, &RequiredError{"ad_account_id"}, nil)
		return
	}
	audienceIdParam := params["audience_id"]
	if audienceIdParam == "" {
		c.errorHandler(w, r, &RequiredError{"audience_id"}, nil)
		return
	}
	audienceUpdateRequestParam := AudienceUpdateRequest{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&audienceUpdateRequestParam); err != nil && !errors.Is(err, io.EOF) {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	if err := AssertAudienceUpdateRequestRequired(audienceUpdateRequestParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	if err := AssertAudienceUpdateRequestConstraints(audienceUpdateRequestParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	result, err := c.service.AudiencesUpdate(r.Context(), adAccountIdParam, audienceIdParam, audienceUpdateRequestParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}
