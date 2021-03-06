/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

import (
	"encoding/json"
	"net/http"
	"strings"

	"github.com/gorilla/mux"
)

// PinsApiController binds http requests to an api service and writes the service results to the http response
type PinsApiController struct {
	service PinsApiServicer
	errorHandler ErrorHandler
}

// PinsApiOption for how the controller is set up.
type PinsApiOption func(*PinsApiController)

// WithPinsApiErrorHandler inject ErrorHandler into controller
func WithPinsApiErrorHandler(h ErrorHandler) PinsApiOption {
	return func(c *PinsApiController) {
		c.errorHandler = h
	}
}

// NewPinsApiController creates a default api controller
func NewPinsApiController(s PinsApiServicer, opts ...PinsApiOption) Router {
	controller := &PinsApiController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all of the api route for the PinsApiController
func (c *PinsApiController) Routes() Routes {
	return Routes{ 
		{
			"PinsAnalytics",
			strings.ToUpper("Get"),
			"/v5/pins/{pin_id}/analytics",
			c.PinsAnalytics,
		},
		{
			"PinsCreate",
			strings.ToUpper("Post"),
			"/v5/pins",
			c.PinsCreate,
		},
		{
			"PinsDelete",
			strings.ToUpper("Delete"),
			"/v5/pins/{pin_id}",
			c.PinsDelete,
		},
		{
			"PinsGet",
			strings.ToUpper("Get"),
			"/v5/pins/{pin_id}",
			c.PinsGet,
		},
	}
}

// PinsAnalytics - Get Pin analytics
func (c *PinsApiController) PinsAnalytics(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	query := r.URL.Query()
	pinIdParam := params["pin_id"]
	
	startDateParam := query.Get("start_date")
	endDateParam := query.Get("end_date")
	metricTypesParam := strings.Split(query.Get("metric_types"), ",")
	appTypesParam := query.Get("app_types")
	splitFieldParam := query.Get("split_field")
	adAccountIdParam := query.Get("ad_account_id")
	result, err := c.service.PinsAnalytics(r.Context(), pinIdParam, startDateParam, endDateParam, metricTypesParam, appTypesParam, splitFieldParam, adAccountIdParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// PinsCreate - Create Pin
func (c *PinsApiController) PinsCreate(w http.ResponseWriter, r *http.Request) {
	pinParam := Pin{}
	d := json.NewDecoder(r.Body)
	d.DisallowUnknownFields()
	if err := d.Decode(&pinParam); err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	if err := AssertPinRequired(pinParam); err != nil {
		c.errorHandler(w, r, err, nil)
		return
	}
	result, err := c.service.PinsCreate(r.Context(), pinParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// PinsDelete - Delete Pin
func (c *PinsApiController) PinsDelete(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	pinIdParam := params["pin_id"]
	
	result, err := c.service.PinsDelete(r.Context(), pinIdParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}

// PinsGet - Get Pin
func (c *PinsApiController) PinsGet(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	query := r.URL.Query()
	pinIdParam := params["pin_id"]
	
	adAccountIdParam := query.Get("ad_account_id")
	result, err := c.service.PinsGet(r.Context(), pinIdParam, adAccountIdParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}
