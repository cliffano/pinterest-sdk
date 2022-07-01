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
import org.openapitools.model.EntityStatus;
import org.openapitools.model.TrackingUrls;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * Campaign Data
 */
@ApiModel(description = "Campaign Data")
@JsonPropertyOrder({
  CampaignCommon.JSON_PROPERTY_AD_ACCOUNT_ID,
  CampaignCommon.JSON_PROPERTY_NAME,
  CampaignCommon.JSON_PROPERTY_STATUS,
  CampaignCommon.JSON_PROPERTY_LIFETIME_SPEND_CAP,
  CampaignCommon.JSON_PROPERTY_DAILY_SPEND_CAP,
  CampaignCommon.JSON_PROPERTY_ORDER_LINE_ID,
  CampaignCommon.JSON_PROPERTY_TRACKING_URLS,
  CampaignCommon.JSON_PROPERTY_START_TIME,
  CampaignCommon.JSON_PROPERTY_END_TIME
})
@JsonTypeName("CampaignCommon")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-07-01T11:59:34.708172Z[Etc/UTC]")
@Introspected
public class CampaignCommon {
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

    public CampaignCommon(String adAccountId) {
        this.adAccountId = adAccountId;
    }

    public CampaignCommon adAccountId(String adAccountId) {
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

    public CampaignCommon name(String name) {
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

    public CampaignCommon status(EntityStatus status) {
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

    public CampaignCommon lifetimeSpendCap(Integer lifetimeSpendCap) {
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

    public CampaignCommon dailySpendCap(Integer dailySpendCap) {
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

    public CampaignCommon orderLineId(String orderLineId) {
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

    public CampaignCommon trackingUrls(TrackingUrls trackingUrls) {
        this.trackingUrls = trackingUrls;
        return this;
    }

    public CampaignCommon putTrackingUrlsItem(String key,  trackingUrlsItem) {
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

    public CampaignCommon startTime(Integer startTime) {
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

    public CampaignCommon endTime(Integer endTime) {
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

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CampaignCommon campaignCommon = (CampaignCommon) o;
        return Objects.equals(this.adAccountId, campaignCommon.adAccountId) &&
            Objects.equals(this.name, campaignCommon.name) &&
            Objects.equals(this.status, campaignCommon.status) &&
            Objects.equals(this.lifetimeSpendCap, campaignCommon.lifetimeSpendCap) &&
            Objects.equals(this.dailySpendCap, campaignCommon.dailySpendCap) &&
            Objects.equals(this.orderLineId, campaignCommon.orderLineId) &&
            Objects.equals(this.trackingUrls, campaignCommon.trackingUrls) &&
            Objects.equals(this.startTime, campaignCommon.startTime) &&
            Objects.equals(this.endTime, campaignCommon.endTime);
    }

    @Override
    public int hashCode() {
        return Objects.hash(adAccountId, name, status, lifetimeSpendCap, dailySpendCap, orderLineId, trackingUrls, startTime, endTime);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CampaignCommon {\n");
        sb.append("    adAccountId: ").append(toIndentedString(adAccountId)).append("\n");
        sb.append("    name: ").append(toIndentedString(name)).append("\n");
        sb.append("    status: ").append(toIndentedString(status)).append("\n");
        sb.append("    lifetimeSpendCap: ").append(toIndentedString(lifetimeSpendCap)).append("\n");
        sb.append("    dailySpendCap: ").append(toIndentedString(dailySpendCap)).append("\n");
        sb.append("    orderLineId: ").append(toIndentedString(orderLineId)).append("\n");
        sb.append("    trackingUrls: ").append(toIndentedString(trackingUrls)).append("\n");
        sb.append("    startTime: ").append(toIndentedString(startTime)).append("\n");
        sb.append("    endTime: ").append(toIndentedString(endTime)).append("\n");
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
