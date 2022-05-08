/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

import (
	"encoding/json"
	"net/http"
	"strings"

	"github.com/gorilla/mux"
)

// OauthApiController binds http requests to an api service and writes the service results to the http response
type OauthApiController struct {
	service OauthApiServicer
	errorHandler ErrorHandler
}

// OauthApiOption for how the controller is set up.
type OauthApiOption func(*OauthApiController)

// WithOauthApiErrorHandler inject ErrorHandler into controller
func WithOauthApiErrorHandler(h ErrorHandler) OauthApiOption {
	return func(c *OauthApiController) {
		c.errorHandler = h
	}
}

// NewOauthApiController creates a default api controller
func NewOauthApiController(s OauthApiServicer, opts ...OauthApiOption) Router {
	controller := &OauthApiController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all of the api route for the OauthApiController
func (c *OauthApiController) Routes() Routes {
	return Routes{ 
		{
			"OauthToken",
			strings.ToUpper("Post"),
			"/v5/oauth/token",
			c.OauthToken,
		},
	}
}

// OauthToken - Generate OAuth access token
func (c *OauthApiController) OauthToken(w http.ResponseWriter, r *http.Request) {
	if err := r.ParseForm(); err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
				grantTypeParam := r.FormValue("grant_type")
	result, err := c.service.OauthToken(r.Context(), grantTypeParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)

}