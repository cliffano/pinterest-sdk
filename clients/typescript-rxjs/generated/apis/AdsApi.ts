// tslint:disable
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

import type { Observable } from 'rxjs';
import type { AjaxResponse } from 'rxjs/ajax';
import { BaseAPI, throwIfNullOrUndefined, encodeURI, COLLECTION_FORMATS } from '../runtime';
import type { OperationOpts, HttpHeaders, HttpQuery } from '../runtime';
import type {
    AdArrayResponse,
    AdCreateRequest,
    AdPreviewRequest,
    AdPreviewURLResponse,
    AdResponse,
    AdUpdateRequest,
    AdsAnalyticsResponseInner,
    AdsAnalyticsTargetingType,
    AdsList200Response,
    ConversionReportAttributionType,
    Granularity,
    MetricsResponse,
} from '../models';

export interface AdPreviewsCreateRequest {
    adAccountId: string;
    adPreviewRequest: AdPreviewRequest;
}

export interface AdTargetingAnalyticsGetRequest {
    adAccountId: string;
    adIds: Array<string>;
    startDate: string;
    endDate: string;
    targetingTypes: Array<AdsAnalyticsTargetingType>;
    columns: Array<AdTargetingAnalyticsGetColumnsEnum>;
    granularity: Granularity;
    clickWindowDays?: AdTargetingAnalyticsGetClickWindowDaysEnum;
    engagementWindowDays?: AdTargetingAnalyticsGetEngagementWindowDaysEnum;
    viewWindowDays?: AdTargetingAnalyticsGetViewWindowDaysEnum;
    conversionReportTime?: AdTargetingAnalyticsGetConversionReportTimeEnum;
    attributionTypes?: ConversionReportAttributionType;
}

export interface AdsAnalyticsRequest {
    adAccountId: string;
    startDate: string;
    endDate: string;
    adIds: Array<string>;
    columns: Array<AdsAnalyticsColumnsEnum>;
    granularity: Granularity;
    clickWindowDays?: AdsAnalyticsClickWindowDaysEnum;
    engagementWindowDays?: AdsAnalyticsEngagementWindowDaysEnum;
    viewWindowDays?: AdsAnalyticsViewWindowDaysEnum;
    conversionReportTime?: AdsAnalyticsConversionReportTimeEnum;
}

export interface AdsCreateRequest {
    adAccountId: string;
    adCreateRequest: Array<AdCreateRequest>;
}

export interface AdsGetRequest {
    adAccountId: string;
    adId: string;
}

export interface AdsListRequest {
    adAccountId: string;
    campaignIds?: Array<string>;
    adGroupIds?: Array<string>;
    adIds?: Array<string>;
    entityStatuses?: Array<AdsListEntityStatusesEnum>;
    pageSize?: number;
    order?: AdsListOrderEnum;
    bookmark?: string;
}

export interface AdsUpdateRequest {
    adAccountId: string;
    adUpdateRequest: Array<AdUpdateRequest>;
}

/**
 * no description
 */
export class AdsApi extends BaseAPI {

    /**
     * Create an ad preview given an ad account ID and either an existing organic pin ID or the URL for an image to be used to create the Pin and the ad. <p/> If you are creating a preview from an existing Pin, that Pin must be promotable: that is, it must have a clickthrough link and meet other requirements. (See <a href=\"https://help.pinterest.com/en/business/article/promoted-pins-overview\" target=\"_blank\">Ads Overview</a>.) <p/> You can view the returned preview URL on a webpage or iframe for 7 days, after which the URL expires.
     * Create ad preview with pin or image
     */
    adPreviewsCreate({ adAccountId, adPreviewRequest }: AdPreviewsCreateRequest): Observable<AdPreviewURLResponse>
    adPreviewsCreate({ adAccountId, adPreviewRequest }: AdPreviewsCreateRequest, opts?: OperationOpts): Observable<AjaxResponse<AdPreviewURLResponse>>
    adPreviewsCreate({ adAccountId, adPreviewRequest }: AdPreviewsCreateRequest, opts?: OperationOpts): Observable<AdPreviewURLResponse | AjaxResponse<AdPreviewURLResponse>> {
        throwIfNullOrUndefined(adAccountId, 'adAccountId', 'adPreviewsCreate');
        throwIfNullOrUndefined(adPreviewRequest, 'adPreviewRequest', 'adPreviewsCreate');

        const headers: HttpHeaders = {
            'Content-Type': 'application/json',
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['ads:write'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        return this.request<AdPreviewURLResponse>({
            url: '/ad_accounts/{ad_account_id}/ad_previews'.replace('{ad_account_id}', encodeURI(adAccountId)),
            method: 'POST',
            headers,
            body: adPreviewRequest,
        }, opts?.responseOpts);
    };

    /**
     * Get targeting analytics for one or more ads. For the requested ad(s) and metrics, the response will include the requested metric information (e.g. SPEND_IN_DOLLAR) for the requested target type (e.g. \"age_bucket\") for applicable values (e.g. \"45-49\"). <p/> - The token\'s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
     * Get targeting analytics for ads
     */
    adTargetingAnalyticsGet({ adAccountId, adIds, startDate, endDate, targetingTypes, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime, attributionTypes }: AdTargetingAnalyticsGetRequest): Observable<MetricsResponse>
    adTargetingAnalyticsGet({ adAccountId, adIds, startDate, endDate, targetingTypes, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime, attributionTypes }: AdTargetingAnalyticsGetRequest, opts?: OperationOpts): Observable<AjaxResponse<MetricsResponse>>
    adTargetingAnalyticsGet({ adAccountId, adIds, startDate, endDate, targetingTypes, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime, attributionTypes }: AdTargetingAnalyticsGetRequest, opts?: OperationOpts): Observable<MetricsResponse | AjaxResponse<MetricsResponse>> {
        throwIfNullOrUndefined(adAccountId, 'adAccountId', 'adTargetingAnalyticsGet');
        throwIfNullOrUndefined(adIds, 'adIds', 'adTargetingAnalyticsGet');
        throwIfNullOrUndefined(startDate, 'startDate', 'adTargetingAnalyticsGet');
        throwIfNullOrUndefined(endDate, 'endDate', 'adTargetingAnalyticsGet');
        throwIfNullOrUndefined(targetingTypes, 'targetingTypes', 'adTargetingAnalyticsGet');
        throwIfNullOrUndefined(columns, 'columns', 'adTargetingAnalyticsGet');
        throwIfNullOrUndefined(granularity, 'granularity', 'adTargetingAnalyticsGet');

        const headers: HttpHeaders = {
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['ads:read'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        const query: HttpQuery = { // required parameters are used directly since they are already checked by throwIfNullOrUndefined
            'ad_ids': adIds,
            'start_date': (startDate as any).toISOString().split('T')[0],
            'end_date': (endDate as any).toISOString().split('T')[0],
            'targeting_types': targetingTypes.join(COLLECTION_FORMATS['csv']),
            'columns': columns.join(COLLECTION_FORMATS['csv']),
            'granularity': granularity,
        };

        if (clickWindowDays != null) { query['click_window_days'] = clickWindowDays; }
        if (engagementWindowDays != null) { query['engagement_window_days'] = engagementWindowDays; }
        if (viewWindowDays != null) { query['view_window_days'] = viewWindowDays; }
        if (conversionReportTime != null) { query['conversion_report_time'] = conversionReportTime; }
        if (attributionTypes != null) { query['attribution_types'] = attributionTypes; }

        return this.request<MetricsResponse>({
            url: '/ad_accounts/{ad_account_id}/ads/targeting_analytics'.replace('{ad_account_id}', encodeURI(adAccountId)),
            method: 'GET',
            headers,
            query,
        }, opts?.responseOpts);
    };

    /**
     * Get analytics for the specified ads in the specified <code>ad_account_id</code>, filtered by the specified options. - The token\'s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
     * Get ad analytics
     */
    adsAnalytics({ adAccountId, startDate, endDate, adIds, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime }: AdsAnalyticsRequest): Observable<Array<AdsAnalyticsResponseInner>>
    adsAnalytics({ adAccountId, startDate, endDate, adIds, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime }: AdsAnalyticsRequest, opts?: OperationOpts): Observable<AjaxResponse<Array<AdsAnalyticsResponseInner>>>
    adsAnalytics({ adAccountId, startDate, endDate, adIds, columns, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime }: AdsAnalyticsRequest, opts?: OperationOpts): Observable<Array<AdsAnalyticsResponseInner> | AjaxResponse<Array<AdsAnalyticsResponseInner>>> {
        throwIfNullOrUndefined(adAccountId, 'adAccountId', 'adsAnalytics');
        throwIfNullOrUndefined(startDate, 'startDate', 'adsAnalytics');
        throwIfNullOrUndefined(endDate, 'endDate', 'adsAnalytics');
        throwIfNullOrUndefined(adIds, 'adIds', 'adsAnalytics');
        throwIfNullOrUndefined(columns, 'columns', 'adsAnalytics');
        throwIfNullOrUndefined(granularity, 'granularity', 'adsAnalytics');

        const headers: HttpHeaders = {
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['ads:read'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        const query: HttpQuery = { // required parameters are used directly since they are already checked by throwIfNullOrUndefined
            'start_date': (startDate as any).toISOString().split('T')[0],
            'end_date': (endDate as any).toISOString().split('T')[0],
            'ad_ids': adIds,
            'columns': columns.join(COLLECTION_FORMATS['csv']),
            'granularity': granularity,
        };

        if (clickWindowDays != null) { query['click_window_days'] = clickWindowDays; }
        if (engagementWindowDays != null) { query['engagement_window_days'] = engagementWindowDays; }
        if (viewWindowDays != null) { query['view_window_days'] = viewWindowDays; }
        if (conversionReportTime != null) { query['conversion_report_time'] = conversionReportTime; }

        return this.request<Array<AdsAnalyticsResponseInner>>({
            url: '/ad_accounts/{ad_account_id}/ads/analytics'.replace('{ad_account_id}', encodeURI(adAccountId)),
            method: 'GET',
            headers,
            query,
        }, opts?.responseOpts);
    };

    /**
     * Create multiple new ads. Request must contain ad_group_id, creative_type, and the source Pin pin_id.
     * Create ads
     */
    adsCreate({ adAccountId, adCreateRequest }: AdsCreateRequest): Observable<AdArrayResponse>
    adsCreate({ adAccountId, adCreateRequest }: AdsCreateRequest, opts?: OperationOpts): Observable<AjaxResponse<AdArrayResponse>>
    adsCreate({ adAccountId, adCreateRequest }: AdsCreateRequest, opts?: OperationOpts): Observable<AdArrayResponse | AjaxResponse<AdArrayResponse>> {
        throwIfNullOrUndefined(adAccountId, 'adAccountId', 'adsCreate');
        throwIfNullOrUndefined(adCreateRequest, 'adCreateRequest', 'adsCreate');

        const headers: HttpHeaders = {
            'Content-Type': 'application/json',
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['ads:write'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        return this.request<AdArrayResponse>({
            url: '/ad_accounts/{ad_account_id}/ads'.replace('{ad_account_id}', encodeURI(adAccountId)),
            method: 'POST',
            headers,
            body: adCreateRequest,
        }, opts?.responseOpts);
    };

    /**
     * Get a specific ad given the ad ID. If your pin is rejected, rejected_reasons will contain additional information from the Ad Review process. For more information about our policies and rejection reasons see the <a href=\"https://www.pinterest.com/_/_/policy/advertising-guidelines/\" target=\"_blank\">Pinterest advertising standards</a>.
     * Get ad
     */
    adsGet({ adAccountId, adId }: AdsGetRequest): Observable<AdResponse>
    adsGet({ adAccountId, adId }: AdsGetRequest, opts?: OperationOpts): Observable<AjaxResponse<AdResponse>>
    adsGet({ adAccountId, adId }: AdsGetRequest, opts?: OperationOpts): Observable<AdResponse | AjaxResponse<AdResponse>> {
        throwIfNullOrUndefined(adAccountId, 'adAccountId', 'adsGet');
        throwIfNullOrUndefined(adId, 'adId', 'adsGet');

        const headers: HttpHeaders = {
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['ads:read'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        return this.request<AdResponse>({
            url: '/ad_accounts/{ad_account_id}/ads/{ad_id}'.replace('{ad_account_id}', encodeURI(adAccountId)).replace('{ad_id}', encodeURI(adId)),
            method: 'GET',
            headers,
        }, opts?.responseOpts);
    };

    /**
     * List ads that meet the filters provided:   - Listed campaign ids or ad group ids or ad ids   - Listed entity statuses <p/> If no filter is provided, all ads in the ad account are returned. <p/> <strong>Note:</strong><p/> Provide only campaign_id or ad_group_id or ad_id. Do not provide more than one type. <p/> Review status is provided for each ad; if review_status is REJECTED, the rejected_reasons field will contain additional information. For more, see <a href=\"https://policy.pinterest.com/en/advertising-guidelines\">Pinterest advertising standards</a>.
     * List ads
     */
    adsList({ adAccountId, campaignIds, adGroupIds, adIds, entityStatuses, pageSize, order, bookmark }: AdsListRequest): Observable<AdsList200Response>
    adsList({ adAccountId, campaignIds, adGroupIds, adIds, entityStatuses, pageSize, order, bookmark }: AdsListRequest, opts?: OperationOpts): Observable<AjaxResponse<AdsList200Response>>
    adsList({ adAccountId, campaignIds, adGroupIds, adIds, entityStatuses, pageSize, order, bookmark }: AdsListRequest, opts?: OperationOpts): Observable<AdsList200Response | AjaxResponse<AdsList200Response>> {
        throwIfNullOrUndefined(adAccountId, 'adAccountId', 'adsList');

        const headers: HttpHeaders = {
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['ads:read'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        const query: HttpQuery = {};

        if (campaignIds != null) { query['campaign_ids'] = campaignIds; }
        if (adGroupIds != null) { query['ad_group_ids'] = adGroupIds; }
        if (adIds != null) { query['ad_ids'] = adIds; }
        if (entityStatuses != null) { query['entity_statuses'] = entityStatuses; }
        if (pageSize != null) { query['page_size'] = pageSize; }
        if (order != null) { query['order'] = order; }
        if (bookmark != null) { query['bookmark'] = bookmark; }

        return this.request<AdsList200Response>({
            url: '/ad_accounts/{ad_account_id}/ads'.replace('{ad_account_id}', encodeURI(adAccountId)),
            method: 'GET',
            headers,
            query,
        }, opts?.responseOpts);
    };

    /**
     * Update multiple existing ads
     * Update ads
     */
    adsUpdate({ adAccountId, adUpdateRequest }: AdsUpdateRequest): Observable<AdArrayResponse>
    adsUpdate({ adAccountId, adUpdateRequest }: AdsUpdateRequest, opts?: OperationOpts): Observable<AjaxResponse<AdArrayResponse>>
    adsUpdate({ adAccountId, adUpdateRequest }: AdsUpdateRequest, opts?: OperationOpts): Observable<AdArrayResponse | AjaxResponse<AdArrayResponse>> {
        throwIfNullOrUndefined(adAccountId, 'adAccountId', 'adsUpdate');
        throwIfNullOrUndefined(adUpdateRequest, 'adUpdateRequest', 'adsUpdate');

        const headers: HttpHeaders = {
            'Content-Type': 'application/json',
            // oauth required
            ...(this.configuration.accessToken != null
                ? { Authorization: typeof this.configuration.accessToken === 'function'
                    ? this.configuration.accessToken('pinterest_oauth2', ['ads:write'])
                    : this.configuration.accessToken }
                : undefined
            ),
        };

        return this.request<AdArrayResponse>({
            url: '/ad_accounts/{ad_account_id}/ads'.replace('{ad_account_id}', encodeURI(adAccountId)),
            method: 'PATCH',
            headers,
            body: adUpdateRequest,
        }, opts?.responseOpts);
    };

}

/**
 * @export
 * @enum {string}
 */
export enum AdTargetingAnalyticsGetColumnsEnum {
    SpendInMicroDollar = 'SPEND_IN_MICRO_DOLLAR',
    PaidImpression = 'PAID_IMPRESSION',
    SpendInDollar = 'SPEND_IN_DOLLAR',
    CpcInMicroDollar = 'CPC_IN_MICRO_DOLLAR',
    EcpcInMicroDollar = 'ECPC_IN_MICRO_DOLLAR',
    EcpcInDollar = 'ECPC_IN_DOLLAR',
    Ctr = 'CTR',
    Ectr = 'ECTR',
    CampaignName = 'CAMPAIGN_NAME',
    PinId = 'PIN_ID',
    TotalEngagement = 'TOTAL_ENGAGEMENT',
    Engagement1 = 'ENGAGEMENT_1',
    Engagement2 = 'ENGAGEMENT_2',
    EcpeInDollar = 'ECPE_IN_DOLLAR',
    EngagementRate = 'ENGAGEMENT_RATE',
    EengagementRate = 'EENGAGEMENT_RATE',
    EcpmInMicroDollar = 'ECPM_IN_MICRO_DOLLAR',
    RepinRate = 'REPIN_RATE',
    Ctr2 = 'CTR_2',
    CampaignId = 'CAMPAIGN_ID',
    AdvertiserId = 'ADVERTISER_ID',
    AdAccountId = 'AD_ACCOUNT_ID',
    PinPromotionId = 'PIN_PROMOTION_ID',
    AdId = 'AD_ID',
    AdGroupId = 'AD_GROUP_ID',
    CampaignEntityStatus = 'CAMPAIGN_ENTITY_STATUS',
    CampaignObjectiveType = 'CAMPAIGN_OBJECTIVE_TYPE',
    CpmInMicroDollar = 'CPM_IN_MICRO_DOLLAR',
    CpmInDollar = 'CPM_IN_DOLLAR',
    AdGroupEntityStatus = 'AD_GROUP_ENTITY_STATUS',
    OrderLineId = 'ORDER_LINE_ID',
    OrderLineName = 'ORDER_LINE_NAME',
    Clickthrough1 = 'CLICKTHROUGH_1',
    Repin1 = 'REPIN_1',
    Impression1 = 'IMPRESSION_1',
    Impression1Gross = 'IMPRESSION_1_GROSS',
    Clickthrough1Gross = 'CLICKTHROUGH_1_GROSS',
    OutboundClick1 = 'OUTBOUND_CLICK_1',
    Clickthrough2 = 'CLICKTHROUGH_2',
    Repin2 = 'REPIN_2',
    Impression2 = 'IMPRESSION_2',
    OutboundClick2 = 'OUTBOUND_CLICK_2',
    TotalClickthrough = 'TOTAL_CLICKTHROUGH',
    TotalImpression = 'TOTAL_IMPRESSION',
    TotalImpressionUser = 'TOTAL_IMPRESSION_USER',
    TotalImpressionFrequency = 'TOTAL_IMPRESSION_FREQUENCY',
    CostPerOutboundClickInDollar = 'COST_PER_OUTBOUND_CLICK_IN_DOLLAR',
    TotalEngagementSignup = 'TOTAL_ENGAGEMENT_SIGNUP',
    TotalEngagementCheckout = 'TOTAL_ENGAGEMENT_CHECKOUT',
    TotalEngagementLead = 'TOTAL_ENGAGEMENT_LEAD',
    TotalClickSignup = 'TOTAL_CLICK_SIGNUP',
    TotalClickCheckout = 'TOTAL_CLICK_CHECKOUT',
    TotalClickAddToCart = 'TOTAL_CLICK_ADD_TO_CART',
    TotalClickLead = 'TOTAL_CLICK_LEAD',
    TotalViewSignup = 'TOTAL_VIEW_SIGNUP',
    TotalViewCheckout = 'TOTAL_VIEW_CHECKOUT',
    TotalViewAddToCart = 'TOTAL_VIEW_ADD_TO_CART',
    TotalViewLead = 'TOTAL_VIEW_LEAD',
    TotalConversions = 'TOTAL_CONVERSIONS',
    TotalEngagementSignupValueInMicroDollar = 'TOTAL_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalEngagementCheckoutValueInMicroDollar = 'TOTAL_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalClickSignupValueInMicroDollar = 'TOTAL_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalClickCheckoutValueInMicroDollar = 'TOTAL_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalViewSignupValueInMicroDollar = 'TOTAL_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalViewCheckoutValueInMicroDollar = 'TOTAL_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalWebSessions = 'TOTAL_WEB_SESSIONS',
    WebSessions1 = 'WEB_SESSIONS_1',
    WebSessions2 = 'WEB_SESSIONS_2',
    CampaignLifetimeSpendCap = 'CAMPAIGN_LIFETIME_SPEND_CAP',
    CampaignDailySpendCap = 'CAMPAIGN_DAILY_SPEND_CAP',
    TotalPageVisit = 'TOTAL_PAGE_VISIT',
    TotalSignup = 'TOTAL_SIGNUP',
    TotalCheckout = 'TOTAL_CHECKOUT',
    TotalCustom = 'TOTAL_CUSTOM',
    TotalLead = 'TOTAL_LEAD',
    TotalSignupValueInMicroDollar = 'TOTAL_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalCheckoutValueInMicroDollar = 'TOTAL_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalCustomValueInMicroDollar = 'TOTAL_CUSTOM_VALUE_IN_MICRO_DOLLAR',
    PageVisitCostPerAction = 'PAGE_VISIT_COST_PER_ACTION',
    PageVisitRoas = 'PAGE_VISIT_ROAS',
    CheckoutRoas = 'CHECKOUT_ROAS',
    CustomRoas = 'CUSTOM_ROAS',
    VideoMrcViews1 = 'VIDEO_MRC_VIEWS_1',
    Video3SecViews2 = 'VIDEO_3SEC_VIEWS_2',
    VideoP100Complete2 = 'VIDEO_P100_COMPLETE_2',
    VideoP0Combined2 = 'VIDEO_P0_COMBINED_2',
    VideoP25Combined2 = 'VIDEO_P25_COMBINED_2',
    VideoP50Combined2 = 'VIDEO_P50_COMBINED_2',
    VideoP75Combined2 = 'VIDEO_P75_COMBINED_2',
    VideoP95Combined2 = 'VIDEO_P95_COMBINED_2',
    VideoMrcViews2 = 'VIDEO_MRC_VIEWS_2',
    VideoLength = 'VIDEO_LENGTH',
    EcpvInDollar = 'ECPV_IN_DOLLAR',
    EcpcvInDollar = 'ECPCV_IN_DOLLAR',
    EcpcvP95InDollar = 'ECPCV_P95_IN_DOLLAR',
    TotalVideo3SecViews = 'TOTAL_VIDEO_3SEC_VIEWS',
    TotalVideoP100Complete = 'TOTAL_VIDEO_P100_COMPLETE',
    TotalVideoP0Combined = 'TOTAL_VIDEO_P0_COMBINED',
    TotalVideoP25Combined = 'TOTAL_VIDEO_P25_COMBINED',
    TotalVideoP50Combined = 'TOTAL_VIDEO_P50_COMBINED',
    TotalVideoP75Combined = 'TOTAL_VIDEO_P75_COMBINED',
    TotalVideoP95Combined = 'TOTAL_VIDEO_P95_COMBINED',
    TotalVideoMrcViews = 'TOTAL_VIDEO_MRC_VIEWS',
    TotalVideoAvgWatchtimeInSecond = 'TOTAL_VIDEO_AVG_WATCHTIME_IN_SECOND',
    TotalRepinRate = 'TOTAL_REPIN_RATE',
    WebCheckoutCostPerAction = 'WEB_CHECKOUT_COST_PER_ACTION',
    WebCheckoutRoas = 'WEB_CHECKOUT_ROAS',
    TotalWebCheckout = 'TOTAL_WEB_CHECKOUT',
    TotalWebCheckoutValueInMicroDollar = 'TOTAL_WEB_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalWebClickCheckout = 'TOTAL_WEB_CLICK_CHECKOUT',
    TotalWebClickCheckoutValueInMicroDollar = 'TOTAL_WEB_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalWebEngagementCheckout = 'TOTAL_WEB_ENGAGEMENT_CHECKOUT',
    TotalWebEngagementCheckoutValueInMicroDollar = 'TOTAL_WEB_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalWebViewCheckout = 'TOTAL_WEB_VIEW_CHECKOUT',
    TotalWebViewCheckoutValueInMicroDollar = 'TOTAL_WEB_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    InappCheckoutCostPerAction = 'INAPP_CHECKOUT_COST_PER_ACTION',
    TotalOfflineCheckout = 'TOTAL_OFFLINE_CHECKOUT',
    IdeaPinProductTagVisit1 = 'IDEA_PIN_PRODUCT_TAG_VISIT_1',
    IdeaPinProductTagVisit2 = 'IDEA_PIN_PRODUCT_TAG_VISIT_2',
    TotalIdeaPinProductTagVisit = 'TOTAL_IDEA_PIN_PRODUCT_TAG_VISIT',
    Leads = 'LEADS',
    CostPerLead = 'COST_PER_LEAD',
    QuizCompleted = 'QUIZ_COMPLETED',
    QuizCompletionRate = 'QUIZ_COMPLETION_RATE',
    ShowcasePinClickthrough = 'SHOWCASE_PIN_CLICKTHROUGH',
    ShowcaseSubpageClickthrough = 'SHOWCASE_SUBPAGE_CLICKTHROUGH',
    ShowcaseSubpinClickthrough = 'SHOWCASE_SUBPIN_CLICKTHROUGH',
    ShowcaseSubpageImpression = 'SHOWCASE_SUBPAGE_IMPRESSION',
    ShowcaseSubpinImpression = 'SHOWCASE_SUBPIN_IMPRESSION',
    ShowcaseSubpageSwipeLeft = 'SHOWCASE_SUBPAGE_SWIPE_LEFT',
    ShowcaseSubpageSwipeRight = 'SHOWCASE_SUBPAGE_SWIPE_RIGHT',
    ShowcaseSubpinSwipeLeft = 'SHOWCASE_SUBPIN_SWIPE_LEFT',
    ShowcaseSubpinSwipeRight = 'SHOWCASE_SUBPIN_SWIPE_RIGHT',
    ShowcaseSubpageRepin = 'SHOWCASE_SUBPAGE_REPIN',
    ShowcaseSubpinRepin = 'SHOWCASE_SUBPIN_REPIN',
    ShowcaseSubpageCloseup = 'SHOWCASE_SUBPAGE_CLOSEUP',
    ShowcaseCardThumbnailSwipeForward = 'SHOWCASE_CARD_THUMBNAIL_SWIPE_FORWARD',
    ShowcaseCardThumbnailSwipeBackward = 'SHOWCASE_CARD_THUMBNAIL_SWIPE_BACKWARD',
    ShowcaseAverageSubpageCloseupPerSession = 'SHOWCASE_AVERAGE_SUBPAGE_CLOSEUP_PER_SESSION',
    TotalCheckoutConversionRate = 'TOTAL_CHECKOUT_CONVERSION_RATE',
    TotalViewCategoryConversionRate = 'TOTAL_VIEW_CATEGORY_CONVERSION_RATE',
    TotalAddToCartConversionRate = 'TOTAL_ADD_TO_CART_CONVERSION_RATE',
    TotalSignupConversionRate = 'TOTAL_SIGNUP_CONVERSION_RATE',
    TotalPageVisitConversionRate = 'TOTAL_PAGE_VISIT_CONVERSION_RATE',
    TotalLeadConversionRate = 'TOTAL_LEAD_CONVERSION_RATE',
    TotalSearchConversionRate = 'TOTAL_SEARCH_CONVERSION_RATE',
    TotalWatchVideoConversionRate = 'TOTAL_WATCH_VIDEO_CONVERSION_RATE',
    TotalUnknownConversionRate = 'TOTAL_UNKNOWN_CONVERSION_RATE',
    TotalCustomConversionRate = 'TOTAL_CUSTOM_CONVERSION_RATE'
}
/**
 * @export
 * @enum {string}
 */
export enum AdTargetingAnalyticsGetClickWindowDaysEnum {
    NUMBER_0 = 0,
    NUMBER_1 = 1,
    NUMBER_7 = 7,
    NUMBER_14 = 14,
    NUMBER_30 = 30,
    NUMBER_60 = 60
}
/**
 * @export
 * @enum {string}
 */
export enum AdTargetingAnalyticsGetEngagementWindowDaysEnum {
    NUMBER_0 = 0,
    NUMBER_1 = 1,
    NUMBER_7 = 7,
    NUMBER_14 = 14,
    NUMBER_30 = 30,
    NUMBER_60 = 60
}
/**
 * @export
 * @enum {string}
 */
export enum AdTargetingAnalyticsGetViewWindowDaysEnum {
    NUMBER_0 = 0,
    NUMBER_1 = 1,
    NUMBER_7 = 7,
    NUMBER_14 = 14,
    NUMBER_30 = 30,
    NUMBER_60 = 60
}
/**
 * @export
 * @enum {string}
 */
export enum AdTargetingAnalyticsGetConversionReportTimeEnum {
    AdAction = 'TIME_OF_AD_ACTION',
    Conversion = 'TIME_OF_CONVERSION'
}
/**
 * @export
 * @enum {string}
 */
export enum AdsAnalyticsColumnsEnum {
    SpendInMicroDollar = 'SPEND_IN_MICRO_DOLLAR',
    PaidImpression = 'PAID_IMPRESSION',
    SpendInDollar = 'SPEND_IN_DOLLAR',
    CpcInMicroDollar = 'CPC_IN_MICRO_DOLLAR',
    EcpcInMicroDollar = 'ECPC_IN_MICRO_DOLLAR',
    EcpcInDollar = 'ECPC_IN_DOLLAR',
    Ctr = 'CTR',
    Ectr = 'ECTR',
    CampaignName = 'CAMPAIGN_NAME',
    PinId = 'PIN_ID',
    TotalEngagement = 'TOTAL_ENGAGEMENT',
    Engagement1 = 'ENGAGEMENT_1',
    Engagement2 = 'ENGAGEMENT_2',
    EcpeInDollar = 'ECPE_IN_DOLLAR',
    EngagementRate = 'ENGAGEMENT_RATE',
    EengagementRate = 'EENGAGEMENT_RATE',
    EcpmInMicroDollar = 'ECPM_IN_MICRO_DOLLAR',
    RepinRate = 'REPIN_RATE',
    Ctr2 = 'CTR_2',
    CampaignId = 'CAMPAIGN_ID',
    AdvertiserId = 'ADVERTISER_ID',
    AdAccountId = 'AD_ACCOUNT_ID',
    PinPromotionId = 'PIN_PROMOTION_ID',
    AdId = 'AD_ID',
    AdGroupId = 'AD_GROUP_ID',
    CampaignEntityStatus = 'CAMPAIGN_ENTITY_STATUS',
    CampaignObjectiveType = 'CAMPAIGN_OBJECTIVE_TYPE',
    CpmInMicroDollar = 'CPM_IN_MICRO_DOLLAR',
    CpmInDollar = 'CPM_IN_DOLLAR',
    AdGroupEntityStatus = 'AD_GROUP_ENTITY_STATUS',
    OrderLineId = 'ORDER_LINE_ID',
    OrderLineName = 'ORDER_LINE_NAME',
    Clickthrough1 = 'CLICKTHROUGH_1',
    Repin1 = 'REPIN_1',
    Impression1 = 'IMPRESSION_1',
    Impression1Gross = 'IMPRESSION_1_GROSS',
    Clickthrough1Gross = 'CLICKTHROUGH_1_GROSS',
    OutboundClick1 = 'OUTBOUND_CLICK_1',
    Clickthrough2 = 'CLICKTHROUGH_2',
    Repin2 = 'REPIN_2',
    Impression2 = 'IMPRESSION_2',
    OutboundClick2 = 'OUTBOUND_CLICK_2',
    TotalClickthrough = 'TOTAL_CLICKTHROUGH',
    TotalImpression = 'TOTAL_IMPRESSION',
    TotalImpressionUser = 'TOTAL_IMPRESSION_USER',
    TotalImpressionFrequency = 'TOTAL_IMPRESSION_FREQUENCY',
    CostPerOutboundClickInDollar = 'COST_PER_OUTBOUND_CLICK_IN_DOLLAR',
    TotalEngagementSignup = 'TOTAL_ENGAGEMENT_SIGNUP',
    TotalEngagementCheckout = 'TOTAL_ENGAGEMENT_CHECKOUT',
    TotalEngagementLead = 'TOTAL_ENGAGEMENT_LEAD',
    TotalClickSignup = 'TOTAL_CLICK_SIGNUP',
    TotalClickCheckout = 'TOTAL_CLICK_CHECKOUT',
    TotalClickAddToCart = 'TOTAL_CLICK_ADD_TO_CART',
    TotalClickLead = 'TOTAL_CLICK_LEAD',
    TotalViewSignup = 'TOTAL_VIEW_SIGNUP',
    TotalViewCheckout = 'TOTAL_VIEW_CHECKOUT',
    TotalViewAddToCart = 'TOTAL_VIEW_ADD_TO_CART',
    TotalViewLead = 'TOTAL_VIEW_LEAD',
    TotalConversions = 'TOTAL_CONVERSIONS',
    TotalEngagementSignupValueInMicroDollar = 'TOTAL_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalEngagementCheckoutValueInMicroDollar = 'TOTAL_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalClickSignupValueInMicroDollar = 'TOTAL_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalClickCheckoutValueInMicroDollar = 'TOTAL_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalViewSignupValueInMicroDollar = 'TOTAL_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalViewCheckoutValueInMicroDollar = 'TOTAL_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalWebSessions = 'TOTAL_WEB_SESSIONS',
    WebSessions1 = 'WEB_SESSIONS_1',
    WebSessions2 = 'WEB_SESSIONS_2',
    CampaignLifetimeSpendCap = 'CAMPAIGN_LIFETIME_SPEND_CAP',
    CampaignDailySpendCap = 'CAMPAIGN_DAILY_SPEND_CAP',
    TotalPageVisit = 'TOTAL_PAGE_VISIT',
    TotalSignup = 'TOTAL_SIGNUP',
    TotalCheckout = 'TOTAL_CHECKOUT',
    TotalCustom = 'TOTAL_CUSTOM',
    TotalLead = 'TOTAL_LEAD',
    TotalSignupValueInMicroDollar = 'TOTAL_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalCheckoutValueInMicroDollar = 'TOTAL_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalCustomValueInMicroDollar = 'TOTAL_CUSTOM_VALUE_IN_MICRO_DOLLAR',
    PageVisitCostPerAction = 'PAGE_VISIT_COST_PER_ACTION',
    PageVisitRoas = 'PAGE_VISIT_ROAS',
    CheckoutRoas = 'CHECKOUT_ROAS',
    CustomRoas = 'CUSTOM_ROAS',
    VideoMrcViews1 = 'VIDEO_MRC_VIEWS_1',
    Video3SecViews2 = 'VIDEO_3SEC_VIEWS_2',
    VideoP100Complete2 = 'VIDEO_P100_COMPLETE_2',
    VideoP0Combined2 = 'VIDEO_P0_COMBINED_2',
    VideoP25Combined2 = 'VIDEO_P25_COMBINED_2',
    VideoP50Combined2 = 'VIDEO_P50_COMBINED_2',
    VideoP75Combined2 = 'VIDEO_P75_COMBINED_2',
    VideoP95Combined2 = 'VIDEO_P95_COMBINED_2',
    VideoMrcViews2 = 'VIDEO_MRC_VIEWS_2',
    VideoLength = 'VIDEO_LENGTH',
    EcpvInDollar = 'ECPV_IN_DOLLAR',
    EcpcvInDollar = 'ECPCV_IN_DOLLAR',
    EcpcvP95InDollar = 'ECPCV_P95_IN_DOLLAR',
    TotalVideo3SecViews = 'TOTAL_VIDEO_3SEC_VIEWS',
    TotalVideoP100Complete = 'TOTAL_VIDEO_P100_COMPLETE',
    TotalVideoP0Combined = 'TOTAL_VIDEO_P0_COMBINED',
    TotalVideoP25Combined = 'TOTAL_VIDEO_P25_COMBINED',
    TotalVideoP50Combined = 'TOTAL_VIDEO_P50_COMBINED',
    TotalVideoP75Combined = 'TOTAL_VIDEO_P75_COMBINED',
    TotalVideoP95Combined = 'TOTAL_VIDEO_P95_COMBINED',
    TotalVideoMrcViews = 'TOTAL_VIDEO_MRC_VIEWS',
    TotalVideoAvgWatchtimeInSecond = 'TOTAL_VIDEO_AVG_WATCHTIME_IN_SECOND',
    TotalRepinRate = 'TOTAL_REPIN_RATE',
    WebCheckoutCostPerAction = 'WEB_CHECKOUT_COST_PER_ACTION',
    WebCheckoutRoas = 'WEB_CHECKOUT_ROAS',
    TotalWebCheckout = 'TOTAL_WEB_CHECKOUT',
    TotalWebCheckoutValueInMicroDollar = 'TOTAL_WEB_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalWebClickCheckout = 'TOTAL_WEB_CLICK_CHECKOUT',
    TotalWebClickCheckoutValueInMicroDollar = 'TOTAL_WEB_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalWebEngagementCheckout = 'TOTAL_WEB_ENGAGEMENT_CHECKOUT',
    TotalWebEngagementCheckoutValueInMicroDollar = 'TOTAL_WEB_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalWebViewCheckout = 'TOTAL_WEB_VIEW_CHECKOUT',
    TotalWebViewCheckoutValueInMicroDollar = 'TOTAL_WEB_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    InappCheckoutCostPerAction = 'INAPP_CHECKOUT_COST_PER_ACTION',
    TotalOfflineCheckout = 'TOTAL_OFFLINE_CHECKOUT',
    IdeaPinProductTagVisit1 = 'IDEA_PIN_PRODUCT_TAG_VISIT_1',
    IdeaPinProductTagVisit2 = 'IDEA_PIN_PRODUCT_TAG_VISIT_2',
    TotalIdeaPinProductTagVisit = 'TOTAL_IDEA_PIN_PRODUCT_TAG_VISIT',
    Leads = 'LEADS',
    CostPerLead = 'COST_PER_LEAD',
    QuizCompleted = 'QUIZ_COMPLETED',
    QuizCompletionRate = 'QUIZ_COMPLETION_RATE',
    ShowcasePinClickthrough = 'SHOWCASE_PIN_CLICKTHROUGH',
    ShowcaseSubpageClickthrough = 'SHOWCASE_SUBPAGE_CLICKTHROUGH',
    ShowcaseSubpinClickthrough = 'SHOWCASE_SUBPIN_CLICKTHROUGH',
    ShowcaseSubpageImpression = 'SHOWCASE_SUBPAGE_IMPRESSION',
    ShowcaseSubpinImpression = 'SHOWCASE_SUBPIN_IMPRESSION',
    ShowcaseSubpageSwipeLeft = 'SHOWCASE_SUBPAGE_SWIPE_LEFT',
    ShowcaseSubpageSwipeRight = 'SHOWCASE_SUBPAGE_SWIPE_RIGHT',
    ShowcaseSubpinSwipeLeft = 'SHOWCASE_SUBPIN_SWIPE_LEFT',
    ShowcaseSubpinSwipeRight = 'SHOWCASE_SUBPIN_SWIPE_RIGHT',
    ShowcaseSubpageRepin = 'SHOWCASE_SUBPAGE_REPIN',
    ShowcaseSubpinRepin = 'SHOWCASE_SUBPIN_REPIN',
    ShowcaseSubpageCloseup = 'SHOWCASE_SUBPAGE_CLOSEUP',
    ShowcaseCardThumbnailSwipeForward = 'SHOWCASE_CARD_THUMBNAIL_SWIPE_FORWARD',
    ShowcaseCardThumbnailSwipeBackward = 'SHOWCASE_CARD_THUMBNAIL_SWIPE_BACKWARD',
    ShowcaseAverageSubpageCloseupPerSession = 'SHOWCASE_AVERAGE_SUBPAGE_CLOSEUP_PER_SESSION',
    TotalCheckoutConversionRate = 'TOTAL_CHECKOUT_CONVERSION_RATE',
    TotalViewCategoryConversionRate = 'TOTAL_VIEW_CATEGORY_CONVERSION_RATE',
    TotalAddToCartConversionRate = 'TOTAL_ADD_TO_CART_CONVERSION_RATE',
    TotalSignupConversionRate = 'TOTAL_SIGNUP_CONVERSION_RATE',
    TotalPageVisitConversionRate = 'TOTAL_PAGE_VISIT_CONVERSION_RATE',
    TotalLeadConversionRate = 'TOTAL_LEAD_CONVERSION_RATE',
    TotalSearchConversionRate = 'TOTAL_SEARCH_CONVERSION_RATE',
    TotalWatchVideoConversionRate = 'TOTAL_WATCH_VIDEO_CONVERSION_RATE',
    TotalUnknownConversionRate = 'TOTAL_UNKNOWN_CONVERSION_RATE',
    TotalCustomConversionRate = 'TOTAL_CUSTOM_CONVERSION_RATE'
}
/**
 * @export
 * @enum {string}
 */
export enum AdsAnalyticsClickWindowDaysEnum {
    NUMBER_0 = 0,
    NUMBER_1 = 1,
    NUMBER_7 = 7,
    NUMBER_14 = 14,
    NUMBER_30 = 30,
    NUMBER_60 = 60
}
/**
 * @export
 * @enum {string}
 */
export enum AdsAnalyticsEngagementWindowDaysEnum {
    NUMBER_0 = 0,
    NUMBER_1 = 1,
    NUMBER_7 = 7,
    NUMBER_14 = 14,
    NUMBER_30 = 30,
    NUMBER_60 = 60
}
/**
 * @export
 * @enum {string}
 */
export enum AdsAnalyticsViewWindowDaysEnum {
    NUMBER_0 = 0,
    NUMBER_1 = 1,
    NUMBER_7 = 7,
    NUMBER_14 = 14,
    NUMBER_30 = 30,
    NUMBER_60 = 60
}
/**
 * @export
 * @enum {string}
 */
export enum AdsAnalyticsConversionReportTimeEnum {
    AdAction = 'TIME_OF_AD_ACTION',
    Conversion = 'TIME_OF_CONVERSION'
}
/**
 * @export
 * @enum {string}
 */
export enum AdsListEntityStatusesEnum {
    Active = 'ACTIVE',
    Paused = 'PAUSED',
    Archived = 'ARCHIVED',
    Draft = 'DRAFT',
    DeletedDraft = 'DELETED_DRAFT'
}
/**
 * @export
 * @enum {string}
 */
export enum AdsListOrderEnum {
    Ascending = 'ASCENDING',
    Descending = 'DESCENDING'
}
