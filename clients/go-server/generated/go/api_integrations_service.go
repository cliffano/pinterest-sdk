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
	"context"
	"net/http"
	"errors"
)

// IntegrationsAPIService is a service that implements the logic for the IntegrationsAPIServicer
// This service should implement the business logic for every endpoint for the IntegrationsAPI API.
// Include any external packages or services that will be required by this service.
type IntegrationsAPIService struct {
}

// NewIntegrationsAPIService creates a default api service
func NewIntegrationsAPIService() IntegrationsAPIServicer {
	return &IntegrationsAPIService{}
}

// IntegrationsCommerceDel - Delete commerce integration
func (s *IntegrationsAPIService) IntegrationsCommerceDel(ctx context.Context, externalBusinessId string) (ImplResponse, error) {
	// TODO - update IntegrationsCommerceDel with the required logic for this service method.
	// Add api_integrations_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	// TODO: Uncomment the next line to return response Response(204, {}) or use other options such as http.Ok ...
	// return Response(204, nil),nil

	// TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	// return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("IntegrationsCommerceDel method not implemented")
}

// IntegrationsCommerceGet - Get commerce integration
func (s *IntegrationsAPIService) IntegrationsCommerceGet(ctx context.Context, externalBusinessId string) (ImplResponse, error) {
	// TODO - update IntegrationsCommerceGet with the required logic for this service method.
	// Add api_integrations_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	// TODO: Uncomment the next line to return response Response(200, IntegrationMetadata{}) or use other options such as http.Ok ...
	// return Response(200, IntegrationMetadata{}), nil

	// TODO: Uncomment the next line to return response Response(404, Error{}) or use other options such as http.Ok ...
	// return Response(404, Error{}), nil

	// TODO: Uncomment the next line to return response Response(409, Error{}) or use other options such as http.Ok ...
	// return Response(409, Error{}), nil

	// TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	// return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("IntegrationsCommerceGet method not implemented")
}

// IntegrationsCommercePatch - Update commerce integration
func (s *IntegrationsAPIService) IntegrationsCommercePatch(ctx context.Context, externalBusinessId string, integrationRequestPatch IntegrationRequestPatch) (ImplResponse, error) {
	// TODO - update IntegrationsCommercePatch with the required logic for this service method.
	// Add api_integrations_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	// TODO: Uncomment the next line to return response Response(200, IntegrationMetadata{}) or use other options such as http.Ok ...
	// return Response(200, IntegrationMetadata{}), nil

	// TODO: Uncomment the next line to return response Response(404, Error{}) or use other options such as http.Ok ...
	// return Response(404, Error{}), nil

	// TODO: Uncomment the next line to return response Response(409, Error{}) or use other options such as http.Ok ...
	// return Response(409, Error{}), nil

	// TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	// return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("IntegrationsCommercePatch method not implemented")
}

// IntegrationsCommercePost - Create commerce integration
func (s *IntegrationsAPIService) IntegrationsCommercePost(ctx context.Context, integrationRequest IntegrationRequest) (ImplResponse, error) {
	// TODO - update IntegrationsCommercePost with the required logic for this service method.
	// Add api_integrations_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	// TODO: Uncomment the next line to return response Response(200, IntegrationMetadata{}) or use other options such as http.Ok ...
	// return Response(200, IntegrationMetadata{}), nil

	// TODO: Uncomment the next line to return response Response(404, Error{}) or use other options such as http.Ok ...
	// return Response(404, Error{}), nil

	// TODO: Uncomment the next line to return response Response(409, Error{}) or use other options such as http.Ok ...
	// return Response(409, Error{}), nil

	// TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	// return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("IntegrationsCommercePost method not implemented")
}

// IntegrationsGetById - Get integration metadata
func (s *IntegrationsAPIService) IntegrationsGetById(ctx context.Context, id string) (ImplResponse, error) {
	// TODO - update IntegrationsGetById with the required logic for this service method.
	// Add api_integrations_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	// TODO: Uncomment the next line to return response Response(200, IntegrationRecord{}) or use other options such as http.Ok ...
	// return Response(200, IntegrationRecord{}), nil

	// TODO: Uncomment the next line to return response Response(404, Error{}) or use other options such as http.Ok ...
	// return Response(404, Error{}), nil

	// TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	// return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("IntegrationsGetById method not implemented")
}

// IntegrationsGetList - Get integration metadata list
func (s *IntegrationsAPIService) IntegrationsGetList(ctx context.Context, bookmark string, pageSize int32) (ImplResponse, error) {
	// TODO - update IntegrationsGetList with the required logic for this service method.
	// Add api_integrations_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	// TODO: Uncomment the next line to return response Response(200, IntegrationsGetList200Response{}) or use other options such as http.Ok ...
	// return Response(200, IntegrationsGetList200Response{}), nil

	// TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	// return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("IntegrationsGetList method not implemented")
}

// IntegrationsLogsPost - Receives batched logs from integration applications.
func (s *IntegrationsAPIService) IntegrationsLogsPost(ctx context.Context, integrationLogsRequest IntegrationLogsRequest) (ImplResponse, error) {
	// TODO - update IntegrationsLogsPost with the required logic for this service method.
	// Add api_integrations_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	// TODO: Uncomment the next line to return response Response(200, IntegrationLogsSuccessResponse{}) or use other options such as http.Ok ...
	// return Response(200, IntegrationLogsSuccessResponse{}), nil

	// TODO: Uncomment the next line to return response Response(400, DetailedError{}) or use other options such as http.Ok ...
	// return Response(400, DetailedError{}), nil

	// TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	// return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("IntegrationsLogsPost method not implemented")
}