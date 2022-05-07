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
)



// AdAccountsApiRouter defines the required methods for binding the api requests to a responses for the AdAccountsApi
// The AdAccountsApiRouter implementation should parse necessary information from the http request,
// pass the data to a AdAccountsApiServicer to perform the required actions, then write the service results to the http response.
type AdAccountsApiRouter interface { 
	AdAccountAnalytics(http.ResponseWriter, *http.Request)
	AdAccountsList(http.ResponseWriter, *http.Request)
	AdGroupsAnalytics(http.ResponseWriter, *http.Request)
	AdGroupsList(http.ResponseWriter, *http.Request)
	AdsAnalytics(http.ResponseWriter, *http.Request)
	AdsList(http.ResponseWriter, *http.Request)
	AnalyticsCreateReport(http.ResponseWriter, *http.Request)
	AnalyticsGetReport(http.ResponseWriter, *http.Request)
	CampaignsAnalytics(http.ResponseWriter, *http.Request)
	CampaignsList(http.ResponseWriter, *http.Request)
	ProductGroupsAnalytics(http.ResponseWriter, *http.Request)
}
// BoardsApiRouter defines the required methods for binding the api requests to a responses for the BoardsApi
// The BoardsApiRouter implementation should parse necessary information from the http request,
// pass the data to a BoardsApiServicer to perform the required actions, then write the service results to the http response.
type BoardsApiRouter interface { 
	BoardSectionsCreate(http.ResponseWriter, *http.Request)
	BoardSectionsDelete(http.ResponseWriter, *http.Request)
	BoardSectionsList(http.ResponseWriter, *http.Request)
	BoardSectionsListPins(http.ResponseWriter, *http.Request)
	BoardSectionsUpdate(http.ResponseWriter, *http.Request)
	BoardsCreate(http.ResponseWriter, *http.Request)
	BoardsDelete(http.ResponseWriter, *http.Request)
	BoardsGet(http.ResponseWriter, *http.Request)
	BoardsList(http.ResponseWriter, *http.Request)
	BoardsListPins(http.ResponseWriter, *http.Request)
	BoardsUpdate(http.ResponseWriter, *http.Request)
}
// CatalogsApiRouter defines the required methods for binding the api requests to a responses for the CatalogsApi
// The CatalogsApiRouter implementation should parse necessary information from the http request,
// pass the data to a CatalogsApiServicer to perform the required actions, then write the service results to the http response.
type CatalogsApiRouter interface { 
	CatalogsProductGroupsCreate(http.ResponseWriter, *http.Request)
	CatalogsProductGroupsDelete(http.ResponseWriter, *http.Request)
	CatalogsProductGroupsList(http.ResponseWriter, *http.Request)
	CatalogsProductGroupsUpdate(http.ResponseWriter, *http.Request)
	FeedProcessingResultsList(http.ResponseWriter, *http.Request)
	FeedsCreate(http.ResponseWriter, *http.Request)
	FeedsDelete(http.ResponseWriter, *http.Request)
	FeedsGet(http.ResponseWriter, *http.Request)
	FeedsList(http.ResponseWriter, *http.Request)
	FeedsUpdate(http.ResponseWriter, *http.Request)
	ItemsBatchGet(http.ResponseWriter, *http.Request)
	ItemsBatchPost(http.ResponseWriter, *http.Request)
	ItemsGet(http.ResponseWriter, *http.Request)
}
// MediaApiRouter defines the required methods for binding the api requests to a responses for the MediaApi
// The MediaApiRouter implementation should parse necessary information from the http request,
// pass the data to a MediaApiServicer to perform the required actions, then write the service results to the http response.
type MediaApiRouter interface { 
	MediaCreate(http.ResponseWriter, *http.Request)
	MediaGet(http.ResponseWriter, *http.Request)
	MediaList(http.ResponseWriter, *http.Request)
}
// OauthApiRouter defines the required methods for binding the api requests to a responses for the OauthApi
// The OauthApiRouter implementation should parse necessary information from the http request,
// pass the data to a OauthApiServicer to perform the required actions, then write the service results to the http response.
type OauthApiRouter interface { 
	OauthToken(http.ResponseWriter, *http.Request)
}
// PinsApiRouter defines the required methods for binding the api requests to a responses for the PinsApi
// The PinsApiRouter implementation should parse necessary information from the http request,
// pass the data to a PinsApiServicer to perform the required actions, then write the service results to the http response.
type PinsApiRouter interface { 
	PinsAnalytics(http.ResponseWriter, *http.Request)
	PinsCreate(http.ResponseWriter, *http.Request)
	PinsDelete(http.ResponseWriter, *http.Request)
	PinsGet(http.ResponseWriter, *http.Request)
}
// UserAccountApiRouter defines the required methods for binding the api requests to a responses for the UserAccountApi
// The UserAccountApiRouter implementation should parse necessary information from the http request,
// pass the data to a UserAccountApiServicer to perform the required actions, then write the service results to the http response.
type UserAccountApiRouter interface { 
	UserAccountAnalytics(http.ResponseWriter, *http.Request)
	UserAccountGet(http.ResponseWriter, *http.Request)
}


// AdAccountsApiServicer defines the api actions for the AdAccountsApi service
// This interface intended to stay up to date with the openapi yaml used to generate it,
// while the service implementation can ignored with the .openapi-generator-ignore file
// and updated with the logic required for the API.
type AdAccountsApiServicer interface { 
	AdAccountAnalytics(context.Context, string, string, string, []string, Granularity, int32, int32, int32, string) (ImplResponse, error)
	AdAccountsList(context.Context, string, int32, bool) (ImplResponse, error)
	AdGroupsAnalytics(context.Context, string, string, string, []string, []string, Granularity, int32, int32, int32, string) (ImplResponse, error)
	AdGroupsList(context.Context, string, []string, []string, []string, int32, string, string, bool) (ImplResponse, error)
	AdsAnalytics(context.Context, string, string, string, []string, []string, Granularity, int32, int32, int32, string) (ImplResponse, error)
	AdsList(context.Context, string, []string, []string, []string, []string, int32, string, string) (ImplResponse, error)
	AnalyticsCreateReport(context.Context, string, AdsAnalyticsCreateAsyncRequest) (ImplResponse, error)
	AnalyticsGetReport(context.Context, string, string) (ImplResponse, error)
	CampaignsAnalytics(context.Context, string, string, string, []string, []string, Granularity, int32, int32, int32, string) (ImplResponse, error)
	CampaignsList(context.Context, string, []string, []string, int32, string, string) (ImplResponse, error)
	ProductGroupsAnalytics(context.Context, string, string, string, []string, []string, Granularity, int32, int32, int32, string) (ImplResponse, error)
}


// BoardsApiServicer defines the api actions for the BoardsApi service
// This interface intended to stay up to date with the openapi yaml used to generate it,
// while the service implementation can ignored with the .openapi-generator-ignore file
// and updated with the logic required for the API.
type BoardsApiServicer interface { 
	BoardSectionsCreate(context.Context, string, BoardSection) (ImplResponse, error)
	BoardSectionsDelete(context.Context, string, string) (ImplResponse, error)
	BoardSectionsList(context.Context, string, string, int32) (ImplResponse, error)
	BoardSectionsListPins(context.Context, string, string, string, int32) (ImplResponse, error)
	BoardSectionsUpdate(context.Context, string, string, BoardSection) (ImplResponse, error)
	BoardsCreate(context.Context, Board) (ImplResponse, error)
	BoardsDelete(context.Context, string) (ImplResponse, error)
	BoardsGet(context.Context, string) (ImplResponse, error)
	BoardsList(context.Context, string, int32, string) (ImplResponse, error)
	BoardsListPins(context.Context, string, string, int32) (ImplResponse, error)
	BoardsUpdate(context.Context, string, BoardUpdate) (ImplResponse, error)
}


// CatalogsApiServicer defines the api actions for the CatalogsApi service
// This interface intended to stay up to date with the openapi yaml used to generate it,
// while the service implementation can ignored with the .openapi-generator-ignore file
// and updated with the logic required for the API.
type CatalogsApiServicer interface { 
	CatalogsProductGroupsCreate(context.Context, CatalogsProductGroupCreateRequest) (ImplResponse, error)
	CatalogsProductGroupsDelete(context.Context, string) (ImplResponse, error)
	CatalogsProductGroupsList(context.Context, string, string, int32) (ImplResponse, error)
	CatalogsProductGroupsUpdate(context.Context, string, CatalogsProductGroupUpdateRequest) (ImplResponse, error)
	FeedProcessingResultsList(context.Context, string, string, int32) (ImplResponse, error)
	FeedsCreate(context.Context, CatalogsFeedsCreateRequest) (ImplResponse, error)
	FeedsDelete(context.Context, string) (ImplResponse, error)
	FeedsGet(context.Context, string) (ImplResponse, error)
	FeedsList(context.Context, string, int32) (ImplResponse, error)
	FeedsUpdate(context.Context, string, CatalogsFeedsUpdateRequest) (ImplResponse, error)
	ItemsBatchGet(context.Context, string) (ImplResponse, error)
	ItemsBatchPost(context.Context, CatalogsItemsBatchRequest) (ImplResponse, error)
	ItemsGet(context.Context, string, []string, string) (ImplResponse, error)
}


// MediaApiServicer defines the api actions for the MediaApi service
// This interface intended to stay up to date with the openapi yaml used to generate it,
// while the service implementation can ignored with the .openapi-generator-ignore file
// and updated with the logic required for the API.
type MediaApiServicer interface { 
	MediaCreate(context.Context, MediaUploadRequest) (ImplResponse, error)
	MediaGet(context.Context, string) (ImplResponse, error)
	MediaList(context.Context, string, int32) (ImplResponse, error)
}


// OauthApiServicer defines the api actions for the OauthApi service
// This interface intended to stay up to date with the openapi yaml used to generate it,
// while the service implementation can ignored with the .openapi-generator-ignore file
// and updated with the logic required for the API.
type OauthApiServicer interface { 
	OauthToken(context.Context, string) (ImplResponse, error)
}


// PinsApiServicer defines the api actions for the PinsApi service
// This interface intended to stay up to date with the openapi yaml used to generate it,
// while the service implementation can ignored with the .openapi-generator-ignore file
// and updated with the logic required for the API.
type PinsApiServicer interface { 
	PinsAnalytics(context.Context, string, string, string, []string, string, string, string) (ImplResponse, error)
	PinsCreate(context.Context, Pin) (ImplResponse, error)
	PinsDelete(context.Context, string) (ImplResponse, error)
	PinsGet(context.Context, string, string) (ImplResponse, error)
}


// UserAccountApiServicer defines the api actions for the UserAccountApi service
// This interface intended to stay up to date with the openapi yaml used to generate it,
// while the service implementation can ignored with the .openapi-generator-ignore file
// and updated with the logic required for the API.
type UserAccountApiServicer interface { 
	UserAccountAnalytics(context.Context, string, string, string, string, string, []string, string, string) (ImplResponse, error)
	UserAccountGet(context.Context, string) (ImplResponse, error)
}
