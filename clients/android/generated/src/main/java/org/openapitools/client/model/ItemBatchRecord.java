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

import java.util.*;
import org.openapitools.client.model.ItemAttributes;
import org.openapitools.client.model.ItemCreateBatchRecord;
import org.openapitools.client.model.ItemDeleteBatchRecord;
import org.openapitools.client.model.ItemDeleteDiscontinuedBatchRecord;
import org.openapitools.client.model.ItemUpdateBatchRecord;
import org.openapitools.client.model.ItemUpsertBatchRecord;
import org.openapitools.client.model.UpdateMaskFieldType;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * Object describing an item batch record
 **/
@ApiModel(description = "Object describing an item batch record")
public class ItemBatchRecord {
  
  @SerializedName("item_id")
  private String itemId = null;
  @SerializedName("attributes")
  private ItemAttributes attributes = null;
  @SerializedName("update_mask")
  private List<UpdateMaskFieldType> updateMask = null;

  /**
   * The catalog item id in the merchant namespace
   **/
  @ApiModelProperty(value = "The catalog item id in the merchant namespace")
  public String getItemId() {
    return itemId;
  }
  public void setItemId(String itemId) {
    this.itemId = itemId;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ItemAttributes getAttributes() {
    return attributes;
  }
  public void setAttributes(ItemAttributes attributes) {
    this.attributes = attributes;
  }

  /**
   * The list of product attributes to be updated. Attributes specified in the update mask without a value specified in the body will be deleted from the product item.
   **/
  @ApiModelProperty(value = "The list of product attributes to be updated. Attributes specified in the update mask without a value specified in the body will be deleted from the product item.")
  public List<UpdateMaskFieldType> getUpdateMask() {
    return updateMask;
  }
  public void setUpdateMask(List<UpdateMaskFieldType> updateMask) {
    this.updateMask = updateMask;
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
    return (this.itemId == null ? itemBatchRecord.itemId == null : this.itemId.equals(itemBatchRecord.itemId)) &&
        (this.attributes == null ? itemBatchRecord.attributes == null : this.attributes.equals(itemBatchRecord.attributes)) &&
        (this.updateMask == null ? itemBatchRecord.updateMask == null : this.updateMask.equals(itemBatchRecord.updateMask));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.itemId == null ? 0: this.itemId.hashCode());
    result = 31 * result + (this.attributes == null ? 0: this.attributes.hashCode());
    result = 31 * result + (this.updateMask == null ? 0: this.updateMask.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ItemBatchRecord {\n");
    
    sb.append("  itemId: ").append(itemId).append("\n");
    sb.append("  attributes: ").append(attributes).append("\n");
    sb.append("  updateMask: ").append(updateMask).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
