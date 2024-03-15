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
public class SSIOInsertionOrderStatus {
  
  @SerializedName("pin_order_id")
  private String pinOrderId = null;
  @SerializedName("status")
  private String status = null;
  @SerializedName("creation_time")
  private String creationTime = null;

  /**
   * Salesforce order id
   **/
  @ApiModelProperty(value = "Salesforce order id")
  public String getPinOrderId() {
    return pinOrderId;
  }
  public void setPinOrderId(String pinOrderId) {
    this.pinOrderId = pinOrderId;
  }

  /**
   * Salesforce insertion order status
   **/
  @ApiModelProperty(value = "Salesforce insertion order status")
  public String getStatus() {
    return status;
  }
  public void setStatus(String status) {
    this.status = status;
  }

  /**
   * Salesforce insertion order creation time
   **/
  @ApiModelProperty(value = "Salesforce insertion order creation time")
  public String getCreationTime() {
    return creationTime;
  }
  public void setCreationTime(String creationTime) {
    this.creationTime = creationTime;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SSIOInsertionOrderStatus sSIOInsertionOrderStatus = (SSIOInsertionOrderStatus) o;
    return (this.pinOrderId == null ? sSIOInsertionOrderStatus.pinOrderId == null : this.pinOrderId.equals(sSIOInsertionOrderStatus.pinOrderId)) &&
        (this.status == null ? sSIOInsertionOrderStatus.status == null : this.status.equals(sSIOInsertionOrderStatus.status)) &&
        (this.creationTime == null ? sSIOInsertionOrderStatus.creationTime == null : this.creationTime.equals(sSIOInsertionOrderStatus.creationTime));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.pinOrderId == null ? 0: this.pinOrderId.hashCode());
    result = 31 * result + (this.status == null ? 0: this.status.hashCode());
    result = 31 * result + (this.creationTime == null ? 0: this.creationTime.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class SSIOInsertionOrderStatus {\n");
    
    sb.append("  pinOrderId: ").append(pinOrderId).append("\n");
    sb.append("  status: ").append(status).append("\n");
    sb.append("  creationTime: ").append(creationTime).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
