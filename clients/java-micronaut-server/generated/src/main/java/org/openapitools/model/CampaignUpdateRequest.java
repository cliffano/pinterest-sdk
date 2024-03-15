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
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.AdCommonTrackingUrls;
import org.openapitools.model.CampaignSummaryStatus;
import org.openapitools.model.EntityStatus;
import org.openapitools.model.ObjectiveType;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * CampaignUpdateRequest
 */
@JsonPropertyOrder({
  CampaignUpdateRequest.JSON_PROPERTY_ID,
  CampaignUpdateRequest.JSON_PROPERTY_AD_ACCOUNT_ID,
  CampaignUpdateRequest.JSON_PROPERTY_NAME,
  CampaignUpdateRequest.JSON_PROPERTY_STATUS,
  CampaignUpdateRequest.JSON_PROPERTY_LIFETIME_SPEND_CAP,
  CampaignUpdateRequest.JSON_PROPERTY_DAILY_SPEND_CAP,
  CampaignUpdateRequest.JSON_PROPERTY_ORDER_LINE_ID,
  CampaignUpdateRequest.JSON_PROPERTY_TRACKING_URLS,
  CampaignUpdateRequest.JSON_PROPERTY_START_TIME,
  CampaignUpdateRequest.JSON_PROPERTY_END_TIME,
  CampaignUpdateRequest.JSON_PROPERTY_SUMMARY_STATUS,
  CampaignUpdateRequest.JSON_PROPERTY_IS_FLEXIBLE_DAILY_BUDGETS,
  CampaignUpdateRequest.JSON_PROPERTY_DEFAULT_AD_GROUP_BUDGET_IN_MICRO_CURRENCY,
  CampaignUpdateRequest.JSON_PROPERTY_IS_AUTOMATED_CAMPAIGN,
  CampaignUpdateRequest.JSON_PROPERTY_IS_CAMPAIGN_BUDGET_OPTIMIZATION,
  CampaignUpdateRequest.JSON_PROPERTY_OBJECTIVE_TYPE
})
@JsonTypeName("CampaignUpdateRequest")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class CampaignUpdateRequest {
    public static final String JSON_PROPERTY_ID = "id";
    private String id;

    public static final String JSON_PROPERTY_AD_ACCOUNT_ID = "ad_account_id";
    private String adAccountId;

    public static final String JSON_PROPERTY_NAME = "name";
    private String name;

    public static final String JSON_PROPERTY_STATUS = "status";
    private EntityStatus status;

    public static final String JSON_PROPERTY_LIFETIME_SPEND_CAP = "lifetime_spend_cap";
    private Integer lifetimeSpendCap;

    public static final String JSON_PROPERTY_DAILY_SPEND_CAP = "daily_spend_cap";
    private Integer dailySpendCap;

    public static final String JSON_PROPERTY_ORDER_LINE_ID = "order_line_id";
    private String orderLineId;

    public static final String JSON_PROPERTY_TRACKING_URLS = "tracking_urls";
    private AdCommonTrackingUrls trackingUrls;

    public static final String JSON_PROPERTY_START_TIME = "start_time";
    private Integer startTime;

    public static final String JSON_PROPERTY_END_TIME = "end_time";
    private Integer endTime;

    public static final String JSON_PROPERTY_SUMMARY_STATUS = "summary_status";
    private CampaignSummaryStatus summaryStatus;

    public static final String JSON_PROPERTY_IS_FLEXIBLE_DAILY_BUDGETS = "is_flexible_daily_budgets";
    private Boolean isFlexibleDailyBudgets;

    public static final String JSON_PROPERTY_DEFAULT_AD_GROUP_BUDGET_IN_MICRO_CURRENCY = "default_ad_group_budget_in_micro_currency";
    private Integer defaultAdGroupBudgetInMicroCurrency;

    public static final String JSON_PROPERTY_IS_AUTOMATED_CAMPAIGN = "is_automated_campaign";
    private Boolean isAutomatedCampaign;

    public static final String JSON_PROPERTY_IS_CAMPAIGN_BUDGET_OPTIMIZATION = "is_campaign_budget_optimization";
    private Boolean isCampaignBudgetOptimization;

    public static final String JSON_PROPERTY_OBJECTIVE_TYPE = "objective_type";
    private ObjectiveType objectiveType;

    public CampaignUpdateRequest(String id, String adAccountId) {
        this.id = id;
        this.adAccountId = adAccountId;
    }

    public CampaignUpdateRequest id(String id) {
        this.id = id;
        return this;
    }

    /**
     * Campaign ID.
     * @return id
     **/
    @NotNull
    @Pattern(regexp="^\\d+$")
    @Schema(name = "id", example = "549755885175", description = "Campaign ID.", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getId() {
        return id;
    }

    @JsonProperty(JSON_PROPERTY_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setId(String id) {
        this.id = id;
    }

    public CampaignUpdateRequest adAccountId(String adAccountId) {
        this.adAccountId = adAccountId;
        return this;
    }

    /**
     * Campaign&#39;s Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema.
     * @return adAccountId
     **/
    @NotNull
    @Pattern(regexp="^\\d+$")
    @Schema(name = "ad_account_id", example = "549755885175", description = "Campaign's Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema.", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_AD_ACCOUNT_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getAdAccountId() {
        return adAccountId;
    }

    @JsonProperty(JSON_PROPERTY_AD_ACCOUNT_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setAdAccountId(String adAccountId) {
        this.adAccountId = adAccountId;
    }

    public CampaignUpdateRequest name(String name) {
        this.name = name;
        return this;
    }

    /**
     * Campaign name.
     * @return name
     **/
    @Nullable
    @Schema(name = "name", example = "ACME Tools", description = "Campaign name.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public CampaignUpdateRequest status(EntityStatus status) {
        this.status = status;
        return this;
    }

    /**
     * Get status
     * @return status
     **/
    @Nullable
    @Schema(name = "status", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public CampaignUpdateRequest lifetimeSpendCap(Integer lifetimeSpendCap) {
        this.lifetimeSpendCap = lifetimeSpendCap;
        return this;
    }

    /**
     * Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \&quot;daily_spend_cap\&quot; cannot be set at the same time.
     * @return lifetimeSpendCap
     **/
    @Nullable
    @Schema(name = "lifetime_spend_cap", example = "1432744744", description = "Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"daily_spend_cap\" cannot be set at the same time.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_LIFETIME_SPEND_CAP)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Integer getLifetimeSpendCap() {
        return lifetimeSpendCap;
    }

    @JsonProperty(JSON_PROPERTY_LIFETIME_SPEND_CAP)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setLifetimeSpendCap(Integer lifetimeSpendCap) {
        this.lifetimeSpendCap = lifetimeSpendCap;
    }

    public CampaignUpdateRequest dailySpendCap(Integer dailySpendCap) {
        this.dailySpendCap = dailySpendCap;
        return this;
    }

    /**
     * Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \&quot;lifetime_spend_cap\&quot; cannot be set at the same time.
     * @return dailySpendCap
     **/
    @Nullable
    @Schema(name = "daily_spend_cap", example = "1432744744", description = "Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"lifetime_spend_cap\" cannot be set at the same time.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_DAILY_SPEND_CAP)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Integer getDailySpendCap() {
        return dailySpendCap;
    }

    @JsonProperty(JSON_PROPERTY_DAILY_SPEND_CAP)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setDailySpendCap(Integer dailySpendCap) {
        this.dailySpendCap = dailySpendCap;
    }

    public CampaignUpdateRequest orderLineId(String orderLineId) {
        this.orderLineId = orderLineId;
        return this;
    }

    /**
     * Order line ID that appears on the invoice.
     * @return orderLineId
     **/
    @Nullable
    @Pattern(regexp="^\\d+$")
    @Schema(name = "order_line_id", example = "549755885175", description = "Order line ID that appears on the invoice.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_ORDER_LINE_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getOrderLineId() {
        return orderLineId;
    }

    @JsonProperty(JSON_PROPERTY_ORDER_LINE_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setOrderLineId(String orderLineId) {
        this.orderLineId = orderLineId;
    }

    public CampaignUpdateRequest trackingUrls(AdCommonTrackingUrls trackingUrls) {
        this.trackingUrls = trackingUrls;
        return this;
    }

    /**
     * Get trackingUrls
     * @return trackingUrls
     **/
    @Valid
    @Nullable
    @Schema(name = "tracking_urls", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_TRACKING_URLS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public AdCommonTrackingUrls getTrackingUrls() {
        return trackingUrls;
    }

    @JsonProperty(JSON_PROPERTY_TRACKING_URLS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setTrackingUrls(AdCommonTrackingUrls trackingUrls) {
        this.trackingUrls = trackingUrls;
    }

    public CampaignUpdateRequest startTime(Integer startTime) {
        this.startTime = startTime;
        return this;
    }

    /**
     * Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
     * @return startTime
     **/
    @Nullable
    @Schema(name = "start_time", example = "1580865126", description = "Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public CampaignUpdateRequest endTime(Integer endTime) {
        this.endTime = endTime;
        return this;
    }

    /**
     * Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
     * @return endTime
     **/
    @Nullable
    @Schema(name = "end_time", example = "1644023526", description = "Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public CampaignUpdateRequest summaryStatus(CampaignSummaryStatus summaryStatus) {
        this.summaryStatus = summaryStatus;
        return this;
    }

    /**
     * Get summaryStatus
     * @return summaryStatus
     **/
    @Nullable
    @Schema(name = "summary_status", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_SUMMARY_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public CampaignSummaryStatus getSummaryStatus() {
        return summaryStatus;
    }

    @JsonProperty(JSON_PROPERTY_SUMMARY_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setSummaryStatus(CampaignSummaryStatus summaryStatus) {
        this.summaryStatus = summaryStatus;
    }

    public CampaignUpdateRequest isFlexibleDailyBudgets(Boolean isFlexibleDailyBudgets) {
        this.isFlexibleDailyBudgets = isFlexibleDailyBudgets;
        return this;
    }

    /**
     * Determine if a campaign has flexible daily budgets setup.
     * @return isFlexibleDailyBudgets
     **/
    @Nullable
    @Schema(name = "is_flexible_daily_budgets", example = "true", description = "Determine if a campaign has flexible daily budgets setup.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_IS_FLEXIBLE_DAILY_BUDGETS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Boolean getIsFlexibleDailyBudgets() {
        return isFlexibleDailyBudgets;
    }

    @JsonProperty(JSON_PROPERTY_IS_FLEXIBLE_DAILY_BUDGETS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setIsFlexibleDailyBudgets(Boolean isFlexibleDailyBudgets) {
        this.isFlexibleDailyBudgets = isFlexibleDailyBudgets;
    }

    public CampaignUpdateRequest defaultAdGroupBudgetInMicroCurrency(Integer defaultAdGroupBudgetInMicroCurrency) {
        this.defaultAdGroupBudgetInMicroCurrency = defaultAdGroupBudgetInMicroCurrency;
        return this;
    }

    /**
     * When transitioning from campaign budget optimization to non-campaign budget optimization, the default_ad_group_budget_in_micro_currency will propagate to each child ad groups daily budget. Unit is micro currency of the associated advertiser account.
     * @return defaultAdGroupBudgetInMicroCurrency
     **/
    @Nullable
    @Schema(name = "default_ad_group_budget_in_micro_currency", example = "0", description = "When transitioning from campaign budget optimization to non-campaign budget optimization, the default_ad_group_budget_in_micro_currency will propagate to each child ad groups daily budget. Unit is micro currency of the associated advertiser account.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_DEFAULT_AD_GROUP_BUDGET_IN_MICRO_CURRENCY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Integer getDefaultAdGroupBudgetInMicroCurrency() {
        return defaultAdGroupBudgetInMicroCurrency;
    }

    @JsonProperty(JSON_PROPERTY_DEFAULT_AD_GROUP_BUDGET_IN_MICRO_CURRENCY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setDefaultAdGroupBudgetInMicroCurrency(Integer defaultAdGroupBudgetInMicroCurrency) {
        this.defaultAdGroupBudgetInMicroCurrency = defaultAdGroupBudgetInMicroCurrency;
    }

    public CampaignUpdateRequest isAutomatedCampaign(Boolean isAutomatedCampaign) {
        this.isAutomatedCampaign = isAutomatedCampaign;
        return this;
    }

    /**
     * Specifies whether the campaign was created in the automated campaign flow
     * @return isAutomatedCampaign
     **/
    @Nullable
    @Schema(name = "is_automated_campaign", example = "true", description = "Specifies whether the campaign was created in the automated campaign flow", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_IS_AUTOMATED_CAMPAIGN)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Boolean getIsAutomatedCampaign() {
        return isAutomatedCampaign;
    }

    @JsonProperty(JSON_PROPERTY_IS_AUTOMATED_CAMPAIGN)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setIsAutomatedCampaign(Boolean isAutomatedCampaign) {
        this.isAutomatedCampaign = isAutomatedCampaign;
    }

    public CampaignUpdateRequest isCampaignBudgetOptimization(Boolean isCampaignBudgetOptimization) {
        this.isCampaignBudgetOptimization = isCampaignBudgetOptimization;
        return this;
    }

    /**
     * Determines if a campaign automatically generate ad-group level budgets given a campaign budget to maximize campaign outcome. When transitioning from non-cbo to cbo, all previous child ad group budget will be cleared.
     * @return isCampaignBudgetOptimization
     **/
    @Nullable
    @Schema(name = "is_campaign_budget_optimization", example = "true", description = "Determines if a campaign automatically generate ad-group level budgets given a campaign budget to maximize campaign outcome. When transitioning from non-cbo to cbo, all previous child ad group budget will be cleared.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_IS_CAMPAIGN_BUDGET_OPTIMIZATION)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Boolean getIsCampaignBudgetOptimization() {
        return isCampaignBudgetOptimization;
    }

    @JsonProperty(JSON_PROPERTY_IS_CAMPAIGN_BUDGET_OPTIMIZATION)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setIsCampaignBudgetOptimization(Boolean isCampaignBudgetOptimization) {
        this.isCampaignBudgetOptimization = isCampaignBudgetOptimization;
    }

    public CampaignUpdateRequest objectiveType(ObjectiveType objectiveType) {
        this.objectiveType = objectiveType;
        return this;
    }

    /**
     * Get objectiveType
     * @return objectiveType
     **/
    @Nullable
    @Schema(name = "objective_type", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_OBJECTIVE_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public ObjectiveType getObjectiveType() {
        return objectiveType;
    }

    @JsonProperty(JSON_PROPERTY_OBJECTIVE_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setObjectiveType(ObjectiveType objectiveType) {
        this.objectiveType = objectiveType;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CampaignUpdateRequest campaignUpdateRequest = (CampaignUpdateRequest) o;
        return Objects.equals(this.id, campaignUpdateRequest.id) &&
            Objects.equals(this.adAccountId, campaignUpdateRequest.adAccountId) &&
            Objects.equals(this.name, campaignUpdateRequest.name) &&
            Objects.equals(this.status, campaignUpdateRequest.status) &&
            Objects.equals(this.lifetimeSpendCap, campaignUpdateRequest.lifetimeSpendCap) &&
            Objects.equals(this.dailySpendCap, campaignUpdateRequest.dailySpendCap) &&
            Objects.equals(this.orderLineId, campaignUpdateRequest.orderLineId) &&
            Objects.equals(this.trackingUrls, campaignUpdateRequest.trackingUrls) &&
            Objects.equals(this.startTime, campaignUpdateRequest.startTime) &&
            Objects.equals(this.endTime, campaignUpdateRequest.endTime) &&
            Objects.equals(this.summaryStatus, campaignUpdateRequest.summaryStatus) &&
            Objects.equals(this.isFlexibleDailyBudgets, campaignUpdateRequest.isFlexibleDailyBudgets) &&
            Objects.equals(this.defaultAdGroupBudgetInMicroCurrency, campaignUpdateRequest.defaultAdGroupBudgetInMicroCurrency) &&
            Objects.equals(this.isAutomatedCampaign, campaignUpdateRequest.isAutomatedCampaign) &&
            Objects.equals(this.isCampaignBudgetOptimization, campaignUpdateRequest.isCampaignBudgetOptimization) &&
            Objects.equals(this.objectiveType, campaignUpdateRequest.objectiveType);
    }

    @Override
    public int hashCode() {
        return Objects.hash(id, adAccountId, name, status, lifetimeSpendCap, dailySpendCap, orderLineId, trackingUrls, startTime, endTime, summaryStatus, isFlexibleDailyBudgets, defaultAdGroupBudgetInMicroCurrency, isAutomatedCampaign, isCampaignBudgetOptimization, objectiveType);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CampaignUpdateRequest {\n");
        sb.append("    id: ").append(toIndentedString(id)).append("\n");
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
        sb.append("    isCampaignBudgetOptimization: ").append(toIndentedString(isCampaignBudgetOptimization)).append("\n");
        sb.append("    objectiveType: ").append(toIndentedString(objectiveType)).append("\n");
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

