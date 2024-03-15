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

// ResourcesAPIController binds http requests to an api service and writes the service results to the http response
type ResourcesAPIController struct {
	service ResourcesAPIServicer
	errorHandler ErrorHandler
}

// ResourcesAPIOption for how the controller is set up.
type ResourcesAPIOption func(*ResourcesAPIController)

// WithResourcesAPIErrorHandler inject ErrorHandler into controller
func WithResourcesAPIErrorHandler(h ErrorHandler) ResourcesAPIOption {
	return func(c *ResourcesAPIController) {
		c.errorHandler = h
	}
}

// NewResourcesAPIController creates a default api controller
func NewResourcesAPIController(s ResourcesAPIServicer, opts ...ResourcesAPIOption) Router {
	controller := &ResourcesAPIController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all the api routes for the ResourcesAPIController
func (c *ResourcesAPIController) Routes() Routes {
	return Routes{
		"AdAccountCountriesGet": Route{
			strings.ToUpper("Get"),
			"/v5/resources/ad_account_countries",
			c.AdAccountCountriesGet,
		},
		"DeliveryMetricsGet": Route{
			strings.ToUpper("Get"),
			"/v5/resources/delivery_metrics",
			c.DeliveryMetricsGet,
		},
		"InterestTargetingOptionsGet": Route{
			strings.ToUpper("Get"),
			"/v5/resources/targeting/interests/{interest_id}",
			c.InterestTargetingOptionsGet,
		},
		"LeadFormQuestionsGet": Route{
			strings.ToUpper("Get"),
			"/v5/resources/lead_form_questions",
			c.LeadFormQuestionsGet,
		},
		"MetricsReadyStateGet": Route{
			strings.ToUpper("Get"),
			"/v5/resources/metrics_ready_state",
			c.MetricsReadyStateGet,
		},
		"TargetingOptionsGet": Route{
			strings.ToUpper("Get"),
			"/v5/resources/targeting/{targeting_type}",
			c.TargetingOptionsGet,
		},
	}
}

// AdAccountCountriesGet - Get ad accounts countries
func (c *ResourcesAPIController) AdAccountCountriesGet(w http.ResponseWriter, r *http.Request) {
	result, err := c.service.AdAccountCountriesGet(r.Context())
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}

// DeliveryMetricsGet - Get available metrics' definitions
func (c *ResourcesAPIController) DeliveryMetricsGet(w http.ResponseWriter, r *http.Request) {
	query, err := parseQuery(r.URL.RawQuery)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	var reportTypeParam string
	if query.Has("report_type") {
		param := query.Get("report_type")

		reportTypeParam = param
	} else {
	}
	result, err := c.service.DeliveryMetricsGet(r.Context(), reportTypeParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}

// InterestTargetingOptionsGet - Get interest details
func (c *ResourcesAPIController) InterestTargetingOptionsGet(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	interestIdParam := params["interest_id"]
	if interestIdParam == "" {
		c.errorHandler(w, r, &RequiredError{"interest_id"}, nil)
		return
	}
	result, err := c.service.InterestTargetingOptionsGet(r.Context(), interestIdParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}

// LeadFormQuestionsGet - Get lead form questions
func (c *ResourcesAPIController) LeadFormQuestionsGet(w http.ResponseWriter, r *http.Request) {
	result, err := c.service.LeadFormQuestionsGet(r.Context())
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}

// MetricsReadyStateGet - Get metrics ready state
func (c *ResourcesAPIController) MetricsReadyStateGet(w http.ResponseWriter, r *http.Request) {
	query, err := parseQuery(r.URL.RawQuery)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	var dateParam string
	if query.Has("date") {
		param := query.Get("date")

		dateParam = param
	} else {
		c.errorHandler(w, r, &RequiredError{Field: "date"}, nil)
		return
	}
	result, err := c.service.MetricsReadyStateGet(r.Context(), dateParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}

// TargetingOptionsGet - Get targeting options
func (c *ResourcesAPIController) TargetingOptionsGet(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	query, err := parseQuery(r.URL.RawQuery)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	targetingTypeParam := params["targeting_type"]
	if targetingTypeParam == "" {
		c.errorHandler(w, r, &RequiredError{"targeting_type"}, nil)
		return
	}
	var clientIdParam string
	if query.Has("client_id") {
		param := query.Get("client_id")

		clientIdParam = param
	} else {
	}
	var oauthSignatureParam string
	if query.Has("oauth_signature") {
		param := query.Get("oauth_signature")

		oauthSignatureParam = param
	} else {
	}
	var timestampParam string
	if query.Has("timestamp") {
		param := query.Get("timestamp")

		timestampParam = param
	} else {
	}
	result, err := c.service.TargetingOptionsGet(r.Context(), targetingTypeParam, clientIdParam, oauthSignatureParam, timestampParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}