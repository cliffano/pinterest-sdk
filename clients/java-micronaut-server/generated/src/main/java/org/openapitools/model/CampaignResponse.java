/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
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
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.CampaignCommon;
import org.openapitools.model.CampaignResponseAllOf;
import org.openapitools.model.CampaignResponseAllOf1;
import org.openapitools.model.EntityStatus;
import org.openapitools.model.ObjectiveType;
import org.openapitools.model.TrackingUrls;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * CampaignResponse
 */
@JsonPropertyOrder({
  CampaignResponse.JSON_PROPERTY_ID,
  CampaignResponse.JSON_PROPERTY_AD_ACCOUNT_ID,
  CampaignResponse.JSON_PROPERTY_NAME,
  CampaignResponse.JSON_PROPERTY_STATUS,
  CampaignResponse.JSON_PROPERTY_LIFETIME_SPEND_CAP,
  CampaignResponse.JSON_PROPERTY_DAILY_SPEND_CAP,
  CampaignResponse.JSON_PROPERTY_ORDER_LINE_ID,
  CampaignResponse.JSON_PROPERTY_TRACKING_URLS,
  CampaignResponse.JSON_PROPERTY_START_TIME,
  CampaignResponse.JSON_PROPERTY_END_TIME,
  CampaignResponse.JSON_PROPERTY_OBJECTIVE_TYPE,
  CampaignResponse.JSON_PROPERTY_CREATED_TIME,
  CampaignResponse.JSON_PROPERTY_UPDATED_TIME,
  CampaignResponse.JSON_PROPERTY_TYPE
})
@JsonTypeName("CampaignResponse")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-07-01T11:59:34.708172Z[Etc/UTC]")
@Introspected
public class CampaignResponse {
    public static final String JSON_PROPERTY_ID = "id";
    private String id;

    public static final String JSON_PROPERTY_AD_ACCOUNT_ID = "ad_account_id";
    private String adAccountId;

    public static final String JSON_PROPERTY_NAME = "name";
    private String name;

    public static final String JSON_PROPERTY_STATUS = "status";
    private EntityStatus status = "ACTIVE";

    public static final String JSON_PROPERTY_LIFETIME_SPEND_CAP = "lifetime_spend_cap";
    private Integer lifetimeSpendCap;

    public static final String JSON_PROPERTY_DAILY_SPEND_CAP = "daily_spend_cap";
    private Integer dailySpendCap;

    public static final String JSON_PROPERTY_ORDER_LINE_ID = "order_line_id";
    private String orderLineId;

    public static final String JSON_PROPERTY_TRACKING_URLS = "tracking_urls";
    private TrackingUrls trackingUrls;

    public static final String JSON_PROPERTY_START_TIME = "start_time";
    private Integer startTime;

    public static final String JSON_PROPERTY_END_TIME = "end_time";
    private Integer endTime;

    public static final String JSON_PROPERTY_OBJECTIVE_TYPE = "objective_type";
    private ObjectiveType objectiveType;

    public static final String JSON_PROPERTY_CREATED_TIME = "created_time";
    private Integer createdTime;

    public static final String JSON_PROPERTY_UPDATED_TIME = "updated_time";
    private Integer updatedTime;

    public static final String JSON_PROPERTY_TYPE = "type";
    private String type;

    public CampaignResponse(String id, String adAccountId) {
        this.id = id;
        this.adAccountId = adAccountId;
    }

    public CampaignResponse id(String id) {
        this.id = id;
        return this;
    }

    /**
     * Campaign ID.
     * @return id
     **/
    @NotNull
    @Pattern(regexp="^\\d+$")
    @ApiModelProperty(example = "549755885175", required = true, value = "Campaign ID.")
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

    public CampaignResponse adAccountId(String adAccountId) {
        this.adAccountId = adAccountId;
        return this;
    }

    /**
     * Campaign&#39;s Advertiser ID.
     * @return adAccountId
     **/
    @NotNull
    @Pattern(regexp="^\\d+$")
    @ApiModelProperty(example = "549755885175", required = true, value = "Campaign's Advertiser ID.")
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

    public CampaignResponse name(String name) {
        this.name = name;
        return this;
    }

    /**
     * Campaign name.
     * @return name
     **/
    @Nullable
    @ApiModelProperty(example = "ACME Tools", value = "Campaign name.")
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

    public CampaignResponse status(EntityStatus status) {
        this.status = status;
        return this;
    }

    /**
     * Get status
     * @return status
     **/
    @Valid
    @Nullable
    @ApiModelProperty(value = "")
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

    public CampaignResponse lifetimeSpendCap(Integer lifetimeSpendCap) {
        this.lifetimeSpendCap = lifetimeSpendCap;
        return this;
    }

    /**
     * Campaign total spending cap.
     * @return lifetimeSpendCap
     **/
    @Nullable
    @ApiModelProperty(example = "1432744744", value = "Campaign total spending cap.")
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

    public CampaignResponse dailySpendCap(Integer dailySpendCap) {
        this.dailySpendCap = dailySpendCap;
        return this;
    }

    /**
     * Campaign daily spending cap.
     * @return dailySpendCap
     **/
    @Nullable
    @ApiModelProperty(example = "1432744744", value = "Campaign daily spending cap.")
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

    public CampaignResponse orderLineId(String orderLineId) {
        this.orderLineId = orderLineId;
        return this;
    }

    /**
     * Order line ID that appears on the invoice.
     * @return orderLineId
     **/
    @Nullable
    @Pattern(regexp="^\\d+$")
    @ApiModelProperty(example = "549755885175", value = "Order line ID that appears on the invoice.")
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

    public CampaignResponse trackingUrls(TrackingUrls trackingUrls) {
        this.trackingUrls = trackingUrls;
        return this;
    }

    public CampaignResponse putTrackingUrlsItem(String key,  trackingUrlsItem) {
        if (this.trackingUrls == null) {
            this.trackingUrls = ;
        }
        this.trackingUrls.put(key, trackingUrlsItem);
        return this;
  }

    /**
     * Get trackingUrls
     * @return trackingUrls
     **/
    @Valid
    @Nullable
    @ApiModelProperty(value = "")
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

    public CampaignResponse startTime(Integer startTime) {
        this.startTime = startTime;
        return this;
    }

    /**
     * Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
     * @return startTime
     **/
    @Nullable
    @ApiModelProperty(example = "1580865126", value = "Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.")
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

    public CampaignResponse endTime(Integer endTime) {
        this.endTime = endTime;
        return this;
    }

    /**
     * Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
     * @return endTime
     **/
    @Nullable
    @ApiModelProperty(example = "1644023526", value = "Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.")
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

    public CampaignResponse objectiveType(ObjectiveType objectiveType) {
        this.objectiveType = objectiveType;
        return this;
    }

    /**
     * Get objectiveType
     * @return objectiveType
     **/
    @Nullable
    @ApiModelProperty(value = "")
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

    public CampaignResponse createdTime(Integer createdTime) {
        this.createdTime = createdTime;
        return this;
    }

    /**
     * Campaign creation time. Unix timestamp in seconds.
     * @return createdTime
     **/
    @Nullable
    @ApiModelProperty(example = "1432744744", value = "Campaign creation time. Unix timestamp in seconds.")
    @JsonProperty(JSON_PROPERTY_CREATED_TIME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public Integer getCreatedTime() {
        return createdTime;
    }

    @JsonProperty(JSON_PROPERTY_CREATED_TIME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setCreatedTime(Integer createdTime) {
        this.createdTime = createdTime;
    }

    public CampaignResponse updatedTime(Integer updatedTime) {
        this.updatedTime = updatedTime;
        return this;
    }

    /**
     * UTC timestamp. Last update time.
     * @return updatedTime
     **/
    @Nullable
    @ApiModelProperty(example = "1432744744", value = "UTC timestamp. Last update time.")
    @JsonProperty(JSON_PROPERTY_UPDATED_TIME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public Integer getUpdatedTime() {
        return updatedTime;
    }

    @JsonProperty(JSON_PROPERTY_UPDATED_TIME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setUpdatedTime(Integer updatedTime) {
        this.updatedTime = updatedTime;
    }

    public CampaignResponse type(String type) {
        this.type = type;
        return this;
    }

    /**
     * Always \&quot;campaign\&quot;.
     * @return type
     **/
    @Nullable
    @ApiModelProperty(example = "campaign", value = "Always \"campaign\".")
    @JsonProperty(JSON_PROPERTY_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getType() {
        return type;
    }

    @JsonProperty(JSON_PROPERTY_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setType(String type) {
        this.type = type;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CampaignResponse campaignResponse = (CampaignResponse) o;
        return Objects.equals(this.id, campaignResponse.id) &&
            Objects.equals(this.adAccountId, campaignResponse.adAccountId) &&
            Objects.equals(this.name, campaignResponse.name) &&
            Objects.equals(this.status, campaignResponse.status) &&
            Objects.equals(this.lifetimeSpendCap, campaignResponse.lifetimeSpendCap) &&
            Objects.equals(this.dailySpendCap, campaignResponse.dailySpendCap) &&
            Objects.equals(this.orderLineId, campaignResponse.orderLineId) &&
            Objects.equals(this.trackingUrls, campaignResponse.trackingUrls) &&
            Objects.equals(this.startTime, campaignResponse.startTime) &&
            Objects.equals(this.endTime, campaignResponse.endTime) &&
            Objects.equals(this.objectiveType, campaignResponse.objectiveType) &&
            Objects.equals(this.createdTime, campaignResponse.createdTime) &&
            Objects.equals(this.updatedTime, campaignResponse.updatedTime) &&
            Objects.equals(this.type, campaignResponse.type);
    }

    @Override
    public int hashCode() {
        return Objects.hash(id, adAccountId, name, status, lifetimeSpendCap, dailySpendCap, orderLineId, trackingUrls, startTime, endTime, objectiveType, createdTime, updatedTime, type);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CampaignResponse {\n");
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
        sb.append("    objectiveType: ").append(toIndentedString(objectiveType)).append("\n");
        sb.append("    createdTime: ").append(toIndentedString(createdTime)).append("\n");
        sb.append("    updatedTime: ").append(toIndentedString(updatedTime)).append("\n");
        sb.append("    type: ").append(toIndentedString(type)).append("\n");
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
