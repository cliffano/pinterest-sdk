package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonIgnoreProperties;
import com.fasterxml.jackson.annotation.JsonSubTypes;
import com.fasterxml.jackson.annotation.JsonTypeInfo;
import com.fasterxml.jackson.annotation.JsonTypeName;
import com.fasterxml.jackson.annotation.JsonValue;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.CatalogsHotelItemErrorResponse;
import org.openapitools.model.CatalogsRetailItemErrorResponse;
import org.openapitools.model.CatalogsType;
import org.openapitools.model.ItemValidationEvent;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

@JsonTypeInfo(use = JsonTypeInfo.Id.NAME, include = JsonTypeInfo.As.PROPERTY, property = "catalog_type", visible = true)
@JsonSubTypes({
  @JsonSubTypes.Type(value = CatalogsHotelItemErrorResponse.class, name = "HOTEL"),
  @JsonSubTypes.Type(value = CatalogsRetailItemErrorResponse.class, name = "RETAIL"),
})

public class ItemResponseAnyOf1  {
  
  @ApiModelProperty(required = true, value = "")
  @Valid
  private CatalogsType catalogType;

  @ApiModelProperty(example = "DS0294-M", value = "The catalog item id in the merchant namespace")
 /**
   * The catalog item id in the merchant namespace
  **/
  private String itemId;

  @ApiModelProperty(value = "Array with the errors for the item id requested")
  @Valid
 /**
   * Array with the errors for the item id requested
  **/
  private List<@Valid ItemValidationEvent> errors;

  @ApiModelProperty(example = "DS0294-M", value = "The catalog hotel id in the merchant namespace")
 /**
   * The catalog hotel id in the merchant namespace
  **/
  private String hotelId;
 /**
   * Get catalogType
   * @return catalogType
  **/
  @JsonProperty("catalog_type")
  @NotNull
  public CatalogsType getCatalogType() {
    return catalogType;
  }

  public void setCatalogType(CatalogsType catalogType) {
    this.catalogType = catalogType;
  }

  public ItemResponseAnyOf1 catalogType(CatalogsType catalogType) {
    this.catalogType = catalogType;
    return this;
  }

 /**
   * The catalog item id in the merchant namespace
   * @return itemId
  **/
  @JsonProperty("item_id")
  public String getItemId() {
    return itemId;
  }

  public void setItemId(String itemId) {
    this.itemId = itemId;
  }

  public ItemResponseAnyOf1 itemId(String itemId) {
    this.itemId = itemId;
    return this;
  }

 /**
   * Array with the errors for the item id requested
   * @return errors
  **/
  @JsonProperty("errors")
  public List<@Valid ItemValidationEvent> getErrors() {
    return errors;
  }

  public void setErrors(List<@Valid ItemValidationEvent> errors) {
    this.errors = errors;
  }

  public ItemResponseAnyOf1 errors(List<@Valid ItemValidationEvent> errors) {
    this.errors = errors;
    return this;
  }

  public ItemResponseAnyOf1 addErrorsItem(ItemValidationEvent errorsItem) {
    this.errors.add(errorsItem);
    return this;
  }

 /**
   * The catalog hotel id in the merchant namespace
   * @return hotelId
  **/
  @JsonProperty("hotel_id")
  public String getHotelId() {
    return hotelId;
  }

  public void setHotelId(String hotelId) {
    this.hotelId = hotelId;
  }

  public ItemResponseAnyOf1 hotelId(String hotelId) {
    this.hotelId = hotelId;
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
    ItemResponseAnyOf1 itemResponseAnyOf1 = (ItemResponseAnyOf1) o;
    return Objects.equals(this.catalogType, itemResponseAnyOf1.catalogType) &&
        Objects.equals(this.itemId, itemResponseAnyOf1.itemId) &&
        Objects.equals(this.errors, itemResponseAnyOf1.errors) &&
        Objects.equals(this.hotelId, itemResponseAnyOf1.hotelId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(catalogType, itemId, errors, hotelId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ItemResponseAnyOf1 {\n");
    
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

