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

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class IntegrationLogsInvalidLogResponseRejectedLogsInner {
  
  @SerializedName("log_index")
  private Integer logIndex = null;
  @SerializedName("field")
  private String field = null;
  @SerializedName("value")
  private String value = null;
  @SerializedName("reason")
  private String reason = null;

  /**
   * Index of the log in the batch.
   **/
  @ApiModelProperty(value = "Index of the log in the batch.")
  public Integer getLogIndex() {
    return logIndex;
  }
  public void setLogIndex(Integer logIndex) {
    this.logIndex = logIndex;
  }

  /**
   * The field name containing an invalid value.
   **/
  @ApiModelProperty(required = true, value = "The field name containing an invalid value.")
  public String getField() {
    return field;
  }
  public void setField(String field) {
    this.field = field;
  }

  /**
   * The value that is invalid.
   **/
  @ApiModelProperty(required = true, value = "The value that is invalid.")
  public String getValue() {
    return value;
  }
  public void setValue(String value) {
    this.value = value;
  }

  /**
   * The reason the value is invalid.
   **/
  @ApiModelProperty(required = true, value = "The reason the value is invalid.")
  public String getReason() {
    return reason;
  }
  public void setReason(String reason) {
    this.reason = reason;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    IntegrationLogsInvalidLogResponseRejectedLogsInner integrationLogsInvalidLogResponseRejectedLogsInner = (IntegrationLogsInvalidLogResponseRejectedLogsInner) o;
    return (this.logIndex == null ? integrationLogsInvalidLogResponseRejectedLogsInner.logIndex == null : this.logIndex.equals(integrationLogsInvalidLogResponseRejectedLogsInner.logIndex)) &&
        (this.field == null ? integrationLogsInvalidLogResponseRejectedLogsInner.field == null : this.field.equals(integrationLogsInvalidLogResponseRejectedLogsInner.field)) &&
        (this.value == null ? integrationLogsInvalidLogResponseRejectedLogsInner.value == null : this.value.equals(integrationLogsInvalidLogResponseRejectedLogsInner.value)) &&
        (this.reason == null ? integrationLogsInvalidLogResponseRejectedLogsInner.reason == null : this.reason.equals(integrationLogsInvalidLogResponseRejectedLogsInner.reason));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.logIndex == null ? 0: this.logIndex.hashCode());
    result = 31 * result + (this.field == null ? 0: this.field.hashCode());
    result = 31 * result + (this.value == null ? 0: this.value.hashCode());
    result = 31 * result + (this.reason == null ? 0: this.reason.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class IntegrationLogsInvalidLogResponseRejectedLogsInner {\n");
    
    sb.append("  logIndex: ").append(logIndex).append("\n");
    sb.append("  field: ").append(field).append("\n");
    sb.append("  value: ").append(value).append("\n");
    sb.append("  reason: ").append(reason).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
