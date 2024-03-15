package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.BulkDownloadRequestCampaignFilter;
import org.openapitools.model.BulkEntityType;
import org.openapitools.model.BulkOutputFormat;



/**
 * Ad entities to get in bulk request.
 **/

@ApiModel(description = "Ad entities to get in bulk request.")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaInflectorServerCodegen", date = "2024-03-14T23:01:39.171456580Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class BulkDownloadRequest   {
  @JsonProperty("entity_types")
  private List<BulkEntityType> entityTypes = null;

  @JsonProperty("entity_ids")
  private List<String> entityIds = null;

  @JsonProperty("updated_since")
  private String updatedSince;

  @JsonProperty("campaign_filter")
  private BulkDownloadRequestCampaignFilter campaignFilter;

  @JsonProperty("output_format")
  private BulkOutputFormat outputFormat = "JSON";

  /**
   * All entity types specified will be downloaded. Fewer types result in faster downloads.
   **/
  public BulkDownloadRequest entityTypes(List<BulkEntityType> entityTypes) {
    this.entityTypes = entityTypes;
    return this;
  }

  
  @ApiModelProperty(example = "[\"CAMPAIGN\",\"AD_GROUP\"]", value = "All entity types specified will be downloaded. Fewer types result in faster downloads.")
  @JsonProperty("entity_types")
  public List<BulkEntityType> getEntityTypes() {
    return entityTypes;
  }
  public void setEntityTypes(List<BulkEntityType> entityTypes) {
    this.entityTypes = entityTypes;
  }

  /**
   * All entities specified by these IDs as well as their children and grandchildren will be downloaded if the entity type is one of the types requested to be downloaded.
   **/
  public BulkDownloadRequest entityIds(List<String> entityIds) {
    this.entityIds = entityIds;
    return this;
  }

  
  @ApiModelProperty(value = "All entities specified by these IDs as well as their children and grandchildren will be downloaded if the entity type is one of the types requested to be downloaded.")
  @JsonProperty("entity_ids")
  public List<String> getEntityIds() {
    return entityIds;
  }
  public void setEntityIds(List<String> entityIds) {
    this.entityIds = entityIds;
  }

  /**
   * Unix UTC timestamp to retrieve all entities that have changed since this time.
   **/
  public BulkDownloadRequest updatedSince(String updatedSince) {
    this.updatedSince = updatedSince;
    return this;
  }

  
  @ApiModelProperty(example = "1622848072", value = "Unix UTC timestamp to retrieve all entities that have changed since this time.")
  @JsonProperty("updated_since")
  public String getUpdatedSince() {
    return updatedSince;
  }
  public void setUpdatedSince(String updatedSince) {
    this.updatedSince = updatedSince;
  }

  /**
   **/
  public BulkDownloadRequest campaignFilter(BulkDownloadRequestCampaignFilter campaignFilter) {
    this.campaignFilter = campaignFilter;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("campaign_filter")
  public BulkDownloadRequestCampaignFilter getCampaignFilter() {
    return campaignFilter;
  }
  public void setCampaignFilter(BulkDownloadRequestCampaignFilter campaignFilter) {
    this.campaignFilter = campaignFilter;
  }

  /**
   **/
  public BulkDownloadRequest outputFormat(BulkOutputFormat outputFormat) {
    this.outputFormat = outputFormat;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("output_format")
  public BulkOutputFormat getOutputFormat() {
    return outputFormat;
  }
  public void setOutputFormat(BulkOutputFormat outputFormat) {
    this.outputFormat = outputFormat;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BulkDownloadRequest bulkDownloadRequest = (BulkDownloadRequest) o;
    return Objects.equals(entityTypes, bulkDownloadRequest.entityTypes) &&
        Objects.equals(entityIds, bulkDownloadRequest.entityIds) &&
        Objects.equals(updatedSince, bulkDownloadRequest.updatedSince) &&
        Objects.equals(campaignFilter, bulkDownloadRequest.campaignFilter) &&
        Objects.equals(outputFormat, bulkDownloadRequest.outputFormat);
  }

  @Override
  public int hashCode() {
    return Objects.hash(entityTypes, entityIds, updatedSince, campaignFilter, outputFormat);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BulkDownloadRequest {\n");
    
    sb.append("    entityTypes: ").append(toIndentedString(entityTypes)).append("\n");
    sb.append("    entityIds: ").append(toIndentedString(entityIds)).append("\n");
    sb.append("    updatedSince: ").append(toIndentedString(updatedSince)).append("\n");
    sb.append("    campaignFilter: ").append(toIndentedString(campaignFilter)).append("\n");
    sb.append("    outputFormat: ").append(toIndentedString(outputFormat)).append("\n");
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

