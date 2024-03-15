package org.openapitools.vertxweb.server.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.vertxweb.server.model.CatalogsHotelAttributes;
import org.openapitools.vertxweb.server.model.CatalogsType;
import org.openapitools.vertxweb.server.model.ItemResponseAnyOf;
import org.openapitools.vertxweb.server.model.ItemResponseAnyOf1;
import org.openapitools.vertxweb.server.model.ItemValidationEvent;
import org.openapitools.vertxweb.server.model.Pin;

/**
 * Object describing an item record
 **/
@JsonInclude(JsonInclude.Include.NON_NULL)
public class ItemResponse   {
  
  private CatalogsType catalogType;
  private String itemId;
  private List<ItemValidationEvent> errors;
  private String hotelId;

  public ItemResponse () {

  }

  public ItemResponse (CatalogsType catalogType, String itemId, List<ItemValidationEvent> errors, String hotelId) {
    this.catalogType = catalogType;
    this.itemId = itemId;
    this.errors = errors;
    this.hotelId = hotelId;
  }

    
  @JsonProperty("catalog_type")
  public CatalogsType getCatalogType() {
    return catalogType;
  }
  public void setCatalogType(CatalogsType catalogType) {
    this.catalogType = catalogType;
  }

    
  @JsonProperty("item_id")
  public String getItemId() {
    return itemId;
  }
  public void setItemId(String itemId) {
    this.itemId = itemId;
  }

    
  @JsonProperty("errors")
  public List<ItemValidationEvent> getErrors() {
    return errors;
  }
  public void setErrors(List<ItemValidationEvent> errors) {
    this.errors = errors;
  }

    
  @JsonProperty("hotel_id")
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
    ItemResponse itemResponse = (ItemResponse) o;
    return Objects.equals(catalogType, itemResponse.catalogType) &&
        Objects.equals(itemId, itemResponse.itemId) &&
        Objects.equals(errors, itemResponse.errors) &&
        Objects.equals(hotelId, itemResponse.hotelId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(catalogType, itemId, errors, hotelId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ItemResponse {\n");
    
    sb.append("    catalogType: ").append(toIndentedString(catalogType)).append("\n");
    sb.append("    itemId: ").append(toIndentedString(itemId)).append("\n");
    sb.append("    errors: ").append(toIndentedString(errors)).append("\n");
    sb.append("    hotelId: ").append(toIndentedString(hotelId)).append("\n");
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
