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

package org.openapitools.client.model;

import org.openapitools.client.model.ActionType;
import org.openapitools.client.model.AdGroupCommonOptimizationGoalMetadata;
import org.openapitools.client.model.AdGroupCommonTrackingUrls;
import org.openapitools.client.model.AdGroupSummaryStatus;
import org.openapitools.client.model.BudgetType;
import org.openapitools.client.model.EntityStatus;
import org.openapitools.client.model.OasAnyTypeNotMapped;
import org.openapitools.client.model.PacingDeliveryType;
import org.openapitools.client.model.PlacementGroupType;
import org.openapitools.client.model.TargetingSpec;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class AdGroupResponse {
  
  @SerializedName("name")
  private String name = null;
  @SerializedName("status")
  private EntityStatus status = null;
  @SerializedName("budget_in_micro_currency")
  private Integer budgetInMicroCurrency = null;
  @SerializedName("bid_in_micro_currency")
  private Integer bidInMicroCurrency = null;
  @SerializedName("optimization_goal_metadata")
  private AdGroupCommonOptimizationGoalMetadata optimizationGoalMetadata = null;
  @SerializedName("budget_type")
  private BudgetType budgetType = null;
  @SerializedName("start_time")
  private Integer startTime = null;
  @SerializedName("end_time")
  private Integer endTime = null;
  @SerializedName("targeting_spec")
  private TargetingSpec targetingSpec = null;
  @SerializedName("lifetime_frequency_cap")
  private Integer lifetimeFrequencyCap = null;
  @SerializedName("tracking_urls")
  private AdGroupCommonTrackingUrls trackingUrls = null;
  @SerializedName("auto_targeting_enabled")
  private Boolean autoTargetingEnabled = null;
  @SerializedName("placement_group")
  private PlacementGroupType placementGroup = null;
  @SerializedName("pacing_delivery_type")
  private PacingDeliveryType pacingDeliveryType = null;
  @SerializedName("campaign_id")
  private String campaignId = null;
  @SerializedName("billable_event")
  private ActionType billableEvent = null;
  public enum BidStrategyTypeEnum {
     AUTOMATIC_BID,  MAX_BID,  TARGET_AVG,  , 
  };
  @SerializedName("bid_strategy_type")
  private BidStrategyTypeEnum bidStrategyType = null;
  @SerializedName("id")
  private String id = null;
  @SerializedName("ad_account_id")
  private String adAccountId = null;
  @SerializedName("created_time")
  private Integer createdTime = null;
  @SerializedName("updated_time")
  private Integer updatedTime = null;
  @SerializedName("type")
  private String type = adgroup;
  public enum ConversionLearningModeTypeEnum {
     NOT_ACTIVE,  ACTIVE,  , 
  };
  @SerializedName("conversion_learning_mode_type")
  private ConversionLearningModeTypeEnum conversionLearningModeType = null;
  @SerializedName("summary_status")
  private AdGroupSummaryStatus summaryStatus = null;
  @SerializedName("feed_profile_id")
  private String feedProfileId = null;
  @SerializedName("dca_assets")
  private OasAnyTypeNotMapped dcaAssets = null;

  /**
   * Ad group name.
   **/
  @ApiModelProperty(value = "Ad group name.")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   * Ad group/entity status.
   **/
  @ApiModelProperty(value = "Ad group/entity status.")
  public EntityStatus getStatus() {
    return status;
  }
  public void setStatus(EntityStatus status) {
    this.status = status;
  }

  /**
   * Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.
   **/
  @ApiModelProperty(value = "Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.")
  public Integer getBudgetInMicroCurrency() {
    return budgetInMicroCurrency;
  }
  public void setBudgetInMicroCurrency(Integer budgetInMicroCurrency) {
    this.budgetInMicroCurrency = budgetInMicroCurrency;
  }

  /**
   * Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.
   **/
  @ApiModelProperty(value = "Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.")
  public Integer getBidInMicroCurrency() {
    return bidInMicroCurrency;
  }
  public void setBidInMicroCurrency(Integer bidInMicroCurrency) {
    this.bidInMicroCurrency = bidInMicroCurrency;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public AdGroupCommonOptimizationGoalMetadata getOptimizationGoalMetadata() {
    return optimizationGoalMetadata;
  }
  public void setOptimizationGoalMetadata(AdGroupCommonOptimizationGoalMetadata optimizationGoalMetadata) {
    this.optimizationGoalMetadata = optimizationGoalMetadata;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BudgetType getBudgetType() {
    return budgetType;
  }
  public void setBudgetType(BudgetType budgetType) {
    this.budgetType = budgetType;
  }

  /**
   * Ad group start time. Unix timestamp in seconds. Defaults to current time.
   **/
  @ApiModelProperty(value = "Ad group start time. Unix timestamp in seconds. Defaults to current time.")
  public Integer getStartTime() {
    return startTime;
  }
  public void setStartTime(Integer startTime) {
    this.startTime = startTime;
  }

  /**
   * Ad group end time. Unix timestamp in seconds.
   **/
  @ApiModelProperty(value = "Ad group end time. Unix timestamp in seconds.")
  public Integer getEndTime() {
    return endTime;
  }
  public void setEndTime(Integer endTime) {
    this.endTime = endTime;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public TargetingSpec getTargetingSpec() {
    return targetingSpec;
  }
  public void setTargetingSpec(TargetingSpec targetingSpec) {
    this.targetingSpec = targetingSpec;
  }

  /**
   * Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\"https://developers.pinterest.com/docs/redoc/#section/Billable-event\">billable_event</a> value. This field **REQUIRES** the `end_time` field.
   **/
  @ApiModelProperty(value = "Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\"https://developers.pinterest.com/docs/redoc/#section/Billable-event\">billable_event</a> value. This field **REQUIRES** the `end_time` field.")
  public Integer getLifetimeFrequencyCap() {
    return lifetimeFrequencyCap;
  }
  public void setLifetimeFrequencyCap(Integer lifetimeFrequencyCap) {
    this.lifetimeFrequencyCap = lifetimeFrequencyCap;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public AdGroupCommonTrackingUrls getTrackingUrls() {
    return trackingUrls;
  }
  public void setTrackingUrls(AdGroupCommonTrackingUrls trackingUrls) {
    this.trackingUrls = trackingUrls;
  }

  /**
   * Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>.
   **/
  @ApiModelProperty(value = "Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>.")
  public Boolean getAutoTargetingEnabled() {
    return autoTargetingEnabled;
  }
  public void setAutoTargetingEnabled(Boolean autoTargetingEnabled) {
    this.autoTargetingEnabled = autoTargetingEnabled;
  }

  /**
   * <a href=\"https://developers.pinterest.com/docs/redoc/#section/Placement-group\">Placement group</a>.
   **/
  @ApiModelProperty(value = "<a href=\"https://developers.pinterest.com/docs/redoc/#section/Placement-group\">Placement group</a>.")
  public PlacementGroupType getPlacementGroup() {
    return placementGroup;
  }
  public void setPlacementGroup(PlacementGroupType placementGroup) {
    this.placementGroup = placementGroup;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public PacingDeliveryType getPacingDeliveryType() {
    return pacingDeliveryType;
  }
  public void setPacingDeliveryType(PacingDeliveryType pacingDeliveryType) {
    this.pacingDeliveryType = pacingDeliveryType;
  }

  /**
   * Campaign ID of the ad group.
   **/
  @ApiModelProperty(value = "Campaign ID of the ad group.")
  public String getCampaignId() {
    return campaignId;
  }
  public void setCampaignId(String campaignId) {
    this.campaignId = campaignId;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ActionType getBillableEvent() {
    return billableEvent;
  }
  public void setBillableEvent(ActionType billableEvent) {
    this.billableEvent = billableEvent;
  }

  /**
   * Bid strategy type
   **/
  @ApiModelProperty(value = "Bid strategy type")
  public BidStrategyTypeEnum getBidStrategyType() {
    return bidStrategyType;
  }
  public void setBidStrategyType(BidStrategyTypeEnum bidStrategyType) {
    this.bidStrategyType = bidStrategyType;
  }

  /**
   * Ad group ID.
   **/
  @ApiModelProperty(value = "Ad group ID.")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   * Advertiser ID.
   **/
  @ApiModelProperty(value = "Advertiser ID.")
  public String getAdAccountId() {
    return adAccountId;
  }
  public void setAdAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
  }

  /**
   * Ad group creation time. Unix timestamp in seconds.
   **/
  @ApiModelProperty(value = "Ad group creation time. Unix timestamp in seconds.")
  public Integer getCreatedTime() {
    return createdTime;
  }
  public void setCreatedTime(Integer createdTime) {
    this.createdTime = createdTime;
  }

  /**
   * Ad group last update time. Unix timestamp in seconds.
   **/
  @ApiModelProperty(value = "Ad group last update time. Unix timestamp in seconds.")
  public Integer getUpdatedTime() {
    return updatedTime;
  }
  public void setUpdatedTime(Integer updatedTime) {
    this.updatedTime = updatedTime;
  }

  /**
   * Always \"adgroup\".
   **/
  @ApiModelProperty(value = "Always \"adgroup\".")
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  /**
   * oCPM learn mode
   **/
  @ApiModelProperty(value = "oCPM learn mode")
  public ConversionLearningModeTypeEnum getConversionLearningModeType() {
    return conversionLearningModeType;
  }
  public void setConversionLearningModeType(ConversionLearningModeTypeEnum conversionLearningModeType) {
    this.conversionLearningModeType = conversionLearningModeType;
  }

  /**
   * Ad group summary status.
   **/
  @ApiModelProperty(value = "Ad group summary status.")
  public AdGroupSummaryStatus getSummaryStatus() {
    return summaryStatus;
  }
  public void setSummaryStatus(AdGroupSummaryStatus summaryStatus) {
    this.summaryStatus = summaryStatus;
  }

  /**
   * Feed Profile ID associated to the adgroup.
   **/
  @ApiModelProperty(value = "Feed Profile ID associated to the adgroup.")
  public String getFeedProfileId() {
    return feedProfileId;
  }
  public void setFeedProfileId(String feedProfileId) {
    this.feedProfileId = feedProfileId;
  }

  /**
   * [DCA] The Dynamic creative assets to use for DCA. Dynamic Creative Assembly (DCA) accepts basic creative assets of an ad (image, video, title, call to action, logo etc). Then it automatically generates optimized ad combinations based on these assets.
   **/
  @ApiModelProperty(value = "[DCA] The Dynamic creative assets to use for DCA. Dynamic Creative Assembly (DCA) accepts basic creative assets of an ad (image, video, title, call to action, logo etc). Then it automatically generates optimized ad combinations based on these assets.")
  public OasAnyTypeNotMapped getDcaAssets() {
    return dcaAssets;
  }
  public void setDcaAssets(OasAnyTypeNotMapped dcaAssets) {
    this.dcaAssets = dcaAssets;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdGroupResponse adGroupResponse = (AdGroupResponse) o;
    return (this.name == null ? adGroupResponse.name == null : this.name.equals(adGroupResponse.name)) &&
        (this.status == null ? adGroupResponse.status == null : this.status.equals(adGroupResponse.status)) &&
        (this.budgetInMicroCurrency == null ? adGroupResponse.budgetInMicroCurrency == null : this.budgetInMicroCurrency.equals(adGroupResponse.budgetInMicroCurrency)) &&
        (this.bidInMicroCurrency == null ? adGroupResponse.bidInMicroCurrency == null : this.bidInMicroCurrency.equals(adGroupResponse.bidInMicroCurrency)) &&
        (this.optimizationGoalMetadata == null ? adGroupResponse.optimizationGoalMetadata == null : this.optimizationGoalMetadata.equals(adGroupResponse.optimizationGoalMetadata)) &&
        (this.budgetType == null ? adGroupResponse.budgetType == null : this.budgetType.equals(adGroupResponse.budgetType)) &&
        (this.startTime == null ? adGroupResponse.startTime == null : this.startTime.equals(adGroupResponse.startTime)) &&
        (this.endTime == null ? adGroupResponse.endTime == null : this.endTime.equals(adGroupResponse.endTime)) &&
        (this.targetingSpec == null ? adGroupResponse.targetingSpec == null : this.targetingSpec.equals(adGroupResponse.targetingSpec)) &&
        (this.lifetimeFrequencyCap == null ? adGroupResponse.lifetimeFrequencyCap == null : this.lifetimeFrequencyCap.equals(adGroupResponse.lifetimeFrequencyCap)) &&
        (this.trackingUrls == null ? adGroupResponse.trackingUrls == null : this.trackingUrls.equals(adGroupResponse.trackingUrls)) &&
        (this.autoTargetingEnabled == null ? adGroupResponse.autoTargetingEnabled == null : this.autoTargetingEnabled.equals(adGroupResponse.autoTargetingEnabled)) &&
        (this.placementGroup == null ? adGroupResponse.placementGroup == null : this.placementGroup.equals(adGroupResponse.placementGroup)) &&
        (this.pacingDeliveryType == null ? adGroupResponse.pacingDeliveryType == null : this.pacingDeliveryType.equals(adGroupResponse.pacingDeliveryType)) &&
        (this.campaignId == null ? adGroupResponse.campaignId == null : this.campaignId.equals(adGroupResponse.campaignId)) &&
        (this.billableEvent == null ? adGroupResponse.billableEvent == null : this.billableEvent.equals(adGroupResponse.billableEvent)) &&
        (this.bidStrategyType == null ? adGroupResponse.bidStrategyType == null : this.bidStrategyType.equals(adGroupResponse.bidStrategyType)) &&
        (this.id == null ? adGroupResponse.id == null : this.id.equals(adGroupResponse.id)) &&
        (this.adAccountId == null ? adGroupResponse.adAccountId == null : this.adAccountId.equals(adGroupResponse.adAccountId)) &&
        (this.createdTime == null ? adGroupResponse.createdTime == null : this.createdTime.equals(adGroupResponse.createdTime)) &&
        (this.updatedTime == null ? adGroupResponse.updatedTime == null : this.updatedTime.equals(adGroupResponse.updatedTime)) &&
        (this.type == null ? adGroupResponse.type == null : this.type.equals(adGroupResponse.type)) &&
        (this.conversionLearningModeType == null ? adGroupResponse.conversionLearningModeType == null : this.conversionLearningModeType.equals(adGroupResponse.conversionLearningModeType)) &&
        (this.summaryStatus == null ? adGroupResponse.summaryStatus == null : this.summaryStatus.equals(adGroupResponse.summaryStatus)) &&
        (this.feedProfileId == null ? adGroupResponse.feedProfileId == null : this.feedProfileId.equals(adGroupResponse.feedProfileId)) &&
        (this.dcaAssets == null ? adGroupResponse.dcaAssets == null : this.dcaAssets.equals(adGroupResponse.dcaAssets));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.name == null ? 0: this.name.hashCode());
    result = 31 * result + (this.status == null ? 0: this.status.hashCode());
    result = 31 * result + (this.budgetInMicroCurrency == null ? 0: this.budgetInMicroCurrency.hashCode());
    result = 31 * result + (this.bidInMicroCurrency == null ? 0: this.bidInMicroCurrency.hashCode());
    result = 31 * result + (this.optimizationGoalMetadata == null ? 0: this.optimizationGoalMetadata.hashCode());
    result = 31 * result + (this.budgetType == null ? 0: this.budgetType.hashCode());
    result = 31 * result + (this.startTime == null ? 0: this.startTime.hashCode());
    result = 31 * result + (this.endTime == null ? 0: this.endTime.hashCode());
    result = 31 * result + (this.targetingSpec == null ? 0: this.targetingSpec.hashCode());
    result = 31 * result + (this.lifetimeFrequencyCap == null ? 0: this.lifetimeFrequencyCap.hashCode());
    result = 31 * result + (this.trackingUrls == null ? 0: this.trackingUrls.hashCode());
    result = 31 * result + (this.autoTargetingEnabled == null ? 0: this.autoTargetingEnabled.hashCode());
    result = 31 * result + (this.placementGroup == null ? 0: this.placementGroup.hashCode());
    result = 31 * result + (this.pacingDeliveryType == null ? 0: this.pacingDeliveryType.hashCode());
    result = 31 * result + (this.campaignId == null ? 0: this.campaignId.hashCode());
    result = 31 * result + (this.billableEvent == null ? 0: this.billableEvent.hashCode());
    result = 31 * result + (this.bidStrategyType == null ? 0: this.bidStrategyType.hashCode());
    result = 31 * result + (this.id == null ? 0: this.id.hashCode());
    result = 31 * result + (this.adAccountId == null ? 0: this.adAccountId.hashCode());
    result = 31 * result + (this.createdTime == null ? 0: this.createdTime.hashCode());
    result = 31 * result + (this.updatedTime == null ? 0: this.updatedTime.hashCode());
    result = 31 * result + (this.type == null ? 0: this.type.hashCode());
    result = 31 * result + (this.conversionLearningModeType == null ? 0: this.conversionLearningModeType.hashCode());
    result = 31 * result + (this.summaryStatus == null ? 0: this.summaryStatus.hashCode());
    result = 31 * result + (this.feedProfileId == null ? 0: this.feedProfileId.hashCode());
    result = 31 * result + (this.dcaAssets == null ? 0: this.dcaAssets.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdGroupResponse {\n");
    
    sb.append("  name: ").append(name).append("\n");
    sb.append("  status: ").append(status).append("\n");
    sb.append("  budgetInMicroCurrency: ").append(budgetInMicroCurrency).append("\n");
    sb.append("  bidInMicroCurrency: ").append(bidInMicroCurrency).append("\n");
    sb.append("  optimizationGoalMetadata: ").append(optimizationGoalMetadata).append("\n");
    sb.append("  budgetType: ").append(budgetType).append("\n");
    sb.append("  startTime: ").append(startTime).append("\n");
    sb.append("  endTime: ").append(endTime).append("\n");
    sb.append("  targetingSpec: ").append(targetingSpec).append("\n");
    sb.append("  lifetimeFrequencyCap: ").append(lifetimeFrequencyCap).append("\n");
    sb.append("  trackingUrls: ").append(trackingUrls).append("\n");
    sb.append("  autoTargetingEnabled: ").append(autoTargetingEnabled).append("\n");
    sb.append("  placementGroup: ").append(placementGroup).append("\n");
    sb.append("  pacingDeliveryType: ").append(pacingDeliveryType).append("\n");
    sb.append("  campaignId: ").append(campaignId).append("\n");
    sb.append("  billableEvent: ").append(billableEvent).append("\n");
    sb.append("  bidStrategyType: ").append(bidStrategyType).append("\n");
    sb.append("  id: ").append(id).append("\n");
    sb.append("  adAccountId: ").append(adAccountId).append("\n");
    sb.append("  createdTime: ").append(createdTime).append("\n");
    sb.append("  updatedTime: ").append(updatedTime).append("\n");
    sb.append("  type: ").append(type).append("\n");
    sb.append("  conversionLearningModeType: ").append(conversionLearningModeType).append("\n");
    sb.append("  summaryStatus: ").append(summaryStatus).append("\n");
    sb.append("  feedProfileId: ").append(feedProfileId).append("\n");
    sb.append("  dcaAssets: ").append(dcaAssets).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}