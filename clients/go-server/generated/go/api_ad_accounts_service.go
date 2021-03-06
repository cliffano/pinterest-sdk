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

// AdAccountsApiService is a service that implements the logic for the AdAccountsApiServicer
// This service should implement the business logic for every endpoint for the AdAccountsApi API.
// Include any external packages or services that will be required by this service.
type AdAccountsApiService struct {
}

// NewAdAccountsApiService creates a default api service
func NewAdAccountsApiService() AdAccountsApiServicer {
	return &AdAccountsApiService{}
}

// AdAccountAnalytics - Get ad account analytics
func (s *AdAccountsApiService) AdAccountAnalytics(ctx context.Context, adAccountId string, startDate string, endDate string, columns []string, granularity Granularity, clickWindowDays int32, engagementWindowDays int32, viewWindowDays int32, conversionReportTime string) (ImplResponse, error) {
	// TODO - update AdAccountAnalytics with the required logic for this service method.
	// Add api_ad_accounts_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(200, []map[string]map[string]interface{}{}) or use other options such as http.Ok ...
	//return Response(200, []map[string]map[string]interface{}{}), nil

	//TODO: Uncomment the next line to return response Response(400, Error{}) or use other options such as http.Ok ...
	//return Response(400, Error{}), nil

	//TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	//return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("AdAccountAnalytics method not implemented")
}

// AdAccountsList - List ad accounts
func (s *AdAccountsApiService) AdAccountsList(ctx context.Context, bookmark string, pageSize int32, includeSharedAccounts bool) (ImplResponse, error) {
	// TODO - update AdAccountsList with the required logic for this service method.
	// Add api_ad_accounts_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(200, Paginated{}) or use other options such as http.Ok ...
	//return Response(200, Paginated{}), nil

	//TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	//return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("AdAccountsList method not implemented")
}

// AdGroupsAnalytics - Get ad group analytics
func (s *AdAccountsApiService) AdGroupsAnalytics(ctx context.Context, adAccountId string, startDate string, endDate string, adGroupIds []string, columns []string, granularity Granularity, clickWindowDays int32, engagementWindowDays int32, viewWindowDays int32, conversionReportTime string) (ImplResponse, error) {
	// TODO - update AdGroupsAnalytics with the required logic for this service method.
	// Add api_ad_accounts_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(200, []map[string]map[string]interface{}{}) or use other options such as http.Ok ...
	//return Response(200, []map[string]map[string]interface{}{}), nil

	//TODO: Uncomment the next line to return response Response(400, Error{}) or use other options such as http.Ok ...
	//return Response(400, Error{}), nil

	//TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	//return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("AdGroupsAnalytics method not implemented")
}

// AdGroupsList - List ad groups
func (s *AdAccountsApiService) AdGroupsList(ctx context.Context, adAccountId string, campaignIds []string, adGroupIds []string, entityStatuses []string, pageSize int32, order string, bookmark string, translateInterestsToNames bool) (ImplResponse, error) {
	// TODO - update AdGroupsList with the required logic for this service method.
	// Add api_ad_accounts_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(200, Paginated{}) or use other options such as http.Ok ...
	//return Response(200, Paginated{}), nil

	//TODO: Uncomment the next line to return response Response(400, Error{}) or use other options such as http.Ok ...
	//return Response(400, Error{}), nil

	//TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	//return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("AdGroupsList method not implemented")
}

// AdsAnalytics - Get ad analytics
func (s *AdAccountsApiService) AdsAnalytics(ctx context.Context, adAccountId string, startDate string, endDate string, adIds []string, columns []string, granularity Granularity, clickWindowDays int32, engagementWindowDays int32, viewWindowDays int32, conversionReportTime string) (ImplResponse, error) {
	// TODO - update AdsAnalytics with the required logic for this service method.
	// Add api_ad_accounts_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(200, []map[string]map[string]interface{}{}) or use other options such as http.Ok ...
	//return Response(200, []map[string]map[string]interface{}{}), nil

	//TODO: Uncomment the next line to return response Response(400, Error{}) or use other options such as http.Ok ...
	//return Response(400, Error{}), nil

	//TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	//return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("AdsAnalytics method not implemented")
}

// AdsList - List ads
func (s *AdAccountsApiService) AdsList(ctx context.Context, adAccountId string, campaignIds []string, adGroupIds []string, adIds []string, entityStatuses []string, pageSize int32, order string, bookmark string) (ImplResponse, error) {
	// TODO - update AdsList with the required logic for this service method.
	// Add api_ad_accounts_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(200, Paginated{}) or use other options such as http.Ok ...
	//return Response(200, Paginated{}), nil

	//TODO: Uncomment the next line to return response Response(400, Error{}) or use other options such as http.Ok ...
	//return Response(400, Error{}), nil

	//TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	//return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("AdsList method not implemented")
}

// AnalyticsCreateReport - Create async request for an account analytics report
func (s *AdAccountsApiService) AnalyticsCreateReport(ctx context.Context, adAccountId string, adsAnalyticsCreateAsyncRequest AdsAnalyticsCreateAsyncRequest) (ImplResponse, error) {
	// TODO - update AnalyticsCreateReport with the required logic for this service method.
	// Add api_ad_accounts_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(200, AdsAnalyticsCreateAsyncResponse{}) or use other options such as http.Ok ...
	//return Response(200, AdsAnalyticsCreateAsyncResponse{}), nil

	//TODO: Uncomment the next line to return response Response(400, Error{}) or use other options such as http.Ok ...
	//return Response(400, Error{}), nil

	//TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	//return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("AnalyticsCreateReport method not implemented")
}

// AnalyticsGetReport - Get the account analytics report created by the async call
func (s *AdAccountsApiService) AnalyticsGetReport(ctx context.Context, adAccountId string, token string) (ImplResponse, error) {
	// TODO - update AnalyticsGetReport with the required logic for this service method.
	// Add api_ad_accounts_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(200, AdsAnalyticsGetAsyncResponse{}) or use other options such as http.Ok ...
	//return Response(200, AdsAnalyticsGetAsyncResponse{}), nil

	//TODO: Uncomment the next line to return response Response(400, Error{}) or use other options such as http.Ok ...
	//return Response(400, Error{}), nil

	//TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	//return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("AnalyticsGetReport method not implemented")
}

// CampaignsAnalytics - Get campaign analytics
func (s *AdAccountsApiService) CampaignsAnalytics(ctx context.Context, adAccountId string, startDate string, endDate string, campaignIds []string, columns []string, granularity Granularity, clickWindowDays int32, engagementWindowDays int32, viewWindowDays int32, conversionReportTime string) (ImplResponse, error) {
	// TODO - update CampaignsAnalytics with the required logic for this service method.
	// Add api_ad_accounts_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(200, []map[string]map[string]interface{}{}) or use other options such as http.Ok ...
	//return Response(200, []map[string]map[string]interface{}{}), nil

	//TODO: Uncomment the next line to return response Response(400, Error{}) or use other options such as http.Ok ...
	//return Response(400, Error{}), nil

	//TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	//return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("CampaignsAnalytics method not implemented")
}

// CampaignsList - List campaigns
func (s *AdAccountsApiService) CampaignsList(ctx context.Context, adAccountId string, campaignIds []string, entityStatuses []string, pageSize int32, order string, bookmark string) (ImplResponse, error) {
	// TODO - update CampaignsList with the required logic for this service method.
	// Add api_ad_accounts_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(200, Paginated{}) or use other options such as http.Ok ...
	//return Response(200, Paginated{}), nil

	//TODO: Uncomment the next line to return response Response(400, Error{}) or use other options such as http.Ok ...
	//return Response(400, Error{}), nil

	//TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	//return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("CampaignsList method not implemented")
}

// ProductGroupsAnalytics - Get product group analytics
func (s *AdAccountsApiService) ProductGroupsAnalytics(ctx context.Context, adAccountId string, startDate string, endDate string, productGroupIds []string, columns []string, granularity Granularity, clickWindowDays int32, engagementWindowDays int32, viewWindowDays int32, conversionReportTime string) (ImplResponse, error) {
	// TODO - update ProductGroupsAnalytics with the required logic for this service method.
	// Add api_ad_accounts_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	//TODO: Uncomment the next line to return response Response(200, []map[string]map[string]interface{}{}) or use other options such as http.Ok ...
	//return Response(200, []map[string]map[string]interface{}{}), nil

	//TODO: Uncomment the next line to return response Response(400, Error{}) or use other options such as http.Ok ...
	//return Response(400, Error{}), nil

	//TODO: Uncomment the next line to return response Response(0, Error{}) or use other options such as http.Ok ...
	//return Response(0, Error{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("ProductGroupsAnalytics method not implemented")
}
