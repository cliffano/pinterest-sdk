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

/**
 * Array with metrics, status, and pin id for the requested metric
 **/
@ApiModel(description = "Array with metrics, status, and pin id for the requested metric")
public class TopVideoPinsAnalyticsResponsePinsInner {
  
  @SerializedName("metrics")
  private Map<String, BigDecimal> metrics = null;
  @SerializedName("data_status")
  private Map<String, DataStatus> dataStatus = null;
  @SerializedName("pin_id")
  private String pinId = null;

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

  /**
   **/
  @ApiModelProperty(value = "")
  public Map<String, DataStatus> getDataStatus() {
    return dataStatus;
  }
  public void setDataStatus(Map<String, DataStatus> dataStatus) {
    this.dataStatus = dataStatus;
  }

  /**
   * The pin id
   **/
  @ApiModelProperty(value = "The pin id")
  public String getPinId() {
    return pinId;
  }
  public void setPinId(String pinId) {
    this.pinId = pinId;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TopVideoPinsAnalyticsResponsePinsInner topVideoPinsAnalyticsResponsePinsInner = (TopVideoPinsAnalyticsResponsePinsInner) o;
    return (this.metrics == null ? topVideoPinsAnalyticsResponsePinsInner.metrics == null : this.metrics.equals(topVideoPinsAnalyticsResponsePinsInner.metrics)) &&
        (this.dataStatus == null ? topVideoPinsAnalyticsResponsePinsInner.dataStatus == null : this.dataStatus.equals(topVideoPinsAnalyticsResponsePinsInner.dataStatus)) &&
        (this.pinId == null ? topVideoPinsAnalyticsResponsePinsInner.pinId == null : this.pinId.equals(topVideoPinsAnalyticsResponsePinsInner.pinId));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.metrics == null ? 0: this.metrics.hashCode());
    result = 31 * result + (this.dataStatus == null ? 0: this.dataStatus.hashCode());
    result = 31 * result + (this.pinId == null ? 0: this.pinId.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class TopVideoPinsAnalyticsResponsePinsInner {\n");
    
    sb.append("  metrics: ").append(metrics).append("\n");
    sb.append("  dataStatus: ").append(dataStatus).append("\n");
    sb.append("  pinId: ").append(pinId).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}