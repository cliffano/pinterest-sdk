package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonTypeName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.CampaignSummaryStatus;
import org.openapitools.model.ObjectiveType;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;



public class BulkDownloadRequestCampaignFilter   {
  
  private String startTime;

  private String endTime;

  private String name;

  private List<CampaignSummaryStatus> campaignStatus;

  private List<ObjectiveType> objectiveType;

  /**
   * Unix UTC timestamp.
   **/
  public BulkDownloadRequestCampaignFilter startTime(String startTime) {
    this.startTime = startTime;
    return this;
  }

  
  @ApiModelProperty(example = "1622848072", value = "Unix UTC timestamp.")
  @JsonProperty("start_time")
 @Pattern(regexp="^\\d+$")  public String getStartTime() {
    return startTime;
  }
  public void setStartTime(String startTime) {
    this.startTime = startTime;
  }


  /**
   * Unix UTC timestamp.
   **/
  public BulkDownloadRequestCampaignFilter endTime(String endTime) {
    this.endTime = endTime;
    return this;
  }

  
  @ApiModelProperty(example = "1622848072", value = "Unix UTC timestamp.")
  @JsonProperty("end_time")
 @Pattern(regexp="^\\d+$")  public String getEndTime() {
    return endTime;
  }
  public void setEndTime(String endTime) {
    this.endTime = endTime;
  }


  /**
   * Campaign name
   **/
  public BulkDownloadRequestCampaignFilter name(String name) {
    this.name = name;
    return this;
  }

  
  @ApiModelProperty(example = "campaign name", value = "Campaign name")
  @JsonProperty("name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }


  /**
   **/
  public BulkDownloadRequestCampaignFilter campaignStatus(List<CampaignSummaryStatus> campaignStatus) {
    this.campaignStatus = campaignStatus;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("campaign_status")
  public List<CampaignSummaryStatus> getCampaignStatus() {
    return campaignStatus;
  }
  public void setCampaignStatus(List<CampaignSummaryStatus> campaignStatus) {
    this.campaignStatus = campaignStatus;
  }

  public BulkDownloadRequestCampaignFilter addCampaignStatusItem(CampaignSummaryStatus campaignStatusItem) {
    if (this.campaignStatus == null) {
      this.campaignStatus = new ArrayList<>();
    }
    this.campaignStatus.add(campaignStatusItem);
    return this;
  }


  /**
   **/
  public BulkDownloadRequestCampaignFilter objectiveType(List<ObjectiveType> objectiveType) {
    this.objectiveType = objectiveType;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("objective_type")
  public List<ObjectiveType> getObjectiveType() {
    return objectiveType;
  }
  public void setObjectiveType(List<ObjectiveType> objectiveType) {
    this.objectiveType = objectiveType;
  }

  public BulkDownloadRequestCampaignFilter addObjectiveTypeItem(ObjectiveType objectiveTypeItem) {
    if (this.objectiveType == null) {
      this.objectiveType = new ArrayList<>();
    }
    this.objectiveType.add(objectiveTypeItem);
    return this;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BulkDownloadRequestCampaignFilter bulkDownloadRequestCampaignFilter = (BulkDownloadRequestCampaignFilter) o;
    return Objects.equals(this.startTime, bulkDownloadRequestCampaignFilter.startTime) &&
        Objects.equals(this.endTime, bulkDownloadRequestCampaignFilter.endTime) &&
        Objects.equals(this.name, bulkDownloadRequestCampaignFilter.name) &&
        Objects.equals(this.campaignStatus, bulkDownloadRequestCampaignFilter.campaignStatus) &&
        Objects.equals(this.objectiveType, bulkDownloadRequestCampaignFilter.objectiveType);
  }

  @Override
  public int hashCode() {
    return Objects.hash(startTime, endTime, name, campaignStatus, objectiveType);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BulkDownloadRequestCampaignFilter {\n");
    
    sb.append("    startTime: ").append(toIndentedString(startTime)).append("\n");
    sb.append("    endTime: ").append(toIndentedString(endTime)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    campaignStatus: ").append(toIndentedString(campaignStatus)).append("\n");
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

