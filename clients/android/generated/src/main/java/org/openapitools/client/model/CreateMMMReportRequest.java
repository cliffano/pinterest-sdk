/**
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

package org.openapitools.client.model;

import java.util.*;
import org.openapitools.client.model.MMMReportingColumn;
import org.openapitools.client.model.MMMReportingTargetingType;
import org.openapitools.client.model.TargetingAdvertiserCountry;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class CreateMMMReportRequest {
  
  @SerializedName("report_name")
  private String reportName = null;
  @SerializedName("start_date")
  private String startDate = null;
  @SerializedName("end_date")
  private String endDate = null;
  public enum GranularityEnum {
     DAY,  WEEK, 
  };
  @SerializedName("granularity")
  private GranularityEnum granularity = null;
  public enum LevelEnum {
     CAMPAIGN_TARGETING,  AD_GROUP_TARGETING, 
  };
  @SerializedName("level")
  private LevelEnum level = null;
  @SerializedName("targeting_types")
  private List<MMMReportingTargetingType> targetingTypes = null;
  @SerializedName("columns")
  private List<MMMReportingColumn> columns = null;
  @SerializedName("countries")
  private List<TargetingAdvertiserCountry> countries = null;

  /**
   * Name of the Marketing Mix Modeling (MMM) report
   **/
  @ApiModelProperty(required = true, value = "Name of the Marketing Mix Modeling (MMM) report")
  public String getReportName() {
    return reportName;
  }
  public void setReportName(String reportName) {
    this.reportName = reportName;
  }

  /**
   * Metric report start date (UTC). Format: YYYY-MM-DD
   **/
  @ApiModelProperty(required = true, value = "Metric report start date (UTC). Format: YYYY-MM-DD")
  public String getStartDate() {
    return startDate;
  }
  public void setStartDate(String startDate) {
    this.startDate = startDate;
  }

  /**
   * Metric report end date (UTC). Format: YYYY-MM-DD
   **/
  @ApiModelProperty(required = true, value = "Metric report end date (UTC). Format: YYYY-MM-DD")
  public String getEndDate() {
    return endDate;
  }
  public void setEndDate(String endDate) {
    this.endDate = endDate;
  }

  /**
   * DAY - metrics are broken down daily.<br> WEEK - metrics are broken down weekly.
   **/
  @ApiModelProperty(required = true, value = "DAY - metrics are broken down daily.<br> WEEK - metrics are broken down weekly.")
  public GranularityEnum getGranularity() {
    return granularity;
  }
  public void setGranularity(GranularityEnum granularity) {
    this.granularity = granularity;
  }

  /**
   * Level of the report
   **/
  @ApiModelProperty(required = true, value = "Level of the report")
  public LevelEnum getLevel() {
    return level;
  }
  public void setLevel(LevelEnum level) {
    this.level = level;
  }

  /**
   * List of targeting types
   **/
  @ApiModelProperty(required = true, value = "List of targeting types")
  public List<MMMReportingTargetingType> getTargetingTypes() {
    return targetingTypes;
  }
  public void setTargetingTypes(List<MMMReportingTargetingType> targetingTypes) {
    this.targetingTypes = targetingTypes;
  }

  /**
   * Metric and entity columns
   **/
  @ApiModelProperty(required = true, value = "Metric and entity columns")
  public List<MMMReportingColumn> getColumns() {
    return columns;
  }
  public void setColumns(List<MMMReportingColumn> columns) {
    this.columns = columns;
  }

  /**
   * A List of countries for filtering
   **/
  @ApiModelProperty(value = "A List of countries for filtering")
  public List<TargetingAdvertiserCountry> getCountries() {
    return countries;
  }
  public void setCountries(List<TargetingAdvertiserCountry> countries) {
    this.countries = countries;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CreateMMMReportRequest createMMMReportRequest = (CreateMMMReportRequest) o;
    return (this.reportName == null ? createMMMReportRequest.reportName == null : this.reportName.equals(createMMMReportRequest.reportName)) &&
        (this.startDate == null ? createMMMReportRequest.startDate == null : this.startDate.equals(createMMMReportRequest.startDate)) &&
        (this.endDate == null ? createMMMReportRequest.endDate == null : this.endDate.equals(createMMMReportRequest.endDate)) &&
        (this.granularity == null ? createMMMReportRequest.granularity == null : this.granularity.equals(createMMMReportRequest.granularity)) &&
        (this.level == null ? createMMMReportRequest.level == null : this.level.equals(createMMMReportRequest.level)) &&
        (this.targetingTypes == null ? createMMMReportRequest.targetingTypes == null : this.targetingTypes.equals(createMMMReportRequest.targetingTypes)) &&
        (this.columns == null ? createMMMReportRequest.columns == null : this.columns.equals(createMMMReportRequest.columns)) &&
        (this.countries == null ? createMMMReportRequest.countries == null : this.countries.equals(createMMMReportRequest.countries));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.reportName == null ? 0: this.reportName.hashCode());
    result = 31 * result + (this.startDate == null ? 0: this.startDate.hashCode());
    result = 31 * result + (this.endDate == null ? 0: this.endDate.hashCode());
    result = 31 * result + (this.granularity == null ? 0: this.granularity.hashCode());
    result = 31 * result + (this.level == null ? 0: this.level.hashCode());
    result = 31 * result + (this.targetingTypes == null ? 0: this.targetingTypes.hashCode());
    result = 31 * result + (this.columns == null ? 0: this.columns.hashCode());
    result = 31 * result + (this.countries == null ? 0: this.countries.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CreateMMMReportRequest {\n");
    
    sb.append("  reportName: ").append(reportName).append("\n");
    sb.append("  startDate: ").append(startDate).append("\n");
    sb.append("  endDate: ").append(endDate).append("\n");
    sb.append("  granularity: ").append(granularity).append("\n");
    sb.append("  level: ").append(level).append("\n");
    sb.append("  targetingTypes: ").append(targetingTypes).append("\n");
    sb.append("  columns: ").append(columns).append("\n");
    sb.append("  countries: ").append(countries).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
