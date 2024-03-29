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

// LeadFormsAPIService is a service that implements the logic for the LeadFormsAPIServicer
// This service should implement the business logic for every endpoint for the LeadFormsAPI API.
// Include any external packages or services that will be required by this service.
type LeadFormsAPIService struct {
}

// NewLeadFormsAPIService creates a default api service
func NewLeadFormsAPIService() LeadFormsAPIServicer {
	return &LeadFormsAPIService{}
}

// LeadFormGet - Get lead form by id
func (s *LeadFormsAPIService) LeadFormGet(ctx context.Context, adAccountId string, leadFormId string) (ImplResponse, error) {
	// TODO - update LeadFormGet with the required logic for this service method.
	// Add api_lead_forms_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	// TODO: Uncomment the next line to return response Response(200, LeadFormResponse{}) or use other options such as http.Ok ...
	// return Response(200, LeadFormResponse{}), nil

	// TODO: Uncomment the next line to return response Response(400, Error{}) or use other options such as http.Ok ...
	// return Response(400, Error{}), nil

	// TODO: Uncomment the next line to return response Response(404, Error{}) or use other options such as http.Ok ...
	// return Response(404, Error{}), nil

	// TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	// return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("LeadFormGet method not implemented")
}

// LeadFormTestCreate - Create lead form test data
func (s *LeadFormsAPIService) LeadFormTestCreate(ctx context.Context, adAccountId string, leadFormId string, leadFormTestRequest LeadFormTestRequest) (ImplResponse, error) {
	// TODO - update LeadFormTestCreate with the required logic for this service method.
	// Add api_lead_forms_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	// TODO: Uncomment the next line to return response Response(200, LeadFormTestResponse{}) or use other options such as http.Ok ...
	// return Response(200, LeadFormTestResponse{}), nil

	// TODO: Uncomment the next line to return response Response(400, Error{}) or use other options such as http.Ok ...
	// return Response(400, Error{}), nil

	// TODO: Uncomment the next line to return response Response(404, Error{}) or use other options such as http.Ok ...
	// return Response(404, Error{}), nil

	// TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	// return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("LeadFormTestCreate method not implemented")
}

// LeadFormsList - Get lead forms
func (s *LeadFormsAPIService) LeadFormsList(ctx context.Context, adAccountId string, pageSize int32, order string, bookmark string) (ImplResponse, error) {
	// TODO - update LeadFormsList with the required logic for this service method.
	// Add api_lead_forms_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	// TODO: Uncomment the next line to return response Response(200, LeadFormsList200Response{}) or use other options such as http.Ok ...
	// return Response(200, LeadFormsList200Response{}), nil

	// TODO: Uncomment the next line to return response Response(400, Error{}) or use other options such as http.Ok ...
	// return Response(400, Error{}), nil

	// TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	// return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("LeadFormsList method not implemented")
}
