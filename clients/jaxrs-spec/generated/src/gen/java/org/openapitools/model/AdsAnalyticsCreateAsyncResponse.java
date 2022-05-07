package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.jackson.nullable.JsonNullable;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonTypeName;



@JsonTypeName("AdsAnalyticsCreateAsyncResponse")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJAXRSSpecServerCodegen", date = "2022-05-07T06:42:49.569940Z[Etc/UTC]")public class AdsAnalyticsCreateAsyncResponse   {
  
  private @Valid String reportStatus;
  private @Valid String token;
  private @Valid String message;

  /**
   **/
  public AdsAnalyticsCreateAsyncResponse reportStatus(String reportStatus) {
    this.reportStatus = reportStatus;
    return this;
  }

  

  
  @ApiModelProperty(value = "")
  @JsonProperty("report_status")
  public String getReportStatus() {
    return reportStatus;
  }

  @JsonProperty("report_status")
  public void setReportStatus(String reportStatus) {
    this.reportStatus = reportStatus;
  }

/**
   **/
  public AdsAnalyticsCreateAsyncResponse token(String token) {
    this.token = token;
    return this;
  }

  

  
  @ApiModelProperty(value = "")
  @JsonProperty("token")
  public String getToken() {
    return token;
  }

  @JsonProperty("token")
  public void setToken(String token) {
    this.token = token;
  }

/**
   **/
  public AdsAnalyticsCreateAsyncResponse message(String message) {
    this.message = message;
    return this;
  }

  

  
  @ApiModelProperty(value = "")
  @JsonProperty("message")
  public String getMessage() {
    return message;
  }

  @JsonProperty("message")
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
    return Objects.equals(this.reportStatus, adsAnalyticsCreateAsyncResponse.reportStatus) &&
        Objects.equals(this.token, adsAnalyticsCreateAsyncResponse.token) &&
        Objects.equals(this.message, adsAnalyticsCreateAsyncResponse.message);
  }

  @Override
  public int hashCode() {
    return Objects.hash(reportStatus, token, message);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdsAnalyticsCreateAsyncResponse {\n");
    
    sb.append("    reportStatus: ").append(toIndentedString(reportStatus)).append("\n");
    sb.append("    token: ").append(toIndentedString(token)).append("\n");
    sb.append("    message: ").append(toIndentedString(message)).append("\n");
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

