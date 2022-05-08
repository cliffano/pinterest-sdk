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


package com.cliffano.pinterestsdk.model;

import java.util.Objects;
import java.util.Arrays;
import com.cliffano.pinterestsdk.model.DataOutputFormat;
import com.cliffano.pinterestsdk.model.MetricsReportingLevel;
import com.cliffano.pinterestsdk.model.ReportingColumnAsync;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

/**
 * AdsAnalyticsCreateAsyncRequestAllOf1
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2022-05-08T00:26:51.345731Z[Etc/UTC]")
public class AdsAnalyticsCreateAsyncRequestAllOf1 {
  public static final String SERIALIZED_NAME_COLUMNS = "columns";
  @SerializedName(SERIALIZED_NAME_COLUMNS)
  private List<ReportingColumnAsync> columns = new ArrayList<ReportingColumnAsync>();

  public static final String SERIALIZED_NAME_LEVEL = "level";
  @SerializedName(SERIALIZED_NAME_LEVEL)
  private MetricsReportingLevel level;

  public static final String SERIALIZED_NAME_REPORT_FORMAT = "report_format";
  @SerializedName(SERIALIZED_NAME_REPORT_FORMAT)
  private DataOutputFormat reportFormat = "JSON";

  public AdsAnalyticsCreateAsyncRequestAllOf1() { 
  }

  public AdsAnalyticsCreateAsyncRequestAllOf1 columns(List<ReportingColumnAsync> columns) {
    
    this.columns = columns;
    return this;
  }

  public AdsAnalyticsCreateAsyncRequestAllOf1 addColumnsItem(ReportingColumnAsync columnsItem) {
    this.columns.add(columnsItem);
    return this;
  }

   /**
   * Metric and entity columns
   * @return columns
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(required = true, value = "Metric and entity columns")

  public List<ReportingColumnAsync> getColumns() {
    return columns;
  }


  public void setColumns(List<ReportingColumnAsync> columns) {
    this.columns = columns;
  }


  public AdsAnalyticsCreateAsyncRequestAllOf1 level(MetricsReportingLevel level) {
    
    this.level = level;
    return this;
  }

   /**
   * Level of the report
   * @return level
  **/
  @javax.annotation.Nonnull
  @ApiModelProperty(example = "CAMPAIGN", required = true, value = "Level of the report")

  public MetricsReportingLevel getLevel() {
    return level;
  }


  public void setLevel(MetricsReportingLevel level) {
    this.level = level;
  }


  public AdsAnalyticsCreateAsyncRequestAllOf1 reportFormat(DataOutputFormat reportFormat) {
    
    this.reportFormat = reportFormat;
    return this;
  }

   /**
   * Specification for formatting report data
   * @return reportFormat
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "Specification for formatting report data")

  public DataOutputFormat getReportFormat() {
    return reportFormat;
  }


  public void setReportFormat(DataOutputFormat reportFormat) {
    this.reportFormat = reportFormat;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdsAnalyticsCreateAsyncRequestAllOf1 adsAnalyticsCreateAsyncRequestAllOf1 = (AdsAnalyticsCreateAsyncRequestAllOf1) o;
    return Objects.equals(this.columns, adsAnalyticsCreateAsyncRequestAllOf1.columns) &&
        Objects.equals(this.level, adsAnalyticsCreateAsyncRequestAllOf1.level) &&
        Objects.equals(this.reportFormat, adsAnalyticsCreateAsyncRequestAllOf1.reportFormat);
  }

  @Override
  public int hashCode() {
    return Objects.hash(columns, level, reportFormat);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdsAnalyticsCreateAsyncRequestAllOf1 {\n");
    sb.append("    columns: ").append(toIndentedString(columns)).append("\n");
    sb.append("    level: ").append(toIndentedString(level)).append("\n");
    sb.append("    reportFormat: ").append(toIndentedString(reportFormat)).append("\n");
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

