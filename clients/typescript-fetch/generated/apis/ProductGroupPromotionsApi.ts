/* tslint:disable */
/* eslint-disable */
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


import * as runtime from '../runtime';
import type {
  Granularity,
  ProductGroupAnalyticsResponseInner,
  ProductGroupPromotionCreateRequest,
  ProductGroupPromotionResponse,
  ProductGroupPromotionUpdateRequest,
  ProductGroupPromotionsList200Response,
} from '../models/index';
import {
    GranularityFromJSON,
    GranularityToJSON,
    ProductGroupAnalyticsResponseInnerFromJSON,
    ProductGroupAnalyticsResponseInnerToJSON,
    ProductGroupPromotionCreateRequestFromJSON,
    ProductGroupPromotionCreateRequestToJSON,
    ProductGroupPromotionResponseFromJSON,
    ProductGroupPromotionResponseToJSON,
    ProductGroupPromotionUpdateRequestFromJSON,
    ProductGroupPromotionUpdateRequestToJSON,
    ProductGroupPromotionsList200ResponseFromJSON,
    ProductGroupPromotionsList200ResponseToJSON,
} from '../models/index';

export interface ProductGroupPromotionsCreateRequest {
    adAccountId: string;
    productGroupPromotionCreateRequest: ProductGroupPromotionCreateRequest;
}

export interface ProductGroupPromotionsGetRequest {
    adAccountId: string;
    productGroupPromotionId: string;
}

export interface ProductGroupPromotionsListRequest {
    adAccountId: string;
    productGroupPromotionIds?: Array<string>;
    entityStatuses?: Array<ProductGroupPromotionsListEntityStatusesEnum>;
    adGroupId?: string;
    pageSize?: number;
    order?: ProductGroupPromotionsListOrderEnum;
    bookmark?: string;
}

export interface ProductGroupPromotionsUpdateRequest {
    adAccountId: string;
    productGroupPromotionUpdateRequest: ProductGroupPromotionUpdateRequest;
}

export interface ProductGroupsAnalyticsRequest {
    adAccountId: string;
    startDate: Date;
    endDate: Date;
    productGroupIds: Array<string>;
    columns: Array<ProductGroupsAnalyticsColumnsEnum>;
    granularity: Granularity;
    clickWindowDays?: ProductGroupsAnalyticsClickWindowDaysEnum;
    engagementWindowDays?: ProductGroupsAnalyticsEngagementWindowDaysEnum;
    viewWindowDays?: ProductGroupsAnalyticsViewWindowDaysEnum;
    conversionReportTime?: ProductGroupsAnalyticsConversionReportTimeEnum;
}

/**
 * 
 */
export class ProductGroupPromotionsApi extends runtime.BaseAPI {

    /**
     * Add one or more product groups from your catalog to an existing ad group. (Product groups added to an ad group are a \'product group promotion.\')
     * Create product group promotions
     */
    async productGroupPromotionsCreateRaw(requestParameters: ProductGroupPromotionsCreateRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<ProductGroupPromotionResponse>> {
        if (requestParameters['adAccountId'] == null) {
            throw new runtime.RequiredError(
                'adAccountId',
                'Required parameter "adAccountId" was null or undefined when calling productGroupPromotionsCreate().'
            );
        }

        if (requestParameters['productGroupPromotionCreateRequest'] == null) {
            throw new runtime.RequiredError(
                'productGroupPromotionCreateRequest',
                'Required parameter "productGroupPromotionCreateRequest" was null or undefined when calling productGroupPromotionsCreate().'
            );
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/json';

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["ads:write"]);
        }

        const response = await this.request({
            path: `/ad_accounts/{ad_account_id}/product_group_promotions`.replace(`{${"ad_account_id"}}`, encodeURIComponent(String(requestParameters['adAccountId']))),
            method: 'POST',
            headers: headerParameters,
            query: queryParameters,
            body: ProductGroupPromotionCreateRequestToJSON(requestParameters['productGroupPromotionCreateRequest']),
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => ProductGroupPromotionResponseFromJSON(jsonValue));
    }

    /**
     * Add one or more product groups from your catalog to an existing ad group. (Product groups added to an ad group are a \'product group promotion.\')
     * Create product group promotions
     */
    async productGroupPromotionsCreate(requestParameters: ProductGroupPromotionsCreateRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<ProductGroupPromotionResponse> {
        const response = await this.productGroupPromotionsCreateRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Get a product group promotion by id
     * Get a product group promotion by id
     */
    async productGroupPromotionsGetRaw(requestParameters: ProductGroupPromotionsGetRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<ProductGroupPromotionResponse>> {
        if (requestParameters['adAccountId'] == null) {
            throw new runtime.RequiredError(
                'adAccountId',
                'Required parameter "adAccountId" was null or undefined when calling productGroupPromotionsGet().'
            );
        }

        if (requestParameters['productGroupPromotionId'] == null) {
            throw new runtime.RequiredError(
                'productGroupPromotionId',
                'Required parameter "productGroupPromotionId" was null or undefined when calling productGroupPromotionsGet().'
            );
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["ads:read"]);
        }

        const response = await this.request({
            path: `/ad_accounts/{ad_account_id}/product_group_promotions/{product_group_promotion_id}`.replace(`{${"ad_account_id"}}`, encodeURIComponent(String(requestParameters['adAccountId']))).replace(`{${"product_group_promotion_id"}}`, encodeURIComponent(String(requestParameters['productGroupPromotionId']))),
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => ProductGroupPromotionResponseFromJSON(jsonValue));
    }

    /**
     * Get a product group promotion by id
     * Get a product group promotion by id
     */
    async productGroupPromotionsGet(requestParameters: ProductGroupPromotionsGetRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<ProductGroupPromotionResponse> {
        const response = await this.productGroupPromotionsGetRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * List existing product group promotions associated with an ad account.  Include either ad_group_id or product_group_promotion_ids in your request.  <b>Note:</b> ad_group_ids and product_group_promotion_ids are mutually exclusive parameters. Only provide one. If multiple options are provided, product_group_promotion_ids takes precedence over ad_group_ids. If none are provided, the endpoint returns an error.
     * Get product group promotions
     */
    async productGroupPromotionsListRaw(requestParameters: ProductGroupPromotionsListRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<ProductGroupPromotionsList200Response>> {
        if (requestParameters['adAccountId'] == null) {
            throw new runtime.RequiredError(
                'adAccountId',
                'Required parameter "adAccountId" was null or undefined when calling productGroupPromotionsList().'
            );
        }

        const queryParameters: any = {};

        if (requestParameters['productGroupPromotionIds'] != null) {
            queryParameters['product_group_promotion_ids'] = requestParameters['productGroupPromotionIds'];
        }

        if (requestParameters['entityStatuses'] != null) {
            queryParameters['entity_statuses'] = requestParameters['entityStatuses'];
        }

        if (requestParameters['adGroupId'] != null) {
            queryParameters['ad_group_id'] = requestParameters['adGroupId'];
        }

        if (requestParameters['pageSize'] != null) {
            queryParameters['page_size'] = requestParameters['pageSize'];
        }

        if (requestParameters['order'] != null) {
            queryParameters['order'] = requestParameters['order'];
        }

        if (requestParameters['bookmark'] != null) {
            queryParameters['bookmark'] = requestParameters['bookmark'];
        }

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["ads:read"]);
        }

        const response = await this.request({
            path: `/ad_accounts/{ad_account_id}/product_group_promotions`.replace(`{${"ad_account_id"}}`, encodeURIComponent(String(requestParameters['adAccountId']))),
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => ProductGroupPromotionsList200ResponseFromJSON(jsonValue));
    }

    /**
     * List existing product group promotions associated with an ad account.  Include either ad_group_id or product_group_promotion_ids in your request.  <b>Note:</b> ad_group_ids and product_group_promotion_ids are mutually exclusive parameters. Only provide one. If multiple options are provided, product_group_promotion_ids takes precedence over ad_group_ids. If none are provided, the endpoint returns an error.
     * Get product group promotions
     */
    async productGroupPromotionsList(requestParameters: ProductGroupPromotionsListRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<ProductGroupPromotionsList200Response> {
        const response = await this.productGroupPromotionsListRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Update multiple existing Product Group Promotions (by product_group_id)
     * Update product group promotions
     */
    async productGroupPromotionsUpdateRaw(requestParameters: ProductGroupPromotionsUpdateRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<ProductGroupPromotionResponse>> {
        if (requestParameters['adAccountId'] == null) {
            throw new runtime.RequiredError(
                'adAccountId',
                'Required parameter "adAccountId" was null or undefined when calling productGroupPromotionsUpdate().'
            );
        }

        if (requestParameters['productGroupPromotionUpdateRequest'] == null) {
            throw new runtime.RequiredError(
                'productGroupPromotionUpdateRequest',
                'Required parameter "productGroupPromotionUpdateRequest" was null or undefined when calling productGroupPromotionsUpdate().'
            );
        }

        const queryParameters: any = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/json';

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["ads:write"]);
        }

        const response = await this.request({
            path: `/ad_accounts/{ad_account_id}/product_group_promotions`.replace(`{${"ad_account_id"}}`, encodeURIComponent(String(requestParameters['adAccountId']))),
            method: 'PATCH',
            headers: headerParameters,
            query: queryParameters,
            body: ProductGroupPromotionUpdateRequestToJSON(requestParameters['productGroupPromotionUpdateRequest']),
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => ProductGroupPromotionResponseFromJSON(jsonValue));
    }

    /**
     * Update multiple existing Product Group Promotions (by product_group_id)
     * Update product group promotions
     */
    async productGroupPromotionsUpdate(requestParameters: ProductGroupPromotionsUpdateRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<ProductGroupPromotionResponse> {
        const response = await this.productGroupPromotionsUpdateRaw(requestParameters, initOverrides);
        return await response.value();
    }

    /**
     * Get analytics for the specified product groups in the specified <code>ad_account_id</code>, filtered by the specified options. - The token\'s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
     * Get product group analytics
     */
    async productGroupsAnalyticsRaw(requestParameters: ProductGroupsAnalyticsRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<runtime.ApiResponse<Array<ProductGroupAnalyticsResponseInner>>> {
        if (requestParameters['adAccountId'] == null) {
            throw new runtime.RequiredError(
                'adAccountId',
                'Required parameter "adAccountId" was null or undefined when calling productGroupsAnalytics().'
            );
        }

        if (requestParameters['startDate'] == null) {
            throw new runtime.RequiredError(
                'startDate',
                'Required parameter "startDate" was null or undefined when calling productGroupsAnalytics().'
            );
        }

        if (requestParameters['endDate'] == null) {
            throw new runtime.RequiredError(
                'endDate',
                'Required parameter "endDate" was null or undefined when calling productGroupsAnalytics().'
            );
        }

        if (requestParameters['productGroupIds'] == null) {
            throw new runtime.RequiredError(
                'productGroupIds',
                'Required parameter "productGroupIds" was null or undefined when calling productGroupsAnalytics().'
            );
        }

        if (requestParameters['columns'] == null) {
            throw new runtime.RequiredError(
                'columns',
                'Required parameter "columns" was null or undefined when calling productGroupsAnalytics().'
            );
        }

        if (requestParameters['granularity'] == null) {
            throw new runtime.RequiredError(
                'granularity',
                'Required parameter "granularity" was null or undefined when calling productGroupsAnalytics().'
            );
        }

        const queryParameters: any = {};

        if (requestParameters['startDate'] != null) {
            queryParameters['start_date'] = (requestParameters['startDate'] as any).toISOString().substring(0,10);
        }

        if (requestParameters['endDate'] != null) {
            queryParameters['end_date'] = (requestParameters['endDate'] as any).toISOString().substring(0,10);
        }

        if (requestParameters['productGroupIds'] != null) {
            queryParameters['product_group_ids'] = requestParameters['productGroupIds'];
        }

        if (requestParameters['columns'] != null) {
            queryParameters['columns'] = requestParameters['columns']!.join(runtime.COLLECTION_FORMATS["csv"]);
        }

        if (requestParameters['granularity'] != null) {
            queryParameters['granularity'] = requestParameters['granularity'];
        }

        if (requestParameters['clickWindowDays'] != null) {
            queryParameters['click_window_days'] = requestParameters['clickWindowDays'];
        }

        if (requestParameters['engagementWindowDays'] != null) {
            queryParameters['engagement_window_days'] = requestParameters['engagementWindowDays'];
        }

        if (requestParameters['viewWindowDays'] != null) {
            queryParameters['view_window_days'] = requestParameters['viewWindowDays'];
        }

        if (requestParameters['conversionReportTime'] != null) {
            queryParameters['conversion_report_time'] = requestParameters['conversionReportTime'];
        }

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.accessToken) {
            // oauth required
            headerParameters["Authorization"] = await this.configuration.accessToken("pinterest_oauth2", ["ads:read"]);
        }

        const response = await this.request({
            path: `/ad_accounts/{ad_account_id}/product_groups/analytics`.replace(`{${"ad_account_id"}}`, encodeURIComponent(String(requestParameters['adAccountId']))),
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        }, initOverrides);

        return new runtime.JSONApiResponse(response, (jsonValue) => jsonValue.map(ProductGroupAnalyticsResponseInnerFromJSON));
    }

    /**
     * Get analytics for the specified product groups in the specified <code>ad_account_id</code>, filtered by the specified options. - The token\'s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
     * Get product group analytics
     */
    async productGroupsAnalytics(requestParameters: ProductGroupsAnalyticsRequest, initOverrides?: RequestInit | runtime.InitOverrideFunction): Promise<Array<ProductGroupAnalyticsResponseInner>> {
        const response = await this.productGroupsAnalyticsRaw(requestParameters, initOverrides);
        return await response.value();
    }

}

/**
 * @export
 */
export const ProductGroupPromotionsListEntityStatusesEnum = {
    Active: 'ACTIVE',
    Paused: 'PAUSED',
    Archived: 'ARCHIVED',
    Draft: 'DRAFT',
    DeletedDraft: 'DELETED_DRAFT'
} as const;
export type ProductGroupPromotionsListEntityStatusesEnum = typeof ProductGroupPromotionsListEntityStatusesEnum[keyof typeof ProductGroupPromotionsListEntityStatusesEnum];
/**
 * @export
 */
export const ProductGroupPromotionsListOrderEnum = {
    Ascending: 'ASCENDING',
    Descending: 'DESCENDING'
} as const;
export type ProductGroupPromotionsListOrderEnum = typeof ProductGroupPromotionsListOrderEnum[keyof typeof ProductGroupPromotionsListOrderEnum];
/**
 * @export
 */
export const ProductGroupsAnalyticsColumnsEnum = {
    SpendInMicroDollar: 'SPEND_IN_MICRO_DOLLAR',
    PaidImpression: 'PAID_IMPRESSION',
    SpendInDollar: 'SPEND_IN_DOLLAR',
    CpcInMicroDollar: 'CPC_IN_MICRO_DOLLAR',
    EcpcInMicroDollar: 'ECPC_IN_MICRO_DOLLAR',
    EcpcInDollar: 'ECPC_IN_DOLLAR',
    Ctr: 'CTR',
    Ectr: 'ECTR',
    CampaignName: 'CAMPAIGN_NAME',
    PinId: 'PIN_ID',
    TotalEngagement: 'TOTAL_ENGAGEMENT',
    Engagement1: 'ENGAGEMENT_1',
    Engagement2: 'ENGAGEMENT_2',
    EcpeInDollar: 'ECPE_IN_DOLLAR',
    EngagementRate: 'ENGAGEMENT_RATE',
    EengagementRate: 'EENGAGEMENT_RATE',
    EcpmInMicroDollar: 'ECPM_IN_MICRO_DOLLAR',
    RepinRate: 'REPIN_RATE',
    Ctr2: 'CTR_2',
    CampaignId: 'CAMPAIGN_ID',
    AdvertiserId: 'ADVERTISER_ID',
    AdAccountId: 'AD_ACCOUNT_ID',
    PinPromotionId: 'PIN_PROMOTION_ID',
    AdId: 'AD_ID',
    AdGroupId: 'AD_GROUP_ID',
    CampaignEntityStatus: 'CAMPAIGN_ENTITY_STATUS',
    CampaignObjectiveType: 'CAMPAIGN_OBJECTIVE_TYPE',
    CpmInMicroDollar: 'CPM_IN_MICRO_DOLLAR',
    CpmInDollar: 'CPM_IN_DOLLAR',
    AdGroupEntityStatus: 'AD_GROUP_ENTITY_STATUS',
    OrderLineId: 'ORDER_LINE_ID',
    OrderLineName: 'ORDER_LINE_NAME',
    Clickthrough1: 'CLICKTHROUGH_1',
    Repin1: 'REPIN_1',
    Impression1: 'IMPRESSION_1',
    Impression1Gross: 'IMPRESSION_1_GROSS',
    Clickthrough1Gross: 'CLICKTHROUGH_1_GROSS',
    OutboundClick1: 'OUTBOUND_CLICK_1',
    Clickthrough2: 'CLICKTHROUGH_2',
    Repin2: 'REPIN_2',
    Impression2: 'IMPRESSION_2',
    OutboundClick2: 'OUTBOUND_CLICK_2',
    TotalClickthrough: 'TOTAL_CLICKTHROUGH',
    TotalImpression: 'TOTAL_IMPRESSION',
    TotalImpressionUser: 'TOTAL_IMPRESSION_USER',
    TotalImpressionFrequency: 'TOTAL_IMPRESSION_FREQUENCY',
    CostPerOutboundClickInDollar: 'COST_PER_OUTBOUND_CLICK_IN_DOLLAR',
    TotalEngagementSignup: 'TOTAL_ENGAGEMENT_SIGNUP',
    TotalEngagementCheckout: 'TOTAL_ENGAGEMENT_CHECKOUT',
    TotalEngagementLead: 'TOTAL_ENGAGEMENT_LEAD',
    TotalClickSignup: 'TOTAL_CLICK_SIGNUP',
    TotalClickCheckout: 'TOTAL_CLICK_CHECKOUT',
    TotalClickAddToCart: 'TOTAL_CLICK_ADD_TO_CART',
    TotalClickLead: 'TOTAL_CLICK_LEAD',
    TotalViewSignup: 'TOTAL_VIEW_SIGNUP',
    TotalViewCheckout: 'TOTAL_VIEW_CHECKOUT',
    TotalViewAddToCart: 'TOTAL_VIEW_ADD_TO_CART',
    TotalViewLead: 'TOTAL_VIEW_LEAD',
    TotalConversions: 'TOTAL_CONVERSIONS',
    TotalEngagementSignupValueInMicroDollar: 'TOTAL_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalEngagementCheckoutValueInMicroDollar: 'TOTAL_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalClickSignupValueInMicroDollar: 'TOTAL_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalClickCheckoutValueInMicroDollar: 'TOTAL_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalViewSignupValueInMicroDollar: 'TOTAL_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalViewCheckoutValueInMicroDollar: 'TOTAL_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalWebSessions: 'TOTAL_WEB_SESSIONS',
    WebSessions1: 'WEB_SESSIONS_1',
    WebSessions2: 'WEB_SESSIONS_2',
    CampaignLifetimeSpendCap: 'CAMPAIGN_LIFETIME_SPEND_CAP',
    CampaignDailySpendCap: 'CAMPAIGN_DAILY_SPEND_CAP',
    TotalPageVisit: 'TOTAL_PAGE_VISIT',
    TotalSignup: 'TOTAL_SIGNUP',
    TotalCheckout: 'TOTAL_CHECKOUT',
    TotalCustom: 'TOTAL_CUSTOM',
    TotalLead: 'TOTAL_LEAD',
    TotalSignupValueInMicroDollar: 'TOTAL_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalCheckoutValueInMicroDollar: 'TOTAL_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalCustomValueInMicroDollar: 'TOTAL_CUSTOM_VALUE_IN_MICRO_DOLLAR',
    PageVisitCostPerAction: 'PAGE_VISIT_COST_PER_ACTION',
    PageVisitRoas: 'PAGE_VISIT_ROAS',
    CheckoutRoas: 'CHECKOUT_ROAS',
    CustomRoas: 'CUSTOM_ROAS',
    VideoMrcViews1: 'VIDEO_MRC_VIEWS_1',
    Video3SecViews2: 'VIDEO_3SEC_VIEWS_2',
    VideoP100Complete2: 'VIDEO_P100_COMPLETE_2',
    VideoP0Combined2: 'VIDEO_P0_COMBINED_2',
    VideoP25Combined2: 'VIDEO_P25_COMBINED_2',
    VideoP50Combined2: 'VIDEO_P50_COMBINED_2',
    VideoP75Combined2: 'VIDEO_P75_COMBINED_2',
    VideoP95Combined2: 'VIDEO_P95_COMBINED_2',
    VideoMrcViews2: 'VIDEO_MRC_VIEWS_2',
    VideoLength: 'VIDEO_LENGTH',
    EcpvInDollar: 'ECPV_IN_DOLLAR',
    EcpcvInDollar: 'ECPCV_IN_DOLLAR',
    EcpcvP95InDollar: 'ECPCV_P95_IN_DOLLAR',
    TotalVideo3SecViews: 'TOTAL_VIDEO_3SEC_VIEWS',
    TotalVideoP100Complete: 'TOTAL_VIDEO_P100_COMPLETE',
    TotalVideoP0Combined: 'TOTAL_VIDEO_P0_COMBINED',
    TotalVideoP25Combined: 'TOTAL_VIDEO_P25_COMBINED',
    TotalVideoP50Combined: 'TOTAL_VIDEO_P50_COMBINED',
    TotalVideoP75Combined: 'TOTAL_VIDEO_P75_COMBINED',
    TotalVideoP95Combined: 'TOTAL_VIDEO_P95_COMBINED',
    TotalVideoMrcViews: 'TOTAL_VIDEO_MRC_VIEWS',
    TotalVideoAvgWatchtimeInSecond: 'TOTAL_VIDEO_AVG_WATCHTIME_IN_SECOND',
    TotalRepinRate: 'TOTAL_REPIN_RATE',
    WebCheckoutCostPerAction: 'WEB_CHECKOUT_COST_PER_ACTION',
    WebCheckoutRoas: 'WEB_CHECKOUT_ROAS',
    TotalWebCheckout: 'TOTAL_WEB_CHECKOUT',
    TotalWebCheckoutValueInMicroDollar: 'TOTAL_WEB_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalWebClickCheckout: 'TOTAL_WEB_CLICK_CHECKOUT',
    TotalWebClickCheckoutValueInMicroDollar: 'TOTAL_WEB_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalWebEngagementCheckout: 'TOTAL_WEB_ENGAGEMENT_CHECKOUT',
    TotalWebEngagementCheckoutValueInMicroDollar: 'TOTAL_WEB_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalWebViewCheckout: 'TOTAL_WEB_VIEW_CHECKOUT',
    TotalWebViewCheckoutValueInMicroDollar: 'TOTAL_WEB_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    InappCheckoutCostPerAction: 'INAPP_CHECKOUT_COST_PER_ACTION',
    TotalOfflineCheckout: 'TOTAL_OFFLINE_CHECKOUT',
    IdeaPinProductTagVisit1: 'IDEA_PIN_PRODUCT_TAG_VISIT_1',
    IdeaPinProductTagVisit2: 'IDEA_PIN_PRODUCT_TAG_VISIT_2',
    TotalIdeaPinProductTagVisit: 'TOTAL_IDEA_PIN_PRODUCT_TAG_VISIT',
    Leads: 'LEADS',
    CostPerLead: 'COST_PER_LEAD',
    QuizCompleted: 'QUIZ_COMPLETED',
    QuizCompletionRate: 'QUIZ_COMPLETION_RATE',
    ShowcasePinClickthrough: 'SHOWCASE_PIN_CLICKTHROUGH',
    ShowcaseSubpageClickthrough: 'SHOWCASE_SUBPAGE_CLICKTHROUGH',
    ShowcaseSubpinClickthrough: 'SHOWCASE_SUBPIN_CLICKTHROUGH',
    ShowcaseSubpageImpression: 'SHOWCASE_SUBPAGE_IMPRESSION',
    ShowcaseSubpinImpression: 'SHOWCASE_SUBPIN_IMPRESSION',
    ShowcaseSubpageSwipeLeft: 'SHOWCASE_SUBPAGE_SWIPE_LEFT',
    ShowcaseSubpageSwipeRight: 'SHOWCASE_SUBPAGE_SWIPE_RIGHT',
    ShowcaseSubpinSwipeLeft: 'SHOWCASE_SUBPIN_SWIPE_LEFT',
    ShowcaseSubpinSwipeRight: 'SHOWCASE_SUBPIN_SWIPE_RIGHT',
    ShowcaseSubpageRepin: 'SHOWCASE_SUBPAGE_REPIN',
    ShowcaseSubpinRepin: 'SHOWCASE_SUBPIN_REPIN',
    ShowcaseSubpageCloseup: 'SHOWCASE_SUBPAGE_CLOSEUP',
    ShowcaseCardThumbnailSwipeForward: 'SHOWCASE_CARD_THUMBNAIL_SWIPE_FORWARD',
    ShowcaseCardThumbnailSwipeBackward: 'SHOWCASE_CARD_THUMBNAIL_SWIPE_BACKWARD',
    ShowcaseAverageSubpageCloseupPerSession: 'SHOWCASE_AVERAGE_SUBPAGE_CLOSEUP_PER_SESSION',
    TotalCheckoutConversionRate: 'TOTAL_CHECKOUT_CONVERSION_RATE',
    TotalViewCategoryConversionRate: 'TOTAL_VIEW_CATEGORY_CONVERSION_RATE',
    TotalAddToCartConversionRate: 'TOTAL_ADD_TO_CART_CONVERSION_RATE',
    TotalSignupConversionRate: 'TOTAL_SIGNUP_CONVERSION_RATE',
    TotalPageVisitConversionRate: 'TOTAL_PAGE_VISIT_CONVERSION_RATE',
    TotalLeadConversionRate: 'TOTAL_LEAD_CONVERSION_RATE',
    TotalSearchConversionRate: 'TOTAL_SEARCH_CONVERSION_RATE',
    TotalWatchVideoConversionRate: 'TOTAL_WATCH_VIDEO_CONVERSION_RATE',
    TotalUnknownConversionRate: 'TOTAL_UNKNOWN_CONVERSION_RATE',
    TotalCustomConversionRate: 'TOTAL_CUSTOM_CONVERSION_RATE'
} as const;
export type ProductGroupsAnalyticsColumnsEnum = typeof ProductGroupsAnalyticsColumnsEnum[keyof typeof ProductGroupsAnalyticsColumnsEnum];
/**
 * @export
 */
export const ProductGroupsAnalyticsClickWindowDaysEnum = {
    NUMBER_0: 0,
    NUMBER_1: 1,
    NUMBER_7: 7,
    NUMBER_14: 14,
    NUMBER_30: 30,
    NUMBER_60: 60
} as const;
export type ProductGroupsAnalyticsClickWindowDaysEnum = typeof ProductGroupsAnalyticsClickWindowDaysEnum[keyof typeof ProductGroupsAnalyticsClickWindowDaysEnum];
/**
 * @export
 */
export const ProductGroupsAnalyticsEngagementWindowDaysEnum = {
    NUMBER_0: 0,
    NUMBER_1: 1,
    NUMBER_7: 7,
    NUMBER_14: 14,
    NUMBER_30: 30,
    NUMBER_60: 60
} as const;
export type ProductGroupsAnalyticsEngagementWindowDaysEnum = typeof ProductGroupsAnalyticsEngagementWindowDaysEnum[keyof typeof ProductGroupsAnalyticsEngagementWindowDaysEnum];
/**
 * @export
 */
export const ProductGroupsAnalyticsViewWindowDaysEnum = {
    NUMBER_0: 0,
    NUMBER_1: 1,
    NUMBER_7: 7,
    NUMBER_14: 14,
    NUMBER_30: 30,
    NUMBER_60: 60
} as const;
export type ProductGroupsAnalyticsViewWindowDaysEnum = typeof ProductGroupsAnalyticsViewWindowDaysEnum[keyof typeof ProductGroupsAnalyticsViewWindowDaysEnum];
/**
 * @export
 */
export const ProductGroupsAnalyticsConversionReportTimeEnum = {
    AdAction: 'TIME_OF_AD_ACTION',
    Conversion: 'TIME_OF_CONVERSION'
} as const;
export type ProductGroupsAnalyticsConversionReportTimeEnum = typeof ProductGroupsAnalyticsConversionReportTimeEnum[keyof typeof ProductGroupsAnalyticsConversionReportTimeEnum];
