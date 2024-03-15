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

import org.openapitools.client.model.AdCommonTrackingUrls;
import org.openapitools.client.model.CampaignSummaryStatus;
import org.openapitools.client.model.EntityStatus;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class CampaignCreateCommon {
  
  @SerializedName("ad_account_id")
  private String adAccountId = null;
  @SerializedName("name")
  private String name = null;
  @SerializedName("status")
  private EntityStatus status = ACTIVE;
  @SerializedName("lifetime_spend_cap")
  private Integer lifetimeSpendCap = null;
  @SerializedName("daily_spend_cap")
  private Integer dailySpendCap = null;
  @SerializedName("order_line_id")
  private String orderLineId = null;
  @SerializedName("tracking_urls")
  private AdCommonTrackingUrls trackingUrls = null;
  @SerializedName("start_time")
  private Integer startTime = null;
  @SerializedName("end_time")
  private Integer endTime = null;
  @SerializedName("summary_status")
  private CampaignSummaryStatus summaryStatus = null;
  @SerializedName("is_flexible_daily_budgets")
  private Boolean isFlexibleDailyBudgets = false;
  @SerializedName("default_ad_group_budget_in_micro_currency")
  private Integer defaultAdGroupBudgetInMicroCurrency = null;
  @SerializedName("is_automated_campaign")
  private Boolean isAutomatedCampaign = false;

  /**
   * Campaign's Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema.
   **/
  @ApiModelProperty(value = "Campaign's Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema.")
  public String getAdAccountId() {
    return adAccountId;
  }
  public void setAdAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
  }

  /**
   * Campaign name.
   **/
  @ApiModelProperty(value = "Campaign name.")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public EntityStatus getStatus() {
    return status;
  }
  public void setStatus(EntityStatus status) {
    this.status = status;
  }

  /**
   * Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"daily_spend_cap\" cannot be set at the same time.
   **/
  @ApiModelProperty(value = "Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"daily_spend_cap\" cannot be set at the same time.")
  public Integer getLifetimeSpendCap() {
    return lifetimeSpendCap;
  }
  public void setLifetimeSpendCap(Integer lifetimeSpendCap) {
    this.lifetimeSpendCap = lifetimeSpendCap;
  }

  /**
   * Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"lifetime_spend_cap\" cannot be set at the same time.
   **/
  @ApiModelProperty(value = "Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"lifetime_spend_cap\" cannot be set at the same time.")
  public Integer getDailySpendCap() {
    return dailySpendCap;
  }
  public void setDailySpendCap(Integer dailySpendCap) {
    this.dailySpendCap = dailySpendCap;
  }

  /**
   * Order line ID that appears on the invoice.
   **/
  @ApiModelProperty(value = "Order line ID that appears on the invoice.")
  public String getOrderLineId() {
    return orderLineId;
  }
  public void setOrderLineId(String orderLineId) {
    this.orderLineId = orderLineId;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public AdCommonTrackingUrls getTrackingUrls() {
    return trackingUrls;
  }
  public void setTrackingUrls(AdCommonTrackingUrls trackingUrls) {
    this.trackingUrls = trackingUrls;
  }

  /**
   * Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
   **/
  @ApiModelProperty(value = "Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.")
  public Integer getStartTime() {
    return startTime;
  }
  public void setStartTime(Integer startTime) {
    this.startTime = startTime;
  }

  /**
   * Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
   **/
  @ApiModelProperty(value = "Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.")
  public Integer getEndTime() {
    return endTime;
  }
  public void setEndTime(Integer endTime) {
    this.endTime = endTime;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public CampaignSummaryStatus getSummaryStatus() {
    return summaryStatus;
  }
  public void setSummaryStatus(CampaignSummaryStatus summaryStatus) {
    this.summaryStatus = summaryStatus;
  }

  /**
   * Determine if a campaign has flexible daily budgets setup.
   **/
  @ApiModelProperty(value = "Determine if a campaign has flexible daily budgets setup.")
  public Boolean getIsFlexibleDailyBudgets() {
    return isFlexibleDailyBudgets;
  }
  public void setIsFlexibleDailyBudgets(Boolean isFlexibleDailyBudgets) {
    this.isFlexibleDailyBudgets = isFlexibleDailyBudgets;
  }

  /**
   * When transitioning from campaign budget optimization to non-campaign budget optimization, the default_ad_group_budget_in_micro_currency will propagate to each child ad groups daily budget. Unit is micro currency of the associated advertiser account.
   **/
  @ApiModelProperty(value = "When transitioning from campaign budget optimization to non-campaign budget optimization, the default_ad_group_budget_in_micro_currency will propagate to each child ad groups daily budget. Unit is micro currency of the associated advertiser account.")
  public Integer getDefaultAdGroupBudgetInMicroCurrency() {
    return defaultAdGroupBudgetInMicroCurrency;
  }
  public void setDefaultAdGroupBudgetInMicroCurrency(Integer defaultAdGroupBudgetInMicroCurrency) {
    this.defaultAdGroupBudgetInMicroCurrency = defaultAdGroupBudgetInMicroCurrency;
  }

  /**
   * Specifies whether the campaign was created in the automated campaign flow
   **/
  @ApiModelProperty(value = "Specifies whether the campaign was created in the automated campaign flow")
  public Boolean getIsAutomatedCampaign() {
    return isAutomatedCampaign;
  }
  public void setIsAutomatedCampaign(Boolean isAutomatedCampaign) {
    this.isAutomatedCampaign = isAutomatedCampaign;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CampaignCreateCommon campaignCreateCommon = (CampaignCreateCommon) o;
    return (this.adAccountId == null ? campaignCreateCommon.adAccountId == null : this.adAccountId.equals(campaignCreateCommon.adAccountId)) &&
        (this.name == null ? campaignCreateCommon.name == null : this.name.equals(campaignCreateCommon.name)) &&
        (this.status == null ? campaignCreateCommon.status == null : this.status.equals(campaignCreateCommon.status)) &&
        (this.lifetimeSpendCap == null ? campaignCreateCommon.lifetimeSpendCap == null : this.lifetimeSpendCap.equals(campaignCreateCommon.lifetimeSpendCap)) &&
        (this.dailySpendCap == null ? campaignCreateCommon.dailySpendCap == null : this.dailySpendCap.equals(campaignCreateCommon.dailySpendCap)) &&
        (this.orderLineId == null ? campaignCreateCommon.orderLineId == null : this.orderLineId.equals(campaignCreateCommon.orderLineId)) &&
        (this.trackingUrls == null ? campaignCreateCommon.trackingUrls == null : this.trackingUrls.equals(campaignCreateCommon.trackingUrls)) &&
        (this.startTime == null ? campaignCreateCommon.startTime == null : this.startTime.equals(campaignCreateCommon.startTime)) &&
        (this.endTime == null ? campaignCreateCommon.endTime == null : this.endTime.equals(campaignCreateCommon.endTime)) &&
        (this.summaryStatus == null ? campaignCreateCommon.summaryStatus == null : this.summaryStatus.equals(campaignCreateCommon.summaryStatus)) &&
        (this.isFlexibleDailyBudgets == null ? campaignCreateCommon.isFlexibleDailyBudgets == null : this.isFlexibleDailyBudgets.equals(campaignCreateCommon.isFlexibleDailyBudgets)) &&
        (this.defaultAdGroupBudgetInMicroCurrency == null ? campaignCreateCommon.defaultAdGroupBudgetInMicroCurrency == null : this.defaultAdGroupBudgetInMicroCurrency.equals(campaignCreateCommon.defaultAdGroupBudgetInMicroCurrency)) &&
        (this.isAutomatedCampaign == null ? campaignCreateCommon.isAutomatedCampaign == null : this.isAutomatedCampaign.equals(campaignCreateCommon.isAutomatedCampaign));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.adAccountId == null ? 0: this.adAccountId.hashCode());
    result = 31 * result + (this.name == null ? 0: this.name.hashCode());
    result = 31 * result + (this.status == null ? 0: this.status.hashCode());
    result = 31 * result + (this.lifetimeSpendCap == null ? 0: this.lifetimeSpendCap.hashCode());
    result = 31 * result + (this.dailySpendCap == null ? 0: this.dailySpendCap.hashCode());
    result = 31 * result + (this.orderLineId == null ? 0: this.orderLineId.hashCode());
    result = 31 * result + (this.trackingUrls == null ? 0: this.trackingUrls.hashCode());
    result = 31 * result + (this.startTime == null ? 0: this.startTime.hashCode());
    result = 31 * result + (this.endTime == null ? 0: this.endTime.hashCode());
    result = 31 * result + (this.summaryStatus == null ? 0: this.summaryStatus.hashCode());
    result = 31 * result + (this.isFlexibleDailyBudgets == null ? 0: this.isFlexibleDailyBudgets.hashCode());
    result = 31 * result + (this.defaultAdGroupBudgetInMicroCurrency == null ? 0: this.defaultAdGroupBudgetInMicroCurrency.hashCode());
    result = 31 * result + (this.isAutomatedCampaign == null ? 0: this.isAutomatedCampaign.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CampaignCreateCommon {\n");
    
    sb.append("  adAccountId: ").append(adAccountId).append("\n");
    sb.append("  name: ").append(name).append("\n");
    sb.append("  status: ").append(status).append("\n");
    sb.append("  lifetimeSpendCap: ").append(lifetimeSpendCap).append("\n");
    sb.append("  dailySpendCap: ").append(dailySpendCap).append("\n");
    sb.append("  orderLineId: ").append(orderLineId).append("\n");
    sb.append("  trackingUrls: ").append(trackingUrls).append("\n");
    sb.append("  startTime: ").append(startTime).append("\n");
    sb.append("  endTime: ").append(endTime).append("\n");
    sb.append("  summaryStatus: ").append(summaryStatus).append("\n");
    sb.append("  isFlexibleDailyBudgets: ").append(isFlexibleDailyBudgets).append("\n");
    sb.append("  defaultAdGroupBudgetInMicroCurrency: ").append(defaultAdGroupBudgetInMicroCurrency).append("\n");
    sb.append("  isAutomatedCampaign: ").append(isAutomatedCampaign).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
