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
import com.cliffano.pinterestsdk.model.ActionType;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * AdGroupResponseAllOf1
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2022-07-01T11:59:02.167556Z[Etc/UTC]")
public class AdGroupResponseAllOf1 {
  public static final String SERIALIZED_NAME_CAMPAIGN_ID = "campaign_id";
  @SerializedName(SERIALIZED_NAME_CAMPAIGN_ID)
  private String campaignId;

  public static final String SERIALIZED_NAME_BILLABLE_EVENT = "billable_event";
  @SerializedName(SERIALIZED_NAME_BILLABLE_EVENT)
  private ActionType billableEvent;

  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private String id;

  public static final String SERIALIZED_NAME_TYPE = "type";
  @SerializedName(SERIALIZED_NAME_TYPE)
  private String type;

  public static final String SERIALIZED_NAME_AD_ACCOUNT_ID = "ad_account_id";
  @SerializedName(SERIALIZED_NAME_AD_ACCOUNT_ID)
  private String adAccountId;

  public static final String SERIALIZED_NAME_CREATED_TIME = "created_time";
  @SerializedName(SERIALIZED_NAME_CREATED_TIME)
  private Integer createdTime;

  public static final String SERIALIZED_NAME_UPDATED_TIME = "updated_time";
  @SerializedName(SERIALIZED_NAME_UPDATED_TIME)
  private Integer updatedTime;

  public AdGroupResponseAllOf1() { 
  }

  public AdGroupResponseAllOf1 campaignId(String campaignId) {
    
    this.campaignId = campaignId;
    return this;
  }

   /**
   * Campaign ID of the ad group.
   * @return campaignId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "626736533506", value = "Campaign ID of the ad group.")

  public String getCampaignId() {
    return campaignId;
  }


  public void setCampaignId(String campaignId) {
    this.campaignId = campaignId;
  }


  public AdGroupResponseAllOf1 billableEvent(ActionType billableEvent) {
    
    this.billableEvent = billableEvent;
    return this;
  }

   /**
   * Get billableEvent
   * @return billableEvent
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public ActionType getBillableEvent() {
    return billableEvent;
  }


  public void setBillableEvent(ActionType billableEvent) {
    this.billableEvent = billableEvent;
  }


  public AdGroupResponseAllOf1 id(String id) {
    
    this.id = id;
    return this;
  }

   /**
   * Ad group ID.
   * @return id
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "2680060704746", value = "Ad group ID.")

  public String getId() {
    return id;
  }


  public void setId(String id) {
    this.id = id;
  }


  public AdGroupResponseAllOf1 type(String type) {
    
    this.type = type;
    return this;
  }

   /**
   * Always \&quot;adgroup\&quot;.
   * @return type
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "Always \"adgroup\".")

  public String getType() {
    return type;
  }


  public void setType(String type) {
    this.type = type;
  }


  public AdGroupResponseAllOf1 adAccountId(String adAccountId) {
    
    this.adAccountId = adAccountId;
    return this;
  }

   /**
   * Advertiser ID.
   * @return adAccountId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "549755885175", value = "Advertiser ID.")

  public String getAdAccountId() {
    return adAccountId;
  }


  public void setAdAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
  }


  public AdGroupResponseAllOf1 createdTime(Integer createdTime) {
    
    this.createdTime = createdTime;
    return this;
  }

   /**
   * Ad group creation time. Unix timestamp in seconds.
   * @return createdTime
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "1476477189", value = "Ad group creation time. Unix timestamp in seconds.")

  public Integer getCreatedTime() {
    return createdTime;
  }


  public void setCreatedTime(Integer createdTime) {
    this.createdTime = createdTime;
  }


  public AdGroupResponseAllOf1 updatedTime(Integer updatedTime) {
    
    this.updatedTime = updatedTime;
    return this;
  }

   /**
   * Ad group last update time. Unix timestamp in seconds.
   * @return updatedTime
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "1476477189", value = "Ad group last update time. Unix timestamp in seconds.")

  public Integer getUpdatedTime() {
    return updatedTime;
  }


  public void setUpdatedTime(Integer updatedTime) {
    this.updatedTime = updatedTime;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdGroupResponseAllOf1 adGroupResponseAllOf1 = (AdGroupResponseAllOf1) o;
    return Objects.equals(this.campaignId, adGroupResponseAllOf1.campaignId) &&
        Objects.equals(this.billableEvent, adGroupResponseAllOf1.billableEvent) &&
        Objects.equals(this.id, adGroupResponseAllOf1.id) &&
        Objects.equals(this.type, adGroupResponseAllOf1.type) &&
        Objects.equals(this.adAccountId, adGroupResponseAllOf1.adAccountId) &&
        Objects.equals(this.createdTime, adGroupResponseAllOf1.createdTime) &&
        Objects.equals(this.updatedTime, adGroupResponseAllOf1.updatedTime);
  }

  @Override
  public int hashCode() {
    return Objects.hash(campaignId, billableEvent, id, type, adAccountId, createdTime, updatedTime);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdGroupResponseAllOf1 {\n");
    sb.append("    campaignId: ").append(toIndentedString(campaignId)).append("\n");
    sb.append("    billableEvent: ").append(toIndentedString(billableEvent)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    adAccountId: ").append(toIndentedString(adAccountId)).append("\n");
    sb.append("    createdTime: ").append(toIndentedString(createdTime)).append("\n");
    sb.append("    updatedTime: ").append(toIndentedString(updatedTime)).append("\n");
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

