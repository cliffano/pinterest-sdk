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
import java.util.Arrays;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.AdGroupSummaryStatus;
import org.openapitools.model.EntityStatus;
import org.openapitools.model.PacingDeliveryType;
import org.openapitools.model.PlacementGroupType;
import org.openapitools.model.TrackingUrls;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * AdGroupResponseAllOf
 */
@JsonPropertyOrder({
  AdGroupResponseAllOf.JSON_PROPERTY_NAME,
  AdGroupResponseAllOf.JSON_PROPERTY_STATUS,
  AdGroupResponseAllOf.JSON_PROPERTY_BUDGET_IN_MICRO_CURRENCY,
  AdGroupResponseAllOf.JSON_PROPERTY_BID_IN_MICRO_CURRENCY,
  AdGroupResponseAllOf.JSON_PROPERTY_BUDGET_TYPE,
  AdGroupResponseAllOf.JSON_PROPERTY_START_TIME,
  AdGroupResponseAllOf.JSON_PROPERTY_END_TIME,
  AdGroupResponseAllOf.JSON_PROPERTY_TARGETING_SPEC,
  AdGroupResponseAllOf.JSON_PROPERTY_LIFETIME_FREQUENCY_CAP,
  AdGroupResponseAllOf.JSON_PROPERTY_TRACKING_URLS,
  AdGroupResponseAllOf.JSON_PROPERTY_AUTO_TARGETING_ENABLED,
  AdGroupResponseAllOf.JSON_PROPERTY_PLACEMENT_GROUP,
  AdGroupResponseAllOf.JSON_PROPERTY_PACING_DELIVERY_TYPE,
  AdGroupResponseAllOf.JSON_PROPERTY_CONVERSION_LEARNING_MODE_TYPE,
  AdGroupResponseAllOf.JSON_PROPERTY_SUMMARY_STATUS,
  AdGroupResponseAllOf.JSON_PROPERTY_FEED_PROFILE_ID
})
@JsonTypeName("AdGroupResponse_allOf")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-05-07T06:38:54.481854Z[Etc/UTC]")
@Introspected
public class AdGroupResponseAllOf {
    public static final String JSON_PROPERTY_NAME = "name";
    private String name;

    public static final String JSON_PROPERTY_STATUS = "status";
    private EntityStatus status;

    public static final String JSON_PROPERTY_BUDGET_IN_MICRO_CURRENCY = "budget_in_micro_currency";
    private Integer budgetInMicroCurrency;

    public static final String JSON_PROPERTY_BID_IN_MICRO_CURRENCY = "bid_in_micro_currency";
    private Integer bidInMicroCurrency;

    /**
     * Budget type. If DAILY, an ad group&#39;s daily spend will not exceed the budget parameter value. If LIFETIME, the end_time parameter is **REQUIRED**, and the ad group spend is spread evenly between the ad group &#x60;start_time&#x60; and &#x60;end_time&#x60; range. A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome.
     */
    public enum BudgetTypeEnum {
        DAILY("DAILY"),
        LIFETIME("LIFETIME"),
        CBO_ADGROUP("CBO_ADGROUP");

        private String value;

        BudgetTypeEnum(String value) {
            this.value = value;
        }

        @JsonValue
        public String getValue() {
            return value;
        }

        @Override
        public String toString() {
            return String.valueOf(value);
        }

        @JsonCreator
        public static BudgetTypeEnum fromValue(String value) {
            for (BudgetTypeEnum b : BudgetTypeEnum.values()) {
                if (b.value.equals(value)) {
                    return b;
                }
            }
            throw new IllegalArgumentException("Unexpected value '" + value + "'");
        }
    }
    public static final String JSON_PROPERTY_BUDGET_TYPE = "budget_type";
    private BudgetTypeEnum budgetType;

    public static final String JSON_PROPERTY_START_TIME = "start_time";
    private Integer startTime;

    public static final String JSON_PROPERTY_END_TIME = "end_time";
    private Integer endTime;

    public static final String JSON_PROPERTY_TARGETING_SPEC = "targeting_spec";
    private Map<String, List<String>> targetingSpec = null;

    public static final String JSON_PROPERTY_LIFETIME_FREQUENCY_CAP = "lifetime_frequency_cap";
    private Integer lifetimeFrequencyCap;

    public static final String JSON_PROPERTY_TRACKING_URLS = "tracking_urls";
    private TrackingUrls trackingUrls;

    public static final String JSON_PROPERTY_AUTO_TARGETING_ENABLED = "auto_targeting_enabled";
    private Boolean autoTargetingEnabled;

    public static final String JSON_PROPERTY_PLACEMENT_GROUP = "placement_group";
    private PlacementGroupType placementGroup;

    public static final String JSON_PROPERTY_PACING_DELIVERY_TYPE = "pacing_delivery_type";
    private PacingDeliveryType pacingDeliveryType;

    /**
     * oCPM learn mode
     */
    public enum ConversionLearningModeTypeEnum {
        NOT_ACTIVE("NOT_ACTIVE"),
        ACTIVE("ACTIVE"),
        NULL("null");

        private String value;

        ConversionLearningModeTypeEnum(String value) {
            this.value = value;
        }

        @JsonValue
        public String getValue() {
            return value;
        }

        @Override
        public String toString() {
            return String.valueOf(value);
        }

        @JsonCreator
        public static ConversionLearningModeTypeEnum fromValue(String value) {
            for (ConversionLearningModeTypeEnum b : ConversionLearningModeTypeEnum.values()) {
                if (b.value.equals(value)) {
                    return b;
                }
            }
            return null;
        }
    }
    public static final String JSON_PROPERTY_CONVERSION_LEARNING_MODE_TYPE = "conversion_learning_mode_type";
    private ConversionLearningModeTypeEnum conversionLearningModeType;

    public static final String JSON_PROPERTY_SUMMARY_STATUS = "summary_status";
    private AdGroupSummaryStatus summaryStatus;

    public static final String JSON_PROPERTY_FEED_PROFILE_ID = "feed_profile_id";
    private String feedProfileId;

    public AdGroupResponseAllOf() {
    }

    public AdGroupResponseAllOf name(String name) {
        this.name = name;
        return this;
    }

    /**
     * Ad group name.
     * @return name
     **/
    @Nullable
    @ApiModelProperty(example = "Ad Group For Pin: 687195905986", value = "Ad group name.")
    @JsonProperty(JSON_PROPERTY_NAME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getName() {
        return name;
    }

    @JsonProperty(JSON_PROPERTY_NAME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setName(String name) {
        this.name = name;
    }

    public AdGroupResponseAllOf status(EntityStatus status) {
        this.status = status;
        return this;
    }

    /**
     * Ad group/entity status.
     * @return status
     **/
    @Valid
    @Nullable
    @ApiModelProperty(value = "Ad group/entity status.")
    @JsonProperty(JSON_PROPERTY_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public EntityStatus getStatus() {
        return status;
    }

    @JsonProperty(JSON_PROPERTY_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setStatus(EntityStatus status) {
        this.status = status;
    }

    public AdGroupResponseAllOf budgetInMicroCurrency(Integer budgetInMicroCurrency) {
        this.budgetInMicroCurrency = budgetInMicroCurrency;
        return this;
    }

    /**
     * Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.
     * @return budgetInMicroCurrency
     **/
    @Nullable
    @ApiModelProperty(example = "5000000", value = "Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.")
    @JsonProperty(JSON_PROPERTY_BUDGET_IN_MICRO_CURRENCY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public Integer getBudgetInMicroCurrency() {
        return budgetInMicroCurrency;
    }

    @JsonProperty(JSON_PROPERTY_BUDGET_IN_MICRO_CURRENCY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setBudgetInMicroCurrency(Integer budgetInMicroCurrency) {
        this.budgetInMicroCurrency = budgetInMicroCurrency;
    }

    public AdGroupResponseAllOf bidInMicroCurrency(Integer bidInMicroCurrency) {
        this.bidInMicroCurrency = bidInMicroCurrency;
        return this;
    }

    /**
     * Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.
     * @return bidInMicroCurrency
     **/
    @Nullable
    @ApiModelProperty(example = "5000000", value = "Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.")
    @JsonProperty(JSON_PROPERTY_BID_IN_MICRO_CURRENCY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public Integer getBidInMicroCurrency() {
        return bidInMicroCurrency;
    }

    @JsonProperty(JSON_PROPERTY_BID_IN_MICRO_CURRENCY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setBidInMicroCurrency(Integer bidInMicroCurrency) {
        this.bidInMicroCurrency = bidInMicroCurrency;
    }

    public AdGroupResponseAllOf budgetType(BudgetTypeEnum budgetType) {
        this.budgetType = budgetType;
        return this;
    }

    /**
     * Budget type. If DAILY, an ad group&#39;s daily spend will not exceed the budget parameter value. If LIFETIME, the end_time parameter is **REQUIRED**, and the ad group spend is spread evenly between the ad group &#x60;start_time&#x60; and &#x60;end_time&#x60; range. A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome.
     * @return budgetType
     **/
    @Nullable
    @ApiModelProperty(value = "Budget type. If DAILY, an ad group's daily spend will not exceed the budget parameter value. If LIFETIME, the end_time parameter is **REQUIRED**, and the ad group spend is spread evenly between the ad group `start_time` and `end_time` range. A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome.")
    @JsonProperty(JSON_PROPERTY_BUDGET_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public BudgetTypeEnum getBudgetType() {
        return budgetType;
    }

    @JsonProperty(JSON_PROPERTY_BUDGET_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setBudgetType(BudgetTypeEnum budgetType) {
        this.budgetType = budgetType;
    }

    public AdGroupResponseAllOf startTime(Integer startTime) {
        this.startTime = startTime;
        return this;
    }

    /**
     * Ad group start time. Unix timestamp in seconds. Defaults to current time.
     * @return startTime
     **/
    @Nullable
    @ApiModelProperty(example = "5686848000", value = "Ad group start time. Unix timestamp in seconds. Defaults to current time.")
    @JsonProperty(JSON_PROPERTY_START_TIME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public Integer getStartTime() {
        return startTime;
    }

    @JsonProperty(JSON_PROPERTY_START_TIME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setStartTime(Integer startTime) {
        this.startTime = startTime;
    }

    public AdGroupResponseAllOf endTime(Integer endTime) {
        this.endTime = endTime;
        return this;
    }

    /**
     * Ad group end time. Unix timestamp in seconds.
     * @return endTime
     **/
    @Nullable
    @ApiModelProperty(example = "5705424000", value = "Ad group end time. Unix timestamp in seconds.")
    @JsonProperty(JSON_PROPERTY_END_TIME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public Integer getEndTime() {
        return endTime;
    }

    @JsonProperty(JSON_PROPERTY_END_TIME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setEndTime(Integer endTime) {
        this.endTime = endTime;
    }

    public AdGroupResponseAllOf targetingSpec(Map<String, List<String>> targetingSpec) {
        this.targetingSpec = targetingSpec;
        return this;
    }

    public AdGroupResponseAllOf putTargetingSpecItem(String key, List<String> targetingSpecItem) {
        if (this.targetingSpec == null) {
            this.targetingSpec = new HashMap<String, List<String>>();
        }
        this.targetingSpec.put(key, targetingSpecItem);
        return this;
  }

    /**
     * Ad group targeting specification defining the ad group target audience. For example, &#39;{\&quot;APPTYPE\&quot;:[\&quot;iphone\&quot;], \&quot;GENDER\&quot;:[\&quot;male\&quot;], \&quot;LOCALE\&quot;:[\&quot;en-US\&quot;], \&quot;LOCATION\&quot;:[\&quot;501\&quot;], \&quot;AGE_BUCKET\&quot;:[\&quot;25-34\&quot;]}&#39;
     * @return targetingSpec
     **/
    @Nullable
    @ApiModelProperty(value = "Ad group targeting specification defining the ad group target audience. For example, '{\"APPTYPE\":[\"iphone\"], \"GENDER\":[\"male\"], \"LOCALE\":[\"en-US\"], \"LOCATION\":[\"501\"], \"AGE_BUCKET\":[\"25-34\"]}'")
    @JsonProperty(JSON_PROPERTY_TARGETING_SPEC)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public Map<String, List<String>> getTargetingSpec() {
        return targetingSpec;
    }

    @JsonProperty(JSON_PROPERTY_TARGETING_SPEC)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setTargetingSpec(Map<String, List<String>> targetingSpec) {
        this.targetingSpec = targetingSpec;
    }

    public AdGroupResponseAllOf lifetimeFrequencyCap(Integer lifetimeFrequencyCap) {
        this.lifetimeFrequencyCap = lifetimeFrequencyCap;
        return this;
    }

    /**
     * Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION &lt;a href&#x3D;\\\&quot;/docs/redoc/#section/Billable-event\\\&quot;&gt;billable_event&lt;/a&gt; value. This field **REQUIRES** the &#x60;end_time&#x60; field.
     * @return lifetimeFrequencyCap
     **/
    @Nullable
    @ApiModelProperty(example = "100", value = "Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\\\"/docs/redoc/#section/Billable-event\\\">billable_event</a> value. This field **REQUIRES** the `end_time` field.")
    @JsonProperty(JSON_PROPERTY_LIFETIME_FREQUENCY_CAP)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public Integer getLifetimeFrequencyCap() {
        return lifetimeFrequencyCap;
    }

    @JsonProperty(JSON_PROPERTY_LIFETIME_FREQUENCY_CAP)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setLifetimeFrequencyCap(Integer lifetimeFrequencyCap) {
        this.lifetimeFrequencyCap = lifetimeFrequencyCap;
    }

    public AdGroupResponseAllOf trackingUrls(TrackingUrls trackingUrls) {
        this.trackingUrls = trackingUrls;
        return this;
    }

    public AdGroupResponseAllOf putTrackingUrlsItem(String key,  trackingUrlsItem) {
        if (this.trackingUrls == null) {
            this.trackingUrls = ;
        }
        this.trackingUrls.put(key, trackingUrlsItem);
        return this;
  }

    /**
     * Third-party tracking URLs.&lt;br&gt; JSON object with the format: {\&quot;&lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/#section/Tracking-URL-event\&quot;&gt;Tracking event enum&lt;/a&gt;\&quot;:[URL string array],...}&lt;br&gt; For example: {\&quot;impression\&quot;: [\&quot;URL1\&quot;, \&quot;URL2\&quot;], \&quot;click\&quot;: [\&quot;URL1\&quot;, \&quot;URL2\&quot;, \&quot;URL3\&quot;]}.&lt;br&gt;Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. May be null. Pass in an empty object - {} - to remove tracking URLs.&lt;br&gt;&lt;br&gt; For more information, see &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Third-party and dynamic tracking&lt;/a&gt;.
     * @return trackingUrls
     **/
    @Valid
    @Nullable
    @ApiModelProperty(value = "Third-party tracking URLs.<br> JSON object with the format: {\"<a href=\"https://developers.pinterest.com/docs/redoc/#section/Tracking-URL-event\">Tracking event enum</a>\":[URL string array],...}<br> For example: {\"impression\": [\"URL1\", \"URL2\"], \"click\": [\"URL1\", \"URL2\", \"URL3\"]}.<br>Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. May be null. Pass in an empty object - {} - to remove tracking URLs.<br><br> For more information, see <a href=\"https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\" target=\"_blank\">Third-party and dynamic tracking</a>.")
    @JsonProperty(JSON_PROPERTY_TRACKING_URLS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public TrackingUrls getTrackingUrls() {
        return trackingUrls;
    }

    @JsonProperty(JSON_PROPERTY_TRACKING_URLS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setTrackingUrls(TrackingUrls trackingUrls) {
        this.trackingUrls = trackingUrls;
    }

    public AdGroupResponseAllOf autoTargetingEnabled(Boolean autoTargetingEnabled) {
        this.autoTargetingEnabled = autoTargetingEnabled;
        return this;
    }

    /**
     * Enable auto-targeting for ad group. Also known as &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/expanded-targeting\&quot; target&#x3D;\&quot;_blank\&quot;&gt;\&quot;expanded targeting\&quot;&lt;/a&gt;.
     * @return autoTargetingEnabled
     **/
    @Nullable
    @ApiModelProperty(example = "true", value = "Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>.")
    @JsonProperty(JSON_PROPERTY_AUTO_TARGETING_ENABLED)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public Boolean getAutoTargetingEnabled() {
        return autoTargetingEnabled;
    }

    @JsonProperty(JSON_PROPERTY_AUTO_TARGETING_ENABLED)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setAutoTargetingEnabled(Boolean autoTargetingEnabled) {
        this.autoTargetingEnabled = autoTargetingEnabled;
    }

    public AdGroupResponseAllOf placementGroup(PlacementGroupType placementGroup) {
        this.placementGroup = placementGroup;
        return this;
    }

    /**
     * &lt;a href&#x3D;\\\&quot;/docs/redoc/#section/Placement-group\\\&quot;&gt;Placement group&lt;/a&gt;.
     * @return placementGroup
     **/
    @Valid
    @Nullable
    @ApiModelProperty(value = "<a href=\\\"/docs/redoc/#section/Placement-group\\\">Placement group</a>.")
    @JsonProperty(JSON_PROPERTY_PLACEMENT_GROUP)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public PlacementGroupType getPlacementGroup() {
        return placementGroup;
    }

    @JsonProperty(JSON_PROPERTY_PLACEMENT_GROUP)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setPlacementGroup(PlacementGroupType placementGroup) {
        this.placementGroup = placementGroup;
    }

    public AdGroupResponseAllOf pacingDeliveryType(PacingDeliveryType pacingDeliveryType) {
        this.pacingDeliveryType = pacingDeliveryType;
        return this;
    }

    /**
     * Pacing delivery type. With ACCELERATED, an ad group budget is spent as fast as possible. With STANDARD, an ad group budget is spent smoothly over a day.
     * @return pacingDeliveryType
     **/
    @Valid
    @Nullable
    @ApiModelProperty(value = "Pacing delivery type. With ACCELERATED, an ad group budget is spent as fast as possible. With STANDARD, an ad group budget is spent smoothly over a day.")
    @JsonProperty(JSON_PROPERTY_PACING_DELIVERY_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public PacingDeliveryType getPacingDeliveryType() {
        return pacingDeliveryType;
    }

    @JsonProperty(JSON_PROPERTY_PACING_DELIVERY_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setPacingDeliveryType(PacingDeliveryType pacingDeliveryType) {
        this.pacingDeliveryType = pacingDeliveryType;
    }

    public AdGroupResponseAllOf conversionLearningModeType(ConversionLearningModeTypeEnum conversionLearningModeType) {
        this.conversionLearningModeType = conversionLearningModeType;
        return this;
    }

    /**
     * oCPM learn mode
     * @return conversionLearningModeType
     **/
    @Nullable
    @ApiModelProperty(example = "ACTIVE", value = "oCPM learn mode")
    @JsonProperty(JSON_PROPERTY_CONVERSION_LEARNING_MODE_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public ConversionLearningModeTypeEnum getConversionLearningModeType() {
        return conversionLearningModeType;
    }

    @JsonProperty(JSON_PROPERTY_CONVERSION_LEARNING_MODE_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setConversionLearningModeType(ConversionLearningModeTypeEnum conversionLearningModeType) {
        this.conversionLearningModeType = conversionLearningModeType;
    }

    public AdGroupResponseAllOf summaryStatus(AdGroupSummaryStatus summaryStatus) {
        this.summaryStatus = summaryStatus;
        return this;
    }

    /**
     * Ad group summary status.
     * @return summaryStatus
     **/
    @Valid
    @Nullable
    @ApiModelProperty(value = "Ad group summary status.")
    @JsonProperty(JSON_PROPERTY_SUMMARY_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public AdGroupSummaryStatus getSummaryStatus() {
        return summaryStatus;
    }

    @JsonProperty(JSON_PROPERTY_SUMMARY_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setSummaryStatus(AdGroupSummaryStatus summaryStatus) {
        this.summaryStatus = summaryStatus;
    }

    public AdGroupResponseAllOf feedProfileId(String feedProfileId) {
        this.feedProfileId = feedProfileId;
        return this;
    }

    /**
     * Feed Profile ID associated to the adgroup.
     * @return feedProfileId
     **/
    @Nullable
    @ApiModelProperty(example = "626736533506", value = "Feed Profile ID associated to the adgroup.")
    @JsonProperty(JSON_PROPERTY_FEED_PROFILE_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getFeedProfileId() {
        return feedProfileId;
    }

    @JsonProperty(JSON_PROPERTY_FEED_PROFILE_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setFeedProfileId(String feedProfileId) {
        this.feedProfileId = feedProfileId;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        AdGroupResponseAllOf adGroupResponseAllOf = (AdGroupResponseAllOf) o;
        return Objects.equals(this.name, adGroupResponseAllOf.name) &&
            Objects.equals(this.status, adGroupResponseAllOf.status) &&
            Objects.equals(this.budgetInMicroCurrency, adGroupResponseAllOf.budgetInMicroCurrency) &&
            Objects.equals(this.bidInMicroCurrency, adGroupResponseAllOf.bidInMicroCurrency) &&
            Objects.equals(this.budgetType, adGroupResponseAllOf.budgetType) &&
            Objects.equals(this.startTime, adGroupResponseAllOf.startTime) &&
            Objects.equals(this.endTime, adGroupResponseAllOf.endTime) &&
            Objects.equals(this.targetingSpec, adGroupResponseAllOf.targetingSpec) &&
            Objects.equals(this.lifetimeFrequencyCap, adGroupResponseAllOf.lifetimeFrequencyCap) &&
            Objects.equals(this.trackingUrls, adGroupResponseAllOf.trackingUrls) &&
            Objects.equals(this.autoTargetingEnabled, adGroupResponseAllOf.autoTargetingEnabled) &&
            Objects.equals(this.placementGroup, adGroupResponseAllOf.placementGroup) &&
            Objects.equals(this.pacingDeliveryType, adGroupResponseAllOf.pacingDeliveryType) &&
            Objects.equals(this.conversionLearningModeType, adGroupResponseAllOf.conversionLearningModeType) &&
            Objects.equals(this.summaryStatus, adGroupResponseAllOf.summaryStatus) &&
            Objects.equals(this.feedProfileId, adGroupResponseAllOf.feedProfileId);
    }

    @Override
    public int hashCode() {
        return Objects.hash(name, status, budgetInMicroCurrency, bidInMicroCurrency, budgetType, startTime, endTime, targetingSpec, lifetimeFrequencyCap, trackingUrls, autoTargetingEnabled, placementGroup, pacingDeliveryType, conversionLearningModeType, summaryStatus, feedProfileId);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class AdGroupResponseAllOf {\n");
        sb.append("    name: ").append(toIndentedString(name)).append("\n");
        sb.append("    status: ").append(toIndentedString(status)).append("\n");
        sb.append("    budgetInMicroCurrency: ").append(toIndentedString(budgetInMicroCurrency)).append("\n");
        sb.append("    bidInMicroCurrency: ").append(toIndentedString(bidInMicroCurrency)).append("\n");
        sb.append("    budgetType: ").append(toIndentedString(budgetType)).append("\n");
        sb.append("    startTime: ").append(toIndentedString(startTime)).append("\n");
        sb.append("    endTime: ").append(toIndentedString(endTime)).append("\n");
        sb.append("    targetingSpec: ").append(toIndentedString(targetingSpec)).append("\n");
        sb.append("    lifetimeFrequencyCap: ").append(toIndentedString(lifetimeFrequencyCap)).append("\n");
        sb.append("    trackingUrls: ").append(toIndentedString(trackingUrls)).append("\n");
        sb.append("    autoTargetingEnabled: ").append(toIndentedString(autoTargetingEnabled)).append("\n");
        sb.append("    placementGroup: ").append(toIndentedString(placementGroup)).append("\n");
        sb.append("    pacingDeliveryType: ").append(toIndentedString(pacingDeliveryType)).append("\n");
        sb.append("    conversionLearningModeType: ").append(toIndentedString(conversionLearningModeType)).append("\n");
        sb.append("    summaryStatus: ").append(toIndentedString(summaryStatus)).append("\n");
        sb.append("    feedProfileId: ").append(toIndentedString(feedProfileId)).append("\n");
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
