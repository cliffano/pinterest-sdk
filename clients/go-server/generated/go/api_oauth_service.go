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
	"context"
	"net/http"
	"errors"
)

// OauthApiService is a service that implements the logic for the OauthApiServicer
// This service should implement the business logic for every endpoint for the OauthApi API.
// Include any external packages or services that will be required by this service.
type OauthApiService struct {
}

// NewOauthApiService creates a default api service
func NewOauthApiService() OauthApiServicer {
	return &OauthApiService{}
}

// OauthToken - Generate OAuth access token
func (s *OauthApiService) OauthToken(ctx context.Context, grantType string) (ImplResponse, error) {
	// TODO - update OauthToken with the required logic for this service method.
	// Add api_oauth_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(200, OauthAccessTokenResponse{}) or use other options such as http.Ok ...
	//return Response(200, OauthAccessTokenResponse{}), nil

	//TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	//return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("OauthToken method not implemented")
}
