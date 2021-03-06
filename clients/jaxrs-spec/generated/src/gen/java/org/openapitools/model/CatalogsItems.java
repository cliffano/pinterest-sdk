package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.ItemBatchRecord;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonTypeName;

/**
 * Response object of catalogs items
 **/
@ApiModel(description = "Response object of catalogs items")
@JsonTypeName("CatalogsItems")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJAXRSSpecServerCodegen", date = "2022-07-01T12:01:13.464712Z[Etc/UTC]")public class CatalogsItems   {
  
  private @Valid List<ItemBatchRecord> items = new ArrayList<ItemBatchRecord>();

  /**
   * Array with catalogs items
   **/
  public CatalogsItems items(List<ItemBatchRecord> items) {
    this.items = items;
    return this;
  }

  

  
  @ApiModelProperty(value = "Array with catalogs items")
  @JsonProperty("items")
  public List<ItemBatchRecord> getItems() {
    return items;
  }

  @JsonProperty("items")
  public void setItems(List<ItemBatchRecord> items) {
    this.items = items;
  }

  public CatalogsItems addItemsItem(ItemBatchRecord itemsItem) {
    if (this.items == null) {
      this.items = new ArrayList<ItemBatchRecord>();
    }

    this.items.add(itemsItem);
    return this;
  }

  public CatalogsItems removeItemsItem(ItemBatchRecord itemsItem) {
    if (itemsItem != null && this.items != null) {
      this.items.remove(itemsItem);
    }

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
    CatalogsItems catalogsItems = (CatalogsItems) o;
    return Objects.equals(this.items, catalogsItems.items);
  }

  @Override
  public int hashCode() {
    return Objects.hash(items);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsItems {\n");
    
    sb.append("    items: ").append(toIndentedString(items)).append("\n");
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

