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
import org.openapitools.client.model.CatalogsType;
import org.openapitools.client.model.ItemValidationEvent;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * Object describing a retail item error
 **/
@ApiModel(description = "Object describing a retail item error")
public class CatalogsRetailItemErrorResponse {
  
  @SerializedName("catalog_type")
  private CatalogsType catalogType = null;
  @SerializedName("item_id")
  private String itemId = null;
  @SerializedName("errors")
  private List<ItemValidationEvent> errors = null;

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public CatalogsType getCatalogType() {
    return catalogType;
  }
  public void setCatalogType(CatalogsType catalogType) {
    this.catalogType = catalogType;
  }

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
   * Array with the errors for the item id requested
   **/
  @ApiModelProperty(value = "Array with the errors for the item id requested")
  public List<ItemValidationEvent> getErrors() {
    return errors;
  }
  public void setErrors(List<ItemValidationEvent> errors) {
    this.errors = errors;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsRetailItemErrorResponse catalogsRetailItemErrorResponse = (CatalogsRetailItemErrorResponse) o;
    return (this.catalogType == null ? catalogsRetailItemErrorResponse.catalogType == null : this.catalogType.equals(catalogsRetailItemErrorResponse.catalogType)) &&
        (this.itemId == null ? catalogsRetailItemErrorResponse.itemId == null : this.itemId.equals(catalogsRetailItemErrorResponse.itemId)) &&
        (this.errors == null ? catalogsRetailItemErrorResponse.errors == null : this.errors.equals(catalogsRetailItemErrorResponse.errors));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.catalogType == null ? 0: this.catalogType.hashCode());
    result = 31 * result + (this.itemId == null ? 0: this.itemId.hashCode());
    result = 31 * result + (this.errors == null ? 0: this.errors.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsRetailItemErrorResponse {\n");
    
    sb.append("  catalogType: ").append(catalogType).append("\n");
    sb.append("  itemId: ").append(itemId).append("\n");
    sb.append("  errors: ").append(errors).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
