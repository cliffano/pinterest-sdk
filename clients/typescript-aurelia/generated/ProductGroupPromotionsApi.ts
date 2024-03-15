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
  Granularity,
  ProductGroupPromotionResponse,
  ProductGroupAnalyticsResponseInner,
  ProductGroupPromotionUpdateRequest,
  ProductGroupPromotionCreateRequest,
  ProductGroupPromotionsList200Response,
} from './models';

/**
 * productGroupPromotionsCreate - parameters interface
 */
export interface IProductGroupPromotionsCreateParams {
  adAccountId: string;
  productGroupPromotionCreateRequest: ProductGroupPromotionCreateRequest;
}

/**
 * productGroupPromotionsGet - parameters interface
 */
export interface IProductGroupPromotionsGetParams {
  adAccountId: string;
  productGroupPromotionId: string;
}

/**
 * productGroupPromotionsList - parameters interface
 */
export interface IProductGroupPromotionsListParams {
  adAccountId: string;
  productGroupPromotionIds?: Array<string>;
  entityStatuses?: Array<'ACTIVE' | 'PAUSED' | 'ARCHIVED' | 'DRAFT' | 'DELETED_DRAFT'>;
  adGroupId?: string;
  pageSize?: number;
  order?: 'ASCENDING' | 'DESCENDING';
  bookmark?: string;
}

/**
 * productGroupPromotionsUpdate - parameters interface
 */
export interface IProductGroupPromotionsUpdateParams {
  adAccountId: string;
  productGroupPromotionUpdateRequest: ProductGroupPromotionUpdateRequest;
}

/**
 * productGroupsAnalytics - parameters interface
 */
export interface IProductGroupsAnalyticsParams {
  adAccountId: string;
  startDate: string;
  endDate: string;
  productGroupIds: Array<string>;
  columns: Array<'SPEND_IN_MICRO_DOLLAR' | 'PAID_IMPRESSION' | 'SPEND_IN_DOLLAR' | 'CPC_IN_MICRO_DOLLAR' | 'ECPC_IN_MICRO_DOLLAR' | 'ECPC_IN_DOLLAR' | 'CTR' | 'ECTR' | 'CAMPAIGN_NAME' | 'PIN_ID' | 'TOTAL_ENGAGEMENT' | 'ENGAGEMENT_1' | 'ENGAGEMENT_2' | 'ECPE_IN_DOLLAR' | 'ENGAGEMENT_RATE' | 'EENGAGEMENT_RATE' | 'ECPM_IN_MICRO_DOLLAR' | 'REPIN_RATE' | 'CTR_2' | 'CAMPAIGN_ID' | 'ADVERTISER_ID' | 'AD_ACCOUNT_ID' | 'PIN_PROMOTION_ID' | 'AD_ID' | 'AD_GROUP_ID' | 'CAMPAIGN_ENTITY_STATUS' | 'CAMPAIGN_OBJECTIVE_TYPE' | 'CPM_IN_MICRO_DOLLAR' | 'CPM_IN_DOLLAR' | 'AD_GROUP_ENTITY_STATUS' | 'ORDER_LINE_ID' | 'ORDER_LINE_NAME' | 'CLICKTHROUGH_1' | 'REPIN_1' | 'IMPRESSION_1' | 'IMPRESSION_1_GROSS' | 'CLICKTHROUGH_1_GROSS' | 'OUTBOUND_CLICK_1' | 'CLICKTHROUGH_2' | 'REPIN_2' | 'IMPRESSION_2' | 'OUTBOUND_CLICK_2' | 'TOTAL_CLICKTHROUGH' | 'TOTAL_IMPRESSION' | 'TOTAL_IMPRESSION_USER' | 'TOTAL_IMPRESSION_FREQUENCY' | 'COST_PER_OUTBOUND_CLICK_IN_DOLLAR' | 'TOTAL_ENGAGEMENT_SIGNUP' | 'TOTAL_ENGAGEMENT_CHECKOUT' | 'TOTAL_ENGAGEMENT_LEAD' | 'TOTAL_CLICK_SIGNUP' | 'TOTAL_CLICK_CHECKOUT' | 'TOTAL_CLICK_ADD_TO_CART' | 'TOTAL_CLICK_LEAD' | 'TOTAL_VIEW_SIGNUP' | 'TOTAL_VIEW_CHECKOUT' | 'TOTAL_VIEW_ADD_TO_CART' | 'TOTAL_VIEW_LEAD' | 'TOTAL_CONVERSIONS' | 'TOTAL_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_WEB_SESSIONS' | 'WEB_SESSIONS_1' | 'WEB_SESSIONS_2' | 'CAMPAIGN_LIFETIME_SPEND_CAP' | 'CAMPAIGN_DAILY_SPEND_CAP' | 'TOTAL_PAGE_VISIT' | 'TOTAL_SIGNUP' | 'TOTAL_CHECKOUT' | 'TOTAL_CUSTOM' | 'TOTAL_LEAD' | 'TOTAL_SIGNUP_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_CUSTOM_VALUE_IN_MICRO_DOLLAR' | 'PAGE_VISIT_COST_PER_ACTION' | 'PAGE_VISIT_ROAS' | 'CHECKOUT_ROAS' | 'CUSTOM_ROAS' | 'VIDEO_MRC_VIEWS_1' | 'VIDEO_3SEC_VIEWS_2' | 'VIDEO_P100_COMPLETE_2' | 'VIDEO_P0_COMBINED_2' | 'VIDEO_P25_COMBINED_2' | 'VIDEO_P50_COMBINED_2' | 'VIDEO_P75_COMBINED_2' | 'VIDEO_P95_COMBINED_2' | 'VIDEO_MRC_VIEWS_2' | 'VIDEO_LENGTH' | 'ECPV_IN_DOLLAR' | 'ECPCV_IN_DOLLAR' | 'ECPCV_P95_IN_DOLLAR' | 'TOTAL_VIDEO_3SEC_VIEWS' | 'TOTAL_VIDEO_P100_COMPLETE' | 'TOTAL_VIDEO_P0_COMBINED' | 'TOTAL_VIDEO_P25_COMBINED' | 'TOTAL_VIDEO_P50_COMBINED' | 'TOTAL_VIDEO_P75_COMBINED' | 'TOTAL_VIDEO_P95_COMBINED' | 'TOTAL_VIDEO_MRC_VIEWS' | 'TOTAL_VIDEO_AVG_WATCHTIME_IN_SECOND' | 'TOTAL_REPIN_RATE' | 'WEB_CHECKOUT_COST_PER_ACTION' | 'WEB_CHECKOUT_ROAS' | 'TOTAL_WEB_CHECKOUT' | 'TOTAL_WEB_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_WEB_CLICK_CHECKOUT' | 'TOTAL_WEB_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_WEB_ENGAGEMENT_CHECKOUT' | 'TOTAL_WEB_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'TOTAL_WEB_VIEW_CHECKOUT' | 'TOTAL_WEB_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR' | 'INAPP_CHECKOUT_COST_PER_ACTION' | 'TOTAL_OFFLINE_CHECKOUT' | 'IDEA_PIN_PRODUCT_TAG_VISIT_1' | 'IDEA_PIN_PRODUCT_TAG_VISIT_2' | 'TOTAL_IDEA_PIN_PRODUCT_TAG_VISIT' | 'LEADS' | 'COST_PER_LEAD' | 'QUIZ_COMPLETED' | 'QUIZ_COMPLETION_RATE' | 'SHOWCASE_PIN_CLICKTHROUGH' | 'SHOWCASE_SUBPAGE_CLICKTHROUGH' | 'SHOWCASE_SUBPIN_CLICKTHROUGH' | 'SHOWCASE_SUBPAGE_IMPRESSION' | 'SHOWCASE_SUBPIN_IMPRESSION' | 'SHOWCASE_SUBPAGE_SWIPE_LEFT' | 'SHOWCASE_SUBPAGE_SWIPE_RIGHT' | 'SHOWCASE_SUBPIN_SWIPE_LEFT' | 'SHOWCASE_SUBPIN_SWIPE_RIGHT' | 'SHOWCASE_SUBPAGE_REPIN' | 'SHOWCASE_SUBPIN_REPIN' | 'SHOWCASE_SUBPAGE_CLOSEUP' | 'SHOWCASE_CARD_THUMBNAIL_SWIPE_FORWARD' | 'SHOWCASE_CARD_THUMBNAIL_SWIPE_BACKWARD' | 'SHOWCASE_AVERAGE_SUBPAGE_CLOSEUP_PER_SESSION' | 'TOTAL_CHECKOUT_CONVERSION_RATE' | 'TOTAL_VIEW_CATEGORY_CONVERSION_RATE' | 'TOTAL_ADD_TO_CART_CONVERSION_RATE' | 'TOTAL_SIGNUP_CONVERSION_RATE' | 'TOTAL_PAGE_VISIT_CONVERSION_RATE' | 'TOTAL_LEAD_CONVERSION_RATE' | 'TOTAL_SEARCH_CONVERSION_RATE' | 'TOTAL_WATCH_VIDEO_CONVERSION_RATE' | 'TOTAL_UNKNOWN_CONVERSION_RATE' | 'TOTAL_CUSTOM_CONVERSION_RATE'>;
  granularity: Granularity;
  clickWindowDays?: 0 | 1 | 7 | 14 | 30 | 60;
  engagementWindowDays?: 0 | 1 | 7 | 14 | 30 | 60;
  viewWindowDays?: 0 | 1 | 7 | 14 | 30 | 60;
  conversionReportTime?: 'TIME_OF_AD_ACTION' | 'TIME_OF_CONVERSION';
}

/**
 * ProductGroupPromotionsApi - API class
 */
@autoinject()
export class ProductGroupPromotionsApi extends Api {

  /**
   * Creates a new ProductGroupPromotionsApi class.
   *
   * @param httpClient The Aurelia HTTP client to be injected.
   * @param authStorage A storage for authentication data.
   */
  constructor(httpClient: HttpClient, authStorage: AuthStorage) {
    super(httpClient, authStorage);
  }

  /**
   * Create product group promotions
   * Add one or more product groups from your catalog to an existing ad group. (Product groups added to an ad group are a \&#39;product group promotion.\&#39;)
   * @param params.adAccountId Unique identifier of an ad account.
   * @param params.productGroupPromotionCreateRequest List of Product Group Promotions to create, size limit [1, 30].
   */
  async productGroupPromotionsCreate(params: IProductGroupPromotionsCreateParams): Promise<ProductGroupPromotionResponse> {
    // Verify required parameters are set
    this.ensureParamIsSet('productGroupPromotionsCreate', params, 'adAccountId');
    this.ensureParamIsSet('productGroupPromotionsCreate', params, 'productGroupPromotionCreateRequest');

    // Create URL to call
    const url = `${this.basePath}/ad_accounts/{ad_account_id}/product_group_promotions`
      .replace(`{${'ad_account_id'}}`, encodeURIComponent(`${params['adAccountId']}`));

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asPost()
      // Encode body parameter
      .withHeader('content-type', 'application/json')
      .withContent(JSON.stringify(params['productGroupPromotionCreateRequest'] || {}))

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
   * Get a product group promotion by id
   * Get a product group promotion by id
   * @param params.adAccountId Unique identifier of an ad account.
   * @param params.productGroupPromotionId Unique identifier of a product group promotion
   */
  async productGroupPromotionsGet(params: IProductGroupPromotionsGetParams): Promise<ProductGroupPromotionResponse> {
    // Verify required parameters are set
    this.ensureParamIsSet('productGroupPromotionsGet', params, 'adAccountId');
    this.ensureParamIsSet('productGroupPromotionsGet', params, 'productGroupPromotionId');

    // Create URL to call
    const url = `${this.basePath}/ad_accounts/{ad_account_id}/product_group_promotions/{product_group_promotion_id}`
      .replace(`{${'ad_account_id'}}`, encodeURIComponent(`${params['adAccountId']}`))
      .replace(`{${'product_group_promotion_id'}}`, encodeURIComponent(`${params['productGroupPromotionId']}`));

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
   * Get product group promotions
   * List existing product group promotions associated with an ad account.  Include either ad_group_id or product_group_promotion_ids in your request.  &lt;b&gt;Note:&lt;/b&gt; ad_group_ids and product_group_promotion_ids are mutually exclusive parameters. Only provide one. If multiple options are provided, product_group_promotion_ids takes precedence over ad_group_ids. If none are provided, the endpoint returns an error.
   * @param params.adAccountId Unique identifier of an ad account.
   * @param params.productGroupPromotionIds List of Product group promotion Ids.
   * @param params.entityStatuses Entity status
   * @param params.adGroupId Ad group Id.
   * @param params.pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/getting-started/pagination/\&#39;&gt;Pagination&lt;/a&gt; for more information.
   * @param params.order The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items.
   * @param params.bookmark Cursor used to fetch the next page of items
   */
  async productGroupPromotionsList(params: IProductGroupPromotionsListParams): Promise<ProductGroupPromotionsList200Response> {
    // Verify required parameters are set
    this.ensureParamIsSet('productGroupPromotionsList', params, 'adAccountId');

    // Create URL to call
    const url = `${this.basePath}/ad_accounts/{ad_account_id}/product_group_promotions`
      .replace(`{${'ad_account_id'}}`, encodeURIComponent(`${params['adAccountId']}`));

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asGet()
      // Set query parameters
      .withParams({ 
        'product_group_promotion_ids': params['productGroupPromotionIds'],
        'entity_statuses': params['entityStatuses'],
        'ad_group_id': params['adGroupId'],
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

  /**
   * Update product group promotions
   * Update multiple existing Product Group Promotions (by product_group_id)
   * @param params.adAccountId Unique identifier of an ad account.
   * @param params.productGroupPromotionUpdateRequest Parameters to update Product group promotions
   */
  async productGroupPromotionsUpdate(params: IProductGroupPromotionsUpdateParams): Promise<ProductGroupPromotionResponse> {
    // Verify required parameters are set
    this.ensureParamIsSet('productGroupPromotionsUpdate', params, 'adAccountId');
    this.ensureParamIsSet('productGroupPromotionsUpdate', params, 'productGroupPromotionUpdateRequest');

    // Create URL to call
    const url = `${this.basePath}/ad_accounts/{ad_account_id}/product_group_promotions`
      .replace(`{${'ad_account_id'}}`, encodeURIComponent(`${params['adAccountId']}`));

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asPatch()
      // Encode body parameter
      .withHeader('content-type', 'application/json')
      .withContent(JSON.stringify(params['productGroupPromotionUpdateRequest'] || {}))

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
   * Get product group analytics
   * Get analytics for the specified product groups in the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token\&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
   * @param params.adAccountId Unique identifier of an ad account.
   * @param params.startDate Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days back from today.
   * @param params.endDate Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days past start_date.
   * @param params.productGroupIds List of Product group Ids to use to filter the results.
   * @param params.columns Columns to retrieve, encoded as a comma-separated string. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile\&#39;s currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it\&#39;s microdollars. Otherwise, it\&#39;s in microunits of the advertiser\&#39;s currency.&lt;br/&gt;For example, if the advertiser\&#39;s currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).&lt;br/&gt;If a column has no value, it may not be returned
   * @param params.granularity TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly
   * @param params.clickWindowDays Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.
   * @param params.engagementWindowDays Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.
   * @param params.viewWindowDays Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day.
   * @param params.conversionReportTime The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.
   */
  async productGroupsAnalytics(params: IProductGroupsAnalyticsParams): Promise<Array<ProductGroupAnalyticsResponseInner>> {
    // Verify required parameters are set
    this.ensureParamIsSet('productGroupsAnalytics', params, 'adAccountId');
    this.ensureParamIsSet('productGroupsAnalytics', params, 'startDate');
    this.ensureParamIsSet('productGroupsAnalytics', params, 'endDate');
    this.ensureParamIsSet('productGroupsAnalytics', params, 'productGroupIds');
    this.ensureParamIsSet('productGroupsAnalytics', params, 'columns');
    this.ensureParamIsSet('productGroupsAnalytics', params, 'granularity');

    // Create URL to call
    const url = `${this.basePath}/ad_accounts/{ad_account_id}/product_groups/analytics`
      .replace(`{${'ad_account_id'}}`, encodeURIComponent(`${params['adAccountId']}`));

    const response = await this.httpClient.createRequest(url)
      // Set HTTP method
      .asGet()
      // Set query parameters
      .withParams({ 
        'start_date': params['startDate'],
        'end_date': params['endDate'],
        'product_group_ids': params['productGroupIds'],
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

}

