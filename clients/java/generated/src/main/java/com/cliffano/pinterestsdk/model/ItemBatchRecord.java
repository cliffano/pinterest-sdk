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


package com.cliffano.pinterestsdk.model;

import java.util.Objects;
import java.util.Arrays;
import com.cliffano.pinterestsdk.model.ItemAttributes;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * Object describing an item batch record
 */
@ApiModel(description = "Object describing an item batch record")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2022-07-01T11:59:02.167556Z[Etc/UTC]")
public class ItemBatchRecord {
  public static final String SERIALIZED_NAME_ITEM_ID = "item_id";
  @SerializedName(SERIALIZED_NAME_ITEM_ID)
  private String itemId;

  public static final String SERIALIZED_NAME_ATTRIBUTES = "attributes";
  @SerializedName(SERIALIZED_NAME_ATTRIBUTES)
  private ItemAttributes attributes;

  public ItemBatchRecord() { 
  }

  public ItemBatchRecord itemId(String itemId) {
    
    this.itemId = itemId;
    return this;
  }

   /**
   * The catalog item id in the merchant namespace
   * @return itemId
  **/
  @javax.annotation.Nullable
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
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

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

