/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
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
import org.openapitools.model.ItemAttributes;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Object describing an item batch record
 */
@ApiModel(description = "Object describing an item batch record")
@JsonPropertyOrder({
  ItemBatchRecord.JSON_PROPERTY_ITEM_ID,
  ItemBatchRecord.JSON_PROPERTY_ATTRIBUTES
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2022-07-01T12:00:52.037403Z[Etc/UTC]")
public class ItemBatchRecord   {
  public static final String JSON_PROPERTY_ITEM_ID = "item_id";
  @JsonProperty(JSON_PROPERTY_ITEM_ID)
  private String itemId;

  public static final String JSON_PROPERTY_ATTRIBUTES = "attributes";
  @JsonProperty(JSON_PROPERTY_ATTRIBUTES)
  private ItemAttributes attributes;

  public ItemBatchRecord itemId(String itemId) {
    this.itemId = itemId;
    return this;
  }

  /**
   * The catalog item id in the merchant namespace
   * @return itemId
   **/
  @JsonProperty(value = "item_id")
  @ApiModelProperty(example = "DS0294-M", value = "The catalog item id in the merchant namespace")
  
  public String getItemId() {
    return itemId;
  }

  public void setItemId(String itemId) {
    this.itemId = itemId;
  }

  public ItemBatchRecord attributes(ItemAttributes attributes) {
    this.attributes = attributes;
    return this;
  }

  /**
   * Get attributes
   * @return attributes
   **/
  @JsonProperty(value = "attributes")
  @ApiModelProperty(value = "")
  @Valid 
  public ItemAttributes getAttributes() {
    return attributes;
  }

  public void setAttributes(ItemAttributes attributes) {
    this.attributes = attributes;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ItemBatchRecord itemBatchRecord = (ItemBatchRecord) o;
    return Objects.equals(this.itemId, itemBatchRecord.itemId) &&
        Objects.equals(this.attributes, itemBatchRecord.attributes);
  }

  @Override
  public int hashCode() {
    return Objects.hash(itemId, attributes);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ItemBatchRecord {\n");
    
    sb.append("    itemId: ").append(toIndentedString(itemId)).append("\n");
    sb.append("    attributes: ").append(toIndentedString(attributes)).append("\n");
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

