package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Object describing an item batch record to discontinue items
 **/

import io.swagger.annotations.*;
import java.util.Objects;


@ApiModel(description = "Object describing an item batch record to discontinue items")
public class ItemDeleteDiscontinuedBatchRecord   {
  
  private String itemId;

  /**
   * The catalog item id in the merchant namespace
   **/
  public ItemDeleteDiscontinuedBatchRecord itemId(String itemId) {
    this.itemId = itemId;
    return this;
  }

  
  @ApiModelProperty(example = "DS0294-M", value = "The catalog item id in the merchant namespace")
  @JsonProperty("item_id")
  public String getItemId() {
    return itemId;
  }
  public void setItemId(String itemId) {
    this.itemId = itemId;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ItemDeleteDiscontinuedBatchRecord itemDeleteDiscontinuedBatchRecord = (ItemDeleteDiscontinuedBatchRecord) o;
    return Objects.equals(this.itemId, itemDeleteDiscontinuedBatchRecord.itemId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(itemId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ItemDeleteDiscontinuedBatchRecord {\n");
    
    sb.append("    itemId: ").append(toIndentedString(itemId)).append("\n");
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

