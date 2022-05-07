package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.CampaignCommon;
import org.openapitools.model.CampaignResponseAllOf;
import org.openapitools.model.CampaignResponseAllOf1;
import org.openapitools.model.EntityStatus;
import org.openapitools.model.ObjectiveType;
import org.openapitools.model.TrackingUrls;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonTypeName;



@JsonTypeName("CampaignResponse")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJAXRSSpecServerCodegen", date = "2022-05-07T06:42:49.569940Z[Etc/UTC]")public class CampaignResponse   {
  
  private @Valid String id;
  private @Valid String adAccountId;
  private @Valid String name;
  private @Valid EntityStatus status = "ACTIVE";
  private @Valid Integer lifetimeSpendCap;
  private @Valid Integer dailySpendCap;
  private @Valid String orderLineId;
  private @Valid TrackingUrls trackingUrls;
  private @Valid Integer startTime;
  private @Valid Integer endTime;
  private @Valid ObjectiveType objectiveType;
  private @Valid Integer createdTime;
  private @Valid Integer updatedTime;
  private @Valid String type;

  /**
   * Campaign ID.
   **/
  public CampaignResponse id(String id) {
    this.id = id;
    return this;
  }

  

  
  @ApiModelProperty(example = "549755885175", required = true, value = "Campaign ID.")
  @JsonProperty("id")
  @NotNull
 @Pattern(regexp="^\\d+$")  public String getId() {
    return id;
  }

  @JsonProperty("id")
  public void setId(String id) {
    this.id = id;
  }

/**
   * Campaign&#39;s Advertiser ID.
   **/
  public CampaignResponse adAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
    return this;
  }

  

  
  @ApiModelProperty(example = "549755885175", required = true, value = "Campaign's Advertiser ID.")
  @JsonProperty("ad_account_id")
  @NotNull
 @Pattern(regexp="^\\d+$")  public String getAdAccountId() {
    return adAccountId;
  }

  @JsonProperty("ad_account_id")
  public void setAdAccountId(String adAccountId) {
    this.adAccountId = adAccountId;
  }

/**
   * Campaign name.
   **/
  public CampaignResponse name(String name) {
    this.name = name;
    return this;
  }

  

  
  @ApiModelProperty(example = "ACME Tools", value = "Campaign name.")
  @JsonProperty("name")
  public String getName() {
    return name;
  }

  @JsonProperty("name")
  public void setName(String name) {
    this.name = name;
  }

/**
   **/
  public CampaignResponse status(EntityStatus status) {
    this.status = status;
    return this;
  }

  

  
  @ApiModelProperty(value = "")
  @JsonProperty("status")
  public EntityStatus getStatus() {
    return status;
  }

  @JsonProperty("status")
  public void setStatus(EntityStatus status) {
    this.status = status;
  }

/**
   * Campaign total spending cap.
   **/
  public CampaignResponse lifetimeSpendCap(Integer lifetimeSpendCap) {
    this.lifetimeSpendCap = lifetimeSpendCap;
    return this;
  }

  

  
  @ApiModelProperty(example = "1432744744", value = "Campaign total spending cap.")
  @JsonProperty("lifetime_spend_cap")
  public Integer getLifetimeSpendCap() {
    return lifetimeSpendCap;
  }

  @JsonProperty("lifetime_spend_cap")
  public void setLifetimeSpendCap(Integer lifetimeSpendCap) {
    this.lifetimeSpendCap = lifetimeSpendCap;
  }

/**
   * Campaign daily spending cap.
   **/
  public CampaignResponse dailySpendCap(Integer dailySpendCap) {
    this.dailySpendCap = dailySpendCap;
    return this;
  }

  

  
  @ApiModelProperty(example = "1432744744", value = "Campaign daily spending cap.")
  @JsonProperty("daily_spend_cap")
  public Integer getDailySpendCap() {
    return dailySpendCap;
  }

  @JsonProperty("daily_spend_cap")
  public void setDailySpendCap(Integer dailySpendCap) {
    this.dailySpendCap = dailySpendCap;
  }

/**
   * Order line ID that appears on the invoice.
   **/
  public CampaignResponse orderLineId(String orderLineId) {
    this.orderLineId = orderLineId;
    return this;
  }

  

  
  @ApiModelProperty(example = "549755885175", value = "Order line ID that appears on the invoice.")
  @JsonProperty("order_line_id")
 @Pattern(regexp="^\\d+$")  public String getOrderLineId() {
    return orderLineId;
  }

  @JsonProperty("order_line_id")
  public void setOrderLineId(String orderLineId) {
    this.orderLineId = orderLineId;
  }

/**
   **/
  public CampaignResponse trackingUrls(TrackingUrls trackingUrls) {
    this.trackingUrls = trackingUrls;
    return this;
  }

  

  
  @ApiModelProperty(value = "")
  @JsonProperty("tracking_urls")
  public TrackingUrls getTrackingUrls() {
    return trackingUrls;
  }

  @JsonProperty("tracking_urls")
  public void setTrackingUrls(TrackingUrls trackingUrls) {
    this.trackingUrls = trackingUrls;
  }

  public CampaignResponse putTrackingUrlsItem(String key,  trackingUrlsItem) {
    if (this.trackingUrls == null) {
      this.trackingUrls = ;
    }

    this.trackingUrls.put(key, trackingUrlsItem);
    return this;
  }

  public CampaignResponse removeTrackingUrlsItem( trackingUrlsItem) {
    if (trackingUrlsItem != null && this.trackingUrls != null) {
      this.trackingUrls.remove(trackingUrlsItem);
    }

    return this;
  }
/**
   * Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
   **/
  public CampaignResponse startTime(Integer startTime) {
    this.startTime = startTime;
    return this;
  }

  

  
  @ApiModelProperty(example = "1580865126", value = "Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.")
  @JsonProperty("start_time")
  public Integer getStartTime() {
    return startTime;
  }

  @JsonProperty("start_time")
  public void setStartTime(Integer startTime) {
    this.startTime = startTime;
  }

/**
   * Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
   **/
  public CampaignResponse endTime(Integer endTime) {
    this.endTime = endTime;
    return this;
  }

  

  
  @ApiModelProperty(example = "1644023526", value = "Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.")
  @JsonProperty("end_time")
  public Integer getEndTime() {
    return endTime;
  }

  @JsonProperty("end_time")
  public void setEndTime(Integer endTime) {
    this.endTime = endTime;
  }

/**
   **/
  public CampaignResponse objectiveType(ObjectiveType objectiveType) {
    this.objectiveType = objectiveType;
    return this;
  }

  

  
  @ApiModelProperty(value = "")
  @JsonProperty("objective_type")
  public ObjectiveType getObjectiveType() {
    return objectiveType;
  }

  @JsonProperty("objective_type")
  public void setObjectiveType(ObjectiveType objectiveType) {
    this.objectiveType = objectiveType;
  }

/**
   * Campaign creation time. Unix timestamp in seconds.
   **/
  public CampaignResponse createdTime(Integer createdTime) {
    this.createdTime = createdTime;
    return this;
  }

  

  
  @ApiModelProperty(example = "1432744744", value = "Campaign creation time. Unix timestamp in seconds.")
  @JsonProperty("created_time")
  public Integer getCreatedTime() {
    return createdTime;
  }

  @JsonProperty("created_time")
  public void setCreatedTime(Integer createdTime) {
    this.createdTime = createdTime;
  }

/**
   * UTC timestamp. Last update time.
   **/
  public CampaignResponse updatedTime(Integer updatedTime) {
    this.updatedTime = updatedTime;
    return this;
  }

  

  
  @ApiModelProperty(example = "1432744744", value = "UTC timestamp. Last update time.")
  @JsonProperty("updated_time")
  public Integer getUpdatedTime() {
    return updatedTime;
  }

  @JsonProperty("updated_time")
  public void setUpdatedTime(Integer updatedTime) {
    this.updatedTime = updatedTime;
  }

/**
   * Always \&quot;campaign\&quot;.
   **/
  public CampaignResponse type(String type) {
    this.type = type;
    return this;
  }

  

  
  @ApiModelProperty(example = "campaign", value = "Always \"campaign\".")
  @JsonProperty("type")
  public String getType() {
    return type;
  }

  @JsonProperty("type")
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

