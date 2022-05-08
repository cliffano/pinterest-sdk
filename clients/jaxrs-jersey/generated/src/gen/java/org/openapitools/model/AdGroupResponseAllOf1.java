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
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.ActionType;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * AdGroupResponseAllOf1
 */
@JsonPropertyOrder({
  AdGroupResponseAllOf1.JSON_PROPERTY_CAMPAIGN_ID,
  AdGroupResponseAllOf1.JSON_PROPERTY_BILLABLE_EVENT,
  AdGroupResponseAllOf1.JSON_PROPERTY_ID,
  AdGroupResponseAllOf1.JSON_PROPERTY_TYPE,
  AdGroupResponseAllOf1.JSON_PROPERTY_AD_ACCOUNT_ID,
  AdGroupResponseAllOf1.JSON_PROPERTY_CREATED_TIME,
  AdGroupResponseAllOf1.JSON_PROPERTY_UPDATED_TIME
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2022-05-08T00:33:19.615491Z[Etc/UTC]")
public class AdGroupResponseAllOf1   {
  public static final String JSON_PROPERTY_CAMPAIGN_ID = "campaign_id";
  @JsonProperty(JSON_PROPERTY_CAMPAIGN_ID)
  private String campaignId;

  public static final String JSON_PROPERTY_BILLABLE_EVENT = "billable_event";
  @JsonProperty(JSON_PROPERTY_BILLABLE_EVENT)
  private ActionType billableEvent;

  public static final String JSON_PROPERTY_ID = "id";
  @JsonProperty(JSON_PROPERTY_ID)
  private String id;

  public static final String JSON_PROPERTY_TYPE = "type";
  @JsonProperty(JSON_PROPERTY_TYPE)
  private String type;

  public static final String JSON_PROPERTY_AD_ACCOUNT_ID = "ad_account_id";
  @JsonProperty(JSON_PROPERTY_AD_ACCOUNT_ID)
  private String adAccountId;

  public static final String JSON_PROPERTY_CREATED_TIME = "created_time";
  @JsonProperty(JSON_PROPERTY_CREATED_TIME)
  private Integer createdTime;

  public static final String JSON_PROPERTY_UPDATED_TIME = "updated_time";
  @JsonProperty(JSON_PROPERTY_UPDATED_TIME)
  private Integer updatedTime;

  public AdGroupResponseAllOf1 campaignId(String campaignId) {
    this.campaignId = campaignId;
    return this;
  }

  /**
   * Campaign ID of the ad group.
   * @return campaignId
   **/
  @JsonProperty(value = "campaign_id")
  @ApiModelProperty(example = "626736533506", value = "Campaign ID of the ad group.")
   @Pattern(regexp="^\\d+$")
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
  @JsonProperty(value = "billable_event")
  @ApiModelProperty(value = "")
  @Valid 
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
  @JsonProperty(value = "id")
  @ApiModelProperty(example = "2680060704746", value = "Ad group ID.")
   @Pattern(regexp="^\\d+$")
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
  @JsonProperty(value = "type")
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
  @JsonProperty(value = "ad_account_id")
  @ApiModelProperty(example = "549755885175", value = "Advertiser ID.")
   @Pattern(regexp="^\\d+$")
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
  @JsonProperty(value = "created_time")
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
  @JsonProperty(value = "updated_time")
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

