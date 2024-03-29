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

// ProductGroupsAPIController binds http requests to an api service and writes the service results to the http response
type ProductGroupsAPIController struct {
	service ProductGroupsAPIServicer
	errorHandler ErrorHandler
}

// ProductGroupsAPIOption for how the controller is set up.
type ProductGroupsAPIOption func(*ProductGroupsAPIController)

// WithProductGroupsAPIErrorHandler inject ErrorHandler into controller
func WithProductGroupsAPIErrorHandler(h ErrorHandler) ProductGroupsAPIOption {
	return func(c *ProductGroupsAPIController) {
		c.errorHandler = h
	}
}

// NewProductGroupsAPIController creates a default api controller
func NewProductGroupsAPIController(s ProductGroupsAPIServicer, opts ...ProductGroupsAPIOption) Router {
	controller := &ProductGroupsAPIController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all the api routes for the ProductGroupsAPIController
func (c *ProductGroupsAPIController) Routes() Routes {
	return Routes{
		"AdAccountsCatalogsProductGroupsList": Route{
			strings.ToUpper("Get"),
			"/v5/ad_accounts/{ad_account_id}/product_groups/catalogs",
			c.AdAccountsCatalogsProductGroupsList,
		},
	}
}

// AdAccountsCatalogsProductGroupsList - Get catalog product groups
// Deprecated
func (c *ProductGroupsAPIController) AdAccountsCatalogsProductGroupsList(w http.ResponseWriter, r *http.Request) {
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
	var feedProfileIdParam string
	if query.Has("feed_profile_id") {
		param := query.Get("feed_profile_id")

		feedProfileIdParam = param
	} else {
	}
	result, err := c.service.AdAccountsCatalogsProductGroupsList(r.Context(), adAccountIdParam, feedProfileIdParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}
