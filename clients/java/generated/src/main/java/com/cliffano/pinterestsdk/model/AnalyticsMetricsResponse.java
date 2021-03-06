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
import com.cliffano.pinterestsdk.model.AnalyticsMetricsResponseDailyMetrics;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * AnalyticsMetricsResponse
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2022-07-01T11:59:02.167556Z[Etc/UTC]")
public class AnalyticsMetricsResponse {
  public static final String SERIALIZED_NAME_DAILY_METRICS = "daily_metrics";
  @SerializedName(SERIALIZED_NAME_DAILY_METRICS)
  private List<AnalyticsMetricsResponseDailyMetrics> dailyMetrics = null;

  public static final String SERIALIZED_NAME_SUMMARY_METRICS = "summary_metrics";
  @SerializedName(SERIALIZED_NAME_SUMMARY_METRICS)
  private Map<String, BigDecimal> summaryMetrics = null;

  public AnalyticsMetricsResponse() { 
  }

  public AnalyticsMetricsResponse dailyMetrics(List<AnalyticsMetricsResponseDailyMetrics> dailyMetrics) {
    
    this.dailyMetrics = dailyMetrics;
    return this;
  }

  public AnalyticsMetricsResponse addDailyMetricsItem(AnalyticsMetricsResponseDailyMetrics dailyMetricsItem) {
    if (this.dailyMetrics == null) {
      this.dailyMetrics = new ArrayList<AnalyticsMetricsResponseDailyMetrics>();
    }
    this.dailyMetrics.add(dailyMetricsItem);
    return this;
  }

   /**
   * Array with the requested daily metric records
   * @return dailyMetrics
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "Array with the requested daily metric records")

  public List<AnalyticsMetricsResponseDailyMetrics> getDailyMetrics() {
    return dailyMetrics;
  }


  public void setDailyMetrics(List<AnalyticsMetricsResponseDailyMetrics> dailyMetrics) {
    this.dailyMetrics = dailyMetrics;
  }


  public AnalyticsMetricsResponse summaryMetrics(Map<String, BigDecimal> summaryMetrics) {
    
    this.summaryMetrics = summaryMetrics;
    return this;
  }

  public AnalyticsMetricsResponse putSummaryMetricsItem(String key, BigDecimal summaryMetricsItem) {
    if (this.summaryMetrics == null) {
      this.summaryMetrics = new HashMap<String, BigDecimal>();
    }
    this.summaryMetrics.put(key, summaryMetricsItem);
    return this;
  }

   /**
   * The metric name and value over the requested period for each requested metric
   * @return summaryMetrics
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "{\"ENGAGEMENT\":100,\"CLICKTHROUGH_RATE\":0.2,\"CLICKTHROUGH\":200,\"CLOSEUP\":37,\"CLOSEUP_RATE\":0.5,\"ENGAGEMENT_RATE\":0.2,\"SAVE\":20,\"SAVE_RATE\":0.18,\"IMPRESSION\":240}", value = "The metric name and value over the requested period for each requested metric")

  public Map<String, BigDecimal> getSummaryMetrics() {
    return summaryMetrics;
  }


  public void setSummaryMetrics(Map<String, BigDecimal> summaryMetrics) {
    this.summaryMetrics = summaryMetrics;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AnalyticsMetricsResponse analyticsMetricsResponse = (AnalyticsMetricsResponse) o;
    return Objects.equals(this.dailyMetrics, analyticsMetricsResponse.dailyMetrics) &&
        Objects.equals(this.summaryMetrics, analyticsMetricsResponse.summaryMetrics);
  }

  @Override
  public int hashCode() {
    return Objects.hash(dailyMetrics, summaryMetrics);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AnalyticsMetricsResponse {\n");
    sb.append("    dailyMetrics: ").append(toIndentedString(dailyMetrics)).append("\n");
    sb.append("    summaryMetrics: ").append(toIndentedString(summaryMetrics)).append("\n");
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

