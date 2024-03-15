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
import org.openapitools.client.model.CatalogsHotelAttributes;
import org.openapitools.client.model.CatalogsHotelItemResponse;
import org.openapitools.client.model.CatalogsRetailItemResponse;
import org.openapitools.client.model.CatalogsType;
import org.openapitools.client.model.Pin;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ItemResponseAnyOf {
  
  @SerializedName("catalog_type")
  private CatalogsType catalogType = null;
  @SerializedName("item_id")
  private String itemId = null;
  @SerializedName("pins")
  private List<Pin> pins = null;
  @SerializedName("attributes")
  private CatalogsHotelAttributes attributes = null;
  @SerializedName("hotel_id")
  private String hotelId = null;

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
   * The catalog retail item id in the merchant namespace
   **/
  @ApiModelProperty(value = "The catalog retail item id in the merchant namespace")
  public String getItemId() {
    return itemId;
  }
  public void setItemId(String itemId) {
    this.itemId = itemId;
  }

  /**
   * The pins mapped to the item
   **/
  @ApiModelProperty(value = "The pins mapped to the item")
  public List<Pin> getPins() {
    return pins;
  }
  public void setPins(List<Pin> pins) {
    this.pins = pins;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public CatalogsHotelAttributes getAttributes() {
    return attributes;
  }
  public void setAttributes(CatalogsHotelAttributes attributes) {
    this.attributes = attributes;
  }

  /**
   * The catalog hotel id in the merchant namespace
   **/
  @ApiModelProperty(value = "The catalog hotel id in the merchant namespace")
  public String getHotelId() {
    return hotelId;
  }
  public void setHotelId(String hotelId) {
    this.hotelId = hotelId;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ItemResponseAnyOf itemResponseAnyOf = (ItemResponseAnyOf) o;
    return (this.catalogType == null ? itemResponseAnyOf.catalogType == null : this.catalogType.equals(itemResponseAnyOf.catalogType)) &&
        (this.itemId == null ? itemResponseAnyOf.itemId == null : this.itemId.equals(itemResponseAnyOf.itemId)) &&
        (this.pins == null ? itemResponseAnyOf.pins == null : this.pins.equals(itemResponseAnyOf.pins)) &&
        (this.attributes == null ? itemResponseAnyOf.attributes == null : this.attributes.equals(itemResponseAnyOf.attributes)) &&
        (this.hotelId == null ? itemResponseAnyOf.hotelId == null : this.hotelId.equals(itemResponseAnyOf.hotelId));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.catalogType == null ? 0: this.catalogType.hashCode());
    result = 31 * result + (this.itemId == null ? 0: this.itemId.hashCode());
    result = 31 * result + (this.pins == null ? 0: this.pins.hashCode());
    result = 31 * result + (this.attributes == null ? 0: this.attributes.hashCode());
    result = 31 * result + (this.hotelId == null ? 0: this.hotelId.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ItemResponseAnyOf {\n");
    
    sb.append("  catalogType: ").append(catalogType).append("\n");
    sb.append("  itemId: ").append(itemId).append("\n");
    sb.append("  pins: ").append(pins).append("\n");
    sb.append("  attributes: ").append(attributes).append("\n");
    sb.append("  hotelId: ").append(hotelId).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
