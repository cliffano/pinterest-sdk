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

package io.swagger.client.api

import akka.{Done, NotUsed}
import com.lightbend.lagom.scaladsl.api.transport.Method
import com.lightbend.lagom.scaladsl.api.{Service, ServiceCall}
import play.api.libs.json._
import com.lightbend.lagom.scaladsl.api.deser.PathParamSerializer

import io.swagger.client.model.AdGroupArrayResponse
import io.swagger.client.model.AdGroupAudienceSizingRequest
import io.swagger.client.model.AdGroupAudienceSizingResponse
import io.swagger.client.model.AdGroupCreateRequest
import io.swagger.client.model.AdGroupResponse
import io.swagger.client.model.AdGroupUpdateRequest
import io.swagger.client.model.AdGroupsAnalyticsResponseInner
import io.swagger.client.model.AdGroupsList200Response
import io.swagger.client.model.AdsAnalyticsTargetingType
import io.swagger.client.model.BidFloor
import io.swagger.client.model.BidFloorRequest
import io.swagger.client.model.ConversionReportAttributionType
import io.swagger.client.model.Error
import io.swagger.client.model.Granularity
import java.time.LocalDate
import io.swagger.client.model.MetricsResponse

trait AdGroupsApi extends Service {


  final override def descriptor = {
    import Service._
    named("AdGroupsApi").withCalls(
      restCall(Method.GET, "/ad_accounts/:ad_account_id/ad_groups/analytics?startDate&endDate&adGroupIds&columns&granularity&clickWindowDays&engagementWindowDays&viewWindowDays&conversionReportTime", adGroupsAnalytics _), 
      restCall(Method.GET, "/ad_accounts/:ad_account_id/ad_groups/audience_sizing", adGroupsAudienceSizing _), 
      restCall(Method.POST, "/ad_accounts/:ad_account_id/bid_floor", adGroupsBidFloorGet _), 
      restCall(Method.POST, "/ad_accounts/:ad_account_id/ad_groups", adGroupsCreate _), 
      restCall(Method.GET, "/ad_accounts/:ad_account_id/ad_groups/:ad_group_id", adGroupsGet _), 
      restCall(Method.GET, "/ad_accounts/:ad_account_id/ad_groups?campaignIds&adGroupIds&entityStatuses&pageSize&order&bookmark&translateInterestsToNames", adGroupsList _), 
      restCall(Method.GET, "/ad_accounts/:ad_account_id/ad_groups/targeting_analytics?adGroupIds&startDate&endDate&targetingTypes&columns&granularity&clickWindowDays&engagementWindowDays&viewWindowDays&conversionReportTime&attributionTypes", adGroupsTargetingAnalyticsGet _), 
      restCall(Method.PATCH, "/ad_accounts/:ad_account_id/ad_groups", adGroupsUpdate _)
    ).withAutoAcl(true)
  }

      
  // adGroupIds:Seq[String]  -- not yet supported Seq PathParamSerializers for multi value query parameters https://github.com/lagom/lagom/issues/643
      
  // columns:Seq[String]  -- not yet supported Seq PathParamSerializers for multi value query parameters https://github.com/lagom/lagom/issues/643
      
  /**
    * Get ad group analytics
    * Get analytics for the specified ad groups in the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
    *  
    * @param adAccountId Unique identifier of an ad account.  
    * @param startDate Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days back from today.  
    * @param endDate Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days past start_date.  
    * @param adGroupIds List of Ad group Ids to use to filter the results.  
    * @param columns Columns to retrieve, encoded as a comma-separated string. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile&#39;s currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it&#39;s microdollars. Otherwise, it&#39;s in microunits of the advertiser&#39;s currency.&lt;br/&gt;For example, if the advertiser&#39;s currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).&lt;br/&gt;If a column has no value, it may not be returned  
    * @param granularity TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly  
    * @param clickWindowDays Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional, default to 30) 
    * @param engagementWindowDays Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional, default to 30) 
    * @param viewWindowDays Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day. (optional, default to 1) 
    * @param conversionReportTime The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. (optional, default to TIME_OF_AD_ACTION)
    * @return Seq[AdGroupsAnalyticsResponseInner]
    */
  def adGroupsAnalytics(startDate:LocalDate          ,endDate:LocalDate          ,columns: Option[AdGroupsApiColumnsEnum.AdGroupsApiColumnsEnum]granularity:Granularity          ,clickWindowDays: Option[AdGroupsApiClickWindowDaysEnum.AdGroupsApiClickWindowDaysEnum]engagementWindowDays: Option[AdGroupsApiEngagementWindowDaysEnum.AdGroupsApiEngagementWindowDaysEnum]viewWindowDays: Option[AdGroupsApiViewWindowDaysEnum.AdGroupsApiViewWindowDaysEnum]conversionReportTime: Option[AdGroupsApiConversionReportTimeEnum.AdGroupsApiConversionReportTimeEnum]adAccountId: String): ServiceCall[NotUsed ,Seq[AdGroupsAnalyticsResponseInner]]
  
  /**
    * Get audience sizing
    * Get potential audience size for an ad group with given targeting criteria.  Potential audience size estimates the number of people you may be able to reach per month with your campaign.  It is based on historical advertising data and the targeting criteria you select. It does not guarantee results or take into account factors such as bid, budget, schedule, seasonality or product experiments.
    *  
    * @param adAccountId Unique identifier of an ad account.  
    * @return AdGroupAudienceSizingResponse Body Parameter   
    */
  def adGroupsAudienceSizing(adAccountId: String): ServiceCall[AdGroupAudienceSizingRequest ,AdGroupAudienceSizingResponse]
  
  /**
    * Get bid floors
    * List bid floors for your campaign configuration. Bid floors are given in microcurrency values based on the currency in the bid floor specification. &lt;p/&gt; &lt;p&gt;Microcurrency is used to track very small transactions, based on the currency set in the advertiser’s profile.&lt;/p&gt; &lt;p&gt;A microcurrency unit is 10^(-6) of the standard unit of currency selected in the advertiser’s profile.&lt;/p&gt; &lt;p&gt;&lt;strong&gt;Equivalency equations&lt;/strong&gt;, using dollars as an example currency:&lt;/p&gt; &lt;ul&gt;   &lt;li&gt;$1 &#x3D; 1,000,000 microdollars&lt;/li&gt;   &lt;li&gt;1 microdollar &#x3D; $0.000001 &lt;/li&gt; &lt;/ul&gt; &lt;p&gt;&lt;strong&gt;To convert between currency and microcurrency&lt;/strong&gt;, using dollars as an example currency:&lt;/p&gt; &lt;ul&gt;   &lt;li&gt;To convert dollars to microdollars, mutiply dollars by 1,000,000&lt;/li&gt;   &lt;li&gt;To convert microdollars to dollars, divide microdollars by 1,000,000&lt;/li&gt; &lt;/ul&gt; For more on bid floors see &lt;a class&#x3D;\&quot;reference external\&quot; href&#x3D;\&quot;https://help.pinterest.com/en/business/article/set-your-bid\&quot;&gt; Set your bid&lt;/a&gt;.
    *  
    * @param adAccountId Unique identifier of an ad account.  
    * @return BidFloor Body Parameter  Parameters to get bid_floor info 
    */
  def adGroupsBidFloorGet(adAccountId: String): ServiceCall[BidFloorRequest ,BidFloor]
  
  /**
    * Create ad groups
    * Create multiple new ad groups. All ads in a given ad group will have the same budget, bid, run dates, targeting, and placement (search, browse, other). For more information, &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/campaign-structure\&quot; target&#x3D;\&quot;_blank\&quot;&gt; click here&lt;/a&gt;.&lt;/p&gt; &lt;strong&gt;Note:&lt;/strong&gt; - &#39;bid_in_micro_currency&#39; and &#39;budget_in_micro_currency&#39; should be expressed in microcurrency amounts based on the currency field set in the advertiser&#39;s profile.&lt;p/&gt; &lt;p&gt;Microcurrency is used to track very small transactions, based on the currency set in the advertiser’s profile.&lt;/p&gt; &lt;p&gt;A microcurrency unit is 10^(-6) of the standard unit of currency selected in the advertiser’s profile.&lt;/p&gt; &lt;p&gt;&lt;strong&gt;Equivalency equations&lt;/strong&gt;, using dollars as an example currency:&lt;/p&gt; &lt;ul&gt;   &lt;li&gt;$1 &#x3D; 1,000,000 microdollars&lt;/li&gt;   &lt;li&gt;1 microdollar &#x3D; $0.000001 &lt;/li&gt; &lt;/ul&gt; &lt;p&gt;&lt;strong&gt;To convert between currency and microcurrency&lt;/strong&gt;, using dollars as an example currency:&lt;/p&gt; &lt;ul&gt;   &lt;li&gt;To convert dollars to microdollars, mutiply dollars by 1,000,000&lt;/li&gt;   &lt;li&gt;To convert microdollars to dollars, divide microdollars by 1,000,000&lt;/li&gt; &lt;/ul&gt; - Ad groups belong to ad campaigns. Some types of campaigns (e.g. budget optimization) have limits on the number of ad groups they can hold. If you exceed those limits, you will get an error message. - Start and end time cannot be set for ad groups that belong to CBO campaigns. Currently, campaigns with the following objective types: TRAFFIC, AWARENESS, WEB_CONVERSIONS, and CATALOG_SALES will default to CBO.
    *  
    * @param adAccountId Unique identifier of an ad account.  
    * @return AdGroupArrayResponse Body Parameter  List of ad groups to create, size limit [1, 30]. 
    */
  def adGroupsCreate(adAccountId: String): ServiceCall[Seq[AdGroupCreateRequest] ,AdGroupArrayResponse]
  
  /**
    * Get ad group
    * Get a specific ad given the ad ID. If your pin is rejected, rejected_reasons will contain additional information from the Ad Review process. For more information about our policies and rejection reasons see the &lt;a href&#x3D;\&quot;https://www.pinterest.com/_/_/policy/advertising-guidelines/\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Pinterest advertising standards&lt;/a&gt;.
    *  
    * @param adAccountId Unique identifier of an ad account.  
    * @param adGroupId Unique identifier of an ad group. 
    * @return AdGroupResponse
    */
  def adGroupsGet(adAccountId: String, adGroupId: String): ServiceCall[NotUsed ,AdGroupResponse]
        
  // campaignIds:Seq[String]  -- not yet supported Seq PathParamSerializers for multi value query parameters https://github.com/lagom/lagom/issues/643
      
  // adGroupIds:Seq[String]  -- not yet supported Seq PathParamSerializers for multi value query parameters https://github.com/lagom/lagom/issues/643
      
  // entityStatuses:Seq[String]  -- not yet supported Seq PathParamSerializers for multi value query parameters https://github.com/lagom/lagom/issues/643
      
  /**
    * List ad groups
    * List ad groups based on provided campaign IDs or ad group IDs.(campaign_ids or ad_group_ids). &lt;p/&gt; &lt;strong&gt;Note:&lt;/strong&gt;&lt;p/&gt; Provide only campaign_id or ad_group_id. Do not provide both.
    *  
    * @param adAccountId Unique identifier of an ad account.  
    * @param campaignIds List of Campaign Ids to use to filter the results. (optional, default to new ListBuffer[String]() ) 
    * @param adGroupIds List of Ad group Ids to use to filter the results. (optional, default to new ListBuffer[String]() ) 
    * @param entityStatuses Entity status (optional, default to ["ACTIVE","PAUSED"]) 
    * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25) 
    * @param order The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items. (optional) 
    * @param bookmark Cursor used to fetch the next page of items (optional) 
    * @param translateInterestsToNames Return interests as text names (if value is true) rather than topic IDs. (optional, default to false)
    * @return AdGroupsList200Response
    */
  def adGroupsList(entityStatuses: Option[AdGroupsApiEntityStatusesEnum.AdGroupsApiEntityStatusesEnum]pageSize:           Option[Int] /* = 25*/,order: Option[AdGroupsApiOrderEnum.AdGroupsApiOrderEnum]bookmark:           Option[String] = None,translateInterestsToNames:           Option[Boolean] /* = false*/adAccountId: String): ServiceCall[NotUsed ,AdGroupsList200Response]
        
  // adGroupIds:Seq[String]  -- not yet supported Seq PathParamSerializers for multi value query parameters https://github.com/lagom/lagom/issues/643
      
  // targetingTypes:Seq[AdsAnalyticsTargetingType]  -- not yet supported Seq PathParamSerializers for multi value query parameters https://github.com/lagom/lagom/issues/643
      
  // columns:Seq[String]  -- not yet supported Seq PathParamSerializers for multi value query parameters https://github.com/lagom/lagom/issues/643
      
  /**
    * Get targeting analytics for ad groups
    * Get targeting analytics for one or more ad groups. For the requested ad group(s) and metrics, the response will include the requested metric information (e.g. SPEND_IN_DOLLAR) for the requested target type (e.g. \&quot;age_bucket\&quot;) for applicable values (e.g. \&quot;45-49\&quot;). &lt;p/&gt; - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
    *  
    * @param adAccountId Unique identifier of an ad account.  
    * @param adGroupIds List of Ad group Ids to use to filter the results.  
    * @param startDate Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days back from today.  
    * @param endDate Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days past start_date.  
    * @param targetingTypes Targeting type breakdowns for the report. The reporting per targeting type &lt;br&gt; is independent from each other.  
    * @param columns Columns to retrieve, encoded as a comma-separated string. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile&#39;s currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it&#39;s microdollars. Otherwise, it&#39;s in microunits of the advertiser&#39;s currency.&lt;br/&gt;For example, if the advertiser&#39;s currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).&lt;br/&gt;If a column has no value, it may not be returned  
    * @param granularity TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly  
    * @param clickWindowDays Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional, default to 30) 
    * @param engagementWindowDays Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional, default to 30) 
    * @param viewWindowDays Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day. (optional, default to 1) 
    * @param conversionReportTime The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. (optional, default to TIME_OF_AD_ACTION) 
    * @param attributionTypes List of types of attribution for the conversion report (optional)
    * @return MetricsResponse
    */
  def adGroupsTargetingAnalyticsGet(startDate:LocalDate          ,endDate:LocalDate          ,columns: Option[AdGroupsApiColumnsEnum.AdGroupsApiColumnsEnum]granularity:Granularity          ,clickWindowDays: Option[AdGroupsApiClickWindowDaysEnum.AdGroupsApiClickWindowDaysEnum]engagementWindowDays: Option[AdGroupsApiEngagementWindowDaysEnum.AdGroupsApiEngagementWindowDaysEnum]viewWindowDays: Option[AdGroupsApiViewWindowDaysEnum.AdGroupsApiViewWindowDaysEnum]conversionReportTime: Option[AdGroupsApiConversionReportTimeEnum.AdGroupsApiConversionReportTimeEnum]attributionTypes:           Option[ConversionReportAttributionType] = NoneadAccountId: String): ServiceCall[NotUsed ,MetricsResponse]
  
  /**
    * Update ad groups
    * Update multiple existing ad groups.
    *  
    * @param adAccountId Unique identifier of an ad account.  
    * @return AdGroupArrayResponse Body Parameter  List of ad groups to update, size limit [1, 30]. 
    */
  def adGroupsUpdate(adAccountId: String): ServiceCall[Seq[AdGroupUpdateRequest] ,AdGroupArrayResponse]
  

        object AdGroupsApiColumnsEnum extends Enumeration {
        val   SPEND_IN_MICRO_DOLLAR, PAID_IMPRESSION, SPEND_IN_DOLLAR, CPC_IN_MICRO_DOLLAR, ECPC_IN_MICRO_DOLLAR, ECPC_IN_DOLLAR, CTR, ECTR, CAMPAIGN_NAME, PIN_ID, TOTAL_ENGAGEMENT, ENGAGEMENT_1, ENGAGEMENT_2, ECPE_IN_DOLLAR, ENGAGEMENT_RATE, EENGAGEMENT_RATE, ECPM_IN_MICRO_DOLLAR, REPIN_RATE, CTR_2, CAMPAIGN_ID, ADVERTISER_ID, AD_ACCOUNT_ID, PIN_PROMOTION_ID, AD_ID, AD_GROUP_ID, CAMPAIGN_ENTITY_STATUS, CAMPAIGN_OBJECTIVE_TYPE, CPM_IN_MICRO_DOLLAR, CPM_IN_DOLLAR, AD_GROUP_ENTITY_STATUS, ORDER_LINE_ID, ORDER_LINE_NAME, CLICKTHROUGH_1, REPIN_1, IMPRESSION_1, IMPRESSION_1_GROSS, CLICKTHROUGH_1_GROSS, OUTBOUND_CLICK_1, CLICKTHROUGH_2, REPIN_2, IMPRESSION_2, OUTBOUND_CLICK_2, TOTAL_CLICKTHROUGH, TOTAL_IMPRESSION, TOTAL_IMPRESSION_USER, TOTAL_IMPRESSION_FREQUENCY, COST_PER_OUTBOUND_CLICK_IN_DOLLAR, TOTAL_ENGAGEMENT_SIGNUP, TOTAL_ENGAGEMENT_CHECKOUT, TOTAL_ENGAGEMENT_LEAD, TOTAL_CLICK_SIGNUP, TOTAL_CLICK_CHECKOUT, TOTAL_CLICK_ADD_TO_CART, TOTAL_CLICK_LEAD, TOTAL_VIEW_SIGNUP, TOTAL_VIEW_CHECKOUT, TOTAL_VIEW_ADD_TO_CART, TOTAL_VIEW_LEAD, TOTAL_CONVERSIONS, TOTAL_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR, TOTAL_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR, TOTAL_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR, TOTAL_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR, TOTAL_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR, TOTAL_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR, TOTAL_WEB_SESSIONS, WEB_SESSIONS_1, WEB_SESSIONS_2, CAMPAIGN_LIFETIME_SPEND_CAP, CAMPAIGN_DAILY_SPEND_CAP, TOTAL_PAGE_VISIT, TOTAL_SIGNUP, TOTAL_CHECKOUT, TOTAL_CUSTOM, TOTAL_LEAD, TOTAL_SIGNUP_VALUE_IN_MICRO_DOLLAR, TOTAL_CHECKOUT_VALUE_IN_MICRO_DOLLAR, TOTAL_CUSTOM_VALUE_IN_MICRO_DOLLAR, PAGE_VISIT_COST_PER_ACTION, PAGE_VISIT_ROAS, CHECKOUT_ROAS, CUSTOM_ROAS, VIDEO_MRC_VIEWS_1, VIDEO_3SEC_VIEWS_2, VIDEO_P100_COMPLETE_2, VIDEO_P0_COMBINED_2, VIDEO_P25_COMBINED_2, VIDEO_P50_COMBINED_2, VIDEO_P75_COMBINED_2, VIDEO_P95_COMBINED_2, VIDEO_MRC_VIEWS_2, VIDEO_LENGTH, ECPV_IN_DOLLAR, ECPCV_IN_DOLLAR, ECPCV_P95_IN_DOLLAR, TOTAL_VIDEO_3SEC_VIEWS, TOTAL_VIDEO_P100_COMPLETE, TOTAL_VIDEO_P0_COMBINED, TOTAL_VIDEO_P25_COMBINED, TOTAL_VIDEO_P50_COMBINED, TOTAL_VIDEO_P75_COMBINED, TOTAL_VIDEO_P95_COMBINED, TOTAL_VIDEO_MRC_VIEWS, TOTAL_VIDEO_AVG_WATCHTIME_IN_SECOND, TOTAL_REPIN_RATE, WEB_CHECKOUT_COST_PER_ACTION, WEB_CHECKOUT_ROAS, TOTAL_WEB_CHECKOUT, TOTAL_WEB_CHECKOUT_VALUE_IN_MICRO_DOLLAR, TOTAL_WEB_CLICK_CHECKOUT, TOTAL_WEB_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR, TOTAL_WEB_ENGAGEMENT_CHECKOUT, TOTAL_WEB_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR, TOTAL_WEB_VIEW_CHECKOUT, TOTAL_WEB_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR, INAPP_CHECKOUT_COST_PER_ACTION, TOTAL_OFFLINE_CHECKOUT, IDEA_PIN_PRODUCT_TAG_VISIT_1, IDEA_PIN_PRODUCT_TAG_VISIT_2, TOTAL_IDEA_PIN_PRODUCT_TAG_VISIT, LEADS, COST_PER_LEAD, QUIZ_COMPLETED, QUIZ_COMPLETION_RATE, SHOWCASE_PIN_CLICKTHROUGH, SHOWCASE_SUBPAGE_CLICKTHROUGH, SHOWCASE_SUBPIN_CLICKTHROUGH, SHOWCASE_SUBPAGE_IMPRESSION, SHOWCASE_SUBPIN_IMPRESSION, SHOWCASE_SUBPAGE_SWIPE_LEFT, SHOWCASE_SUBPAGE_SWIPE_RIGHT, SHOWCASE_SUBPIN_SWIPE_LEFT, SHOWCASE_SUBPIN_SWIPE_RIGHT, SHOWCASE_SUBPAGE_REPIN, SHOWCASE_SUBPIN_REPIN, SHOWCASE_SUBPAGE_CLOSEUP, SHOWCASE_CARD_THUMBNAIL_SWIPE_FORWARD, SHOWCASE_CARD_THUMBNAIL_SWIPE_BACKWARD, SHOWCASE_AVERAGE_SUBPAGE_CLOSEUP_PER_SESSION, TOTAL_CHECKOUT_CONVERSION_RATE, TOTAL_VIEW_CATEGORY_CONVERSION_RATE, TOTAL_ADD_TO_CART_CONVERSION_RATE, TOTAL_SIGNUP_CONVERSION_RATE, TOTAL_PAGE_VISIT_CONVERSION_RATE, TOTAL_LEAD_CONVERSION_RATE, TOTAL_SEARCH_CONVERSION_RATE, TOTAL_WATCH_VIDEO_CONVERSION_RATE, TOTAL_UNKNOWN_CONVERSION_RATE, TOTAL_CUSTOM_CONVERSION_RATE = Value     
        type AdGroupsApiColumnsEnum = Value
        implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[AdGroupsApiColumnsEnum.type])
        implicit val pathParamSerializer: PathParamSerializer[AdGroupsApiColumnsEnum] = PathParamSerializer.required("AdGroupsApiColumnsEnum")(withName)(_.toString)
        }
        object AdGroupsApiClickWindowDaysEnum extends Enumeration {
        val   0, 1, 7, 14, 30, 60 = Value     
        type AdGroupsApiClickWindowDaysEnum = Value
        implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[AdGroupsApiClickWindowDaysEnum.type])
        implicit val pathParamSerializer: PathParamSerializer[AdGroupsApiClickWindowDaysEnum] = PathParamSerializer.required("AdGroupsApiClickWindowDaysEnum")(withName)(_.toString)
        }
        object AdGroupsApiEngagementWindowDaysEnum extends Enumeration {
        val   0, 1, 7, 14, 30, 60 = Value     
        type AdGroupsApiEngagementWindowDaysEnum = Value
        implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[AdGroupsApiEngagementWindowDaysEnum.type])
        implicit val pathParamSerializer: PathParamSerializer[AdGroupsApiEngagementWindowDaysEnum] = PathParamSerializer.required("AdGroupsApiEngagementWindowDaysEnum")(withName)(_.toString)
        }
        object AdGroupsApiViewWindowDaysEnum extends Enumeration {
        val   0, 1, 7, 14, 30, 60 = Value     
        type AdGroupsApiViewWindowDaysEnum = Value
        implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[AdGroupsApiViewWindowDaysEnum.type])
        implicit val pathParamSerializer: PathParamSerializer[AdGroupsApiViewWindowDaysEnum] = PathParamSerializer.required("AdGroupsApiViewWindowDaysEnum")(withName)(_.toString)
        }
        object AdGroupsApiConversionReportTimeEnum extends Enumeration {
        val   TIME_OF_AD_ACTION, TIME_OF_CONVERSION = Value     
        type AdGroupsApiConversionReportTimeEnum = Value
        implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[AdGroupsApiConversionReportTimeEnum.type])
        implicit val pathParamSerializer: PathParamSerializer[AdGroupsApiConversionReportTimeEnum] = PathParamSerializer.required("AdGroupsApiConversionReportTimeEnum")(withName)(_.toString)
        }
        object AdGroupsApiEntityStatusesEnum extends Enumeration {
        val   ACTIVE, PAUSED, ARCHIVED, DRAFT, DELETED_DRAFT = Value     
        type AdGroupsApiEntityStatusesEnum = Value
        implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[AdGroupsApiEntityStatusesEnum.type])
        implicit val pathParamSerializer: PathParamSerializer[AdGroupsApiEntityStatusesEnum] = PathParamSerializer.required("AdGroupsApiEntityStatusesEnum")(withName)(_.toString)
        }
        object AdGroupsApiOrderEnum extends Enumeration {
        val   ASCENDING, DESCENDING = Value     
        type AdGroupsApiOrderEnum = Value
        implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[AdGroupsApiOrderEnum.type])
        implicit val pathParamSerializer: PathParamSerializer[AdGroupsApiOrderEnum] = PathParamSerializer.required("AdGroupsApiOrderEnum")(withName)(_.toString)
        }
        object AdGroupsApiColumnsEnum extends Enumeration {
        val   SPEND_IN_MICRO_DOLLAR, PAID_IMPRESSION, SPEND_IN_DOLLAR, CPC_IN_MICRO_DOLLAR, ECPC_IN_MICRO_DOLLAR, ECPC_IN_DOLLAR, CTR, ECTR, CAMPAIGN_NAME, PIN_ID, TOTAL_ENGAGEMENT, ENGAGEMENT_1, ENGAGEMENT_2, ECPE_IN_DOLLAR, ENGAGEMENT_RATE, EENGAGEMENT_RATE, ECPM_IN_MICRO_DOLLAR, REPIN_RATE, CTR_2, CAMPAIGN_ID, ADVERTISER_ID, AD_ACCOUNT_ID, PIN_PROMOTION_ID, AD_ID, AD_GROUP_ID, CAMPAIGN_ENTITY_STATUS, CAMPAIGN_OBJECTIVE_TYPE, CPM_IN_MICRO_DOLLAR, CPM_IN_DOLLAR, AD_GROUP_ENTITY_STATUS, ORDER_LINE_ID, ORDER_LINE_NAME, CLICKTHROUGH_1, REPIN_1, IMPRESSION_1, IMPRESSION_1_GROSS, CLICKTHROUGH_1_GROSS, OUTBOUND_CLICK_1, CLICKTHROUGH_2, REPIN_2, IMPRESSION_2, OUTBOUND_CLICK_2, TOTAL_CLICKTHROUGH, TOTAL_IMPRESSION, TOTAL_IMPRESSION_USER, TOTAL_IMPRESSION_FREQUENCY, COST_PER_OUTBOUND_CLICK_IN_DOLLAR, TOTAL_ENGAGEMENT_SIGNUP, TOTAL_ENGAGEMENT_CHECKOUT, TOTAL_ENGAGEMENT_LEAD, TOTAL_CLICK_SIGNUP, TOTAL_CLICK_CHECKOUT, TOTAL_CLICK_ADD_TO_CART, TOTAL_CLICK_LEAD, TOTAL_VIEW_SIGNUP, TOTAL_VIEW_CHECKOUT, TOTAL_VIEW_ADD_TO_CART, TOTAL_VIEW_LEAD, TOTAL_CONVERSIONS, TOTAL_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR, TOTAL_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR, TOTAL_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR, TOTAL_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR, TOTAL_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR, TOTAL_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR, TOTAL_WEB_SESSIONS, WEB_SESSIONS_1, WEB_SESSIONS_2, CAMPAIGN_LIFETIME_SPEND_CAP, CAMPAIGN_DAILY_SPEND_CAP, TOTAL_PAGE_VISIT, TOTAL_SIGNUP, TOTAL_CHECKOUT, TOTAL_CUSTOM, TOTAL_LEAD, TOTAL_SIGNUP_VALUE_IN_MICRO_DOLLAR, TOTAL_CHECKOUT_VALUE_IN_MICRO_DOLLAR, TOTAL_CUSTOM_VALUE_IN_MICRO_DOLLAR, PAGE_VISIT_COST_PER_ACTION, PAGE_VISIT_ROAS, CHECKOUT_ROAS, CUSTOM_ROAS, VIDEO_MRC_VIEWS_1, VIDEO_3SEC_VIEWS_2, VIDEO_P100_COMPLETE_2, VIDEO_P0_COMBINED_2, VIDEO_P25_COMBINED_2, VIDEO_P50_COMBINED_2, VIDEO_P75_COMBINED_2, VIDEO_P95_COMBINED_2, VIDEO_MRC_VIEWS_2, VIDEO_LENGTH, ECPV_IN_DOLLAR, ECPCV_IN_DOLLAR, ECPCV_P95_IN_DOLLAR, TOTAL_VIDEO_3SEC_VIEWS, TOTAL_VIDEO_P100_COMPLETE, TOTAL_VIDEO_P0_COMBINED, TOTAL_VIDEO_P25_COMBINED, TOTAL_VIDEO_P50_COMBINED, TOTAL_VIDEO_P75_COMBINED, TOTAL_VIDEO_P95_COMBINED, TOTAL_VIDEO_MRC_VIEWS, TOTAL_VIDEO_AVG_WATCHTIME_IN_SECOND, TOTAL_REPIN_RATE, WEB_CHECKOUT_COST_PER_ACTION, WEB_CHECKOUT_ROAS, TOTAL_WEB_CHECKOUT, TOTAL_WEB_CHECKOUT_VALUE_IN_MICRO_DOLLAR, TOTAL_WEB_CLICK_CHECKOUT, TOTAL_WEB_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR, TOTAL_WEB_ENGAGEMENT_CHECKOUT, TOTAL_WEB_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR, TOTAL_WEB_VIEW_CHECKOUT, TOTAL_WEB_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR, INAPP_CHECKOUT_COST_PER_ACTION, TOTAL_OFFLINE_CHECKOUT, IDEA_PIN_PRODUCT_TAG_VISIT_1, IDEA_PIN_PRODUCT_TAG_VISIT_2, TOTAL_IDEA_PIN_PRODUCT_TAG_VISIT, LEADS, COST_PER_LEAD, QUIZ_COMPLETED, QUIZ_COMPLETION_RATE, SHOWCASE_PIN_CLICKTHROUGH, SHOWCASE_SUBPAGE_CLICKTHROUGH, SHOWCASE_SUBPIN_CLICKTHROUGH, SHOWCASE_SUBPAGE_IMPRESSION, SHOWCASE_SUBPIN_IMPRESSION, SHOWCASE_SUBPAGE_SWIPE_LEFT, SHOWCASE_SUBPAGE_SWIPE_RIGHT, SHOWCASE_SUBPIN_SWIPE_LEFT, SHOWCASE_SUBPIN_SWIPE_RIGHT, SHOWCASE_SUBPAGE_REPIN, SHOWCASE_SUBPIN_REPIN, SHOWCASE_SUBPAGE_CLOSEUP, SHOWCASE_CARD_THUMBNAIL_SWIPE_FORWARD, SHOWCASE_CARD_THUMBNAIL_SWIPE_BACKWARD, SHOWCASE_AVERAGE_SUBPAGE_CLOSEUP_PER_SESSION, TOTAL_CHECKOUT_CONVERSION_RATE, TOTAL_VIEW_CATEGORY_CONVERSION_RATE, TOTAL_ADD_TO_CART_CONVERSION_RATE, TOTAL_SIGNUP_CONVERSION_RATE, TOTAL_PAGE_VISIT_CONVERSION_RATE, TOTAL_LEAD_CONVERSION_RATE, TOTAL_SEARCH_CONVERSION_RATE, TOTAL_WATCH_VIDEO_CONVERSION_RATE, TOTAL_UNKNOWN_CONVERSION_RATE, TOTAL_CUSTOM_CONVERSION_RATE = Value     
        type AdGroupsApiColumnsEnum = Value
        implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[AdGroupsApiColumnsEnum.type])
        implicit val pathParamSerializer: PathParamSerializer[AdGroupsApiColumnsEnum] = PathParamSerializer.required("AdGroupsApiColumnsEnum")(withName)(_.toString)
        }
        object AdGroupsApiClickWindowDaysEnum extends Enumeration {
        val   0, 1, 7, 14, 30, 60 = Value     
        type AdGroupsApiClickWindowDaysEnum = Value
        implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[AdGroupsApiClickWindowDaysEnum.type])
        implicit val pathParamSerializer: PathParamSerializer[AdGroupsApiClickWindowDaysEnum] = PathParamSerializer.required("AdGroupsApiClickWindowDaysEnum")(withName)(_.toString)
        }
        object AdGroupsApiEngagementWindowDaysEnum extends Enumeration {
        val   0, 1, 7, 14, 30, 60 = Value     
        type AdGroupsApiEngagementWindowDaysEnum = Value
        implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[AdGroupsApiEngagementWindowDaysEnum.type])
        implicit val pathParamSerializer: PathParamSerializer[AdGroupsApiEngagementWindowDaysEnum] = PathParamSerializer.required("AdGroupsApiEngagementWindowDaysEnum")(withName)(_.toString)
        }
        object AdGroupsApiViewWindowDaysEnum extends Enumeration {
        val   0, 1, 7, 14, 30, 60 = Value     
        type AdGroupsApiViewWindowDaysEnum = Value
        implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[AdGroupsApiViewWindowDaysEnum.type])
        implicit val pathParamSerializer: PathParamSerializer[AdGroupsApiViewWindowDaysEnum] = PathParamSerializer.required("AdGroupsApiViewWindowDaysEnum")(withName)(_.toString)
        }
        object AdGroupsApiConversionReportTimeEnum extends Enumeration {
        val   TIME_OF_AD_ACTION, TIME_OF_CONVERSION = Value     
        type AdGroupsApiConversionReportTimeEnum = Value
        implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[AdGroupsApiConversionReportTimeEnum.type])
        implicit val pathParamSerializer: PathParamSerializer[AdGroupsApiConversionReportTimeEnum] = PathParamSerializer.required("AdGroupsApiConversionReportTimeEnum")(withName)(_.toString)
        }
  }
