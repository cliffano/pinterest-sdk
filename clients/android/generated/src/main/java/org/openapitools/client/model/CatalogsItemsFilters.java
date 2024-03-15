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
import org.openapitools.client.model.CatalogsHotelItemsFilter;
import org.openapitools.client.model.CatalogsRetailItemsFilter;
import org.openapitools.client.model.CatalogsType;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class CatalogsItemsFilters {
  
  @SerializedName("catalog_type")
  private CatalogsType catalogType = null;
  @SerializedName("item_ids")
  private List<String> itemIds = null;
  @SerializedName("catalog_id")
  private String catalogId = null;
  @SerializedName("hotel_ids")
  private List<String> hotelIds = null;

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
   **/
  @ApiModelProperty(required = true, value = "")
  public List<String> getItemIds() {
    return itemIds;
  }
  public void setItemIds(List<String> itemIds) {
    this.itemIds = itemIds;
  }

  /**
   * Catalog id pertaining to the hotel item. If not provided, default to oldest hotel catalog
   **/
  @ApiModelProperty(value = "Catalog id pertaining to the hotel item. If not provided, default to oldest hotel catalog")
  public String getCatalogId() {
    return catalogId;
  }
  public void setCatalogId(String catalogId) {
    this.catalogId = catalogId;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public List<String> getHotelIds() {
    return hotelIds;
  }
  public void setHotelIds(List<String> hotelIds) {
    this.hotelIds = hotelIds;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsItemsFilters catalogsItemsFilters = (CatalogsItemsFilters) o;
    return (this.catalogType == null ? catalogsItemsFilters.catalogType == null : this.catalogType.equals(catalogsItemsFilters.catalogType)) &&
        (this.itemIds == null ? catalogsItemsFilters.itemIds == null : this.itemIds.equals(catalogsItemsFilters.itemIds)) &&
        (this.catalogId == null ? catalogsItemsFilters.catalogId == null : this.catalogId.equals(catalogsItemsFilters.catalogId)) &&
        (this.hotelIds == null ? catalogsItemsFilters.hotelIds == null : this.hotelIds.equals(catalogsItemsFilters.hotelIds));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.catalogType == null ? 0: this.catalogType.hashCode());
    result = 31 * result + (this.itemIds == null ? 0: this.itemIds.hashCode());
    result = 31 * result + (this.catalogId == null ? 0: this.catalogId.hashCode());
    result = 31 * result + (this.hotelIds == null ? 0: this.hotelIds.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsItemsFilters {\n");
    
    sb.append("  catalogType: ").append(catalogType).append("\n");
    sb.append("  itemIds: ").append(itemIds).append("\n");
    sb.append("  catalogId: ").append(catalogId).append("\n");
    sb.append("  hotelIds: ").append(hotelIds).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}