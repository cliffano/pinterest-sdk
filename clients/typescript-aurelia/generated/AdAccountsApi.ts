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

import { autoinject } from 'aurelia-framework';
import { HttpClient } from 'aurelia-http-client';
import { Api } from './Api';
import { AuthStorage } from './AuthStorage';
import {
  AdsAnalyticsCreateAsyncResponse,
  AdAccount,
  TemplatesList200Response,
  Granularity,
  ConversionReportAttributionType,
  AdAccountCreateRequest,
  AdsAnalyticsCreateAsyncRequest,
  CreateMMMReportResponse,
  AdAccountsList200Response,
  AdAccountAnalyticsResponseInner,
  AdsAnalyticsGetAsyncResponse,
  MetricsResponse,
  CreateMMMReportRequest,
  GetMMMReportResponse,
} from './models';

/**
 * adAccountAnalytics - parameters interface
 */
export interface IAdAccountAnalyticsParams {
  adAccountId: string;
  startDate: string;
  endDate: string;
  columns: Array<'SPEND_IN_MICRO_DOLLAR' | 'PAID_IMPRESSION' | 'SPEND_IN_DOLLAR' | 'CPC_IN_MICRO_DOLLAR' | 'ECPC_IN_MICRO_DOLLAR' | 'ECPC_IN_DOLLAR' | 'CTR' | 'ECTR' | 'CAMPAIGN_NAME' | 'PIN_ID' | 'TOTAL_ENGAGEMENT' | 'ENGAGEMENT_1' | 'ENGAGEMENT_2' | 'ECPE_IN_DOLLAR' | 'ENGAGEMENT_RATE' | 'EENGAGEMENT_RATE' | 'ECPM_IN_MICRO_DOLLAR' | 'REPIN_RATE' | 'CTR_2' | 'CAMPAIGN_ID' | 'ADVERTISER_ID' | 'AD_ACCOUNT_ID' | 'PIN_PROMOTION_ID' | 'AD_ID' | 'AD_GROUP_ID' | 'CAMPAIGN_ENTITY_STATUS' | 'CAMPAIGN_OBJECTIVE_TYPE' | 'CPM_IN_MICRO_DOLLAR' | 'CPM_IN_DOLLAR' | 'AD_GROUP_ENTITY_STATUS' | 'ORDER_LINE_ID' | 'ORDER_LINE_NAME' | 'CLICKTHROUGH_1' | 'REPIN_1' | 'IMPRESSION_1' | 'IMPRESSION_1_GROSS' | 'CLICKTHROUGH_1_GROSS' | 'OUTBOUND_CLICK_1' | 'CLICKTHROUGH_2' | 'REPIN_2' | 'IMPRESSION_2' | 'OUTBOUND_CLICK_2' | 'TOTAL_CLICKTHROUGH' | 'TOTAL_IMPRESSION' | 'TOTAL_IMPRESSION_USER' | 'TOTAL_IMPRESSION_FREQUENCY' | 'COST_PER_OUTBOUND_CLICK_IN_DOLLAR' | 'TOTAL_ENGAGEMENT_SIGNUP' | 'TOTAL_ENGAGEMENT_CHECKOUT' | 'TOTAL_ENGAGEMENT_LEAD' | 'TOTAL_CLICK_SIGNUP' | 'TOTAL_CLICK_CHECKOUT' | 'TOTAL_CLICK_ADD_TO_CART' | 'TOTAL_CLICK_LEAD' | 'TOTAL_VIEW_SIGNUP' | 'TOTAL_VIEW_CHECKOUT' | 'TOTAL_VIEW_ADD_TO_CART' | 'TOTAL_VIEW_LEAD' | 'TOTAL_CONVERSIONS' | 'TOTAL_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_WEB_SESSIONS' | 'WEB_SESSIONS_1' | 'WEB_SESSIONS_2' | 'CAMPAIGN_LIFETIME_SPEND_CAP' | 'CAMPAIGN_DAILY_SPEND_CAP' | 'TOTAL_PAGE_VISIT' | 'TOTAL_SIGNUP' | 'TOTAL_CHECKOUT' | 'TOTAL_CUSTOM' | 'TOTAL_LEAD' | 'TOTAL_SIGNUP_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_CUSTOM_VALUE_IN_MICRO_DOLLAR' | 'PAGE_VISIT_COST_PER_ACTION' | 'PAGE_VISIT_ROAS' | 'CHECKOUT_ROAS' | 'CUSTOM_ROAS' | 'VIDEO_MRC_VIEWS_1' | 'VIDEO_3SEC_VIEWS_2' | 'VIDEO_P100_COMPLETE_2' | 'VIDEO_P0_COMBINED_2' | 'VIDEO_P25_COMBINED_2' | 'VIDEO_P50_COMBINED_2' | 'VIDEO_P75_COMBINED_2' | 'VIDEO_P95_COMBINED_2' | 'VIDEO_MRC_VIEWS_2' | 'VIDEO_LENGTH' | 'ECPV_IN_DOLLAR' | 'ECPCV_IN_DOLLAR' | 'ECPCV_P95_IN_DOLLAR' | 'TOTAL_VIDEO_3SEC_VIEWS' | 'TOTAL_VIDEO_P100_COMPLETE' | 'TOTAL_VIDEO_P0_COMBINED' | 'TOTAL_VIDEO_P25_COMBINED' | 'TOTAL_VIDEO_P50_COMBINED' | 'TOTAL_VIDEO_P75_COMBINED' | 'TOTAL_VIDEO_P95_COMBINED' | 'TOTAL_VIDEO_MRC_VIEWS' | 'TOTAL_VIDEO_AVG_WATCHTIME_IN_SECOND' | 'TOTAL_REPIN_RATE' | 'WEB_CHECKOUT_COST_PER_ACTION' | 'WEB_CHECKOUT_ROAS' | 'TOTAL_WEB_CHECKOUT' | 'TOTAL_WEB_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_WEB_CLICK_CHECKOUT' | 'TOTAL_WEB_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_WEB_ENGAGEMENT_CHECKOUT' | 'TOTAL_WEB_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_WEB_VIEW_CHECKOUT' | 'TOTAL_WEB_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'INAPP_CHECKOUT_COST_PER_ACTION' | 'TOTAL_OFFLINE_CHECKOUT' | 'IDEA_PIN_PRODUCT_TAG_VISIT_1' | 'IDEA_PIN_PRODUCT_TAG_VISIT_2' | 'TOTAL_IDEA_PIN_PRODUCT_TAG_VISIT' | 'LEADS' | 'COST_PER_LEAD' | 'QUIZ_COMPLETED' | 'QUIZ_COMPLETION_RATE' | 'SHOWCASE_PIN_CLICKTHROUGH' | 'SHOWCASE_SUBPAGE_CLICKTHROUGH' | 'SHOWCASE_SUBPIN_CLICKTHROUGH' | 'SHOWCASE_SUBPAGE_IMPRESSION' | 'SHOWCASE_SUBPIN_IMPRESSION' | 'SHOWCASE_SUBPAGE_SWIPE_LEFT' | 'SHOWCASE_SUBPAGE_SWIPE_RIGHT' | 'SHOWCASE_SUBPIN_SWIPE_LEFT' | 'SHOWCASE_SUBPIN_SWIPE_RIGHT' | 'SHOWCASE_SUBPAGE_REPIN' | 'SHOWCASE_SUBPIN_REPIN' | 'SHOWCASE_SUBPAGE_CLOSEUP' | 'SHOWCASE_CARD_THUMBNAIL_SWIPE_FORWARD' | 'SHOWCASE_CARD_THUMBNAIL_SWIPE_BACKWARD' | 'SHOWCASE_AVERAGE_SUBPAGE_CLOSEUP_PER_SESSION' | 'TOTAL_CHECKOUT_CONVERSION_RATE' | 'TOTAL_VIEW_CATEGORY_CONVERSION_RATE' | 'TOTAL_ADD_TO_CART_CONVERSION_RATE' | 'TOTAL_SIGNUP_CONVERSION_RATE' | 'TOTAL_PAGE_VISIT_CONVERSION_RATE' | 'TOTAL_LEAD_CONVERSION_RATE' | 'TOTAL_SEARCH_CONVERSION_RATE' | 'TOTAL_WATCH_VIDEO_CONVERSION_RATE' | 'TOTAL_UNKNOWN_CONVERSION_RATE' | 'TOTAL_CUSTOM_CONVERSION_RATE'>;
  granularity: Granularity;
  clickWindowDays?: 0 | 1 | 7 | 14 | 30 | 60;
  engagementWindowDays?: 0 | 1 | 7 | 14 | 30 | 60;
  viewWindowDays?: 0 | 1 | 7 | 14 | 30 | 60;
  conversionReportTime?: 'TIME_OF_AD_ACTION' | 'TIME_OF_CONVERSION';
}

/**
 * adAccountTargetingAnalyticsGet - parameters interface
 */
export interface IAdAccountTargetingAnalyticsGetParams {
  adAccountId: string;
  startDate: string;
  endDate: string;
  targetingTypes: Array<AdsAnalyticsTargetingType>;
  columns: Array<'SPEND_IN_MICRO_DOLLAR' | 'PAID_IMPRESSION' | 'SPEND_IN_DOLLAR' | 'CPC_IN_MICRO_DOLLAR' | 'ECPC_IN_MICRO_DOLLAR' | 'ECPC_IN_DOLLAR' | 'CTR' | 'ECTR' | 'CAMPAIGN_NAME' | 'PIN_ID' | 'TOTAL_ENGAGEMENT' | 'ENGAGEMENT_1' | 'ENGAGEMENT_2' | 'ECPE_IN_DOLLAR' | 'ENGAGEMENT_RATE' | 'EENGAGEMENT_RATE' | 'ECPM_IN_MICRO_DOLLAR' | 'REPIN_RATE' | 'CTR_2' | 'CAMPAIGN_ID' | 'ADVERTISER_ID' | 'AD_ACCOUNT_ID' | 'PIN_PROMOTION_ID' | 'AD_ID' | 'AD_GROUP_ID' | 'CAMPAIGN_ENTITY_STATUS' | 'CAMPAIGN_OBJECTIVE_TYPE' | 'CPM_IN_MICRO_DOLLAR' | 'CPM_IN_DOLLAR' | 'AD_GROUP_ENTITY_STATUS' | 'ORDER_LINE_ID' | 'ORDER_LINE_NAME' | 'CLICKTHROUGH_1' | 'REPIN_1' | 'IMPRESSION_1' | 'IMPRESSION_1_GROSS' | 'CLICKTHROUGH_1_GROSS' | 'OUTBOUND_CLICK_1' | 'CLICKTHROUGH_2' | 'REPIN_2' | 'IMPRESSION_2' | 'OUTBOUND_CLICK_2' | 'TOTAL_CLICKTHROUGH' | 'TOTAL_IMPRESSION' | 'TOTAL_IMPRESSION_USER' | 'TOTAL_IMPRESSION_FREQUENCY' | 'COST_PER_OUTBOUND_CLICK_IN_DOLLAR' | 'TOTAL_ENGAGEMENT_SIGNUP' | 'TOTAL_ENGAGEMENT_CHECKOUT' | 'TOTAL_ENGAGEMENT_LEAD' | 'TOTAL_CLICK_SIGNUP' | 'TOTAL_CLICK_CHECKOUT' | 'TOTAL_CLICK_ADD_TO_CART' | 'TOTAL_CLICK_LEAD' | 'TOTAL_VIEW_SIGNUP' | 'TOTAL_VIEW_CHECKOUT' | 'TOTAL_VIEW_ADD_TO_CART' | 'TOTAL_VIEW_LEAD' | 'TOTAL_CONVERSIONS' | 'TOTAL_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_WEB_SESSIONS' | 'WEB_SESSIONS_1' | 'WEB_SESSIONS_2' | 'CAMPAIGN_LIFETIME_SPEND_CAP' | 'CAMPAIGN_DAILY_SPEND_CAP' | 'TOTAL_PAGE_VISIT' | 'TOTAL_SIGNUP' | 'TOTAL_CHECKOUT' | 'TOTAL_CUSTOM' | 'TOTAL_LEAD' | 'TOTAL_SIGNUP_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_CUSTOM_VALUE_IN_MICRO_DOLLAR' | 'PAGE_VISIT_COST_PER_ACTION' | 'PAGE_VISIT_ROAS' | 'CHECKOUT_ROAS' | 'CUSTOM_ROAS' | 'VIDEO_MRC_VIEWS_1' | 'VIDEO_3SEC_VIEWS_2' | 'VIDEO_P100_COMPLETE_2' | 'VIDEO_P0_COMBINED_2' | 'VIDEO_P25_COMBINED_2' | 'VIDEO_P50_COMBINED_2' | 'VIDEO_P75_COMBINED_2' | 'VIDEO_P95_COMBINED_2' | 'VIDEO_MRC_VIEWS_2' | 'VIDEO_LENGTH' | 'ECPV_IN_DOLLAR' | 'ECPCV_IN_DOLLAR' | 'ECPCV_P95_IN_DOLLAR' | 'TOTAL_VIDEO_3SEC_VIEWS' | 'TOTAL_VIDEO_P100_COMPLETE' | 'TOTAL_VIDEO_P0_COMBINED' | 'TOTAL_VIDEO_P25_COMBINED' | 'TOTAL_VIDEO_P50_COMBINED' | 'TOTAL_VIDEO_P75_COMBINED' | 'TOTAL_VIDEO_P95_COMBINED' | 'TOTAL_VIDEO_MRC_VIEWS' | 'TOTAL_VIDEO_AVG_WATCHTIME_IN_SECOND' | 'TOTAL_REPIN_RATE' | 'WEB_CHECKOUT_COST_PER_ACTION' | 'WEB_CHECKOUT_ROAS' | 'TOTAL_WEB_CHECKOUT' | 'TOTAL_WEB_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_WEB_CLICK_CHECKOUT' | 'TOTAL_WEB_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_WEB_ENGAGEMENT_CHECKOUT' | 'TOTAL_WEB_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_WEB_VIEW_CHECKOUT' | 'TOTAL_WEB_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'INAPP_CHECKOUT_COST_PER_ACTION' | 'TOTAL_OFFLINE_CHECKOUT' | 'IDEA_PIN_PRODUCT_TAG_VISIT_1' | 'IDEA_PIN_PRODUCT_TAG_VISIT_2' | 'TOTAL_IDEA_PIN_PRODUCT_TAG_VISIT' | 'LEADS' | 'COST_PER_LEAD' | 'QUIZ_COMPLETED' | 'QUIZ_COMPLETION_RATE' | 'SHOWCASE_PIN_CLICKTHROUGH' | 'SHOWCASE_SUBPAGE_CLICKTHROUGH' | 'SHOWCASE_SUBPIN_CLICKTHROUGH' | 'SHOWCASE_SUBPAGE_IMPRESSION' | 'SHOWCASE_SUBPIN_IMPRESSION' | 'SHOWCASE_SUBPAGE_SWIPE_LEFT' | 'SHOWCASE_SUBPAGE_SWIPE_RIGHT' | 'SHOWCASE_SUBPIN_SWIPE_LEFT' | 'SHOWCASE_SUBPIN_SWIPE_RIGHT' | 'SHOWCASE_SUBPAGE_REPIN' | 'SHOWCASE_SUBPIN_REPIN' | 'SHOWCASE_SUBPAGE_CLOSEUP' | 'SHOWCASE_CARD_THUMBNAIL_SWIPE_FORWARD' | 'SHOWCASE_CARD_THUMBNAIL_SWIPE_BACKWARD' | 'SHOWCASE_AVERAGE_SUBPAGE_CLOSEUP_PER_SESSION' | 'TOTAL_CHECKOUT_CONVERSION_RATE' | 'TOTAL_VIEW_CATEGORY_CONVERSION_RATE' | 'TOTAL_ADD_TO_CART_CONVERSION_RATE' | 'TOTAL_SIGNUP_CONVERSION_RATE' | 'TOTAL_PAGE_VISIT_CONVERSION_RATE' | 'TOTAL_LEAD_CONVERSION_RATE' | 'TOTAL_SEARCH_CONVERSION_RATE' | 'TOTAL_WATCH_VIDEO_CONVERSION_RATE' | 'TOTAL_UNKNOWN_CONVERSION_RATE' | 'TOTAL_CUSTOM_CONVERSION_RATE'>;
  granularity: Granularity;
  clickWindowDays?: 0 | 1 | 7 | 14 | 30 | 60;
  engagementWindowDays?: 0 | 1 | 7 | 14 | 30 | 60;
  viewWindowDays?: 0 | 1 | 7 | 14 | 30 | 60;
  conversionReportTime?: 'TIME_OF_AD_ACTION' | 'TIME_OF_CONVERSION';
  attributionTypes?: ConversionReportAttributionType;
}

/**
 * adAccountsCreate - parameters interface
 */
export interface IAdAccountsCreateParams {
  adAccountCreateRequest: AdAccountCreateRequest;
}

/**
 * adAccountsGet - parameters interface
 */
export interface IAdAccountsGetParams {
  adAccountId: string;
}

/**
 * adAccountsList - parameters interface
 */
export interface IAdAccountsListParams {
  bookmark?: string;
  pageSize?: number;
  includeSharedAccounts?: boolean;
}

/**
 * analyticsCreateMmmReport - parameters interface
 */
export interface IAnalyticsCreateMmmReportParams {
  adAccountId: string;
  createMMMReportRequest: CreateMMMReportRequest;
}

/**
 * analyticsCreateReport - parameters interface
 */
export interface IAnalyticsCreateReportParams {
  adAccountId: string;
  adsAnalyticsCreateAsyncRequest: AdsAnalyticsCreateAsyncRequest;
}

/**
 * analyticsCreateTemplateReport - parameters interface
 */
export interface IAnalyticsCreateTemplateReportParams {
  adAccountId: string;
  templateId: string;
  startDate?: string;
  endDate?: string;
  granularity?: Granularity;
}

/**
 * analyticsGetMmmReport - parameters interface
 */
export interface IAnalyticsGetMmmReportParams {
  adAccountId: string;
  token: string;
}

/**
 * analyticsGetReport - parameters interface
 */
export interface IAnalyticsGetReportParams {
  adAccountId: string;
  token: string;
}

/**
 * sandboxDelete - parameters interface
 */
export interface ISandboxDeleteParams {
  adAccountId: string;
}

/**
 * templatesList - parameters interface
 */
export interface ITemplatesListParams {
  adAccountId: string;
  pageSize?: number;
  order?: 'ASCENDING' | 'DESCENDING';
  bookmark?: string;
}

/**
 * AdAccountsApi - API class
 */
@autoinject()
export class AdAccountsApi extends Api {

  /**
   * Creates a new AdAccountsApi class.
   *
   * @param httpClient The Aurelia HTTP client to be injected.
   * @param authStorage A storage for authentication data.
   */
  constructor(httpClient: HttpClient, authStorage: AuthStorage) {
    super(httpClient, authStorage);
  }

  /**
   * Get ad account analytics
   * Get analytics for the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token\&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time.
   * @param params.adAccountId Unique identifier of an ad account.
   * @param params.startDate Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days back from today.
   * @param params.endDate Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days past start_date.
   * @param params.columns Columns to retrieve, encoded as a comma-separated string. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile\&#39;s currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it\&#39;s microdollars. Otherwise, it\&#39;s in microunits of the advertiser\&#39;s currency.&lt;br/&gt;For example, if the advertiser\&#39;s currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).&lt;br/&gt;If a column has no value, it may not be returned
   * @param params.granularity TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly
   * @param params.clickWindowDays Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.
   * @param params.engagementWindowDays Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.
   * @param params.viewWindowDays Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day.
   * @param params.conversionReportTime The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.
   */
  async adAccountAnalytics(params: IAdAccountAnalyticsParams): Promise<Array<AdAccountAnalyticsResponseInner>> {
    // Verify required parameters are set
    this.ensureParamIsSet('adAccountAnalytics', params, 'adAccountId');
    this.ensureParamIsSet('adAccountAnalytics', params, 'startDate');
    this.ensureParamIsSet('adAccountAnalytics', params, 'endDate');
    this.ensureParamIsSet('adAccountAnalytics', params, 'columns');
    this.ensureParamIsSet('adAccountAnalytics', params, 'granularity');

    // Create URL to call
    const url = `${this.basePath}/ad_accounts/{ad_account_id}/analytics`
      .replace(`{${'ad_account_id'}}`, encodeURIComponent(`${params['adAccountId']}`));

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asGet()
      // Set query parameters
      .withParams({ 
        'start_date': params['startDate'],
        'end_date': params['endDate'],
        'columns': params['columns'],
        'granularity': params['granularity'],
        'click_window_days': params['clickWindowDays'],
        'engagement_window_days': params['engagementWindowDays'],
        'view_window_days': params['viewWindowDays'],
        'conversion_report_time': params['conversionReportTime'],
      })

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * Get targeting analytics for an ad account
   * Get targeting analytics for an ad account. For the requested account and metrics, the response will include the requested metric information (e.g. SPEND_IN_DOLLAR) for the requested target type (e.g. \&quot;age_bucket\&quot;) for applicable values (e.g. \&quot;45-49\&quot;). &lt;p/&gt; - The token\&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
   * @param params.adAccountId Unique identifier of an ad account.
   * @param params.startDate Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days back from today.
   * @param params.endDate Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days past start_date.
   * @param params.targetingTypes Targeting type breakdowns for the report. The reporting per targeting type &lt;br&gt; is independent from each other.
   * @param params.columns Columns to retrieve, encoded as a comma-separated string. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile\&#39;s currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it\&#39;s microdollars. Otherwise, it\&#39;s in microunits of the advertiser\&#39;s currency.&lt;br/&gt;For example, if the advertiser\&#39;s currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).&lt;br/&gt;If a column has no value, it may not be returned
   * @param params.granularity TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly
   * @param params.clickWindowDays Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.
   * @param params.engagementWindowDays Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.
   * @param params.viewWindowDays Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day.
   * @param params.conversionReportTime The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.
   * @param params.attributionTypes List of types of attribution for the conversion report
   */
  async adAccountTargetingAnalyticsGet(params: IAdAccountTargetingAnalyticsGetParams): Promise<MetricsResponse> {
    // Verify required parameters are set
    this.ensureParamIsSet('adAccountTargetingAnalyticsGet', params, 'adAccountId');
    this.ensureParamIsSet('adAccountTargetingAnalyticsGet', params, 'startDate');
    this.ensureParamIsSet('adAccountTargetingAnalyticsGet', params, 'endDate');
    this.ensureParamIsSet('adAccountTargetingAnalyticsGet', params, 'targetingTypes');
    this.ensureParamIsSet('adAccountTargetingAnalyticsGet', params, 'columns');
    this.ensureParamIsSet('adAccountTargetingAnalyticsGet', params, 'granularity');

    // Create URL to call
    const url = `${this.basePath}/ad_accounts/{ad_account_id}/targeting_analytics`
      .replace(`{${'ad_account_id'}}`, encodeURIComponent(`${params['adAccountId']}`));

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asGet()
      // Set query parameters
      .withParams({ 
        'start_date': params['startDate'],
        'end_date': params['endDate'],
        'targeting_types': params['targetingTypes'],
        'columns': params['columns'],
        'granularity': params['granularity'],
        'click_window_days': params['clickWindowDays'],
        'engagement_window_days': params['engagementWindowDays'],
        'view_window_days': params['viewWindowDays'],
        'conversion_report_time': params['conversionReportTime'],
        'attribution_types': params['attributionTypes'],
      })

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * Create ad account
   * Create a new ad account. Different ad accounts can support different currencies, payment methods, etc. An ad account is needed to create campaigns, ad groups, and ads; other accounts (your employees or partners) can be assigned business access and appropriate roles to access an ad account. &lt;p/&gt; You can set up up to 50 ad accounts per user. (The user must have a business account to create an ad account.) &lt;p/&gt; For more, see &lt;a class&#x3D;\&quot;reference external\&quot; href&#x3D;\&quot;https://help.pinterest.com/en/business/article/create-an-advertiser-account\&quot;&gt;Create an advertiser account&lt;/a&gt;.
   * @param params.adAccountCreateRequest Ad account to create.
   */
  async adAccountsCreate(params: IAdAccountsCreateParams): Promise<AdAccount> {
    // Verify required parameters are set
    this.ensureParamIsSet('adAccountsCreate', params, 'adAccountCreateRequest');

    // Create URL to call
    const url = `${this.basePath}/ad_accounts`;

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asPost()
      // Encode body parameter
      .withHeader('content-type', 'application/json')
      .withContent(JSON.stringify(params['adAccountCreateRequest'] || {}))

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * Get ad account
   * Get an ad account
   * @param params.adAccountId Unique identifier of an ad account.
   */
  async adAccountsGet(params: IAdAccountsGetParams): Promise<AdAccount> {
    // Verify required parameters are set
    this.ensureParamIsSet('adAccountsGet', params, 'adAccountId');

    // Create URL to call
    const url = `${this.basePath}/ad_accounts/{ad_account_id}`
      .replace(`{${'ad_account_id'}}`, encodeURIComponent(`${params['adAccountId']}`));

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asGet()

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * List ad accounts
   * Get a list of the ad_accounts that the \&quot;operation user_account\&quot; has access to. - This includes ad_accounts they own and ad_accounts that are owned by others who have granted them &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;.
   * @param params.bookmark Cursor used to fetch the next page of items
   * @param params.pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/getting-started/pagination/\&#39;&gt;Pagination&lt;/a&gt; for more information.
   * @param params.includeSharedAccounts Include shared ad accounts
   */
  async adAccountsList(params: IAdAccountsListParams): Promise<AdAccountsList200Response> {
    // Verify required parameters are set

    // Create URL to call
    const url = `${this.basePath}/ad_accounts`;

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asGet()
      // Set query parameters
      .withParams({ 
        'bookmark': params['bookmark'],
        'page_size': params['pageSize'],
        'include_shared_accounts': params['includeSharedAccounts'],
      })

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * Create a request for a Marketing Mix Modeling (MMM) report
   * This creates an asynchronous mmm report based on the given request. It returns a token that you can use to download the report when it is ready. NOTE: An additional limit of 5 queries per minute per advertiser applies to this endpoint while it\&#39;s in beta release.
   * @param params.adAccountId Unique identifier of an ad account.
   * @param params.createMMMReportRequest 
   */
  async analyticsCreateMmmReport(params: IAnalyticsCreateMmmReportParams): Promise<CreateMMMReportResponse> {
    // Verify required parameters are set
    this.ensureParamIsSet('analyticsCreateMmmReport', params, 'adAccountId');
    this.ensureParamIsSet('analyticsCreateMmmReport', params, 'createMMMReportRequest');

    // Create URL to call
    const url = `${this.basePath}/ad_accounts/{ad_account_id}/mmm_reports`
      .replace(`{${'ad_account_id'}}`, encodeURIComponent(`${params['adAccountId']}`));

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asPost()
      // Encode body parameter
      .withHeader('content-type', 'application/json')
      .withContent(JSON.stringify(params['createMMMReportRequest'] || {}))

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * Create async request for an account analytics report
   * This returns a token that you can use to download the report when it is ready. Note that this endpoint requires the parameters to be passed as JSON-formatted in the request body. This endpoint does not support URL query parameters. - The token\&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 914 days before the current date in UTC time and the max time range supported is 186 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days. - If level is PRODUCT_ITEM, the furthest back you can are allowed to pull data is 92 days before the current date in UTC time and the max time range supported is 31 days. - If level is PRODUCT_ITEM, ad_ids and ad_statuses parameters are not allowed. Any columns related to pin promotion and ad is not allowed either.
   * @param params.adAccountId Unique identifier of an ad account.
   * @param params.adsAnalyticsCreateAsyncRequest 
   */
  async analyticsCreateReport(params: IAnalyticsCreateReportParams): Promise<AdsAnalyticsCreateAsyncResponse> {
    // Verify required parameters are set
    this.ensureParamIsSet('analyticsCreateReport', params, 'adAccountId');
    this.ensureParamIsSet('analyticsCreateReport', params, 'adsAnalyticsCreateAsyncRequest');

    // Create URL to call
    const url = `${this.basePath}/ad_accounts/{ad_account_id}/reports`
      .replace(`{${'ad_account_id'}}`, encodeURIComponent(`${params['adAccountId']}`));

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asPost()
      // Encode body parameter
      .withHeader('content-type', 'application/json')
      .withContent(JSON.stringify(params['adsAnalyticsCreateAsyncRequest'] || {}))

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * Create async request for an analytics report using a template
   * This takes a template ID and an optional custom timeframe and constructs an asynchronous report based on the template. It returns a token that you can use to download the report when it is ready.
   * @param params.adAccountId Unique identifier of an ad account.
   * @param params.templateId Unique identifier of a template.
   * @param params.startDate Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 2.5 years back from today.
   * @param params.endDate Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 2.5 years past start date.
   * @param params.granularity TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly
   */
  async analyticsCreateTemplateReport(params: IAnalyticsCreateTemplateReportParams): Promise<AdsAnalyticsCreateAsyncResponse> {
    // Verify required parameters are set
    this.ensureParamIsSet('analyticsCreateTemplateReport', params, 'adAccountId');
    this.ensureParamIsSet('analyticsCreateTemplateReport', params, 'templateId');

    // Create URL to call
    const url = `${this.basePath}/ad_accounts/{ad_account_id}/templates/{template_id}/reports`
      .replace(`{${'ad_account_id'}}`, encodeURIComponent(`${params['adAccountId']}`))
      .replace(`{${'template_id'}}`, encodeURIComponent(`${params['templateId']}`));

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asPost()
      // Set query parameters
      .withParams({ 
        'start_date': params['startDate'],
        'end_date': params['endDate'],
        'granularity': params['granularity'],
      })

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * Get advertiser Marketing Mix Modeling (MMM) report.
   * Get an mmm report for an ad account. This returns a URL to an mmm metrics report given a token returned from the create mmm report endpoint.
   * @param params.adAccountId Unique identifier of an ad account.
   * @param params.token Token returned from the post request creation call
   */
  async analyticsGetMmmReport(params: IAnalyticsGetMmmReportParams): Promise<GetMMMReportResponse> {
    // Verify required parameters are set
    this.ensureParamIsSet('analyticsGetMmmReport', params, 'adAccountId');
    this.ensureParamIsSet('analyticsGetMmmReport', params, 'token');

    // Create URL to call
    const url = `${this.basePath}/ad_accounts/{ad_account_id}/mmm_reports`
      .replace(`{${'ad_account_id'}}`, encodeURIComponent(`${params['adAccountId']}`));

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asGet()
      // Set query parameters
      .withParams({ 
        'token': params['token'],
      })

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * Get the account analytics report created by the async call
   * This returns a URL to an analytics report given a token returned from the post request report creation call. You can use the URL to download the report. The link is valid for five minutes and the report is valid for one hour. - The token\&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
   * @param params.adAccountId Unique identifier of an ad account.
   * @param params.token Token returned from the post request creation call
   */
  async analyticsGetReport(params: IAnalyticsGetReportParams): Promise<AdsAnalyticsGetAsyncResponse> {
    // Verify required parameters are set
    this.ensureParamIsSet('analyticsGetReport', params, 'adAccountId');
    this.ensureParamIsSet('analyticsGetReport', params, 'token');

    // Create URL to call
    const url = `${this.basePath}/ad_accounts/{ad_account_id}/reports`
      .replace(`{${'ad_account_id'}}`, encodeURIComponent(`${params['adAccountId']}`));

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asGet()
      // Set query parameters
      .withParams({ 
        'token': params['token'],
      })

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * Delete ads data for ad account in API Sandbox
   * Delete an ad account and all the ads data associated with that account.  A string message is returned indicating the status of the delete operation.  Note: This endpoint is only allowed in the Pinterest API Sandbox (https://api-sandbox.pinterest.com/v5).  Go to https://developers.pinterest.com/docs/dev-tools/sandbox/ for more information.
   * @param params.adAccountId Unique identifier of an ad account.
   */
  async sandboxDelete(params: ISandboxDeleteParams): Promise<string> {
    // Verify required parameters are set
    this.ensureParamIsSet('sandboxDelete', params, 'adAccountId');

    // Create URL to call
    const url = `${this.basePath}/ad_accounts/{ad_account_id}/sandbox`
      .replace(`{${'ad_account_id'}}`, encodeURIComponent(`${params['adAccountId']}`));

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asDelete()

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

  /**
   * List templates
   * Gets all Templates associated with an ad account ID.
   * @param params.adAccountId Unique identifier of an ad account.
   * @param params.pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/getting-started/pagination/\&#39;&gt;Pagination&lt;/a&gt; for more information.
   * @param params.order The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items.
   * @param params.bookmark Cursor used to fetch the next page of items
   */
  async templatesList(params: ITemplatesListParams): Promise<TemplatesList200Response> {
    // Verify required parameters are set
    this.ensureParamIsSet('templatesList', params, 'adAccountId');

    // Create URL to call
    const url = `${this.basePath}/ad_accounts/{ad_account_id}/templates`
      .replace(`{${'ad_account_id'}}`, encodeURIComponent(`${params['adAccountId']}`));

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asGet()
      // Set query parameters
      .withParams({ 
        'page_size': params['pageSize'],
        'order': params['order'],
        'bookmark': params['bookmark'],
      })

      // Authentication 'pinterest_oauth2' required
      // Send the request
      .send();

    if (response.statusCode < 200 || response.statusCode >= 300) {
      throw new Error(response.content);
    }

    // Extract the content
    return response.content;
  }

}

