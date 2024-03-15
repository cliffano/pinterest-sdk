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
import org.openapitools.model.AdCommonTrackingUrls;
import org.openapitools.model.CampaignSummaryStatus;
import org.openapitools.model.EntityStatus;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * CampaignCreateCommon
 */
@JsonPropertyOrder({
  CampaignCreateCommon.JSON_PROPERTY_AD_ACCOUNT_ID,
  CampaignCreateCommon.JSON_PROPERTY_NAME,
  CampaignCreateCommon.JSON_PROPERTY_STATUS,
  CampaignCreateCommon.JSON_PROPERTY_LIFETIME_SPEND_CAP,
  CampaignCreateCommon.JSON_PROPERTY_DAILY_SPEND_CAP,
  CampaignCreateCommon.JSON_PROPERTY_ORDER_LINE_ID,
  CampaignCreateCommon.JSON_PROPERTY_TRACKING_URLS,
  CampaignCreateCommon.JSON_PROPERTY_START_TIME,
  CampaignCreateCommon.JSON_PROPERTY_END_TIME,
  CampaignCreateCommon.JSON_PROPERTY_SUMMARY_STATUS,
  CampaignCreateCommon.JSON_PROPERTY_IS_FLEXIBLE_DAILY_BUDGETS,
  CampaignCreateCommon.JSON_PROPERTY_DEFAULT_AD_GROUP_BUDGET_IN_MICRO_CURRENCY,
  CampaignCreateCommon.JSON_PROPERTY_IS_AUTOMATED_CAMPAIGN
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class CampaignCreateCommon   {
  public static final String JSON_PROPERTY_AD_ACCOUNT_ID = "ad_account_id";
  @JsonProperty(JSON_PROPERTY_AD_ACCOUNT_ID)
  private String adAccountId;

  public static final String JSON_PROPERTY_NAME = "name";
  @JsonProperty(JSON_PROPERTY_NAME)
  private String name;

  public static final String JSON_PROPERTY_STATUS = "status";
  @JsonProperty(JSON_PROPERTY_STATUS)
  private EntityStatus status = "ACTIVE";

  public static final String JSON_PROPERTY_LIFETIME_SPEND_CAP = "lifetime_spend_cap";
  @JsonProperty(JSON_PROPERTY_LIFETIME_SPEND_CAP)
  private Integer lifetimeSpendCap;

  public static final String JSON_PROPERTY_DAILY_SPEND_CAP = "daily_spend_cap";
  @JsonProperty(JSON_PROPERTY_DAILY_SPEND_CAP)
  private Integer dailySpendCap;

  public static final String JSON_PROPERTY_ORDER_LINE_ID = "order_line_id";
  @JsonProperty(JSON_PROPERTY_ORDER_LINE_ID)
  private String orderLineId;

  public static final String JSON_PROPERTY_TRACKING_URLS = "tracking_urls";
  @JsonProperty(JSON_PROPERTY_TRACKING_URLS)
  private AdCommonTrackingUrls trackingUrls;

  public static final String JSON_PROPERTY_START_TIME = "start_time";
  @JsonProperty(JSON_PROPERTY_START_TIME)
  private Integer startTime;

  public static final String JSON_PROPERTY_END_TIME = "end_time";
  @JsonProperty(JSON_PROPERTY_END_TIME)
  private Integer endTime;

  public static final String JSON_PROPERTY_SUMMARY_STATUS = "summary_status";
  @JsonProperty(JSON_PROPERTY_SUMMARY_STATUS)
  private CampaignSummaryStatus summaryStatus;

  public static final String JSON_PROPERTY_IS_FLEXIBLE_DAILY_BUDGETS = "is_flexible_daily_budgets";
  @JsonProperty(JSON_PROPERTY_IS_FLEXIBLE_DAILY_BUDGETS)
  private Boolean isFlexibleDailyBudgets = false;

  public static final String JSON_PROPERTY_DEFAULT_AD_GROUP_BUDGET_IN_MICRO_CURRENCY = "default_ad_group_budget_in_micro_currency";
  @JsonProperty(JSON_PROPERTY_DEFAULT_AD_GROUP_BUDGET_IN_MICRO_CURRENCY)
  private Integer defaultAdGroupBudgetInMicroCurrency;

  public static final String JSON_PROPERTY_IS_AUTOMATED_CAMPAIGN = "is_automated_campaign";
  @JsonProperty(JSON_PROPERTY_IS_AUTOMATED_CAMPAIGN)
  private Boolean isAutomatedCampaign = false;

  public CampaignCreateCommon adAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
    return this;
  }

  /**
   * Campaign&#39;s Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema.
   * @return adAccountId
   **/
  @JsonProperty(value = "ad_account_id")
  @ApiModelProperty(example = "549755885175", value = "Campaign's Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema.")
   @Pattern(regexp="^\\d+$")
  public String getAdAccountId() {
    return adAccountId;
  }

  public void setAdAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
  }

  public CampaignCreateCommon name(String name) {
    this.name = name;
    return this;
  }

  /**
   * Campaign name.
   * @return name
   **/
  @JsonProperty(value = "name")
  @ApiModelProperty(example = "ACME Tools", value = "Campaign name.")
  
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public CampaignCreateCommon status(EntityStatus status) {
    this.status = status;
    return this;
  }

  /**
   * Get status
   * @return status
   **/
  @JsonProperty(value = "status")
  @ApiModelProperty(value = "")
  @Valid 
  public EntityStatus getStatus() {
    return status;
  }

  public void setStatus(EntityStatus status) {
    this.status = status;
  }

  public CampaignCreateCommon lifetimeSpendCap(Integer lifetimeSpendCap) {
    this.lifetimeSpendCap = lifetimeSpendCap;
    return this;
  }

  /**
   * Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \&quot;daily_spend_cap\&quot; cannot be set at the same time.
   * @return lifetimeSpendCap
   **/
  @JsonProperty(value = "lifetime_spend_cap")
  @ApiModelProperty(example = "1432744744", value = "Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"daily_spend_cap\" cannot be set at the same time.")
  
  public Integer getLifetimeSpendCap() {
    return lifetimeSpendCap;
  }

  public void setLifetimeSpendCap(Integer lifetimeSpendCap) {
    this.lifetimeSpendCap = lifetimeSpendCap;
  }

  public CampaignCreateCommon dailySpendCap(Integer dailySpendCap) {
    this.dailySpendCap = dailySpendCap;
    return this;
  }

  /**
   * Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \&quot;lifetime_spend_cap\&quot; cannot be set at the same time.
   * @return dailySpendCap
   **/
  @JsonProperty(value = "daily_spend_cap")
  @ApiModelProperty(example = "1432744744", value = "Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"lifetime_spend_cap\" cannot be set at the same time.")
  
  public Integer getDailySpendCap() {
    return dailySpendCap;
  }

  public void setDailySpendCap(Integer dailySpendCap) {
    this.dailySpendCap = dailySpendCap;
  }

  public CampaignCreateCommon orderLineId(String orderLineId) {
    this.orderLineId = orderLineId;
    return this;
  }

  /**
   * Order line ID that appears on the invoice.
   * @return orderLineId
   **/
  @JsonProperty(value = "order_line_id")
  @ApiModelProperty(example = "549755885175", value = "Order line ID that appears on the invoice.")
   @Pattern(regexp="^\\d+$")
  public String getOrderLineId() {
    return orderLineId;
  }

  public void setOrderLineId(String orderLineId) {
    this.orderLineId = orderLineId;
  }

  public CampaignCreateCommon trackingUrls(AdCommonTrackingUrls trackingUrls) {
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
  public AdCommonTrackingUrls getTrackingUrls() {
    return trackingUrls;
  }

  public void setTrackingUrls(AdCommonTrackingUrls trackingUrls) {
    this.trackingUrls = trackingUrls;
  }

  public CampaignCreateCommon startTime(Integer startTime) {
    this.startTime = startTime;
    return this;
  }

  /**
   * Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
   * @return startTime
   **/
  @JsonProperty(value = "start_time")
  @ApiModelProperty(example = "1580865126", value = "Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.")
  
  public Integer getStartTime() {
    return startTime;
  }

  public void setStartTime(Integer startTime) {
    this.startTime = startTime;
  }

  public CampaignCreateCommon endTime(Integer endTime) {
    this.endTime = endTime;
    return this;
  }

  /**
   * Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
   * @return endTime
   **/
  @JsonProperty(value = "end_time")
  @ApiModelProperty(example = "1644023526", value = "Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.")
  
  public Integer getEndTime() {
    return endTime;
  }

  public void setEndTime(Integer endTime) {
    this.endTime = endTime;
  }

  public CampaignCreateCommon summaryStatus(CampaignSummaryStatus summaryStatus) {
    this.summaryStatus = summaryStatus;
    return this;
  }

  /**
   * Get summaryStatus
   * @return summaryStatus
   **/
  @JsonProperty(value = "summary_status")
  @ApiModelProperty(value = "")
  @Valid 
  public CampaignSummaryStatus getSummaryStatus() {
    return summaryStatus;
  }

  public void setSummaryStatus(CampaignSummaryStatus summaryStatus) {
    this.summaryStatus = summaryStatus;
  }

  public CampaignCreateCommon isFlexibleDailyBudgets(Boolean isFlexibleDailyBudgets) {
    this.isFlexibleDailyBudgets = isFlexibleDailyBudgets;
    return this;
  }

  /**
   * Determine if a campaign has flexible daily budgets setup.
   * @return isFlexibleDailyBudgets
   **/
  @JsonProperty(value = "is_flexible_daily_budgets")
  @ApiModelProperty(example = "true", value = "Determine if a campaign has flexible daily budgets setup.")
  
  public Boolean getIsFlexibleDailyBudgets() {
    return isFlexibleDailyBudgets;
  }

  public void setIsFlexibleDailyBudgets(Boolean isFlexibleDailyBudgets) {
    this.isFlexibleDailyBudgets = isFlexibleDailyBudgets;
  }

  public CampaignCreateCommon defaultAdGroupBudgetInMicroCurrency(Integer defaultAdGroupBudgetInMicroCurrency) {
    this.defaultAdGroupBudgetInMicroCurrency = defaultAdGroupBudgetInMicroCurrency;
    return this;
  }

  /**
   * When transitioning from campaign budget optimization to non-campaign budget optimization, the default_ad_group_budget_in_micro_currency will propagate to each child ad groups daily budget. Unit is micro currency of the associated advertiser account.
   * @return defaultAdGroupBudgetInMicroCurrency
   **/
  @JsonProperty(value = "default_ad_group_budget_in_micro_currency")
  @ApiModelProperty(example = "0", value = "When transitioning from campaign budget optimization to non-campaign budget optimization, the default_ad_group_budget_in_micro_currency will propagate to each child ad groups daily budget. Unit is micro currency of the associated advertiser account.")
  
  public Integer getDefaultAdGroupBudgetInMicroCurrency() {
    return defaultAdGroupBudgetInMicroCurrency;
  }

  public void setDefaultAdGroupBudgetInMicroCurrency(Integer defaultAdGroupBudgetInMicroCurrency) {
    this.defaultAdGroupBudgetInMicroCurrency = defaultAdGroupBudgetInMicroCurrency;
  }

  public CampaignCreateCommon isAutomatedCampaign(Boolean isAutomatedCampaign) {
    this.isAutomatedCampaign = isAutomatedCampaign;
    return this;
  }

  /**
   * Specifies whether the campaign was created in the automated campaign flow
   * @return isAutomatedCampaign
   **/
  @JsonProperty(value = "is_automated_campaign")
  @ApiModelProperty(example = "true", value = "Specifies whether the campaign was created in the automated campaign flow")
  
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
    return Objects.equals(this.adAccountId, campaignCreateCommon.adAccountId) &&
        Objects.equals(this.name, campaignCreateCommon.name) &&
        Objects.equals(this.status, campaignCreateCommon.status) &&
        Objects.equals(this.lifetimeSpendCap, campaignCreateCommon.lifetimeSpendCap) &&
        Objects.equals(this.dailySpendCap, campaignCreateCommon.dailySpendCap) &&
        Objects.equals(this.orderLineId, campaignCreateCommon.orderLineId) &&
        Objects.equals(this.trackingUrls, campaignCreateCommon.trackingUrls) &&
        Objects.equals(this.startTime, campaignCreateCommon.startTime) &&
        Objects.equals(this.endTime, campaignCreateCommon.endTime) &&
        Objects.equals(this.summaryStatus, campaignCreateCommon.summaryStatus) &&
        Objects.equals(this.isFlexibleDailyBudgets, campaignCreateCommon.isFlexibleDailyBudgets) &&
        Objects.equals(this.defaultAdGroupBudgetInMicroCurrency, campaignCreateCommon.defaultAdGroupBudgetInMicroCurrency) &&
        Objects.equals(this.isAutomatedCampaign, campaignCreateCommon.isAutomatedCampaign);
  }

  @Override
  public int hashCode() {
    return Objects.hash(adAccountId, name, status, lifetimeSpendCap, dailySpendCap, orderLineId, trackingUrls, startTime, endTime, summaryStatus, isFlexibleDailyBudgets, defaultAdGroupBudgetInMicroCurrency, isAutomatedCampaign);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CampaignCreateCommon {\n");
    
    sb.append("    adAccountId: ").append(toIndentedString(adAccountId)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    lifetimeSpendCap: ").append(toIndentedString(lifetimeSpendCap)).append("\n");
    sb.append("    dailySpendCap: ").append(toIndentedString(dailySpendCap)).append("\n");
    sb.append("    orderLineId: ").append(toIndentedString(orderLineId)).append("\n");
    sb.append("    trackingUrls: ").append(toIndentedString(trackingUrls)).append("\n");
    sb.append("    startTime: ").append(toIndentedString(startTime)).append("\n");
    sb.append("    endTime: ").append(toIndentedString(endTime)).append("\n");
    sb.append("    summaryStatus: ").append(toIndentedString(summaryStatus)).append("\n");
    sb.append("    isFlexibleDailyBudgets: ").append(toIndentedString(isFlexibleDailyBudgets)).append("\n");
    sb.append("    defaultAdGroupBudgetInMicroCurrency: ").append(toIndentedString(defaultAdGroupBudgetInMicroCurrency)).append("\n");
    sb.append("    isAutomatedCampaign: ").append(toIndentedString(isAutomatedCampaign)).append("\n");
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

