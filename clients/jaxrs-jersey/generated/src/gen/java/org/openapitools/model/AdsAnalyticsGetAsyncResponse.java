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
import java.math.BigDecimal;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * AdsAnalyticsGetAsyncResponse
 */
@JsonPropertyOrder({
  AdsAnalyticsGetAsyncResponse.JSON_PROPERTY_REPORT_STATUS,
  AdsAnalyticsGetAsyncResponse.JSON_PROPERTY_URL,
  AdsAnalyticsGetAsyncResponse.JSON_PROPERTY_SIZE
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2022-05-07T06:42:01.683468Z[Etc/UTC]")
public class AdsAnalyticsGetAsyncResponse   {
  public static final String JSON_PROPERTY_REPORT_STATUS = "report_status";
  @JsonProperty(JSON_PROPERTY_REPORT_STATUS)
  private String reportStatus;

  public static final String JSON_PROPERTY_URL = "url";
  @JsonProperty(JSON_PROPERTY_URL)
  private String url;

  public static final String JSON_PROPERTY_SIZE = "size";
  @JsonProperty(JSON_PROPERTY_SIZE)
  private BigDecimal size;

  public AdsAnalyticsGetAsyncResponse reportStatus(String reportStatus) {
    this.reportStatus = reportStatus;
    return this;
  }

  /**
   * Get reportStatus
   * @return reportStatus
   **/
  @JsonProperty(value = "report_status")
  @ApiModelProperty(value = "")
  
  public String getReportStatus() {
    return reportStatus;
  }

  public void setReportStatus(String reportStatus) {
    this.reportStatus = reportStatus;
  }

  public AdsAnalyticsGetAsyncResponse url(String url) {
    this.url = url;
    return this;
  }

  /**
   * Get url
   * @return url
   **/
  @JsonProperty(value = "url")
  @ApiModelProperty(value = "")
  
  public String getUrl() {
    return url;
  }

  public void setUrl(String url) {
    this.url = url;
  }

  public AdsAnalyticsGetAsyncResponse size(BigDecimal size) {
    this.size = size;
    return this;
  }

  /**
   * Get size
   * @return size
   **/
  @JsonProperty(value = "size")
  @ApiModelProperty(value = "")
  @Valid 
  public BigDecimal getSize() {
    return size;
  }

  public void setSize(BigDecimal size) {
    this.size = size;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdsAnalyticsGetAsyncResponse adsAnalyticsGetAsyncResponse = (AdsAnalyticsGetAsyncResponse) o;
    return Objects.equals(this.reportStatus, adsAnalyticsGetAsyncResponse.reportStatus) &&
        Objects.equals(this.url, adsAnalyticsGetAsyncResponse.url) &&
        Objects.equals(this.size, adsAnalyticsGetAsyncResponse.size);
  }

  @Override
  public int hashCode() {
    return Objects.hash(reportStatus, url, size);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdsAnalyticsGetAsyncResponse {\n");
    
    sb.append("    reportStatus: ").append(toIndentedString(reportStatus)).append("\n");
    sb.append("    url: ").append(toIndentedString(url)).append("\n");
    sb.append("    size: ").append(toIndentedString(size)).append("\n");
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

