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
	"context"
	"net/http"
	"errors"
)

// UserAccountApiService is a service that implements the logic for the UserAccountApiServicer
// This service should implement the business logic for every endpoint for the UserAccountApi API.
// Include any external packages or services that will be required by this service.
type UserAccountApiService struct {
}

// NewUserAccountApiService creates a default api service
func NewUserAccountApiService() UserAccountApiServicer {
	return &UserAccountApiService{}
}

// UserAccountAnalytics - Get user account analytics
func (s *UserAccountApiService) UserAccountAnalytics(ctx context.Context, startDate string, endDate string, fromClaimedContent string, pinFormat string, appTypes string, metricTypes []string, splitField string, adAccountId string) (ImplResponse, error) {
	// TODO - update UserAccountAnalytics with the required logic for this service method.
	// Add api_user_account_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(200, map[string]AnalyticsMetricsResponse{}) or use other options such as http.Ok ...
	//return Response(200, map[string]AnalyticsMetricsResponse{}), nil

	//TODO: Uncomment the next line to return response Response(403, Error{}) or use other options such as http.Ok ...
	//return Response(403, Error{}), nil

	//TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	//return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("UserAccountAnalytics method not implemented")
}

// UserAccountGet - Get user account
func (s *UserAccountApiService) UserAccountGet(ctx context.Context, adAccountId string) (ImplResponse, error) {
	// TODO - update UserAccountGet with the required logic for this service method.
	// Add api_user_account_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(200, Account{}) or use other options such as http.Ok ...
	//return Response(200, Account{}), nil

	//TODO: Uncomment the next line to return response Response(403, Error{}) or use other options such as http.Ok ...
	//return Response(403, Error{}), nil

	//TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	//return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("UserAccountGet method not implemented")
}
