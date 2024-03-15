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

import org.openapitools.client.model.BulkReportingJobStatus;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class AdsAnalyticsCreateAsyncResponse {
  
  @SerializedName("report_status")
  private BulkReportingJobStatus reportStatus = null;
  @SerializedName("token")
  private String token = null;
  @SerializedName("message")
  private String message = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public BulkReportingJobStatus getReportStatus() {
    return reportStatus;
  }
  public void setReportStatus(BulkReportingJobStatus reportStatus) {
    this.reportStatus = reportStatus;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getToken() {
    return token;
  }
  public void setToken(String token) {
    this.token = token;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getMessage() {
    return message;
  }
  public void setMessage(String message) {
    this.message = message;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdsAnalyticsCreateAsyncResponse adsAnalyticsCreateAsyncResponse = (AdsAnalyticsCreateAsyncResponse) o;
    return (this.reportStatus == null ? adsAnalyticsCreateAsyncResponse.reportStatus == null : this.reportStatus.equals(adsAnalyticsCreateAsyncResponse.reportStatus)) &&
        (this.token == null ? adsAnalyticsCreateAsyncResponse.token == null : this.token.equals(adsAnalyticsCreateAsyncResponse.token)) &&
        (this.message == null ? adsAnalyticsCreateAsyncResponse.message == null : this.message.equals(adsAnalyticsCreateAsyncResponse.message));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.reportStatus == null ? 0: this.reportStatus.hashCode());
    result = 31 * result + (this.token == null ? 0: this.token.hashCode());
    result = 31 * result + (this.message == null ? 0: this.message.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdsAnalyticsCreateAsyncResponse {\n");
    
    sb.append("  reportStatus: ").append(reportStatus).append("\n");
    sb.append("  token: ").append(token).append("\n");
    sb.append("  message: ").append(message).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
