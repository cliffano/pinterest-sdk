/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.AdGroupSummaryStatus;
import org.openapitools.model.AdsAnalyticsCreateAsyncRequestAllOf;
import org.openapitools.model.AdsAnalyticsCreateAsyncRequestAllOf1;
import org.openapitools.model.AdsAnalyticsMetricsFilter;
import org.openapitools.model.AdsAnalyticsTargetingType;
import org.openapitools.model.CampaignSummaryStatus;
import org.openapitools.model.ConversionAttributionWindowDays;
import org.openapitools.model.ConversionReportAttributionType;
import org.openapitools.model.ConversionReportTimeType;
import org.openapitools.model.DataOutputFormat;
import org.openapitools.model.Granularity;
import org.openapitools.model.MetricsReportingLevel;
import org.openapitools.model.ObjectiveType;
import org.openapitools.model.PinPromotionSummaryStatus;
import org.openapitools.model.ProductGroupSummaryStatus;
import org.openapitools.model.ReportingColumnAsync;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * AdsAnalyticsCreateAsyncRequest
 */
@JsonPropertyOrder({
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_START_DATE,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_END_DATE,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_GRANULARITY,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_CLICK_WINDOW_DAYS,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_ENGAGEMENT_WINDOW_DAYS,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_VIEW_WINDOW_DAYS,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_CONVERSION_REPORT_TIME,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_ATTRIBUTION_TYPES,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_COLUMNS,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_LEVEL,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_REPORT_FORMAT,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_CAMPAIGN_IDS,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_CAMPAIGN_STATUSES,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_CAMPAIGN_OBJECTIVE_TYPES,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_AD_GROUP_IDS,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_AD_GROUP_STATUSES,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_AD_IDS,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_AD_STATUSES,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_PRODUCT_GROUP_IDS,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_PRODUCT_GROUP_STATUSES,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_PRODUCT_ITEM_IDS,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_TARGETING_TYPES,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_METRICS_FILTERS
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2022-05-07T06:42:01.683468Z[Etc/UTC]")
public class AdsAnalyticsCreateAsyncRequest   {
  public static final String JSON_PROPERTY_START_DATE = "start_date";
  @JsonProperty(JSON_PROPERTY_START_DATE)
  private String startDate;

  public static final String JSON_PROPERTY_END_DATE = "end_date";
  @JsonProperty(JSON_PROPERTY_END_DATE)
  private String endDate;

  public static final String JSON_PROPERTY_GRANULARITY = "granularity";
  @JsonProperty(JSON_PROPERTY_GRANULARITY)
  private Granularity granularity;

  public static final String JSON_PROPERTY_CLICK_WINDOW_DAYS = "click_window_days";
  @JsonProperty(JSON_PROPERTY_CLICK_WINDOW_DAYS)
  private ConversionAttributionWindowDays clickWindowDays = 30;

  public static final String JSON_PROPERTY_ENGAGEMENT_WINDOW_DAYS = "engagement_window_days";
  @JsonProperty(JSON_PROPERTY_ENGAGEMENT_WINDOW_DAYS)
  private ConversionAttributionWindowDays engagementWindowDays = 30;

  public static final String JSON_PROPERTY_VIEW_WINDOW_DAYS = "view_window_days";
  @JsonProperty(JSON_PROPERTY_VIEW_WINDOW_DAYS)
  private ConversionAttributionWindowDays viewWindowDays = 1;

  public static final String JSON_PROPERTY_CONVERSION_REPORT_TIME = "conversion_report_time";
  @JsonProperty(JSON_PROPERTY_CONVERSION_REPORT_TIME)
  private ConversionReportTimeType conversionReportTime = "TIME_OF_AD_ACTION";

  public static final String JSON_PROPERTY_ATTRIBUTION_TYPES = "attribution_types";
  @JsonProperty(JSON_PROPERTY_ATTRIBUTION_TYPES)
  private List<ConversionReportAttributionType> attributionTypes = null;

  public static final String JSON_PROPERTY_COLUMNS = "columns";
  @JsonProperty(JSON_PROPERTY_COLUMNS)
  private List<ReportingColumnAsync> columns = new ArrayList<ReportingColumnAsync>();

  public static final String JSON_PROPERTY_LEVEL = "level";
  @JsonProperty(JSON_PROPERTY_LEVEL)
  private MetricsReportingLevel level;

  public static final String JSON_PROPERTY_REPORT_FORMAT = "report_format";
  @JsonProperty(JSON_PROPERTY_REPORT_FORMAT)
  private DataOutputFormat reportFormat = "JSON";

  public static final String JSON_PROPERTY_CAMPAIGN_IDS = "campaign_ids";
  @JsonProperty(JSON_PROPERTY_CAMPAIGN_IDS)
  private List<String> campaignIds = null;

  public static final String JSON_PROPERTY_CAMPAIGN_STATUSES = "campaign_statuses";
  @JsonProperty(JSON_PROPERTY_CAMPAIGN_STATUSES)
  private List<CampaignSummaryStatus> campaignStatuses = null;

  public static final String JSON_PROPERTY_CAMPAIGN_OBJECTIVE_TYPES = "campaign_objective_types";
  @JsonProperty(JSON_PROPERTY_CAMPAIGN_OBJECTIVE_TYPES)
  private List<ObjectiveType> campaignObjectiveTypes = null;

  public static final String JSON_PROPERTY_AD_GROUP_IDS = "ad_group_ids";
  @JsonProperty(JSON_PROPERTY_AD_GROUP_IDS)
  private List<String> adGroupIds = null;

  public static final String JSON_PROPERTY_AD_GROUP_STATUSES = "ad_group_statuses";
  @JsonProperty(JSON_PROPERTY_AD_GROUP_STATUSES)
  private List<AdGroupSummaryStatus> adGroupStatuses = null;

  public static final String JSON_PROPERTY_AD_IDS = "ad_ids";
  @JsonProperty(JSON_PROPERTY_AD_IDS)
  private List<String> adIds = null;

  public static final String JSON_PROPERTY_AD_STATUSES = "ad_statuses";
  @JsonProperty(JSON_PROPERTY_AD_STATUSES)
  private List<PinPromotionSummaryStatus> adStatuses = null;

  public static final String JSON_PROPERTY_PRODUCT_GROUP_IDS = "product_group_ids";
  @JsonProperty(JSON_PROPERTY_PRODUCT_GROUP_IDS)
  private List<String> productGroupIds = null;

  public static final String JSON_PROPERTY_PRODUCT_GROUP_STATUSES = "product_group_statuses";
  @JsonProperty(JSON_PROPERTY_PRODUCT_GROUP_STATUSES)
  private List<ProductGroupSummaryStatus> productGroupStatuses = null;

  public static final String JSON_PROPERTY_PRODUCT_ITEM_IDS = "product_item_ids";
  @JsonProperty(JSON_PROPERTY_PRODUCT_ITEM_IDS)
  private List<String> productItemIds = null;

  public static final String JSON_PROPERTY_TARGETING_TYPES = "targeting_types";
  @JsonProperty(JSON_PROPERTY_TARGETING_TYPES)
  private List<AdsAnalyticsTargetingType> targetingTypes = null;

  public static final String JSON_PROPERTY_METRICS_FILTERS = "metrics_filters";
  @JsonProperty(JSON_PROPERTY_METRICS_FILTERS)
  private List<AdsAnalyticsMetricsFilter> metricsFilters = null;

  public AdsAnalyticsCreateAsyncRequest startDate(String startDate) {
    this.startDate = startDate;
    return this;
  }

  /**
   * Metric report start date (UTC). Format: YYYY-MM-DD
   * @return startDate
   **/
  @JsonProperty(value = "start_date")
  @ApiModelProperty(example = "2020-12-20", required = true, value = "Metric report start date (UTC). Format: YYYY-MM-DD")
  @NotNull  @Pattern(regexp="^(\\d{4})-(\\d{2})-(\\d{2})$")
  public String getStartDate() {
    return startDate;
  }

  public void setStartDate(String startDate) {
    this.startDate = startDate;
  }

  public AdsAnalyticsCreateAsyncRequest endDate(String endDate) {
    this.endDate = endDate;
    return this;
  }

  /**
   * Metric report end date (UTC). Format: YYYY-MM-DD
   * @return endDate
   **/
  @JsonProperty(value = "end_date")
  @ApiModelProperty(example = "2020-12-20", required = true, value = "Metric report end date (UTC). Format: YYYY-MM-DD")
  @NotNull  @Pattern(regexp="^(\\d{4})-(\\d{2})-(\\d{2})$")
  public String getEndDate() {
    return endDate;
  }

  public void setEndDate(String endDate) {
    this.endDate = endDate;
  }

  public AdsAnalyticsCreateAsyncRequest granularity(Granularity granularity) {
    this.granularity = granularity;
    return this;
  }

  /**
   * TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly
   * @return granularity
   **/
  @JsonProperty(value = "granularity")
  @ApiModelProperty(required = true, value = "TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly")
  @NotNull 
  public Granularity getGranularity() {
    return granularity;
  }

  public void setGranularity(Granularity granularity) {
    this.granularity = granularity;
  }

  public AdsAnalyticsCreateAsyncRequest clickWindowDays(ConversionAttributionWindowDays clickWindowDays) {
    this.clickWindowDays = clickWindowDays;
    return this;
  }

  /**
   * Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.
   * @return clickWindowDays
   **/
  @JsonProperty(value = "click_window_days")
  @ApiModelProperty(value = "Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.")
  @Valid 
  public ConversionAttributionWindowDays getClickWindowDays() {
    return clickWindowDays;
  }

  public void setClickWindowDays(ConversionAttributionWindowDays clickWindowDays) {
    this.clickWindowDays = clickWindowDays;
  }

  public AdsAnalyticsCreateAsyncRequest engagementWindowDays(ConversionAttributionWindowDays engagementWindowDays) {
    this.engagementWindowDays = engagementWindowDays;
    return this;
  }

  /**
   * Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.
   * @return engagementWindowDays
   **/
  @JsonProperty(value = "engagement_window_days")
  @ApiModelProperty(value = "Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.")
  @Valid 
  public ConversionAttributionWindowDays getEngagementWindowDays() {
    return engagementWindowDays;
  }

  public void setEngagementWindowDays(ConversionAttributionWindowDays engagementWindowDays) {
    this.engagementWindowDays = engagementWindowDays;
  }

  public AdsAnalyticsCreateAsyncRequest viewWindowDays(ConversionAttributionWindowDays viewWindowDays) {
    this.viewWindowDays = viewWindowDays;
    return this;
  }

  /**
   * Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day.
   * @return viewWindowDays
   **/
  @JsonProperty(value = "view_window_days")
  @ApiModelProperty(value = "Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day.")
  @Valid 
  public ConversionAttributionWindowDays getViewWindowDays() {
    return viewWindowDays;
  }

  public void setViewWindowDays(ConversionAttributionWindowDays viewWindowDays) {
    this.viewWindowDays = viewWindowDays;
  }

  public AdsAnalyticsCreateAsyncRequest conversionReportTime(ConversionReportTimeType conversionReportTime) {
    this.conversionReportTime = conversionReportTime;
    return this;
  }

  /**
   * The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.
   * @return conversionReportTime
   **/
  @JsonProperty(value = "conversion_report_time")
  @ApiModelProperty(value = "The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.")
  
  public ConversionReportTimeType getConversionReportTime() {
    return conversionReportTime;
  }

  public void setConversionReportTime(ConversionReportTimeType conversionReportTime) {
    this.conversionReportTime = conversionReportTime;
  }

  public AdsAnalyticsCreateAsyncRequest attributionTypes(List<ConversionReportAttributionType> attributionTypes) {
    this.attributionTypes = attributionTypes;
    return this;
  }

  public AdsAnalyticsCreateAsyncRequest addAttributionTypesItem(ConversionReportAttributionType attributionTypesItem) {
    if (this.attributionTypes == null) {
      this.attributionTypes = new ArrayList<ConversionReportAttributionType>();
    }
    this.attributionTypes.add(attributionTypesItem);
    return this;
  }

  /**
   * List of types of attribution for the conversion report
   * @return attributionTypes
   **/
  @JsonProperty(value = "attribution_types")
  @ApiModelProperty(value = "List of types of attribution for the conversion report")
  @Valid 
  public List<ConversionReportAttributionType> getAttributionTypes() {
    return attributionTypes;
  }

  public void setAttributionTypes(List<ConversionReportAttributionType> attributionTypes) {
    this.attributionTypes = attributionTypes;
  }

  public AdsAnalyticsCreateAsyncRequest columns(List<ReportingColumnAsync> columns) {
    this.columns = columns;
    return this;
  }

  public AdsAnalyticsCreateAsyncRequest addColumnsItem(ReportingColumnAsync columnsItem) {
    this.columns.add(columnsItem);
    return this;
  }

  /**
   * Metric and entity columns
   * @return columns
   **/
  @JsonProperty(value = "columns")
  @ApiModelProperty(required = true, value = "Metric and entity columns")
  @NotNull @Valid 
  public List<ReportingColumnAsync> getColumns() {
    return columns;
  }

  public void setColumns(List<ReportingColumnAsync> columns) {
    this.columns = columns;
  }

  public AdsAnalyticsCreateAsyncRequest level(MetricsReportingLevel level) {
    this.level = level;
    return this;
  }

  /**
   * Level of the report
   * @return level
   **/
  @JsonProperty(value = "level")
  @ApiModelProperty(example = "CAMPAIGN", required = true, value = "Level of the report")
  @NotNull 
  public MetricsReportingLevel getLevel() {
    return level;
  }

  public void setLevel(MetricsReportingLevel level) {
    this.level = level;
  }

  public AdsAnalyticsCreateAsyncRequest reportFormat(DataOutputFormat reportFormat) {
    this.reportFormat = reportFormat;
    return this;
  }

  /**
   * Specification for formatting report data
   * @return reportFormat
   **/
  @JsonProperty(value = "report_format")
  @ApiModelProperty(value = "Specification for formatting report data")
  
  public DataOutputFormat getReportFormat() {
    return reportFormat;
  }

  public void setReportFormat(DataOutputFormat reportFormat) {
    this.reportFormat = reportFormat;
  }

  public AdsAnalyticsCreateAsyncRequest campaignIds(List<String> campaignIds) {
    this.campaignIds = campaignIds;
    return this;
  }

  public AdsAnalyticsCreateAsyncRequest addCampaignIdsItem(String campaignIdsItem) {
    if (this.campaignIds == null) {
      this.campaignIds = new ArrayList<String>();
    }
    this.campaignIds.add(campaignIdsItem);
    return this;
  }

  /**
   * List of campaign ids
   * @return campaignIds
   **/
  @JsonProperty(value = "campaign_ids")
  @ApiModelProperty(example = "[\"12345678\"]", value = "List of campaign ids")
   @Size(min=1,max=500)
  public List<String> getCampaignIds() {
    return campaignIds;
  }

  public void setCampaignIds(List<String> campaignIds) {
    this.campaignIds = campaignIds;
  }

  public AdsAnalyticsCreateAsyncRequest campaignStatuses(List<CampaignSummaryStatus> campaignStatuses) {
    this.campaignStatuses = campaignStatuses;
    return this;
  }

  public AdsAnalyticsCreateAsyncRequest addCampaignStatusesItem(CampaignSummaryStatus campaignStatusesItem) {
    if (this.campaignStatuses == null) {
      this.campaignStatuses = new ArrayList<CampaignSummaryStatus>();
    }
    this.campaignStatuses.add(campaignStatusesItem);
    return this;
  }

  /**
   * List of status values for filtering
   * @return campaignStatuses
   **/
  @JsonProperty(value = "campaign_statuses")
  @ApiModelProperty(example = "[\"RUNNING\",\"PAUSED\"]", value = "List of status values for filtering")
  @Valid  @Size(min=1,max=6)
  public List<CampaignSummaryStatus> getCampaignStatuses() {
    return campaignStatuses;
  }

  public void setCampaignStatuses(List<CampaignSummaryStatus> campaignStatuses) {
    this.campaignStatuses = campaignStatuses;
  }

  public AdsAnalyticsCreateAsyncRequest campaignObjectiveTypes(List<ObjectiveType> campaignObjectiveTypes) {
    this.campaignObjectiveTypes = campaignObjectiveTypes;
    return this;
  }

  public AdsAnalyticsCreateAsyncRequest addCampaignObjectiveTypesItem(ObjectiveType campaignObjectiveTypesItem) {
    if (this.campaignObjectiveTypes == null) {
      this.campaignObjectiveTypes = new ArrayList<ObjectiveType>();
    }
    this.campaignObjectiveTypes.add(campaignObjectiveTypesItem);
    return this;
  }

  /**
   * List of values for filtering
   * @return campaignObjectiveTypes
   **/
  @JsonProperty(value = "campaign_objective_types")
  @ApiModelProperty(example = "[\"AWARENESS\",\"VIDEO_VIEW\"]", value = "List of values for filtering")
  @Valid  @Size(min=1,max=6)
  public List<ObjectiveType> getCampaignObjectiveTypes() {
    return campaignObjectiveTypes;
  }

  public void setCampaignObjectiveTypes(List<ObjectiveType> campaignObjectiveTypes) {
    this.campaignObjectiveTypes = campaignObjectiveTypes;
  }

  public AdsAnalyticsCreateAsyncRequest adGroupIds(List<String> adGroupIds) {
    this.adGroupIds = adGroupIds;
    return this;
  }

  public AdsAnalyticsCreateAsyncRequest addAdGroupIdsItem(String adGroupIdsItem) {
    if (this.adGroupIds == null) {
      this.adGroupIds = new ArrayList<String>();
    }
    this.adGroupIds.add(adGroupIdsItem);
    return this;
  }

  /**
   * List of ad group ids
   * @return adGroupIds
   **/
  @JsonProperty(value = "ad_group_ids")
  @ApiModelProperty(example = "[\"12345678\"]", value = "List of ad group ids")
   @Size(min=1,max=500)
  public List<String> getAdGroupIds() {
    return adGroupIds;
  }

  public void setAdGroupIds(List<String> adGroupIds) {
    this.adGroupIds = adGroupIds;
  }

  public AdsAnalyticsCreateAsyncRequest adGroupStatuses(List<AdGroupSummaryStatus> adGroupStatuses) {
    this.adGroupStatuses = adGroupStatuses;
    return this;
  }

  public AdsAnalyticsCreateAsyncRequest addAdGroupStatusesItem(AdGroupSummaryStatus adGroupStatusesItem) {
    if (this.adGroupStatuses == null) {
      this.adGroupStatuses = new ArrayList<AdGroupSummaryStatus>();
    }
    this.adGroupStatuses.add(adGroupStatusesItem);
    return this;
  }

  /**
   * List of values for filtering
   * @return adGroupStatuses
   **/
  @JsonProperty(value = "ad_group_statuses")
  @ApiModelProperty(example = "[\"RUNNING\",\"PAUSED\"]", value = "List of values for filtering")
  @Valid  @Size(min=1,max=6)
  public List<AdGroupSummaryStatus> getAdGroupStatuses() {
    return adGroupStatuses;
  }

  public void setAdGroupStatuses(List<AdGroupSummaryStatus> adGroupStatuses) {
    this.adGroupStatuses = adGroupStatuses;
  }

  public AdsAnalyticsCreateAsyncRequest adIds(List<String> adIds) {
    this.adIds = adIds;
    return this;
  }

  public AdsAnalyticsCreateAsyncRequest addAdIdsItem(String adIdsItem) {
    if (this.adIds == null) {
      this.adIds = new ArrayList<String>();
    }
    this.adIds.add(adIdsItem);
    return this;
  }

  /**
   * List of ad ids
   * @return adIds
   **/
  @JsonProperty(value = "ad_ids")
  @ApiModelProperty(example = "[\"12345678\"]", value = "List of ad ids")
   @Size(min=1,max=500)
  public List<String> getAdIds() {
    return adIds;
  }

  public void setAdIds(List<String> adIds) {
    this.adIds = adIds;
  }

  public AdsAnalyticsCreateAsyncRequest adStatuses(List<PinPromotionSummaryStatus> adStatuses) {
    this.adStatuses = adStatuses;
    return this;
  }

  public AdsAnalyticsCreateAsyncRequest addAdStatusesItem(PinPromotionSummaryStatus adStatusesItem) {
    if (this.adStatuses == null) {
      this.adStatuses = new ArrayList<PinPromotionSummaryStatus>();
    }
    this.adStatuses.add(adStatusesItem);
    return this;
  }

  /**
   * List of values for filtering
   * @return adStatuses
   **/
  @JsonProperty(value = "ad_statuses")
  @ApiModelProperty(example = "[\"APPROVED\",\"PAUSED\"]", value = "List of values for filtering")
  @Valid  @Size(min=1,max=6)
  public List<PinPromotionSummaryStatus> getAdStatuses() {
    return adStatuses;
  }

  public void setAdStatuses(List<PinPromotionSummaryStatus> adStatuses) {
    this.adStatuses = adStatuses;
  }

  public AdsAnalyticsCreateAsyncRequest productGroupIds(List<String> productGroupIds) {
    this.productGroupIds = productGroupIds;
    return this;
  }

  public AdsAnalyticsCreateAsyncRequest addProductGroupIdsItem(String productGroupIdsItem) {
    if (this.productGroupIds == null) {
      this.productGroupIds = new ArrayList<String>();
    }
    this.productGroupIds.add(productGroupIdsItem);
    return this;
  }

  /**
   * List of product group ids
   * @return productGroupIds
   **/
  @JsonProperty(value = "product_group_ids")
  @ApiModelProperty(example = "[\"12345678\"]", value = "List of product group ids")
   @Size(min=1,max=500)
  public List<String> getProductGroupIds() {
    return productGroupIds;
  }

  public void setProductGroupIds(List<String> productGroupIds) {
    this.productGroupIds = productGroupIds;
  }

  public AdsAnalyticsCreateAsyncRequest productGroupStatuses(List<ProductGroupSummaryStatus> productGroupStatuses) {
    this.productGroupStatuses = productGroupStatuses;
    return this;
  }

  public AdsAnalyticsCreateAsyncRequest addProductGroupStatusesItem(ProductGroupSummaryStatus productGroupStatusesItem) {
    if (this.productGroupStatuses == null) {
      this.productGroupStatuses = new ArrayList<ProductGroupSummaryStatus>();
    }
    this.productGroupStatuses.add(productGroupStatusesItem);
    return this;
  }

  /**
   * List of values for filtering
   * @return productGroupStatuses
   **/
  @JsonProperty(value = "product_group_statuses")
  @ApiModelProperty(example = "[\"RUNNING\",\"PAUSED\"]", value = "List of values for filtering")
  @Valid  @Size(min=1,max=6)
  public List<ProductGroupSummaryStatus> getProductGroupStatuses() {
    return productGroupStatuses;
  }

  public void setProductGroupStatuses(List<ProductGroupSummaryStatus> productGroupStatuses) {
    this.productGroupStatuses = productGroupStatuses;
  }

  public AdsAnalyticsCreateAsyncRequest productItemIds(List<String> productItemIds) {
    this.productItemIds = productItemIds;
    return this;
  }

  public AdsAnalyticsCreateAsyncRequest addProductItemIdsItem(String productItemIdsItem) {
    if (this.productItemIds == null) {
      this.productItemIds = new ArrayList<String>();
    }
    this.productItemIds.add(productItemIdsItem);
    return this;
  }

  /**
   * List of product item ids
   * @return productItemIds
   **/
  @JsonProperty(value = "product_item_ids")
  @ApiModelProperty(example = "[\"12345678\"]", value = "List of product item ids")
   @Size(min=1,max=500)
  public List<String> getProductItemIds() {
    return productItemIds;
  }

  public void setProductItemIds(List<String> productItemIds) {
    this.productItemIds = productItemIds;
  }

  public AdsAnalyticsCreateAsyncRequest targetingTypes(List<AdsAnalyticsTargetingType> targetingTypes) {
    this.targetingTypes = targetingTypes;
    return this;
  }

  public AdsAnalyticsCreateAsyncRequest addTargetingTypesItem(AdsAnalyticsTargetingType targetingTypesItem) {
    if (this.targetingTypes == null) {
      this.targetingTypes = new ArrayList<AdsAnalyticsTargetingType>();
    }
    this.targetingTypes.add(targetingTypesItem);
    return this;
  }

  /**
   * List of targeting types
   * @return targetingTypes
   **/
  @JsonProperty(value = "targeting_types")
  @ApiModelProperty(value = "List of targeting types")
  @Valid  @Size(min=1,max=5)
  public List<AdsAnalyticsTargetingType> getTargetingTypes() {
    return targetingTypes;
  }

  public void setTargetingTypes(List<AdsAnalyticsTargetingType> targetingTypes) {
    this.targetingTypes = targetingTypes;
  }

  public AdsAnalyticsCreateAsyncRequest metricsFilters(List<AdsAnalyticsMetricsFilter> metricsFilters) {
    this.metricsFilters = metricsFilters;
    return this;
  }

  public AdsAnalyticsCreateAsyncRequest addMetricsFiltersItem(AdsAnalyticsMetricsFilter metricsFiltersItem) {
    if (this.metricsFilters == null) {
      this.metricsFilters = new ArrayList<AdsAnalyticsMetricsFilter>();
    }
    this.metricsFilters.add(metricsFiltersItem);
    return this;
  }

  /**
   * List of metrics filters
   * @return metricsFilters
   **/
  @JsonProperty(value = "metrics_filters")
  @ApiModelProperty(value = "List of metrics filters")
  @Valid  @Size(min=1)
  public List<AdsAnalyticsMetricsFilter> getMetricsFilters() {
    return metricsFilters;
  }

  public void setMetricsFilters(List<AdsAnalyticsMetricsFilter> metricsFilters) {
    this.metricsFilters = metricsFilters;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdsAnalyticsCreateAsyncRequest adsAnalyticsCreateAsyncRequest = (AdsAnalyticsCreateAsyncRequest) o;
    return Objects.equals(this.startDate, adsAnalyticsCreateAsyncRequest.startDate) &&
        Objects.equals(this.endDate, adsAnalyticsCreateAsyncRequest.endDate) &&
        Objects.equals(this.granularity, adsAnalyticsCreateAsyncRequest.granularity) &&
        Objects.equals(this.clickWindowDays, adsAnalyticsCreateAsyncRequest.clickWindowDays) &&
        Objects.equals(this.engagementWindowDays, adsAnalyticsCreateAsyncRequest.engagementWindowDays) &&
        Objects.equals(this.viewWindowDays, adsAnalyticsCreateAsyncRequest.viewWindowDays) &&
        Objects.equals(this.conversionReportTime, adsAnalyticsCreateAsyncRequest.conversionReportTime) &&
        Objects.equals(this.attributionTypes, adsAnalyticsCreateAsyncRequest.attributionTypes) &&
        Objects.equals(this.columns, adsAnalyticsCreateAsyncRequest.columns) &&
        Objects.equals(this.level, adsAnalyticsCreateAsyncRequest.level) &&
        Objects.equals(this.reportFormat, adsAnalyticsCreateAsyncRequest.reportFormat) &&
        Objects.equals(this.campaignIds, adsAnalyticsCreateAsyncRequest.campaignIds) &&
        Objects.equals(this.campaignStatuses, adsAnalyticsCreateAsyncRequest.campaignStatuses) &&
        Objects.equals(this.campaignObjectiveTypes, adsAnalyticsCreateAsyncRequest.campaignObjectiveTypes) &&
        Objects.equals(this.adGroupIds, adsAnalyticsCreateAsyncRequest.adGroupIds) &&
        Objects.equals(this.adGroupStatuses, adsAnalyticsCreateAsyncRequest.adGroupStatuses) &&
        Objects.equals(this.adIds, adsAnalyticsCreateAsyncRequest.adIds) &&
        Objects.equals(this.adStatuses, adsAnalyticsCreateAsyncRequest.adStatuses) &&
        Objects.equals(this.productGroupIds, adsAnalyticsCreateAsyncRequest.productGroupIds) &&
        Objects.equals(this.productGroupStatuses, adsAnalyticsCreateAsyncRequest.productGroupStatuses) &&
        Objects.equals(this.productItemIds, adsAnalyticsCreateAsyncRequest.productItemIds) &&
        Objects.equals(this.targetingTypes, adsAnalyticsCreateAsyncRequest.targetingTypes) &&
        Objects.equals(this.metricsFilters, adsAnalyticsCreateAsyncRequest.metricsFilters);
  }

  @Override
  public int hashCode() {
    return Objects.hash(startDate, endDate, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime, attributionTypes, columns, level, reportFormat, campaignIds, campaignStatuses, campaignObjectiveTypes, adGroupIds, adGroupStatuses, adIds, adStatuses, productGroupIds, productGroupStatuses, productItemIds, targetingTypes, metricsFilters);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdsAnalyticsCreateAsyncRequest {\n");
    
    sb.append("    startDate: ").append(toIndentedString(startDate)).append("\n");
    sb.append("    endDate: ").append(toIndentedString(endDate)).append("\n");
    sb.append("    granularity: ").append(toIndentedString(granularity)).append("\n");
    sb.append("    clickWindowDays: ").append(toIndentedString(clickWindowDays)).append("\n");
    sb.append("    engagementWindowDays: ").append(toIndentedString(engagementWindowDays)).append("\n");
    sb.append("    viewWindowDays: ").append(toIndentedString(viewWindowDays)).append("\n");
    sb.append("    conversionReportTime: ").append(toIndentedString(conversionReportTime)).append("\n");
    sb.append("    attributionTypes: ").append(toIndentedString(attributionTypes)).append("\n");
    sb.append("    columns: ").append(toIndentedString(columns)).append("\n");
    sb.append("    level: ").append(toIndentedString(level)).append("\n");
    sb.append("    reportFormat: ").append(toIndentedString(reportFormat)).append("\n");
    sb.append("    campaignIds: ").append(toIndentedString(campaignIds)).append("\n");
    sb.append("    campaignStatuses: ").append(toIndentedString(campaignStatuses)).append("\n");
    sb.append("    campaignObjectiveTypes: ").append(toIndentedString(campaignObjectiveTypes)).append("\n");
    sb.append("    adGroupIds: ").append(toIndentedString(adGroupIds)).append("\n");
    sb.append("    adGroupStatuses: ").append(toIndentedString(adGroupStatuses)).append("\n");
    sb.append("    adIds: ").append(toIndentedString(adIds)).append("\n");
    sb.append("    adStatuses: ").append(toIndentedString(adStatuses)).append("\n");
    sb.append("    productGroupIds: ").append(toIndentedString(productGroupIds)).append("\n");
    sb.append("    productGroupStatuses: ").append(toIndentedString(productGroupStatuses)).append("\n");
    sb.append("    productItemIds: ").append(toIndentedString(productItemIds)).append("\n");
    sb.append("    targetingTypes: ").append(toIndentedString(targetingTypes)).append("\n");
    sb.append("    metricsFilters: ").append(toIndentedString(metricsFilters)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

