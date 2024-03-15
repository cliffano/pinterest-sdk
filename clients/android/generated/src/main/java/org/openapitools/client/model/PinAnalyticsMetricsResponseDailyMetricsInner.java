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

import java.math.BigDecimal;
import java.util.Map;
import org.openapitools.client.model.DataStatus;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class PinAnalyticsMetricsResponseDailyMetricsInner {
  
  @SerializedName("data_status")
  private DataStatus dataStatus = null;
  @SerializedName("date")
  private String date = null;
  @SerializedName("metrics")
  private Map<String, BigDecimal> metrics = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public DataStatus getDataStatus() {
    return dataStatus;
  }
  public void setDataStatus(DataStatus dataStatus) {
    this.dataStatus = dataStatus;
  }

  /**
   * Metrics date (UTC): YYYY-MM-DD.
   **/
  @ApiModelProperty(value = "Metrics date (UTC): YYYY-MM-DD.")
  public String getDate() {
    return date;
  }
  public void setDate(String date) {
    this.date = date;
  }

  /**
   * The metric name and daily value for each requested metric
   **/
  @ApiModelProperty(value = "The metric name and daily value for each requested metric")
  public Map<String, BigDecimal> getMetrics() {
    return metrics;
  }
  public void setMetrics(Map<String, BigDecimal> metrics) {
    this.metrics = metrics;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PinAnalyticsMetricsResponseDailyMetricsInner pinAnalyticsMetricsResponseDailyMetricsInner = (PinAnalyticsMetricsResponseDailyMetricsInner) o;
    return (this.dataStatus == null ? pinAnalyticsMetricsResponseDailyMetricsInner.dataStatus == null : this.dataStatus.equals(pinAnalyticsMetricsResponseDailyMetricsInner.dataStatus)) &&
        (this.date == null ? pinAnalyticsMetricsResponseDailyMetricsInner.date == null : this.date.equals(pinAnalyticsMetricsResponseDailyMetricsInner.date)) &&
        (this.metrics == null ? pinAnalyticsMetricsResponseDailyMetricsInner.metrics == null : this.metrics.equals(pinAnalyticsMetricsResponseDailyMetricsInner.metrics));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.dataStatus == null ? 0: this.dataStatus.hashCode());
    result = 31 * result + (this.date == null ? 0: this.date.hashCode());
    result = 31 * result + (this.metrics == null ? 0: this.metrics.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class PinAnalyticsMetricsResponseDailyMetricsInner {\n");
    
    sb.append("  dataStatus: ").append(dataStatus).append("\n");
    sb.append("  date: ").append(date).append("\n");
    sb.append("  metrics: ").append(metrics).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}