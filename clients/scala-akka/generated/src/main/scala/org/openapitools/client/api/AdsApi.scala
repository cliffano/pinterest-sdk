/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.client.api

import org.openapitools.client.model.AdArrayResponse
import org.openapitools.client.model.AdCreateRequest
import org.openapitools.client.model.AdPreviewRequest
import org.openapitools.client.model.AdPreviewURLResponse
import org.openapitools.client.model.AdResponse
import org.openapitools.client.model.AdUpdateRequest
import org.openapitools.client.model.AdsAnalyticsResponseInner
import org.openapitools.client.model.AdsAnalyticsTargetingType
import org.openapitools.client.model.AdsList200Response
import org.openapitools.client.model.ConversionReportAttributionType
import org.openapitools.client.model.Error
import org.openapitools.client.model.Granularity
import java.time.LocalDate
import org.openapitools.client.model.MetricsResponse
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

object AdsApi {

  def apply(baseUrl: String = "https://api.pinterest.com/v5") = new AdsApi(baseUrl)
}

class AdsApi(baseUrl: String) {

  /**
   * Create an ad preview given an ad account ID and either an existing organic pin ID or the URL for an image to be used to create the Pin and the ad. <p/> If you are creating a preview from an existing Pin, that Pin must be promotable: that is, it must have a clickthrough link and meet other requirements. (See <a href=\"https://help.pinterest.com/en/business/article/promoted-pins-overview\" target=\"_blank\">Ads Overview</a>.) <p/> You can view the returned preview URL on a webpage or iframe for 7 days, after which the URL expires.
   * 
   * Expected answers:
   *   code 200 : AdPreviewURLResponse (Successful ad preview creation.)
   *   code 400 : Error (Invalid Pin parameters response)
   *   code 0 : Error (Unexpected error)
   * 
   * @param adAccountId Unique identifier of an ad account.
   * @param adPreviewRequest Create ad preview with pin or image.
   */
  def adPreviewsCreate(adAccountId: String, adPreviewRequest: AdPreviewRequest): ApiRequest[AdPreviewURLResponse] =
    ApiRequest[AdPreviewURLResponse](ApiMethods.POST, baseUrl, "/ad_accounts/{ad_account_id}/ad_previews", "application/json")
      .withBody(adPreviewRequest)
      .withPathParam("ad_account_id", adAccountId)
      .withSuccessResponse[AdPreviewURLResponse](200)
      .withErrorResponse[Error](400)
      .withDefaultErrorResponse[Error]
      

  /**
   * Get targeting analytics for one or more ads. For the requested ad(s) and metrics, the response will include the requested metric information (e.g. SPEND_IN_DOLLAR) for the requested target type (e.g. \"age_bucket\") for applicable values (e.g. \"45-49\"). <p/> - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
   * 
   * Expected answers:
   *   code 200 : MetricsResponse (Success)
   *   code 0 : Error (Unexpected error)
   * 
   * @param adAccountId Unique identifier of an ad account.
   * @param adIds List of Ad Ids to use to filter the results.
   * @param startDate Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days back from today.
   * @param endDate Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days past start_date.
   * @param targetingTypes Targeting type breakdowns for the report. The reporting per targeting type <br> is independent from each other.
   * @param columns Columns to retrieve, encoded as a comma-separated string. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile's currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it's microdollars. Otherwise, it's in microunits of the advertiser's currency.<br/>For example, if the advertiser's currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).<br/>If a column has no value, it may not be returned
   * @param granularity TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly
   * @param clickWindowDays Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
   * @param engagementWindowDays Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
   * @param viewWindowDays Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day.
   * @param conversionReportTime The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.
   * @param attributionTypes List of types of attribution for the conversion report
   */
  def adTargetingAnalyticsGet(adAccountId: String, adIds: Seq[String], startDate: LocalDate, endDate: LocalDate, targetingTypes: Seq[AdsAnalyticsTargetingType], columns: Seq[String], granularity: Granularity, clickWindowDays: Option[Int] = None, engagementWindowDays: Option[Int] = None, viewWindowDays: Option[Int] = None, conversionReportTime: Option[String] = None, attributionTypes: Option[ConversionReportAttributionType] = None): ApiRequest[MetricsResponse] =
    ApiRequest[MetricsResponse](ApiMethods.GET, baseUrl, "/ad_accounts/{ad_account_id}/ads/targeting_analytics", "application/json")
      .withQueryParam("ad_ids", ArrayValues(adIds, MULTI))
      .withQueryParam("start_date", startDate)
      .withQueryParam("end_date", endDate)
      .withQueryParam("targeting_types", ArrayValues(targetingTypes, CSV))
      .withQueryParam("columns", ArrayValues(columns, CSV))
      .withQueryParam("granularity", granularity)
      .withQueryParam("click_window_days", clickWindowDays)
      .withQueryParam("engagement_window_days", engagementWindowDays)
      .withQueryParam("view_window_days", viewWindowDays)
      .withQueryParam("conversion_report_time", conversionReportTime)
      .withQueryParam("attribution_types", attributionTypes)
      .withPathParam("ad_account_id", adAccountId)
      .withSuccessResponse[MetricsResponse](200)
      .withDefaultErrorResponse[Error]
      

  /**
   * Get analytics for the specified ads in the specified <code>ad_account_id</code>, filtered by the specified options. - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
   * 
   * Expected answers:
   *   code 200 : Seq[AdsAnalyticsResponseInner] (Success)
   *   code 400 : Error (Invalid ad account ads analytics parameters.)
   *   code 0 : Error (Unexpected error)
   * 
   * @param adAccountId Unique identifier of an ad account.
   * @param startDate Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days back from today.
   * @param endDate Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days past start_date.
   * @param adIds List of Ad Ids to use to filter the results.
   * @param columns Columns to retrieve, encoded as a comma-separated string. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile's currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it's microdollars. Otherwise, it's in microunits of the advertiser's currency.<br/>For example, if the advertiser's currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).<br/>If a column has no value, it may not be returned
   * @param granularity TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly
   * @param clickWindowDays Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
   * @param engagementWindowDays Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
   * @param viewWindowDays Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day.
   * @param conversionReportTime The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.
   */
  def adsAnalytics(adAccountId: String, startDate: LocalDate, endDate: LocalDate, adIds: Seq[String], columns: Seq[String], granularity: Granularity, clickWindowDays: Option[Int] = None, engagementWindowDays: Option[Int] = None, viewWindowDays: Option[Int] = None, conversionReportTime: Option[String] = None): ApiRequest[Seq[AdsAnalyticsResponseInner]] =
    ApiRequest[Seq[AdsAnalyticsResponseInner]](ApiMethods.GET, baseUrl, "/ad_accounts/{ad_account_id}/ads/analytics", "application/json")
      .withQueryParam("start_date", startDate)
      .withQueryParam("end_date", endDate)
      .withQueryParam("ad_ids", ArrayValues(adIds, MULTI))
      .withQueryParam("columns", ArrayValues(columns, CSV))
      .withQueryParam("granularity", granularity)
      .withQueryParam("click_window_days", clickWindowDays)
      .withQueryParam("engagement_window_days", engagementWindowDays)
      .withQueryParam("view_window_days", viewWindowDays)
      .withQueryParam("conversion_report_time", conversionReportTime)
      .withPathParam("ad_account_id", adAccountId)
      .withSuccessResponse[Seq[AdsAnalyticsResponseInner]](200)
      .withErrorResponse[Error](400)
      .withDefaultErrorResponse[Error]
      

  /**
   * Create multiple new ads. Request must contain ad_group_id, creative_type, and the source Pin pin_id.
   * 
   * Expected answers:
   *   code 200 : AdArrayResponse (Success)
   *   code 0 : Error (Unexpected error)
   * 
   * @param adAccountId Unique identifier of an ad account.
   * @param adCreateRequest List of ads to create, size limit [1, 30].
   */
  def adsCreate(adAccountId: String, adCreateRequest: Seq[AdCreateRequest]): ApiRequest[AdArrayResponse] =
    ApiRequest[AdArrayResponse](ApiMethods.POST, baseUrl, "/ad_accounts/{ad_account_id}/ads", "application/json")
      .withBody(adCreateRequest)
      .withPathParam("ad_account_id", adAccountId)
      .withSuccessResponse[AdArrayResponse](200)
      .withDefaultErrorResponse[Error]
      

  /**
   * Get a specific ad given the ad ID. If your pin is rejected, rejected_reasons will contain additional information from the Ad Review process. For more information about our policies and rejection reasons see the <a href=\"https://www.pinterest.com/_/_/policy/advertising-guidelines/\" target=\"_blank\">Pinterest advertising standards</a>.
   * 
   * Expected answers:
   *   code 200 : AdResponse (Success)
   *   code 0 : Error (Unexpected error)
   * 
   * @param adAccountId Unique identifier of an ad account.
   * @param adId Unique identifier of an ad.
   */
  def adsGet(adAccountId: String, adId: String): ApiRequest[AdResponse] =
    ApiRequest[AdResponse](ApiMethods.GET, baseUrl, "/ad_accounts/{ad_account_id}/ads/{ad_id}", "application/json")
      .withPathParam("ad_account_id", adAccountId)
      .withPathParam("ad_id", adId)
      .withSuccessResponse[AdResponse](200)
      .withDefaultErrorResponse[Error]
      

  /**
   * List ads that meet the filters provided:   - Listed campaign ids or ad group ids or ad ids   - Listed entity statuses <p/> If no filter is provided, all ads in the ad account are returned. <p/> <strong>Note:</strong><p/> Provide only campaign_id or ad_group_id or ad_id. Do not provide more than one type. <p/> Review status is provided for each ad; if review_status is REJECTED, the rejected_reasons field will contain additional information. For more, see <a href=\"https://policy.pinterest.com/en/advertising-guidelines\">Pinterest advertising standards</a>.
   * 
   * Expected answers:
   *   code 200 : AdsList200Response (Success)
   *   code 400 : Error (Invalid ad account ads parameters.)
   *   code 0 : Error (Unexpected error)
   * 
   * @param adAccountId Unique identifier of an ad account.
   * @param campaignIds List of Campaign Ids to use to filter the results.
   * @param adGroupIds List of Ad group Ids to use to filter the results.
   * @param adIds List of Ad Ids to use to filter the results.
   * @param entityStatuses Entity status
   * @param pageSize Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information.
   * @param order The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items.
   * @param bookmark Cursor used to fetch the next page of items
   */
  def adsList(adAccountId: String, campaignIds: Seq[String], adGroupIds: Seq[String], adIds: Seq[String], entityStatuses: Seq[String], pageSize: Option[Int] = None, order: Option[String] = None, bookmark: Option[String] = None): ApiRequest[AdsList200Response] =
    ApiRequest[AdsList200Response](ApiMethods.GET, baseUrl, "/ad_accounts/{ad_account_id}/ads", "application/json")
      .withQueryParam("campaign_ids", ArrayValues(campaignIds, MULTI))
      .withQueryParam("ad_group_ids", ArrayValues(adGroupIds, MULTI))
      .withQueryParam("ad_ids", ArrayValues(adIds, MULTI))
      .withQueryParam("entity_statuses", ArrayValues(entityStatuses, MULTI))
      .withQueryParam("page_size", pageSize)
      .withQueryParam("order", order)
      .withQueryParam("bookmark", bookmark)
      .withPathParam("ad_account_id", adAccountId)
      .withSuccessResponse[AdsList200Response](200)
      .withErrorResponse[Error](400)
      .withDefaultErrorResponse[Error]
      

  /**
   * Update multiple existing ads
   * 
   * Expected answers:
   *   code 200 : AdArrayResponse (Success)
   *   code 0 : Error (Unexpected error)
   * 
   * @param adAccountId Unique identifier of an ad account.
   * @param adUpdateRequest List of ads to update, size limit [1, 30]
   */
  def adsUpdate(adAccountId: String, adUpdateRequest: Seq[AdUpdateRequest]): ApiRequest[AdArrayResponse] =
    ApiRequest[AdArrayResponse](ApiMethods.PATCH, baseUrl, "/ad_accounts/{ad_account_id}/ads", "application/json")
      .withBody(adUpdateRequest)
      .withPathParam("ad_account_id", adAccountId)
      .withSuccessResponse[AdArrayResponse](200)
      .withDefaultErrorResponse[Error]
      



}

