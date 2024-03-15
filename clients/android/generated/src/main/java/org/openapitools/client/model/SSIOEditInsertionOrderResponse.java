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
public class SSIOEditInsertionOrderResponse {
  
  @SerializedName("pin_order_id")
  private String pinOrderId = null;

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


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SSIOEditInsertionOrderResponse sSIOEditInsertionOrderResponse = (SSIOEditInsertionOrderResponse) o;
    return (this.pinOrderId == null ? sSIOEditInsertionOrderResponse.pinOrderId == null : this.pinOrderId.equals(sSIOEditInsertionOrderResponse.pinOrderId));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.pinOrderId == null ? 0: this.pinOrderId.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class SSIOEditInsertionOrderResponse {\n");
    
    sb.append("  pinOrderId: ").append(pinOrderId).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
