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
	"net/http"

	"github.com/gin-gonic/gin"
)

// Route is the information for every URI.
type Route struct {
	// Name is the name of this Route.
	Name		string
	// Method is the string for the HTTP method. ex) GET, POST etc..
	Method		string
	// Pattern is the pattern of the URI.
	Pattern	 	string
	// HandlerFunc is the handler function of this route.
	HandlerFunc	gin.HandlerFunc
}

// NewRouter returns a new router.
func NewRouter(handleFunctions ApiHandleFunctions) *gin.Engine {
	return NewRouterWithGinEngine(gin.Default(), handleFunctions)
}

// NewRouter add routes to existing gin engine.
func NewRouterWithGinEngine(router *gin.Engine, handleFunctions ApiHandleFunctions) *gin.Engine {
	for _, route := range getRoutes(handleFunctions) {
		if route.HandlerFunc == nil {
			route.HandlerFunc = DefaultHandleFunc
		}
		switch route.Method {
		case http.MethodGet:
			router.GET(route.Pattern, route.HandlerFunc)
		case http.MethodPost:
			router.POST(route.Pattern, route.HandlerFunc)
		case http.MethodPut:
			router.PUT(route.Pattern, route.HandlerFunc)
		case http.MethodPatch:
			router.PATCH(route.Pattern, route.HandlerFunc)
		case http.MethodDelete:
			router.DELETE(route.Pattern, route.HandlerFunc)
		}
	}

	return router
}

// Default handler for not yet implemented routes
func DefaultHandleFunc(c *gin.Context) {
	c.String(http.StatusNotImplemented, "501 not implemented")
}

type ApiHandleFunctions struct {

	// Routes for the AdAccountsAPI part of the API
	AdAccountsAPI AdAccountsAPI
	// Routes for the AdGroupsAPI part of the API
	AdGroupsAPI AdGroupsAPI
	// Routes for the AdsAPI part of the API
	AdsAPI AdsAPI
	// Routes for the AudienceInsightsAPI part of the API
	AudienceInsightsAPI AudienceInsightsAPI
	// Routes for the AudiencesAPI part of the API
	AudiencesAPI AudiencesAPI
	// Routes for the BillingAPI part of the API
	BillingAPI BillingAPI
	// Routes for the BoardsAPI part of the API
	BoardsAPI BoardsAPI
	// Routes for the BulkAPI part of the API
	BulkAPI BulkAPI
	// Routes for the CampaignsAPI part of the API
	CampaignsAPI CampaignsAPI
	// Routes for the CatalogsAPI part of the API
	CatalogsAPI CatalogsAPI
	// Routes for the ConversionEventsAPI part of the API
	ConversionEventsAPI ConversionEventsAPI
	// Routes for the ConversionTagsAPI part of the API
	ConversionTagsAPI ConversionTagsAPI
	// Routes for the CustomerListsAPI part of the API
	CustomerListsAPI CustomerListsAPI
	// Routes for the IntegrationsAPI part of the API
	IntegrationsAPI IntegrationsAPI
	// Routes for the KeywordsAPI part of the API
	KeywordsAPI KeywordsAPI
	// Routes for the LeadAdsAPI part of the API
	LeadAdsAPI LeadAdsAPI
	// Routes for the LeadFormsAPI part of the API
	LeadFormsAPI LeadFormsAPI
	// Routes for the MediaAPI part of the API
	MediaAPI MediaAPI
	// Routes for the OauthAPI part of the API
	OauthAPI OauthAPI
	// Routes for the OrderLinesAPI part of the API
	OrderLinesAPI OrderLinesAPI
	// Routes for the PinsAPI part of the API
	PinsAPI PinsAPI
	// Routes for the ProductGroupPromotionsAPI part of the API
	ProductGroupPromotionsAPI ProductGroupPromotionsAPI
	// Routes for the ProductGroupsAPI part of the API
	ProductGroupsAPI ProductGroupsAPI
	// Routes for the ResourcesAPI part of the API
	ResourcesAPI ResourcesAPI
	// Routes for the SearchAPI part of the API
	SearchAPI SearchAPI
	// Routes for the TermsAPI part of the API
	TermsAPI TermsAPI
	// Routes for the TermsOfServiceAPI part of the API
	TermsOfServiceAPI TermsOfServiceAPI
	// Routes for the UserAccountAPI part of the API
	UserAccountAPI UserAccountAPI
}

func getRoutes(handleFunctions ApiHandleFunctions) []Route {
	return []Route{ 
		{
			"AdAccountAnalytics",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/analytics",
			handleFunctions.AdAccountsAPI.AdAccountAnalytics,
		},
		{
			"AdAccountTargetingAnalyticsGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/targeting_analytics",
			handleFunctions.AdAccountsAPI.AdAccountTargetingAnalyticsGet,
		},
		{
			"AdAccountsCreate",
			http.MethodPost,
			"/v5/ad_accounts",
			handleFunctions.AdAccountsAPI.AdAccountsCreate,
		},
		{
			"AdAccountsGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id",
			handleFunctions.AdAccountsAPI.AdAccountsGet,
		},
		{
			"AdAccountsList",
			http.MethodGet,
			"/v5/ad_accounts",
			handleFunctions.AdAccountsAPI.AdAccountsList,
		},
		{
			"AnalyticsCreateMmmReport",
			http.MethodPost,
			"/v5/ad_accounts/:ad_account_id/mmm_reports",
			handleFunctions.AdAccountsAPI.AnalyticsCreateMmmReport,
		},
		{
			"AnalyticsCreateReport",
			http.MethodPost,
			"/v5/ad_accounts/:ad_account_id/reports",
			handleFunctions.AdAccountsAPI.AnalyticsCreateReport,
		},
		{
			"AnalyticsCreateTemplateReport",
			http.MethodPost,
			"/v5/ad_accounts/:ad_account_id/templates/:template_id/reports",
			handleFunctions.AdAccountsAPI.AnalyticsCreateTemplateReport,
		},
		{
			"AnalyticsGetMmmReport",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/mmm_reports",
			handleFunctions.AdAccountsAPI.AnalyticsGetMmmReport,
		},
		{
			"AnalyticsGetReport",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/reports",
			handleFunctions.AdAccountsAPI.AnalyticsGetReport,
		},
		{
			"SandboxDelete",
			http.MethodDelete,
			"/v5/ad_accounts/:ad_account_id/sandbox",
			handleFunctions.AdAccountsAPI.SandboxDelete,
		},
		{
			"TemplatesList",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/templates",
			handleFunctions.AdAccountsAPI.TemplatesList,
		},
		{
			"AdGroupsAnalytics",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/ad_groups/analytics",
			handleFunctions.AdGroupsAPI.AdGroupsAnalytics,
		},
		{
			"AdGroupsAudienceSizing",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/ad_groups/audience_sizing",
			handleFunctions.AdGroupsAPI.AdGroupsAudienceSizing,
		},
		{
			"AdGroupsBidFloorGet",
			http.MethodPost,
			"/v5/ad_accounts/:ad_account_id/bid_floor",
			handleFunctions.AdGroupsAPI.AdGroupsBidFloorGet,
		},
		{
			"AdGroupsCreate",
			http.MethodPost,
			"/v5/ad_accounts/:ad_account_id/ad_groups",
			handleFunctions.AdGroupsAPI.AdGroupsCreate,
		},
		{
			"AdGroupsGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/ad_groups/:ad_group_id",
			handleFunctions.AdGroupsAPI.AdGroupsGet,
		},
		{
			"AdGroupsList",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/ad_groups",
			handleFunctions.AdGroupsAPI.AdGroupsList,
		},
		{
			"AdGroupsTargetingAnalyticsGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/ad_groups/targeting_analytics",
			handleFunctions.AdGroupsAPI.AdGroupsTargetingAnalyticsGet,
		},
		{
			"AdGroupsUpdate",
			http.MethodPatch,
			"/v5/ad_accounts/:ad_account_id/ad_groups",
			handleFunctions.AdGroupsAPI.AdGroupsUpdate,
		},
		{
			"AdPreviewsCreate",
			http.MethodPost,
			"/v5/ad_accounts/:ad_account_id/ad_previews",
			handleFunctions.AdsAPI.AdPreviewsCreate,
		},
		{
			"AdTargetingAnalyticsGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/ads/targeting_analytics",
			handleFunctions.AdsAPI.AdTargetingAnalyticsGet,
		},
		{
			"AdsAnalytics",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/ads/analytics",
			handleFunctions.AdsAPI.AdsAnalytics,
		},
		{
			"AdsCreate",
			http.MethodPost,
			"/v5/ad_accounts/:ad_account_id/ads",
			handleFunctions.AdsAPI.AdsCreate,
		},
		{
			"AdsGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/ads/:ad_id",
			handleFunctions.AdsAPI.AdsGet,
		},
		{
			"AdsList",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/ads",
			handleFunctions.AdsAPI.AdsList,
		},
		{
			"AdsUpdate",
			http.MethodPatch,
			"/v5/ad_accounts/:ad_account_id/ads",
			handleFunctions.AdsAPI.AdsUpdate,
		},
		{
			"AudienceInsightsGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/audience_insights",
			handleFunctions.AudienceInsightsAPI.AudienceInsightsGet,
		},
		{
			"AudienceInsightsScopeAndTypeGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/insights/audiences",
			handleFunctions.AudienceInsightsAPI.AudienceInsightsScopeAndTypeGet,
		},
		{
			"AudiencesCreate",
			http.MethodPost,
			"/v5/ad_accounts/:ad_account_id/audiences",
			handleFunctions.AudiencesAPI.AudiencesCreate,
		},
		{
			"AudiencesCreateCustom",
			http.MethodPost,
			"/v5/ad_accounts/:ad_account_id/audiences/custom",
			handleFunctions.AudiencesAPI.AudiencesCreateCustom,
		},
		{
			"AudiencesGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/audiences/:audience_id",
			handleFunctions.AudiencesAPI.AudiencesGet,
		},
		{
			"AudiencesList",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/audiences",
			handleFunctions.AudiencesAPI.AudiencesList,
		},
		{
			"AudiencesUpdate",
			http.MethodPatch,
			"/v5/ad_accounts/:ad_account_id/audiences/:audience_id",
			handleFunctions.AudiencesAPI.AudiencesUpdate,
		},
		{
			"AdsCreditRedeem",
			http.MethodPost,
			"/v5/ad_accounts/:ad_account_id/ads_credit/redeem",
			handleFunctions.BillingAPI.AdsCreditRedeem,
		},
		{
			"AdsCreditsDiscountsGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/ads_credit/discounts",
			handleFunctions.BillingAPI.AdsCreditsDiscountsGet,
		},
		{
			"BillingProfilesGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/billing_profiles",
			handleFunctions.BillingAPI.BillingProfilesGet,
		},
		{
			"SsioAccountsGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/ssio/accounts",
			handleFunctions.BillingAPI.SsioAccountsGet,
		},
		{
			"SsioInsertionOrderCreate",
			http.MethodPost,
			"/v5/ad_accounts/:ad_account_id/ssio/insertion_orders",
			handleFunctions.BillingAPI.SsioInsertionOrderCreate,
		},
		{
			"SsioInsertionOrderEdit",
			http.MethodPatch,
			"/v5/ad_accounts/:ad_account_id/ssio/insertion_orders",
			handleFunctions.BillingAPI.SsioInsertionOrderEdit,
		},
		{
			"SsioInsertionOrdersStatusGetByAdAccount",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/ssio/insertion_orders/status",
			handleFunctions.BillingAPI.SsioInsertionOrdersStatusGetByAdAccount,
		},
		{
			"SsioInsertionOrdersStatusGetByPinOrderId",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/ssio/insertion_orders/:pin_order_id/status",
			handleFunctions.BillingAPI.SsioInsertionOrdersStatusGetByPinOrderId,
		},
		{
			"SsioOrderLinesGetByAdAccount",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/ssio/order_lines",
			handleFunctions.BillingAPI.SsioOrderLinesGetByAdAccount,
		},
		{
			"BoardSectionsCreate",
			http.MethodPost,
			"/v5/boards/:board_id/sections",
			handleFunctions.BoardsAPI.BoardSectionsCreate,
		},
		{
			"BoardSectionsDelete",
			http.MethodDelete,
			"/v5/boards/:board_id/sections/:section_id",
			handleFunctions.BoardsAPI.BoardSectionsDelete,
		},
		{
			"BoardSectionsList",
			http.MethodGet,
			"/v5/boards/:board_id/sections",
			handleFunctions.BoardsAPI.BoardSectionsList,
		},
		{
			"BoardSectionsListPins",
			http.MethodGet,
			"/v5/boards/:board_id/sections/:section_id/pins",
			handleFunctions.BoardsAPI.BoardSectionsListPins,
		},
		{
			"BoardSectionsUpdate",
			http.MethodPatch,
			"/v5/boards/:board_id/sections/:section_id",
			handleFunctions.BoardsAPI.BoardSectionsUpdate,
		},
		{
			"BoardsCreate",
			http.MethodPost,
			"/v5/boards",
			handleFunctions.BoardsAPI.BoardsCreate,
		},
		{
			"BoardsDelete",
			http.MethodDelete,
			"/v5/boards/:board_id",
			handleFunctions.BoardsAPI.BoardsDelete,
		},
		{
			"BoardsGet",
			http.MethodGet,
			"/v5/boards/:board_id",
			handleFunctions.BoardsAPI.BoardsGet,
		},
		{
			"BoardsList",
			http.MethodGet,
			"/v5/boards",
			handleFunctions.BoardsAPI.BoardsList,
		},
		{
			"BoardsListPins",
			http.MethodGet,
			"/v5/boards/:board_id/pins",
			handleFunctions.BoardsAPI.BoardsListPins,
		},
		{
			"BoardsUpdate",
			http.MethodPatch,
			"/v5/boards/:board_id",
			handleFunctions.BoardsAPI.BoardsUpdate,
		},
		{
			"BulkDownloadCreate",
			http.MethodPost,
			"/v5/ad_accounts/:ad_account_id/bulk/download",
			handleFunctions.BulkAPI.BulkDownloadCreate,
		},
		{
			"BulkRequestGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/bulk/:bulk_request_id",
			handleFunctions.BulkAPI.BulkRequestGet,
		},
		{
			"BulkUpsertCreate",
			http.MethodPost,
			"/v5/ad_accounts/:ad_account_id/bulk/upsert",
			handleFunctions.BulkAPI.BulkUpsertCreate,
		},
		{
			"CampaignTargetingAnalyticsGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/campaigns/targeting_analytics",
			handleFunctions.CampaignsAPI.CampaignTargetingAnalyticsGet,
		},
		{
			"CampaignsAnalytics",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/campaigns/analytics",
			handleFunctions.CampaignsAPI.CampaignsAnalytics,
		},
		{
			"CampaignsCreate",
			http.MethodPost,
			"/v5/ad_accounts/:ad_account_id/campaigns",
			handleFunctions.CampaignsAPI.CampaignsCreate,
		},
		{
			"CampaignsGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/campaigns/:campaign_id",
			handleFunctions.CampaignsAPI.CampaignsGet,
		},
		{
			"CampaignsList",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/campaigns",
			handleFunctions.CampaignsAPI.CampaignsList,
		},
		{
			"CampaignsUpdate",
			http.MethodPatch,
			"/v5/ad_accounts/:ad_account_id/campaigns",
			handleFunctions.CampaignsAPI.CampaignsUpdate,
		},
		{
			"CatalogsList",
			http.MethodGet,
			"/v5/catalogs",
			handleFunctions.CatalogsAPI.CatalogsList,
		},
		{
			"CatalogsProductGroupPinsList",
			http.MethodGet,
			"/v5/catalogs/product_groups/:product_group_id/products",
			handleFunctions.CatalogsAPI.CatalogsProductGroupPinsList,
		},
		{
			"CatalogsProductGroupsCreate",
			http.MethodPost,
			"/v5/catalogs/product_groups",
			handleFunctions.CatalogsAPI.CatalogsProductGroupsCreate,
		},
		{
			"CatalogsProductGroupsDelete",
			http.MethodDelete,
			"/v5/catalogs/product_groups/:product_group_id",
			handleFunctions.CatalogsAPI.CatalogsProductGroupsDelete,
		},
		{
			"CatalogsProductGroupsGet",
			http.MethodGet,
			"/v5/catalogs/product_groups/:product_group_id",
			handleFunctions.CatalogsAPI.CatalogsProductGroupsGet,
		},
		{
			"CatalogsProductGroupsList",
			http.MethodGet,
			"/v5/catalogs/product_groups",
			handleFunctions.CatalogsAPI.CatalogsProductGroupsList,
		},
		{
			"CatalogsProductGroupsProductCountsGet",
			http.MethodGet,
			"/v5/catalogs/product_groups/:product_group_id/product_counts",
			handleFunctions.CatalogsAPI.CatalogsProductGroupsProductCountsGet,
		},
		{
			"CatalogsProductGroupsUpdate",
			http.MethodPatch,
			"/v5/catalogs/product_groups/:product_group_id",
			handleFunctions.CatalogsAPI.CatalogsProductGroupsUpdate,
		},
		{
			"FeedProcessingResultsList",
			http.MethodGet,
			"/v5/catalogs/feeds/:feed_id/processing_results",
			handleFunctions.CatalogsAPI.FeedProcessingResultsList,
		},
		{
			"FeedsCreate",
			http.MethodPost,
			"/v5/catalogs/feeds",
			handleFunctions.CatalogsAPI.FeedsCreate,
		},
		{
			"FeedsDelete",
			http.MethodDelete,
			"/v5/catalogs/feeds/:feed_id",
			handleFunctions.CatalogsAPI.FeedsDelete,
		},
		{
			"FeedsGet",
			http.MethodGet,
			"/v5/catalogs/feeds/:feed_id",
			handleFunctions.CatalogsAPI.FeedsGet,
		},
		{
			"FeedsList",
			http.MethodGet,
			"/v5/catalogs/feeds",
			handleFunctions.CatalogsAPI.FeedsList,
		},
		{
			"FeedsUpdate",
			http.MethodPatch,
			"/v5/catalogs/feeds/:feed_id",
			handleFunctions.CatalogsAPI.FeedsUpdate,
		},
		{
			"ItemsBatchGet",
			http.MethodGet,
			"/v5/catalogs/items/batch/:batch_id",
			handleFunctions.CatalogsAPI.ItemsBatchGet,
		},
		{
			"ItemsBatchPost",
			http.MethodPost,
			"/v5/catalogs/items/batch",
			handleFunctions.CatalogsAPI.ItemsBatchPost,
		},
		{
			"ItemsGet",
			http.MethodGet,
			"/v5/catalogs/items",
			handleFunctions.CatalogsAPI.ItemsGet,
		},
		{
			"ItemsIssuesList",
			http.MethodGet,
			"/v5/catalogs/processing_results/:processing_result_id/item_issues",
			handleFunctions.CatalogsAPI.ItemsIssuesList,
		},
		{
			"ProductsByProductGroupFilterList",
			http.MethodPost,
			"/v5/catalogs/products/get_by_product_group_filters",
			handleFunctions.CatalogsAPI.ProductsByProductGroupFilterList,
		},
		{
			"EventsCreate",
			http.MethodPost,
			"/v5/ad_accounts/:ad_account_id/events",
			handleFunctions.ConversionEventsAPI.EventsCreate,
		},
		{
			"ConversionTagsCreate",
			http.MethodPost,
			"/v5/ad_accounts/:ad_account_id/conversion_tags",
			handleFunctions.ConversionTagsAPI.ConversionTagsCreate,
		},
		{
			"ConversionTagsGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/conversion_tags/:conversion_tag_id",
			handleFunctions.ConversionTagsAPI.ConversionTagsGet,
		},
		{
			"ConversionTagsList",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/conversion_tags",
			handleFunctions.ConversionTagsAPI.ConversionTagsList,
		},
		{
			"OcpmEligibleConversionTagsGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/conversion_tags/ocpm_eligible",
			handleFunctions.ConversionTagsAPI.OcpmEligibleConversionTagsGet,
		},
		{
			"PageVisitConversionTagsGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/conversion_tags/page_visit",
			handleFunctions.ConversionTagsAPI.PageVisitConversionTagsGet,
		},
		{
			"CustomerListsCreate",
			http.MethodPost,
			"/v5/ad_accounts/:ad_account_id/customer_lists",
			handleFunctions.CustomerListsAPI.CustomerListsCreate,
		},
		{
			"CustomerListsGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/customer_lists/:customer_list_id",
			handleFunctions.CustomerListsAPI.CustomerListsGet,
		},
		{
			"CustomerListsList",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/customer_lists",
			handleFunctions.CustomerListsAPI.CustomerListsList,
		},
		{
			"CustomerListsUpdate",
			http.MethodPatch,
			"/v5/ad_accounts/:ad_account_id/customer_lists/:customer_list_id",
			handleFunctions.CustomerListsAPI.CustomerListsUpdate,
		},
		{
			"IntegrationsCommerceDel",
			http.MethodDelete,
			"/v5/integrations/commerce/:external_business_id",
			handleFunctions.IntegrationsAPI.IntegrationsCommerceDel,
		},
		{
			"IntegrationsCommerceGet",
			http.MethodGet,
			"/v5/integrations/commerce/:external_business_id",
			handleFunctions.IntegrationsAPI.IntegrationsCommerceGet,
		},
		{
			"IntegrationsCommercePatch",
			http.MethodPatch,
			"/v5/integrations/commerce/:external_business_id",
			handleFunctions.IntegrationsAPI.IntegrationsCommercePatch,
		},
		{
			"IntegrationsCommercePost",
			http.MethodPost,
			"/v5/integrations/commerce",
			handleFunctions.IntegrationsAPI.IntegrationsCommercePost,
		},
		{
			"IntegrationsGetById",
			http.MethodGet,
			"/v5/integrations/:id",
			handleFunctions.IntegrationsAPI.IntegrationsGetById,
		},
		{
			"IntegrationsGetList",
			http.MethodGet,
			"/v5/integrations",
			handleFunctions.IntegrationsAPI.IntegrationsGetList,
		},
		{
			"IntegrationsLogsPost",
			http.MethodPost,
			"/v5/integrations/logs",
			handleFunctions.IntegrationsAPI.IntegrationsLogsPost,
		},
		{
			"CountryKeywordsMetricsGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/keywords/metrics",
			handleFunctions.KeywordsAPI.CountryKeywordsMetricsGet,
		},
		{
			"KeywordsCreate",
			http.MethodPost,
			"/v5/ad_accounts/:ad_account_id/keywords",
			handleFunctions.KeywordsAPI.KeywordsCreate,
		},
		{
			"KeywordsGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/keywords",
			handleFunctions.KeywordsAPI.KeywordsGet,
		},
		{
			"KeywordsUpdate",
			http.MethodPatch,
			"/v5/ad_accounts/:ad_account_id/keywords",
			handleFunctions.KeywordsAPI.KeywordsUpdate,
		},
		{
			"TrendingKeywordsList",
			http.MethodGet,
			"/v5/trends/keywords/:region/top/:trend_type",
			handleFunctions.KeywordsAPI.TrendingKeywordsList,
		},
		{
			"AdAccountsSubscriptionsDelById",
			http.MethodDelete,
			"/v5/ad_accounts/:ad_account_id/leads/subscriptions/:subscription_id",
			handleFunctions.LeadAdsAPI.AdAccountsSubscriptionsDelById,
		},
		{
			"AdAccountsSubscriptionsGetById",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/leads/subscriptions/:subscription_id",
			handleFunctions.LeadAdsAPI.AdAccountsSubscriptionsGetById,
		},
		{
			"AdAccountsSubscriptionsGetList",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/leads/subscriptions",
			handleFunctions.LeadAdsAPI.AdAccountsSubscriptionsGetList,
		},
		{
			"AdAccountsSubscriptionsPost",
			http.MethodPost,
			"/v5/ad_accounts/:ad_account_id/leads/subscriptions",
			handleFunctions.LeadAdsAPI.AdAccountsSubscriptionsPost,
		},
		{
			"LeadFormGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/lead_forms/:lead_form_id",
			handleFunctions.LeadFormsAPI.LeadFormGet,
		},
		{
			"LeadFormTestCreate",
			http.MethodPost,
			"/v5/ad_accounts/:ad_account_id/lead_forms/:lead_form_id/test",
			handleFunctions.LeadFormsAPI.LeadFormTestCreate,
		},
		{
			"LeadFormsList",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/lead_forms",
			handleFunctions.LeadFormsAPI.LeadFormsList,
		},
		{
			"MediaCreate",
			http.MethodPost,
			"/v5/media",
			handleFunctions.MediaAPI.MediaCreate,
		},
		{
			"MediaGet",
			http.MethodGet,
			"/v5/media/:media_id",
			handleFunctions.MediaAPI.MediaGet,
		},
		{
			"MediaList",
			http.MethodGet,
			"/v5/media",
			handleFunctions.MediaAPI.MediaList,
		},
		{
			"OauthToken",
			http.MethodPost,
			"/v5/oauth/token",
			handleFunctions.OauthAPI.OauthToken,
		},
		{
			"OrderLinesGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/order_lines/:order_line_id",
			handleFunctions.OrderLinesAPI.OrderLinesGet,
		},
		{
			"OrderLinesList",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/order_lines",
			handleFunctions.OrderLinesAPI.OrderLinesList,
		},
		{
			"PinsAnalytics",
			http.MethodGet,
			"/v5/pins/:pin_id/analytics",
			handleFunctions.PinsAPI.PinsAnalytics,
		},
		{
			"PinsCreate",
			http.MethodPost,
			"/v5/pins",
			handleFunctions.PinsAPI.PinsCreate,
		},
		{
			"PinsDelete",
			http.MethodDelete,
			"/v5/pins/:pin_id",
			handleFunctions.PinsAPI.PinsDelete,
		},
		{
			"PinsGet",
			http.MethodGet,
			"/v5/pins/:pin_id",
			handleFunctions.PinsAPI.PinsGet,
		},
		{
			"PinsList",
			http.MethodGet,
			"/v5/pins",
			handleFunctions.PinsAPI.PinsList,
		},
		{
			"PinsSave",
			http.MethodPost,
			"/v5/pins/:pin_id/save",
			handleFunctions.PinsAPI.PinsSave,
		},
		{
			"PinsUpdate",
			http.MethodPatch,
			"/v5/pins/:pin_id",
			handleFunctions.PinsAPI.PinsUpdate,
		},
		{
			"ProductGroupPromotionsCreate",
			http.MethodPost,
			"/v5/ad_accounts/:ad_account_id/product_group_promotions",
			handleFunctions.ProductGroupPromotionsAPI.ProductGroupPromotionsCreate,
		},
		{
			"ProductGroupPromotionsGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/product_group_promotions/:product_group_promotion_id",
			handleFunctions.ProductGroupPromotionsAPI.ProductGroupPromotionsGet,
		},
		{
			"ProductGroupPromotionsList",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/product_group_promotions",
			handleFunctions.ProductGroupPromotionsAPI.ProductGroupPromotionsList,
		},
		{
			"ProductGroupPromotionsUpdate",
			http.MethodPatch,
			"/v5/ad_accounts/:ad_account_id/product_group_promotions",
			handleFunctions.ProductGroupPromotionsAPI.ProductGroupPromotionsUpdate,
		},
		{
			"ProductGroupsAnalytics",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/product_groups/analytics",
			handleFunctions.ProductGroupPromotionsAPI.ProductGroupsAnalytics,
		},
		{
			"AdAccountsCatalogsProductGroupsList",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/product_groups/catalogs",
			handleFunctions.ProductGroupsAPI.AdAccountsCatalogsProductGroupsList,
		},
		{
			"AdAccountCountriesGet",
			http.MethodGet,
			"/v5/resources/ad_account_countries",
			handleFunctions.ResourcesAPI.AdAccountCountriesGet,
		},
		{
			"DeliveryMetricsGet",
			http.MethodGet,
			"/v5/resources/delivery_metrics",
			handleFunctions.ResourcesAPI.DeliveryMetricsGet,
		},
		{
			"InterestTargetingOptionsGet",
			http.MethodGet,
			"/v5/resources/targeting/interests/:interest_id",
			handleFunctions.ResourcesAPI.InterestTargetingOptionsGet,
		},
		{
			"LeadFormQuestionsGet",
			http.MethodGet,
			"/v5/resources/lead_form_questions",
			handleFunctions.ResourcesAPI.LeadFormQuestionsGet,
		},
		{
			"MetricsReadyStateGet",
			http.MethodGet,
			"/v5/resources/metrics_ready_state",
			handleFunctions.ResourcesAPI.MetricsReadyStateGet,
		},
		{
			"TargetingOptionsGet",
			http.MethodGet,
			"/v5/resources/targeting/:targeting_type",
			handleFunctions.ResourcesAPI.TargetingOptionsGet,
		},
		{
			"SearchPartnerPins",
			http.MethodGet,
			"/v5/search/partner/pins",
			handleFunctions.SearchAPI.SearchPartnerPins,
		},
		{
			"SearchUserBoardsGet",
			http.MethodGet,
			"/v5/search/boards",
			handleFunctions.SearchAPI.SearchUserBoardsGet,
		},
		{
			"SearchUserPinsList",
			http.MethodGet,
			"/v5/search/pins",
			handleFunctions.SearchAPI.SearchUserPinsList,
		},
		{
			"TermsRelatedList",
			http.MethodGet,
			"/v5/terms/related",
			handleFunctions.TermsAPI.TermsRelatedList,
		},
		{
			"TermsSuggestedList",
			http.MethodGet,
			"/v5/terms/suggested",
			handleFunctions.TermsAPI.TermsSuggestedList,
		},
		{
			"TermsOfServiceGet",
			http.MethodGet,
			"/v5/ad_accounts/:ad_account_id/terms_of_service",
			handleFunctions.TermsOfServiceAPI.TermsOfServiceGet,
		},
		{
			"BoardsUserFollowsList",
			http.MethodGet,
			"/v5/user_account/following/boards",
			handleFunctions.UserAccountAPI.BoardsUserFollowsList,
		},
		{
			"FollowUserUpdate",
			http.MethodPost,
			"/v5/user_account/following/:username",
			handleFunctions.UserAccountAPI.FollowUserUpdate,
		},
		{
			"FollowersList",
			http.MethodGet,
			"/v5/user_account/followers",
			handleFunctions.UserAccountAPI.FollowersList,
		},
		{
			"LinkedBusinessAccountsGet",
			http.MethodGet,
			"/v5/user_account/businesses",
			handleFunctions.UserAccountAPI.LinkedBusinessAccountsGet,
		},
		{
			"UnverifyWebsiteDelete",
			http.MethodDelete,
			"/v5/user_account/websites",
			handleFunctions.UserAccountAPI.UnverifyWebsiteDelete,
		},
		{
			"UserAccountAnalytics",
			http.MethodGet,
			"/v5/user_account/analytics",
			handleFunctions.UserAccountAPI.UserAccountAnalytics,
		},
		{
			"UserAccountAnalyticsTopPins",
			http.MethodGet,
			"/v5/user_account/analytics/top_pins",
			handleFunctions.UserAccountAPI.UserAccountAnalyticsTopPins,
		},
		{
			"UserAccountAnalyticsTopVideoPins",
			http.MethodGet,
			"/v5/user_account/analytics/top_video_pins",
			handleFunctions.UserAccountAPI.UserAccountAnalyticsTopVideoPins,
		},
		{
			"UserAccountFollowedInterests",
			http.MethodGet,
			"/v5/users/:username/interests/follow",
			handleFunctions.UserAccountAPI.UserAccountFollowedInterests,
		},
		{
			"UserAccountGet",
			http.MethodGet,
			"/v5/user_account",
			handleFunctions.UserAccountAPI.UserAccountGet,
		},
		{
			"UserFollowingGet",
			http.MethodGet,
			"/v5/user_account/following",
			handleFunctions.UserAccountAPI.UserFollowingGet,
		},
		{
			"UserWebsitesGet",
			http.MethodGet,
			"/v5/user_account/websites",
			handleFunctions.UserAccountAPI.UserWebsitesGet,
		},
		{
			"VerifyWebsiteUpdate",
			http.MethodPost,
			"/v5/user_account/websites",
			handleFunctions.UserAccountAPI.VerifyWebsiteUpdate,
		},
		{
			"WebsiteVerificationGet",
			http.MethodGet,
			"/v5/user_account/websites/verification",
			handleFunctions.UserAccountAPI.WebsiteVerificationGet,
		},
	}
}
