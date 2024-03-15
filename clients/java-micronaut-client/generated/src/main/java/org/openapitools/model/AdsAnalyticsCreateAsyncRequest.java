/*
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

package org.openapitools.model;

import java.util.Objects;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.AdGroupSummaryStatus;
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
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

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
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_METRICS_FILTERS,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_COLUMNS,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_LEVEL,
  AdsAnalyticsCreateAsyncRequest.JSON_PROPERTY_REPORT_FORMAT
})
@JsonTypeName("AdsAnalyticsCreateAsyncRequest")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class AdsAnalyticsCreateAsyncRequest {
    public static final String JSON_PROPERTY_START_DATE = "start_date";
    private String startDate;

    public static final String JSON_PROPERTY_END_DATE = "end_date";
    private String endDate;

    public static final String JSON_PROPERTY_GRANULARITY = "granularity";
    private Granularity granularity;

    public static final String JSON_PROPERTY_CLICK_WINDOW_DAYS = "click_window_days";
    private ConversionAttributionWindowDays clickWindowDays = ConversionAttributionWindowDays.NUMBER_30;

    public static final String JSON_PROPERTY_ENGAGEMENT_WINDOW_DAYS = "engagement_window_days";
    private ConversionAttributionWindowDays engagementWindowDays = ConversionAttributionWindowDays.NUMBER_30;

    public static final String JSON_PROPERTY_VIEW_WINDOW_DAYS = "view_window_days";
    private ConversionAttributionWindowDays viewWindowDays = ConversionAttributionWindowDays.NUMBER_1;

    public static final String JSON_PROPERTY_CONVERSION_REPORT_TIME = "conversion_report_time";
    private ConversionReportTimeType conversionReportTime = "TIME_OF_AD_ACTION";

    public static final String JSON_PROPERTY_ATTRIBUTION_TYPES = "attribution_types";
    private List<ConversionReportAttributionType> attributionTypes = null;

    public static final String JSON_PROPERTY_CAMPAIGN_IDS = "campaign_ids";
    private List<@Pattern(regexp = "^\\d+$")String> campaignIds = null;

    public static final String JSON_PROPERTY_CAMPAIGN_STATUSES = "campaign_statuses";
    private List<CampaignSummaryStatus> campaignStatuses = null;

    public static final String JSON_PROPERTY_CAMPAIGN_OBJECTIVE_TYPES = "campaign_objective_types";
    private List<ObjectiveType> campaignObjectiveTypes = null;

    public static final String JSON_PROPERTY_AD_GROUP_IDS = "ad_group_ids";
    private List<@Pattern(regexp = "^\\d+$")String> adGroupIds = null;

    public static final String JSON_PROPERTY_AD_GROUP_STATUSES = "ad_group_statuses";
    private List<AdGroupSummaryStatus> adGroupStatuses = null;

    public static final String JSON_PROPERTY_AD_IDS = "ad_ids";
    private List<@Pattern(regexp = "^\\d+$")String> adIds = null;

    public static final String JSON_PROPERTY_AD_STATUSES = "ad_statuses";
    private List<PinPromotionSummaryStatus> adStatuses = null;

    public static final String JSON_PROPERTY_PRODUCT_GROUP_IDS = "product_group_ids";
    private List<@Pattern(regexp = "^\\d+$")String> productGroupIds = null;

    public static final String JSON_PROPERTY_PRODUCT_GROUP_STATUSES = "product_group_statuses";
    private List<ProductGroupSummaryStatus> productGroupStatuses = null;

    public static final String JSON_PROPERTY_PRODUCT_ITEM_IDS = "product_item_ids";
    private List<@Pattern(regexp = "^\\d+$")String> productItemIds = null;

    public static final String JSON_PROPERTY_TARGETING_TYPES = "targeting_types";
    private List<AdsAnalyticsTargetingType> targetingTypes = null;

    public static final String JSON_PROPERTY_METRICS_FILTERS = "metrics_filters";
    private List<@Valid AdsAnalyticsMetricsFilter> metricsFilters = null;

    public static final String JSON_PROPERTY_COLUMNS = "columns";
    private List<ReportingColumnAsync> columns = new ArrayList<>();

    public static final String JSON_PROPERTY_LEVEL = "level";
    private MetricsReportingLevel level;

    public static final String JSON_PROPERTY_REPORT_FORMAT = "report_format";
    private DataOutputFormat reportFormat = "JSON";

    public AdsAnalyticsCreateAsyncRequest(String startDate, String endDate, Granularity granularity, List<ReportingColumnAsync> columns, MetricsReportingLevel level) {
        this.startDate = startDate;
        this.endDate = endDate;
        this.granularity = granularity;
        this.columns = columns;
        this.level = level;
    }

    public AdsAnalyticsCreateAsyncRequest startDate(String startDate) {
        this.startDate = startDate;
        return this;
    }

    /**
     * Metric report start date (UTC). Format: YYYY-MM-DD
     * @return startDate
     **/
    @NotNull
    @Pattern(regexp="^(\\d{4})-(\\d{2})-(\\d{2})$")
    @JsonProperty(JSON_PROPERTY_START_DATE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getStartDate() {
        return startDate;
    }

    @JsonProperty(JSON_PROPERTY_START_DATE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
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
    @NotNull
    @Pattern(regexp="^(\\d{4})-(\\d{2})-(\\d{2})$")
    @JsonProperty(JSON_PROPERTY_END_DATE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getEndDate() {
        return endDate;
    }

    @JsonProperty(JSON_PROPERTY_END_DATE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
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
    @NotNull
    @JsonProperty(JSON_PROPERTY_GRANULARITY)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public Granularity getGranularity() {
        return granularity;
    }

    @JsonProperty(JSON_PROPERTY_GRANULARITY)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
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
    @Nullable
    @JsonProperty(JSON_PROPERTY_CLICK_WINDOW_DAYS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public ConversionAttributionWindowDays getClickWindowDays() {
        return clickWindowDays;
    }

    @JsonProperty(JSON_PROPERTY_CLICK_WINDOW_DAYS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
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
    @Nullable
    @JsonProperty(JSON_PROPERTY_ENGAGEMENT_WINDOW_DAYS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public ConversionAttributionWindowDays getEngagementWindowDays() {
        return engagementWindowDays;
    }

    @JsonProperty(JSON_PROPERTY_ENGAGEMENT_WINDOW_DAYS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
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
    @Nullable
    @JsonProperty(JSON_PROPERTY_VIEW_WINDOW_DAYS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public ConversionAttributionWindowDays getViewWindowDays() {
        return viewWindowDays;
    }

    @JsonProperty(JSON_PROPERTY_VIEW_WINDOW_DAYS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
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
    @Nullable
    @JsonProperty(JSON_PROPERTY_CONVERSION_REPORT_TIME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public ConversionReportTimeType getConversionReportTime() {
        return conversionReportTime;
    }

    @JsonProperty(JSON_PROPERTY_CONVERSION_REPORT_TIME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setConversionReportTime(ConversionReportTimeType conversionReportTime) {
        this.conversionReportTime = conversionReportTime;
    }

    public AdsAnalyticsCreateAsyncRequest attributionTypes(List<ConversionReportAttributionType> attributionTypes) {
        this.attributionTypes = attributionTypes;
        return this;
    }

    public AdsAnalyticsCreateAsyncRequest addAttributionTypesItem(ConversionReportAttributionType attributionTypesItem) {
        if (this.attributionTypes == null) {
            this.attributionTypes = new ArrayList<>();
        }
        this.attributionTypes.add(attributionTypesItem);
        return this;
    }

    /**
     * List of types of attribution for the conversion report
     * @return attributionTypes
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_ATTRIBUTION_TYPES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<ConversionReportAttributionType> getAttributionTypes() {
        return attributionTypes;
    }

    @JsonProperty(JSON_PROPERTY_ATTRIBUTION_TYPES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setAttributionTypes(List<ConversionReportAttributionType> attributionTypes) {
        this.attributionTypes = attributionTypes;
    }

    public AdsAnalyticsCreateAsyncRequest campaignIds(List<@Pattern(regexp = "^\\d+$")String> campaignIds) {
        this.campaignIds = campaignIds;
        return this;
    }

    public AdsAnalyticsCreateAsyncRequest addCampaignIdsItem(String campaignIdsItem) {
        if (this.campaignIds == null) {
            this.campaignIds = new ArrayList<>();
        }
        this.campaignIds.add(campaignIdsItem);
        return this;
    }

    /**
     * List of campaign ids
     * @return campaignIds
     **/
    @Nullable
    @Size(min=1, max=500)
    @JsonProperty(JSON_PROPERTY_CAMPAIGN_IDS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<@Pattern(regexp = "^\\d+$")String> getCampaignIds() {
        return campaignIds;
    }

    @JsonProperty(JSON_PROPERTY_CAMPAIGN_IDS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCampaignIds(List<@Pattern(regexp = "^\\d+$")String> campaignIds) {
        this.campaignIds = campaignIds;
    }

    public AdsAnalyticsCreateAsyncRequest campaignStatuses(List<CampaignSummaryStatus> campaignStatuses) {
        this.campaignStatuses = campaignStatuses;
        return this;
    }

    public AdsAnalyticsCreateAsyncRequest addCampaignStatusesItem(CampaignSummaryStatus campaignStatusesItem) {
        if (this.campaignStatuses == null) {
            this.campaignStatuses = new ArrayList<>();
        }
        this.campaignStatuses.add(campaignStatusesItem);
        return this;
    }

    /**
     * List of status values for filtering
     * @return campaignStatuses
     **/
    @Nullable
    @Size(min=1, max=6)
    @JsonProperty(JSON_PROPERTY_CAMPAIGN_STATUSES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<CampaignSummaryStatus> getCampaignStatuses() {
        return campaignStatuses;
    }

    @JsonProperty(JSON_PROPERTY_CAMPAIGN_STATUSES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCampaignStatuses(List<CampaignSummaryStatus> campaignStatuses) {
        this.campaignStatuses = campaignStatuses;
    }

    public AdsAnalyticsCreateAsyncRequest campaignObjectiveTypes(List<ObjectiveType> campaignObjectiveTypes) {
        this.campaignObjectiveTypes = campaignObjectiveTypes;
        return this;
    }

    public AdsAnalyticsCreateAsyncRequest addCampaignObjectiveTypesItem(ObjectiveType campaignObjectiveTypesItem) {
        if (this.campaignObjectiveTypes == null) {
            this.campaignObjectiveTypes = new ArrayList<>();
        }
        this.campaignObjectiveTypes.add(campaignObjectiveTypesItem);
        return this;
    }

    /**
     * List of values for filtering. [\&quot;WEB_SESSIONS\&quot;] in BETA.
     * @return campaignObjectiveTypes
     **/
    @Nullable
    @Size(min=1, max=6)
    @JsonProperty(JSON_PROPERTY_CAMPAIGN_OBJECTIVE_TYPES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<ObjectiveType> getCampaignObjectiveTypes() {
        return campaignObjectiveTypes;
    }

    @JsonProperty(JSON_PROPERTY_CAMPAIGN_OBJECTIVE_TYPES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCampaignObjectiveTypes(List<ObjectiveType> campaignObjectiveTypes) {
        this.campaignObjectiveTypes = campaignObjectiveTypes;
    }

    public AdsAnalyticsCreateAsyncRequest adGroupIds(List<@Pattern(regexp = "^\\d+$")String> adGroupIds) {
        this.adGroupIds = adGroupIds;
        return this;
    }

    public AdsAnalyticsCreateAsyncRequest addAdGroupIdsItem(String adGroupIdsItem) {
        if (this.adGroupIds == null) {
            this.adGroupIds = new ArrayList<>();
        }
        this.adGroupIds.add(adGroupIdsItem);
        return this;
    }

    /**
     * List of ad group ids
     * @return adGroupIds
     **/
    @Nullable
    @Size(min=1, max=500)
    @JsonProperty(JSON_PROPERTY_AD_GROUP_IDS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<@Pattern(regexp = "^\\d+$")String> getAdGroupIds() {
        return adGroupIds;
    }

    @JsonProperty(JSON_PROPERTY_AD_GROUP_IDS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setAdGroupIds(List<@Pattern(regexp = "^\\d+$")String> adGroupIds) {
        this.adGroupIds = adGroupIds;
    }

    public AdsAnalyticsCreateAsyncRequest adGroupStatuses(List<AdGroupSummaryStatus> adGroupStatuses) {
        this.adGroupStatuses = adGroupStatuses;
        return this;
    }

    public AdsAnalyticsCreateAsyncRequest addAdGroupStatusesItem(AdGroupSummaryStatus adGroupStatusesItem) {
        if (this.adGroupStatuses == null) {
            this.adGroupStatuses = new ArrayList<>();
        }
        this.adGroupStatuses.add(adGroupStatusesItem);
        return this;
    }

    /**
     * List of values for filtering
     * @return adGroupStatuses
     **/
    @Nullable
    @Size(min=1, max=6)
    @JsonProperty(JSON_PROPERTY_AD_GROUP_STATUSES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<AdGroupSummaryStatus> getAdGroupStatuses() {
        return adGroupStatuses;
    }

    @JsonProperty(JSON_PROPERTY_AD_GROUP_STATUSES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setAdGroupStatuses(List<AdGroupSummaryStatus> adGroupStatuses) {
        this.adGroupStatuses = adGroupStatuses;
    }

    public AdsAnalyticsCreateAsyncRequest adIds(List<@Pattern(regexp = "^\\d+$")String> adIds) {
        this.adIds = adIds;
        return this;
    }

    public AdsAnalyticsCreateAsyncRequest addAdIdsItem(String adIdsItem) {
        if (this.adIds == null) {
            this.adIds = new ArrayList<>();
        }
        this.adIds.add(adIdsItem);
        return this;
    }

    /**
     * List of ad ids [This parameter is no supported for Product Item Level Reports]
     * @return adIds
     **/
    @Nullable
    @Size(min=1, max=500)
    @JsonProperty(JSON_PROPERTY_AD_IDS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<@Pattern(regexp = "^\\d+$")String> getAdIds() {
        return adIds;
    }

    @JsonProperty(JSON_PROPERTY_AD_IDS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setAdIds(List<@Pattern(regexp = "^\\d+$")String> adIds) {
        this.adIds = adIds;
    }

    public AdsAnalyticsCreateAsyncRequest adStatuses(List<PinPromotionSummaryStatus> adStatuses) {
        this.adStatuses = adStatuses;
        return this;
    }

    public AdsAnalyticsCreateAsyncRequest addAdStatusesItem(PinPromotionSummaryStatus adStatusesItem) {
        if (this.adStatuses == null) {
            this.adStatuses = new ArrayList<>();
        }
        this.adStatuses.add(adStatusesItem);
        return this;
    }

    /**
     * List of values for filtering [This parameter is not supported for Product Item Level Reports]
     * @return adStatuses
     **/
    @Nullable
    @Size(min=1, max=6)
    @JsonProperty(JSON_PROPERTY_AD_STATUSES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<PinPromotionSummaryStatus> getAdStatuses() {
        return adStatuses;
    }

    @JsonProperty(JSON_PROPERTY_AD_STATUSES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setAdStatuses(List<PinPromotionSummaryStatus> adStatuses) {
        this.adStatuses = adStatuses;
    }

    public AdsAnalyticsCreateAsyncRequest productGroupIds(List<@Pattern(regexp = "^\\d+$")String> productGroupIds) {
        this.productGroupIds = productGroupIds;
        return this;
    }

    public AdsAnalyticsCreateAsyncRequest addProductGroupIdsItem(String productGroupIdsItem) {
        if (this.productGroupIds == null) {
            this.productGroupIds = new ArrayList<>();
        }
        this.productGroupIds.add(productGroupIdsItem);
        return this;
    }

    /**
     * List of product group ids
     * @return productGroupIds
     **/
    @Nullable
    @Size(min=1, max=500)
    @JsonProperty(JSON_PROPERTY_PRODUCT_GROUP_IDS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<@Pattern(regexp = "^\\d+$")String> getProductGroupIds() {
        return productGroupIds;
    }

    @JsonProperty(JSON_PROPERTY_PRODUCT_GROUP_IDS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setProductGroupIds(List<@Pattern(regexp = "^\\d+$")String> productGroupIds) {
        this.productGroupIds = productGroupIds;
    }

    public AdsAnalyticsCreateAsyncRequest productGroupStatuses(List<ProductGroupSummaryStatus> productGroupStatuses) {
        this.productGroupStatuses = productGroupStatuses;
        return this;
    }

    public AdsAnalyticsCreateAsyncRequest addProductGroupStatusesItem(ProductGroupSummaryStatus productGroupStatusesItem) {
        if (this.productGroupStatuses == null) {
            this.productGroupStatuses = new ArrayList<>();
        }
        this.productGroupStatuses.add(productGroupStatusesItem);
        return this;
    }

    /**
     * List of values for filtering
     * @return productGroupStatuses
     **/
    @Nullable
    @Size(min=1, max=6)
    @JsonProperty(JSON_PROPERTY_PRODUCT_GROUP_STATUSES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<ProductGroupSummaryStatus> getProductGroupStatuses() {
        return productGroupStatuses;
    }

    @JsonProperty(JSON_PROPERTY_PRODUCT_GROUP_STATUSES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setProductGroupStatuses(List<ProductGroupSummaryStatus> productGroupStatuses) {
        this.productGroupStatuses = productGroupStatuses;
    }

    public AdsAnalyticsCreateAsyncRequest productItemIds(List<@Pattern(regexp = "^\\d+$")String> productItemIds) {
        this.productItemIds = productItemIds;
        return this;
    }

    public AdsAnalyticsCreateAsyncRequest addProductItemIdsItem(String productItemIdsItem) {
        if (this.productItemIds == null) {
            this.productItemIds = new ArrayList<>();
        }
        this.productItemIds.add(productItemIdsItem);
        return this;
    }

    /**
     * List of product item ids
     * @return productItemIds
     **/
    @Nullable
    @Size(min=1, max=500)
    @JsonProperty(JSON_PROPERTY_PRODUCT_ITEM_IDS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<@Pattern(regexp = "^\\d+$")String> getProductItemIds() {
        return productItemIds;
    }

    @JsonProperty(JSON_PROPERTY_PRODUCT_ITEM_IDS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setProductItemIds(List<@Pattern(regexp = "^\\d+$")String> productItemIds) {
        this.productItemIds = productItemIds;
    }

    public AdsAnalyticsCreateAsyncRequest targetingTypes(List<AdsAnalyticsTargetingType> targetingTypes) {
        this.targetingTypes = targetingTypes;
        return this;
    }

    public AdsAnalyticsCreateAsyncRequest addTargetingTypesItem(AdsAnalyticsTargetingType targetingTypesItem) {
        if (this.targetingTypes == null) {
            this.targetingTypes = new ArrayList<>();
        }
        this.targetingTypes.add(targetingTypesItem);
        return this;
    }

    /**
     * List of targeting types. Requires &#x60;level&#x60; to be a value ending in &#x60;_TARGETING&#x60;.
     * @return targetingTypes
     **/
    @Nullable
    @Size(min=1, max=5)
    @JsonProperty(JSON_PROPERTY_TARGETING_TYPES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<AdsAnalyticsTargetingType> getTargetingTypes() {
        return targetingTypes;
    }

    @JsonProperty(JSON_PROPERTY_TARGETING_TYPES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setTargetingTypes(List<AdsAnalyticsTargetingType> targetingTypes) {
        this.targetingTypes = targetingTypes;
    }

    public AdsAnalyticsCreateAsyncRequest metricsFilters(List<@Valid AdsAnalyticsMetricsFilter> metricsFilters) {
        this.metricsFilters = metricsFilters;
        return this;
    }

    public AdsAnalyticsCreateAsyncRequest addMetricsFiltersItem(AdsAnalyticsMetricsFilter metricsFiltersItem) {
        if (this.metricsFilters == null) {
            this.metricsFilters = new ArrayList<>();
        }
        this.metricsFilters.add(metricsFiltersItem);
        return this;
    }

    /**
     * List of metrics filters
     * @return metricsFilters
     **/
    @Nullable
    @Size(min=1)
    @JsonProperty(JSON_PROPERTY_METRICS_FILTERS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<@Valid AdsAnalyticsMetricsFilter> getMetricsFilters() {
        return metricsFilters;
    }

    @JsonProperty(JSON_PROPERTY_METRICS_FILTERS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setMetricsFilters(List<@Valid AdsAnalyticsMetricsFilter> metricsFilters) {
        this.metricsFilters = metricsFilters;
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
     * Metric and entity columns. Pin promotion and ad related columns are not supported for the Product Item level reports.
     * @return columns
     **/
    @NotNull
    @JsonProperty(JSON_PROPERTY_COLUMNS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public List<ReportingColumnAsync> getColumns() {
        return columns;
    }

    @JsonProperty(JSON_PROPERTY_COLUMNS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
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
    @NotNull
    @JsonProperty(JSON_PROPERTY_LEVEL)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public MetricsReportingLevel getLevel() {
        return level;
    }

    @JsonProperty(JSON_PROPERTY_LEVEL)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setLevel(MetricsReportingLevel level) {
        this.level = level;
    }

    public AdsAnalyticsCreateAsyncRequest reportFormat(DataOutputFormat reportFormat) {
        this.reportFormat = reportFormat;
        return this;
    }

    /**
     * Specification for formatting the report data. Reports in JSON will not zero-fill metrics, whereas reports in CSV will. Both report formats will omit rows where all the columns are equal to 0.
     * @return reportFormat
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_REPORT_FORMAT)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public DataOutputFormat getReportFormat() {
        return reportFormat;
    }

    @JsonProperty(JSON_PROPERTY_REPORT_FORMAT)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setReportFormat(DataOutputFormat reportFormat) {
        this.reportFormat = reportFormat;
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
            Objects.equals(this.metricsFilters, adsAnalyticsCreateAsyncRequest.metricsFilters) &&
            Objects.equals(this.columns, adsAnalyticsCreateAsyncRequest.columns) &&
            Objects.equals(this.level, adsAnalyticsCreateAsyncRequest.level) &&
            Objects.equals(this.reportFormat, adsAnalyticsCreateAsyncRequest.reportFormat);
    }

    @Override
    public int hashCode() {
        return Objects.hash(startDate, endDate, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime, attributionTypes, campaignIds, campaignStatuses, campaignObjectiveTypes, adGroupIds, adGroupStatuses, adIds, adStatuses, productGroupIds, productGroupStatuses, productItemIds, targetingTypes, metricsFilters, columns, level, reportFormat);
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
        sb.append("    columns: ").append(toIndentedString(columns)).append("\n");
        sb.append("    level: ").append(toIndentedString(level)).append("\n");
        sb.append("    reportFormat: ").append(toIndentedString(reportFormat)).append("\n");
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

