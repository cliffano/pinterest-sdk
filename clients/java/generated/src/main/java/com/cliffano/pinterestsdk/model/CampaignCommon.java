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


package com.cliffano.pinterestsdk.model;

import java.util.Objects;
import java.util.Arrays;
import com.cliffano.pinterestsdk.model.EntityStatus;
import com.cliffano.pinterestsdk.model.TrackingUrls;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import org.openapitools.jackson.nullable.JsonNullable;

/**
 * Campaign Data
 */
@ApiModel(description = "Campaign Data")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2022-07-01T11:59:02.167556Z[Etc/UTC]")
public class CampaignCommon {
  public static final String SERIALIZED_NAME_AD_ACCOUNT_ID = "ad_account_id";
  @SerializedName(SERIALIZED_NAME_AD_ACCOUNT_ID)
  private String adAccountId;

  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  public static final String SERIALIZED_NAME_STATUS = "status";
  @SerializedName(SERIALIZED_NAME_STATUS)
  private EntityStatus status = "ACTIVE";

  public static final String SERIALIZED_NAME_LIFETIME_SPEND_CAP = "lifetime_spend_cap";
  @SerializedName(SERIALIZED_NAME_LIFETIME_SPEND_CAP)
  private Integer lifetimeSpendCap;

  public static final String SERIALIZED_NAME_DAILY_SPEND_CAP = "daily_spend_cap";
  @SerializedName(SERIALIZED_NAME_DAILY_SPEND_CAP)
  private Integer dailySpendCap;

  public static final String SERIALIZED_NAME_ORDER_LINE_ID = "order_line_id";
  @SerializedName(SERIALIZED_NAME_ORDER_LINE_ID)
  private String orderLineId;

  public static final String SERIALIZED_NAME_TRACKING_URLS = "tracking_urls";
  @SerializedName(SERIALIZED_NAME_TRACKING_URLS)
  private TrackingUrls trackingUrls;

  public static final String SERIALIZED_NAME_START_TIME = "start_time";
  @SerializedName(SERIALIZED_NAME_START_TIME)
  private Integer startTime;

  public static final String SERIALIZED_NAME_END_TIME = "end_time";
  @SerializedName(SERIALIZED_NAME_END_TIME)
  private Integer endTime;

  public CampaignCommon() { 
  }

  public CampaignCommon adAccountId(String adAccountId) {
    
    this.adAccountId = adAccountId;
    return this;
  }

   /**
   * Campaign&#39;s Advertiser ID.
   * @return adAccountId
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(example = "549755885175", required = true, value = "Campaign's Advertiser ID.")

  public String getAdAccountId() {
    return adAccountId;
  }


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
  @javax.annotation.Nullable
  @ApiModelProperty(example = "ACME Tools", value = "Campaign name.")

  public String getName() {
    return name;
  }


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
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public EntityStatus getStatus() {
    return status;
  }


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
  @javax.annotation.Nullable
  @ApiModelProperty(example = "1432744744", value = "Campaign total spending cap.")

  public Integer getLifetimeSpendCap() {
    return lifetimeSpendCap;
  }


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
  @javax.annotation.Nullable
  @ApiModelProperty(example = "1432744744", value = "Campaign daily spending cap.")

  public Integer getDailySpendCap() {
    return dailySpendCap;
  }


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
  @javax.annotation.Nullable
  @ApiModelProperty(example = "549755885175", value = "Order line ID that appears on the invoice.")

  public String getOrderLineId() {
    return orderLineId;
  }


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
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public TrackingUrls getTrackingUrls() {
    return trackingUrls;
  }


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
  @javax.annotation.Nullable
  @ApiModelProperty(example = "1580865126", value = "Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.")

  public Integer getStartTime() {
    return startTime;
  }


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
  @javax.annotation.Nullable
  @ApiModelProperty(example = "1644023526", value = "Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.")

  public Integer getEndTime() {
    return endTime;
  }


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

  private static <T> boolean equalsNullable(JsonNullable<T> a, JsonNullable<T> b) {
    return a == b || (a != null && b != null && a.isPresent() && b.isPresent() && Objects.deepEquals(a.get(), b.get()));
  }

  @Override
  public int hashCode() {
    return Objects.hash(adAccountId, name, status, lifetimeSpendCap, dailySpendCap, orderLineId, trackingUrls, startTime, endTime);
  }

  private static <T> int hashCodeNullable(JsonNullable<T> a) {
    if (a == null) {
      return 1;
    }
    return a.isPresent() ? Arrays.deepHashCode(new Object[]{a.get()}) : 31;
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

