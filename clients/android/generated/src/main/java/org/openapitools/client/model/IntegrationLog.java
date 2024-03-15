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

import org.openapitools.client.model.IntegrationLogClientError;
import org.openapitools.client.model.IntegrationLogClientRequest;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * Schema for log sent from an integration application.
 **/
@ApiModel(description = "Schema for log sent from an integration application.")
public class IntegrationLog {
  
  @SerializedName("client_timestamp")
  private Integer clientTimestamp = null;
  public enum EventTypeEnum {
     APP,  API, 
  };
  @SerializedName("event_type")
  private EventTypeEnum eventType = null;
  public enum LogLevelEnum {
     INFO,  WARN,  ERROR, 
  };
  @SerializedName("log_level")
  private LogLevelEnum logLevel = null;
  @SerializedName("external_business_id")
  private String externalBusinessId = null;
  @SerializedName("advertiser_id")
  private String advertiserId = null;
  @SerializedName("merchant_id")
  private String merchantId = null;
  @SerializedName("tag_id")
  private String tagId = null;
  @SerializedName("feed_profile_id")
  private String feedProfileId = null;
  @SerializedName("message")
  private String message = null;
  @SerializedName("app_version_number")
  private String appVersionNumber = null;
  @SerializedName("platform_version_number")
  private String platformVersionNumber = null;
  @SerializedName("error")
  private IntegrationLogClientError error = null;
  @SerializedName("request")
  private IntegrationLogClientRequest request = null;

  /**
   * Timestamp in milliseconds of when the log was executed at the client.
   **/
  @ApiModelProperty(required = true, value = "Timestamp in milliseconds of when the log was executed at the client.")
  public Integer getClientTimestamp() {
    return clientTimestamp;
  }
  public void setClientTimestamp(Integer clientTimestamp) {
    this.clientTimestamp = clientTimestamp;
  }

  /**
   * Log event type
   **/
  @ApiModelProperty(required = true, value = "Log event type")
  public EventTypeEnum getEventType() {
    return eventType;
  }
  public void setEventType(EventTypeEnum eventType) {
    this.eventType = eventType;
  }

  /**
   * Log level type
   **/
  @ApiModelProperty(required = true, value = "Log level type")
  public LogLevelEnum getLogLevel() {
    return logLevel;
  }
  public void setLogLevel(LogLevelEnum logLevel) {
    this.logLevel = logLevel;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getExternalBusinessId() {
    return externalBusinessId;
  }
  public void setExternalBusinessId(String externalBusinessId) {
    this.externalBusinessId = externalBusinessId;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getAdvertiserId() {
    return advertiserId;
  }
  public void setAdvertiserId(String advertiserId) {
    this.advertiserId = advertiserId;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getMerchantId() {
    return merchantId;
  }
  public void setMerchantId(String merchantId) {
    this.merchantId = merchantId;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getTagId() {
    return tagId;
  }
  public void setTagId(String tagId) {
    this.tagId = tagId;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getFeedProfileId() {
    return feedProfileId;
  }
  public void setFeedProfileId(String feedProfileId) {
    this.feedProfileId = feedProfileId;
  }

  /**
   * Explanation of the event that occured.
   **/
  @ApiModelProperty(value = "Explanation of the event that occured.")
  public String getMessage() {
    return message;
  }
  public void setMessage(String message) {
    this.message = message;
  }

  /**
   * Version number of the integration application.
   **/
  @ApiModelProperty(value = "Version number of the integration application.")
  public String getAppVersionNumber() {
    return appVersionNumber;
  }
  public void setAppVersionNumber(String appVersionNumber) {
    this.appVersionNumber = appVersionNumber;
  }

  /**
   * Version number of the platform the integration application is running on.
   **/
  @ApiModelProperty(value = "Version number of the platform the integration application is running on.")
  public String getPlatformVersionNumber() {
    return platformVersionNumber;
  }
  public void setPlatformVersionNumber(String platformVersionNumber) {
    this.platformVersionNumber = platformVersionNumber;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public IntegrationLogClientError getError() {
    return error;
  }
  public void setError(IntegrationLogClientError error) {
    this.error = error;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public IntegrationLogClientRequest getRequest() {
    return request;
  }
  public void setRequest(IntegrationLogClientRequest request) {
    this.request = request;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    IntegrationLog integrationLog = (IntegrationLog) o;
    return (this.clientTimestamp == null ? integrationLog.clientTimestamp == null : this.clientTimestamp.equals(integrationLog.clientTimestamp)) &&
        (this.eventType == null ? integrationLog.eventType == null : this.eventType.equals(integrationLog.eventType)) &&
        (this.logLevel == null ? integrationLog.logLevel == null : this.logLevel.equals(integrationLog.logLevel)) &&
        (this.externalBusinessId == null ? integrationLog.externalBusinessId == null : this.externalBusinessId.equals(integrationLog.externalBusinessId)) &&
        (this.advertiserId == null ? integrationLog.advertiserId == null : this.advertiserId.equals(integrationLog.advertiserId)) &&
        (this.merchantId == null ? integrationLog.merchantId == null : this.merchantId.equals(integrationLog.merchantId)) &&
        (this.tagId == null ? integrationLog.tagId == null : this.tagId.equals(integrationLog.tagId)) &&
        (this.feedProfileId == null ? integrationLog.feedProfileId == null : this.feedProfileId.equals(integrationLog.feedProfileId)) &&
        (this.message == null ? integrationLog.message == null : this.message.equals(integrationLog.message)) &&
        (this.appVersionNumber == null ? integrationLog.appVersionNumber == null : this.appVersionNumber.equals(integrationLog.appVersionNumber)) &&
        (this.platformVersionNumber == null ? integrationLog.platformVersionNumber == null : this.platformVersionNumber.equals(integrationLog.platformVersionNumber)) &&
        (this.error == null ? integrationLog.error == null : this.error.equals(integrationLog.error)) &&
        (this.request == null ? integrationLog.request == null : this.request.equals(integrationLog.request));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.clientTimestamp == null ? 0: this.clientTimestamp.hashCode());
    result = 31 * result + (this.eventType == null ? 0: this.eventType.hashCode());
    result = 31 * result + (this.logLevel == null ? 0: this.logLevel.hashCode());
    result = 31 * result + (this.externalBusinessId == null ? 0: this.externalBusinessId.hashCode());
    result = 31 * result + (this.advertiserId == null ? 0: this.advertiserId.hashCode());
    result = 31 * result + (this.merchantId == null ? 0: this.merchantId.hashCode());
    result = 31 * result + (this.tagId == null ? 0: this.tagId.hashCode());
    result = 31 * result + (this.feedProfileId == null ? 0: this.feedProfileId.hashCode());
    result = 31 * result + (this.message == null ? 0: this.message.hashCode());
    result = 31 * result + (this.appVersionNumber == null ? 0: this.appVersionNumber.hashCode());
    result = 31 * result + (this.platformVersionNumber == null ? 0: this.platformVersionNumber.hashCode());
    result = 31 * result + (this.error == null ? 0: this.error.hashCode());
    result = 31 * result + (this.request == null ? 0: this.request.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class IntegrationLog {\n");
    
    sb.append("  clientTimestamp: ").append(clientTimestamp).append("\n");
    sb.append("  eventType: ").append(eventType).append("\n");
    sb.append("  logLevel: ").append(logLevel).append("\n");
    sb.append("  externalBusinessId: ").append(externalBusinessId).append("\n");
    sb.append("  advertiserId: ").append(advertiserId).append("\n");
    sb.append("  merchantId: ").append(merchantId).append("\n");
    sb.append("  tagId: ").append(tagId).append("\n");
    sb.append("  feedProfileId: ").append(feedProfileId).append("\n");
    sb.append("  message: ").append(message).append("\n");
    sb.append("  appVersionNumber: ").append(appVersionNumber).append("\n");
    sb.append("  platformVersionNumber: ").append(platformVersionNumber).append("\n");
    sb.append("  error: ").append(error).append("\n");
    sb.append("  request: ").append(request).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
