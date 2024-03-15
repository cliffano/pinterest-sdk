/*
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


package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * SSIOAccountAddress
 */
@JsonPropertyOrder({
  SSIOAccountAddress.JSON_PROPERTY_DISPLAY,
  SSIOAccountAddress.JSON_PROPERTY_PURPOSE,
  SSIOAccountAddress.JSON_PROPERTY_ADDRESS_ID,
  SSIOAccountAddress.JSON_PROPERTY_ORDER_LEGAL_ENTITY
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class SSIOAccountAddress   {
  public static final String JSON_PROPERTY_DISPLAY = "display";
  @JsonProperty(JSON_PROPERTY_DISPLAY)
  private String display;

  public static final String JSON_PROPERTY_PURPOSE = "purpose";
  @JsonProperty(JSON_PROPERTY_PURPOSE)
  private String purpose;

  public static final String JSON_PROPERTY_ADDRESS_ID = "address_id";
  @JsonProperty(JSON_PROPERTY_ADDRESS_ID)
  private String addressId;

  public static final String JSON_PROPERTY_ORDER_LEGAL_ENTITY = "order_legal_entity";
  @JsonProperty(JSON_PROPERTY_ORDER_LEGAL_ENTITY)
  private String orderLegalEntity;

  public SSIOAccountAddress display(String display) {
    this.display = display;
    return this;
  }

  /**
   * Address display
   * @return display
   **/
  @JsonProperty(value = "display")
  @ApiModelProperty(example = "475 Brannan Street, San Francisco, CA 94103", value = "Address display")
  
  public String getDisplay() {
    return display;
  }

  public void setDisplay(String display) {
    this.display = display;
  }

  public SSIOAccountAddress purpose(String purpose) {
    this.purpose = purpose;
    return this;
  }

  /**
   * Purpose for which the address is used, usually Billing or Businness
   * @return purpose
   **/
  @JsonProperty(value = "purpose")
  @ApiModelProperty(example = "Billing", value = "Purpose for which the address is used, usually Billing or Businness")
  
  public String getPurpose() {
    return purpose;
  }

  public void setPurpose(String purpose) {
    this.purpose = purpose;
  }

  public SSIOAccountAddress addressId(String addressId) {
    this.addressId = addressId;
    return this;
  }

  /**
   * Salesforce id for address
   * @return addressId
   **/
  @JsonProperty(value = "address_id")
  @ApiModelProperty(example = "a1C1N000004MUrLUAW", value = "Salesforce id for address")
  
  public String getAddressId() {
    return addressId;
  }

  public void setAddressId(String addressId) {
    this.addressId = addressId;
  }

  public SSIOAccountAddress orderLegalEntity(String orderLegalEntity) {
    this.orderLegalEntity = orderLegalEntity;
    return this;
  }

  /**
   * Legal entity for this insertion order
   * @return orderLegalEntity
   **/
  @JsonProperty(value = "order_legal_entity")
  @ApiModelProperty(example = "PIN US OU", value = "Legal entity for this insertion order")
  
  public String getOrderLegalEntity() {
    return orderLegalEntity;
  }

  public void setOrderLegalEntity(String orderLegalEntity) {
    this.orderLegalEntity = orderLegalEntity;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SSIOAccountAddress ssIOAccountAddress = (SSIOAccountAddress) o;
    return Objects.equals(this.display, ssIOAccountAddress.display) &&
        Objects.equals(this.purpose, ssIOAccountAddress.purpose) &&
        Objects.equals(this.addressId, ssIOAccountAddress.addressId) &&
        Objects.equals(this.orderLegalEntity, ssIOAccountAddress.orderLegalEntity);
  }

  @Override
  public int hashCode() {
    return Objects.hash(display, purpose, addressId, orderLegalEntity);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SSIOAccountAddress {\n");
    
    sb.append("    display: ").append(toIndentedString(display)).append("\n");
    sb.append("    purpose: ").append(toIndentedString(purpose)).append("\n");
    sb.append("    addressId: ").append(toIndentedString(addressId)).append("\n");
    sb.append("    orderLegalEntity: ").append(toIndentedString(orderLegalEntity)).append("\n");
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

