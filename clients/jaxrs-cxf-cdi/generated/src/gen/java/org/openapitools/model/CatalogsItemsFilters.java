package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonIgnoreProperties;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonSubTypes;
import com.fasterxml.jackson.annotation.JsonTypeInfo;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.CatalogsHotelItemsFilter;
import org.openapitools.model.CatalogsRetailItemsFilter;
import org.openapitools.model.CatalogsType;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;


@JsonTypeInfo(use = JsonTypeInfo.Id.NAME, include = JsonTypeInfo.As.PROPERTY, property = "catalog_type", visible = true)
@JsonSubTypes({
  @JsonSubTypes.Type(value = CatalogsHotelItemsFilter.class, name = "HOTEL"),
  @JsonSubTypes.Type(value = CatalogsRetailItemsFilter.class, name = "RETAIL"),
})

public class CatalogsItemsFilters   {
  
  private CatalogsType catalogType;

  private List<String> itemIds = new ArrayList<>();

  private String catalogId;

  private List<String> hotelIds = new ArrayList<>();

  /**
   **/
  public CatalogsItemsFilters catalogType(CatalogsType catalogType) {
    this.catalogType = catalogType;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("catalog_type")
  @NotNull
  public CatalogsType getCatalogType() {
    return catalogType;
  }
  public void setCatalogType(CatalogsType catalogType) {
    this.catalogType = catalogType;
  }


  /**
   **/
  public CatalogsItemsFilters itemIds(List<String> itemIds) {
    this.itemIds = itemIds;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("item_ids")
  @NotNull
 @Size(min=1,max=100)  public List<String> getItemIds() {
    return itemIds;
  }
  public void setItemIds(List<String> itemIds) {
    this.itemIds = itemIds;
  }

  public CatalogsItemsFilters addItemIdsItem(String itemIdsItem) {
    if (this.itemIds == null) {
      this.itemIds = new ArrayList<>();
    }
    this.itemIds.add(itemIdsItem);
    return this;
  }


  /**
   * Catalog id pertaining to the hotel item. If not provided, default to oldest hotel catalog
   **/
  public CatalogsItemsFilters catalogId(String catalogId) {
    this.catalogId = catalogId;
    return this;
  }

  
  @ApiModelProperty(value = "Catalog id pertaining to the hotel item. If not provided, default to oldest hotel catalog")
  @JsonProperty("catalog_id")
 @Pattern(regexp="^\\d+$")  public String getCatalogId() {
    return catalogId;
  }
  public void setCatalogId(String catalogId) {
    this.catalogId = catalogId;
  }


  /**
   **/
  public CatalogsItemsFilters hotelIds(List<String> hotelIds) {
    this.hotelIds = hotelIds;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("hotel_ids")
  @NotNull
 @Size(min=1,max=100)  public List<String> getHotelIds() {
    return hotelIds;
  }
  public void setHotelIds(List<String> hotelIds) {
    this.hotelIds = hotelIds;
  }

  public CatalogsItemsFilters addHotelIdsItem(String hotelIdsItem) {
    if (this.hotelIds == null) {
      this.hotelIds = new ArrayList<>();
    }
    this.hotelIds.add(hotelIdsItem);
    return this;
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
    return Objects.equals(this.catalogType, catalogsItemsFilters.catalogType) &&
        Objects.equals(this.itemIds, catalogsItemsFilters.itemIds) &&
        Objects.equals(this.catalogId, catalogsItemsFilters.catalogId) &&
        Objects.equals(this.hotelIds, catalogsItemsFilters.hotelIds);
  }

  @Override
  public int hashCode() {
    return Objects.hash(catalogType, itemIds, catalogId, hotelIds);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsItemsFilters {\n");
    
    sb.append("    catalogType: ").append(toIndentedString(catalogType)).append("\n");
    sb.append("    itemIds: ").append(toIndentedString(itemIds)).append("\n");
    sb.append("    catalogId: ").append(toIndentedString(catalogId)).append("\n");
    sb.append("    hotelIds: ").append(toIndentedString(hotelIds)).append("\n");
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

