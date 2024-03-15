/*
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


package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.CatalogsHotelBatchItem;
import org.openapitools.model.CatalogsType;
import org.openapitools.model.Country;
import org.openapitools.model.Language;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Request object to update catalogs hotel items
 */
@ApiModel(description = "Request object to update catalogs hotel items")
@JsonPropertyOrder({
  CatalogsHotelBatchRequest.JSON_PROPERTY_CATALOG_TYPE,
  CatalogsHotelBatchRequest.JSON_PROPERTY_COUNTRY,
  CatalogsHotelBatchRequest.JSON_PROPERTY_LANGUAGE,
  CatalogsHotelBatchRequest.JSON_PROPERTY_ITEMS,
  CatalogsHotelBatchRequest.JSON_PROPERTY_CATALOG_ID
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class CatalogsHotelBatchRequest   {
  public static final String JSON_PROPERTY_CATALOG_TYPE = "catalog_type";
  @JsonProperty(JSON_PROPERTY_CATALOG_TYPE)
  private CatalogsType catalogType;

  public static final String JSON_PROPERTY_COUNTRY = "country";
  @JsonProperty(JSON_PROPERTY_COUNTRY)
  private Country country;

  public static final String JSON_PROPERTY_LANGUAGE = "language";
  @JsonProperty(JSON_PROPERTY_LANGUAGE)
  private Language language;

  public static final String JSON_PROPERTY_ITEMS = "items";
  @JsonProperty(JSON_PROPERTY_ITEMS)
  private List<@Valid CatalogsHotelBatchItem> items = new ArrayList<>();

  public static final String JSON_PROPERTY_CATALOG_ID = "catalog_id";
  @JsonProperty(JSON_PROPERTY_CATALOG_ID)
  private String catalogId;

  public CatalogsHotelBatchRequest catalogType(CatalogsType catalogType) {
    this.catalogType = catalogType;
    return this;
  }

  /**
   * Get catalogType
   * @return catalogType
   **/
  @JsonProperty(value = "catalog_type")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public CatalogsType getCatalogType() {
    return catalogType;
  }

  public void setCatalogType(CatalogsType catalogType) {
    this.catalogType = catalogType;
  }

  public CatalogsHotelBatchRequest country(Country country) {
    this.country = country;
    return this;
  }

  /**
   * Get country
   * @return country
   **/
  @JsonProperty(value = "country")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public Country getCountry() {
    return country;
  }

  public void setCountry(Country country) {
    this.country = country;
  }

  public CatalogsHotelBatchRequest language(Language language) {
    this.language = language;
    return this;
  }

  /**
   * Get language
   * @return language
   **/
  @JsonProperty(value = "language")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public Language getLanguage() {
    return language;
  }

  public void setLanguage(Language language) {
    this.language = language;
  }

  public CatalogsHotelBatchRequest items(List<@Valid CatalogsHotelBatchItem> items) {
    this.items = items;
    return this;
  }

  public CatalogsHotelBatchRequest addItemsItem(CatalogsHotelBatchItem itemsItem) {
    if (this.items == null) {
      this.items = new ArrayList<>();
    }
    this.items.add(itemsItem);
    return this;
  }

  /**
   * Array with catalogs item operations
   * @return items
   **/
  @JsonProperty(value = "items")
  @ApiModelProperty(required = true, value = "Array with catalogs item operations")
  @NotNull @Valid  @Size(min=1,max=1000)
  public List<@Valid CatalogsHotelBatchItem> getItems() {
    return items;
  }

  public void setItems(List<@Valid CatalogsHotelBatchItem> items) {
    this.items = items;
  }

  public CatalogsHotelBatchRequest catalogId(String catalogId) {
    this.catalogId = catalogId;
    return this;
  }

  /**
   * Catalog id pertaining to the hotel item. If not provided, default to oldest hotel catalog
   * @return catalogId
   **/
  @JsonProperty(value = "catalog_id")
  @ApiModelProperty(example = "2680059592705", value = "Catalog id pertaining to the hotel item. If not provided, default to oldest hotel catalog")
   @Pattern(regexp="^\\d+$")
  public String getCatalogId() {
    return catalogId;
  }

  public void setCatalogId(String catalogId) {
    this.catalogId = catalogId;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsHotelBatchRequest catalogsHotelBatchRequest = (CatalogsHotelBatchRequest) o;
    return Objects.equals(this.catalogType, catalogsHotelBatchRequest.catalogType) &&
        Objects.equals(this.country, catalogsHotelBatchRequest.country) &&
        Objects.equals(this.language, catalogsHotelBatchRequest.language) &&
        Objects.equals(this.items, catalogsHotelBatchRequest.items) &&
        Objects.equals(this.catalogId, catalogsHotelBatchRequest.catalogId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(catalogType, country, language, items, catalogId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsHotelBatchRequest {\n");
    
    sb.append("    catalogType: ").append(toIndentedString(catalogType)).append("\n");
    sb.append("    country: ").append(toIndentedString(country)).append("\n");
    sb.append("    language: ").append(toIndentedString(language)).append("\n");
    sb.append("    items: ").append(toIndentedString(items)).append("\n");
    sb.append("    catalogId: ").append(toIndentedString(catalogId)).append("\n");
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
