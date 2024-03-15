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
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ActionType;
import org.openapitools.model.AdGroupCommonOptimizationGoalMetadata;
import org.openapitools.model.AdGroupCommonTrackingUrls;
import org.openapitools.model.BudgetType;
import org.openapitools.model.EntityStatus;
import org.openapitools.model.PacingDeliveryType;
import org.openapitools.model.PlacementGroupType;
import org.openapitools.model.TargetingSpec;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * AdGroupUpdateRequest
 */
@JsonPropertyOrder({
  AdGroupUpdateRequest.JSON_PROPERTY_NAME,
  AdGroupUpdateRequest.JSON_PROPERTY_STATUS,
  AdGroupUpdateRequest.JSON_PROPERTY_BUDGET_IN_MICRO_CURRENCY,
  AdGroupUpdateRequest.JSON_PROPERTY_BID_IN_MICRO_CURRENCY,
  AdGroupUpdateRequest.JSON_PROPERTY_OPTIMIZATION_GOAL_METADATA,
  AdGroupUpdateRequest.JSON_PROPERTY_BUDGET_TYPE,
  AdGroupUpdateRequest.JSON_PROPERTY_START_TIME,
  AdGroupUpdateRequest.JSON_PROPERTY_END_TIME,
  AdGroupUpdateRequest.JSON_PROPERTY_TARGETING_SPEC,
  AdGroupUpdateRequest.JSON_PROPERTY_LIFETIME_FREQUENCY_CAP,
  AdGroupUpdateRequest.JSON_PROPERTY_TRACKING_URLS,
  AdGroupUpdateRequest.JSON_PROPERTY_AUTO_TARGETING_ENABLED,
  AdGroupUpdateRequest.JSON_PROPERTY_PLACEMENT_GROUP,
  AdGroupUpdateRequest.JSON_PROPERTY_PACING_DELIVERY_TYPE,
  AdGroupUpdateRequest.JSON_PROPERTY_CAMPAIGN_ID,
  AdGroupUpdateRequest.JSON_PROPERTY_BILLABLE_EVENT,
  AdGroupUpdateRequest.JSON_PROPERTY_BID_STRATEGY_TYPE,
  AdGroupUpdateRequest.JSON_PROPERTY_ID
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class AdGroupUpdateRequest   {
  public static final String JSON_PROPERTY_NAME = "name";
  @JsonProperty(JSON_PROPERTY_NAME)
  private String name;

  public static final String JSON_PROPERTY_STATUS = "status";
  @JsonProperty(JSON_PROPERTY_STATUS)
  private EntityStatus status;

  public static final String JSON_PROPERTY_BUDGET_IN_MICRO_CURRENCY = "budget_in_micro_currency";
  @JsonProperty(JSON_PROPERTY_BUDGET_IN_MICRO_CURRENCY)
  private Integer budgetInMicroCurrency;

  public static final String JSON_PROPERTY_BID_IN_MICRO_CURRENCY = "bid_in_micro_currency";
  @JsonProperty(JSON_PROPERTY_BID_IN_MICRO_CURRENCY)
  private Integer bidInMicroCurrency;

  public static final String JSON_PROPERTY_OPTIMIZATION_GOAL_METADATA = "optimization_goal_metadata";
  @JsonProperty(JSON_PROPERTY_OPTIMIZATION_GOAL_METADATA)
  private AdGroupCommonOptimizationGoalMetadata optimizationGoalMetadata;

  public static final String JSON_PROPERTY_BUDGET_TYPE = "budget_type";
  @JsonProperty(JSON_PROPERTY_BUDGET_TYPE)
  private BudgetType budgetType;

  public static final String JSON_PROPERTY_START_TIME = "start_time";
  @JsonProperty(JSON_PROPERTY_START_TIME)
  private Integer startTime;

  public static final String JSON_PROPERTY_END_TIME = "end_time";
  @JsonProperty(JSON_PROPERTY_END_TIME)
  private Integer endTime;

  public static final String JSON_PROPERTY_TARGETING_SPEC = "targeting_spec";
  @JsonProperty(JSON_PROPERTY_TARGETING_SPEC)
  private TargetingSpec targetingSpec;

  public static final String JSON_PROPERTY_LIFETIME_FREQUENCY_CAP = "lifetime_frequency_cap";
  @JsonProperty(JSON_PROPERTY_LIFETIME_FREQUENCY_CAP)
  private Integer lifetimeFrequencyCap;

  public static final String JSON_PROPERTY_TRACKING_URLS = "tracking_urls";
  @JsonProperty(JSON_PROPERTY_TRACKING_URLS)
  private AdGroupCommonTrackingUrls trackingUrls;

  public static final String JSON_PROPERTY_AUTO_TARGETING_ENABLED = "auto_targeting_enabled";
  @JsonProperty(JSON_PROPERTY_AUTO_TARGETING_ENABLED)
  private Boolean autoTargetingEnabled;

  public static final String JSON_PROPERTY_PLACEMENT_GROUP = "placement_group";
  @JsonProperty(JSON_PROPERTY_PLACEMENT_GROUP)
  private PlacementGroupType placementGroup;

  public static final String JSON_PROPERTY_PACING_DELIVERY_TYPE = "pacing_delivery_type";
  @JsonProperty(JSON_PROPERTY_PACING_DELIVERY_TYPE)
  private PacingDeliveryType pacingDeliveryType;

  public static final String JSON_PROPERTY_CAMPAIGN_ID = "campaign_id";
  @JsonProperty(JSON_PROPERTY_CAMPAIGN_ID)
  private String campaignId;

  public static final String JSON_PROPERTY_BILLABLE_EVENT = "billable_event";
  @JsonProperty(JSON_PROPERTY_BILLABLE_EVENT)
  private ActionType billableEvent;

  /**
   * Bid strategy type
   */
  public enum BidStrategyTypeEnum {
    AUTOMATIC_BID("AUTOMATIC_BID"),
    
    MAX_BID("MAX_BID"),
    
    TARGET_AVG("TARGET_AVG"),
    
    NULL("null");

    private String value;

    BidStrategyTypeEnum(String value) {
      this.value = value;
    }

    @Override
    @JsonValue
    public String toString() {
      return String.valueOf(value);
    }

    @JsonCreator
    public static BidStrategyTypeEnum fromValue(String value) {
      for (BidStrategyTypeEnum b : BidStrategyTypeEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      return null;
    }
  }

  public static final String JSON_PROPERTY_BID_STRATEGY_TYPE = "bid_strategy_type";
  @JsonProperty(JSON_PROPERTY_BID_STRATEGY_TYPE)
  private BidStrategyTypeEnum bidStrategyType;

  public static final String JSON_PROPERTY_ID = "id";
  @JsonProperty(JSON_PROPERTY_ID)
  private String id;

  public AdGroupUpdateRequest name(String name) {
    this.name = name;
    return this;
  }

  /**
   * Ad group name.
   * @return name
   **/
  @JsonProperty(value = "name")
  @ApiModelProperty(example = "Ad Group For Pin: 687195905986", value = "Ad group name.")
  
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public AdGroupUpdateRequest status(EntityStatus status) {
    this.status = status;
    return this;
  }

  /**
   * Ad group/entity status.
   * @return status
   **/
  @JsonProperty(value = "status")
  @ApiModelProperty(value = "Ad group/entity status.")
  @Valid 
  public EntityStatus getStatus() {
    return status;
  }

  public void setStatus(EntityStatus status) {
    this.status = status;
  }

  public AdGroupUpdateRequest budgetInMicroCurrency(Integer budgetInMicroCurrency) {
    this.budgetInMicroCurrency = budgetInMicroCurrency;
    return this;
  }

  /**
   * Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.
   * @return budgetInMicroCurrency
   **/
  @JsonProperty(value = "budget_in_micro_currency")
  @ApiModelProperty(example = "5000000", value = "Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.")
  
  public Integer getBudgetInMicroCurrency() {
    return budgetInMicroCurrency;
  }

  public void setBudgetInMicroCurrency(Integer budgetInMicroCurrency) {
    this.budgetInMicroCurrency = budgetInMicroCurrency;
  }

  public AdGroupUpdateRequest bidInMicroCurrency(Integer bidInMicroCurrency) {
    this.bidInMicroCurrency = bidInMicroCurrency;
    return this;
  }

  /**
   * Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.
   * @return bidInMicroCurrency
   **/
  @JsonProperty(value = "bid_in_micro_currency")
  @ApiModelProperty(example = "5000000", value = "Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.")
  
  public Integer getBidInMicroCurrency() {
    return bidInMicroCurrency;
  }

  public void setBidInMicroCurrency(Integer bidInMicroCurrency) {
    this.bidInMicroCurrency = bidInMicroCurrency;
  }

  public AdGroupUpdateRequest optimizationGoalMetadata(AdGroupCommonOptimizationGoalMetadata optimizationGoalMetadata) {
    this.optimizationGoalMetadata = optimizationGoalMetadata;
    return this;
  }

  /**
   * Get optimizationGoalMetadata
   * @return optimizationGoalMetadata
   **/
  @JsonProperty(value = "optimization_goal_metadata")
  @ApiModelProperty(value = "")
  @Valid 
  public AdGroupCommonOptimizationGoalMetadata getOptimizationGoalMetadata() {
    return optimizationGoalMetadata;
  }

  public void setOptimizationGoalMetadata(AdGroupCommonOptimizationGoalMetadata optimizationGoalMetadata) {
    this.optimizationGoalMetadata = optimizationGoalMetadata;
  }

  public AdGroupUpdateRequest budgetType(BudgetType budgetType) {
    this.budgetType = budgetType;
    return this;
  }

  /**
   * Get budgetType
   * @return budgetType
   **/
  @JsonProperty(value = "budget_type")
  @ApiModelProperty(value = "")
  @Valid 
  public BudgetType getBudgetType() {
    return budgetType;
  }

  public void setBudgetType(BudgetType budgetType) {
    this.budgetType = budgetType;
  }

  public AdGroupUpdateRequest startTime(Integer startTime) {
    this.startTime = startTime;
    return this;
  }

  /**
   * Ad group start time. Unix timestamp in seconds. Defaults to current time.
   * @return startTime
   **/
  @JsonProperty(value = "start_time")
  @ApiModelProperty(example = "5686848000", value = "Ad group start time. Unix timestamp in seconds. Defaults to current time.")
  
  public Integer getStartTime() {
    return startTime;
  }

  public void setStartTime(Integer startTime) {
    this.startTime = startTime;
  }

  public AdGroupUpdateRequest endTime(Integer endTime) {
    this.endTime = endTime;
    return this;
  }

  /**
   * Ad group end time. Unix timestamp in seconds.
   * @return endTime
   **/
  @JsonProperty(value = "end_time")
  @ApiModelProperty(example = "5705424000", value = "Ad group end time. Unix timestamp in seconds.")
  
  public Integer getEndTime() {
    return endTime;
  }

  public void setEndTime(Integer endTime) {
    this.endTime = endTime;
  }

  public AdGroupUpdateRequest targetingSpec(TargetingSpec targetingSpec) {
    this.targetingSpec = targetingSpec;
    return this;
  }

  /**
   * Get targetingSpec
   * @return targetingSpec
   **/
  @JsonProperty(value = "targeting_spec")
  @ApiModelProperty(value = "")
  @Valid 
  public TargetingSpec getTargetingSpec() {
    return targetingSpec;
  }

  public void setTargetingSpec(TargetingSpec targetingSpec) {
    this.targetingSpec = targetingSpec;
  }

  public AdGroupUpdateRequest lifetimeFrequencyCap(Integer lifetimeFrequencyCap) {
    this.lifetimeFrequencyCap = lifetimeFrequencyCap;
    return this;
  }

  /**
   * Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/#section/Billable-event\&quot;&gt;billable_event&lt;/a&gt; value. This field **REQUIRES** the &#x60;end_time&#x60; field.
   * @return lifetimeFrequencyCap
   **/
  @JsonProperty(value = "lifetime_frequency_cap")
  @ApiModelProperty(example = "100", value = "Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\"https://developers.pinterest.com/docs/redoc/#section/Billable-event\">billable_event</a> value. This field **REQUIRES** the `end_time` field.")
  
  public Integer getLifetimeFrequencyCap() {
    return lifetimeFrequencyCap;
  }

  public void setLifetimeFrequencyCap(Integer lifetimeFrequencyCap) {
    this.lifetimeFrequencyCap = lifetimeFrequencyCap;
  }

  public AdGroupUpdateRequest trackingUrls(AdGroupCommonTrackingUrls trackingUrls) {
    this.trackingUrls = trackingUrls;
    return this;
  }

  /**
   * Get trackingUrls
   * @return trackingUrls
   **/
  @JsonProperty(value = "tracking_urls")
  @ApiModelProperty(value = "")
  @Valid 
  public AdGroupCommonTrackingUrls getTrackingUrls() {
    return trackingUrls;
  }

  public void setTrackingUrls(AdGroupCommonTrackingUrls trackingUrls) {
    this.trackingUrls = trackingUrls;
  }

  public AdGroupUpdateRequest autoTargetingEnabled(Boolean autoTargetingEnabled) {
    this.autoTargetingEnabled = autoTargetingEnabled;
    return this;
  }

  /**
   * Enable auto-targeting for ad group. Also known as &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/expanded-targeting\&quot; target&#x3D;\&quot;_blank\&quot;&gt;\&quot;expanded targeting\&quot;&lt;/a&gt;.
   * @return autoTargetingEnabled
   **/
  @JsonProperty(value = "auto_targeting_enabled")
  @ApiModelProperty(example = "true", value = "Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>.")
  
  public Boolean getAutoTargetingEnabled() {
    return autoTargetingEnabled;
  }

  public void setAutoTargetingEnabled(Boolean autoTargetingEnabled) {
    this.autoTargetingEnabled = autoTargetingEnabled;
  }

  public AdGroupUpdateRequest placementGroup(PlacementGroupType placementGroup) {
    this.placementGroup = placementGroup;
    return this;
  }

  /**
   * &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/#section/Placement-group\&quot;&gt;Placement group&lt;/a&gt;.
   * @return placementGroup
   **/
  @JsonProperty(value = "placement_group")
  @ApiModelProperty(value = "<a href=\"https://developers.pinterest.com/docs/redoc/#section/Placement-group\">Placement group</a>.")
  @Valid 
  public PlacementGroupType getPlacementGroup() {
    return placementGroup;
  }

  public void setPlacementGroup(PlacementGroupType placementGroup) {
    this.placementGroup = placementGroup;
  }

  public AdGroupUpdateRequest pacingDeliveryType(PacingDeliveryType pacingDeliveryType) {
    this.pacingDeliveryType = pacingDeliveryType;
    return this;
  }

  /**
   * Get pacingDeliveryType
   * @return pacingDeliveryType
   **/
  @JsonProperty(value = "pacing_delivery_type")
  @ApiModelProperty(value = "")
  @Valid 
  public PacingDeliveryType getPacingDeliveryType() {
    return pacingDeliveryType;
  }

  public void setPacingDeliveryType(PacingDeliveryType pacingDeliveryType) {
    this.pacingDeliveryType = pacingDeliveryType;
  }

  public AdGroupUpdateRequest campaignId(String campaignId) {
    this.campaignId = campaignId;
    return this;
  }

  /**
   * Campaign ID of the ad group.
   * @return campaignId
   **/
  @JsonProperty(value = "campaign_id")
  @ApiModelProperty(example = "626736533506", value = "Campaign ID of the ad group.")
   @Pattern(regexp="^[C]?\\d+$")
  public String getCampaignId() {
    return campaignId;
  }

  public void setCampaignId(String campaignId) {
    this.campaignId = campaignId;
  }

  public AdGroupUpdateRequest billableEvent(ActionType billableEvent) {
    this.billableEvent = billableEvent;
    return this;
  }

  /**
   * Get billableEvent
   * @return billableEvent
   **/
  @JsonProperty(value = "billable_event")
  @ApiModelProperty(value = "")
  @Valid 
  public ActionType getBillableEvent() {
    return billableEvent;
  }

  public void setBillableEvent(ActionType billableEvent) {
    this.billableEvent = billableEvent;
  }

  public AdGroupUpdateRequest bidStrategyType(BidStrategyTypeEnum bidStrategyType) {
    this.bidStrategyType = bidStrategyType;
    return this;
  }

  /**
   * Bid strategy type
   * @return bidStrategyType
   **/
  @JsonProperty(value = "bid_strategy_type")
  @ApiModelProperty(example = "MAX_BID", value = "Bid strategy type")
  
  public BidStrategyTypeEnum getBidStrategyType() {
    return bidStrategyType;
  }

  public void setBidStrategyType(BidStrategyTypeEnum bidStrategyType) {
    this.bidStrategyType = bidStrategyType;
  }

  public AdGroupUpdateRequest id(String id) {
    this.id = id;
    return this;
  }

  /**
   * Ad group ID.
   * @return id
   **/
  @JsonProperty(value = "id")
  @ApiModelProperty(example = "2680060704746", required = true, value = "Ad group ID.")
  @NotNull  @Pattern(regexp="^\\d+$")
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdGroupUpdateRequest adGroupUpdateRequest = (AdGroupUpdateRequest) o;
    return Objects.equals(this.name, adGroupUpdateRequest.name) &&
        Objects.equals(this.status, adGroupUpdateRequest.status) &&
        Objects.equals(this.budgetInMicroCurrency, adGroupUpdateRequest.budgetInMicroCurrency) &&
        Objects.equals(this.bidInMicroCurrency, adGroupUpdateRequest.bidInMicroCurrency) &&
        Objects.equals(this.optimizationGoalMetadata, adGroupUpdateRequest.optimizationGoalMetadata) &&
        Objects.equals(this.budgetType, adGroupUpdateRequest.budgetType) &&
        Objects.equals(this.startTime, adGroupUpdateRequest.startTime) &&
        Objects.equals(this.endTime, adGroupUpdateRequest.endTime) &&
        Objects.equals(this.targetingSpec, adGroupUpdateRequest.targetingSpec) &&
        Objects.equals(this.lifetimeFrequencyCap, adGroupUpdateRequest.lifetimeFrequencyCap) &&
        Objects.equals(this.trackingUrls, adGroupUpdateRequest.trackingUrls) &&
        Objects.equals(this.autoTargetingEnabled, adGroupUpdateRequest.autoTargetingEnabled) &&
        Objects.equals(this.placementGroup, adGroupUpdateRequest.placementGroup) &&
        Objects.equals(this.pacingDeliveryType, adGroupUpdateRequest.pacingDeliveryType) &&
        Objects.equals(this.campaignId, adGroupUpdateRequest.campaignId) &&
        Objects.equals(this.billableEvent, adGroupUpdateRequest.billableEvent) &&
        Objects.equals(this.bidStrategyType, adGroupUpdateRequest.bidStrategyType) &&
        Objects.equals(this.id, adGroupUpdateRequest.id);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, status, budgetInMicroCurrency, bidInMicroCurrency, optimizationGoalMetadata, budgetType, startTime, endTime, targetingSpec, lifetimeFrequencyCap, trackingUrls, autoTargetingEnabled, placementGroup, pacingDeliveryType, campaignId, billableEvent, bidStrategyType, id);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdGroupUpdateRequest {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    budgetInMicroCurrency: ").append(toIndentedString(budgetInMicroCurrency)).append("\n");
    sb.append("    bidInMicroCurrency: ").append(toIndentedString(bidInMicroCurrency)).append("\n");
    sb.append("    optimizationGoalMetadata: ").append(toIndentedString(optimizationGoalMetadata)).append("\n");
    sb.append("    budgetType: ").append(toIndentedString(budgetType)).append("\n");
    sb.append("    startTime: ").append(toIndentedString(startTime)).append("\n");
    sb.append("    endTime: ").append(toIndentedString(endTime)).append("\n");
    sb.append("    targetingSpec: ").append(toIndentedString(targetingSpec)).append("\n");
    sb.append("    lifetimeFrequencyCap: ").append(toIndentedString(lifetimeFrequencyCap)).append("\n");
    sb.append("    trackingUrls: ").append(toIndentedString(trackingUrls)).append("\n");
    sb.append("    autoTargetingEnabled: ").append(toIndentedString(autoTargetingEnabled)).append("\n");
    sb.append("    placementGroup: ").append(toIndentedString(placementGroup)).append("\n");
    sb.append("    pacingDeliveryType: ").append(toIndentedString(pacingDeliveryType)).append("\n");
    sb.append("    campaignId: ").append(toIndentedString(campaignId)).append("\n");
    sb.append("    billableEvent: ").append(toIndentedString(billableEvent)).append("\n");
    sb.append("    bidStrategyType: ").append(toIndentedString(bidStrategyType)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
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

