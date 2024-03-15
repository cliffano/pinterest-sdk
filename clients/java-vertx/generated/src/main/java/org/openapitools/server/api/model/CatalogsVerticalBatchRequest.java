package org.openapitools.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.server.api.model.CatalogsHotelBatchItem;
import org.openapitools.server.api.model.CatalogsHotelBatchRequest;
import org.openapitools.server.api.model.CatalogsRetailBatchRequest;
import org.openapitools.server.api.model.CatalogsType;
import org.openapitools.server.api.model.Country;
import org.openapitools.server.api.model.Language;

/**
 * A request object that can have multiple operations on a single batch
 **/
@JsonInclude(JsonInclude.Include.NON_NULL)
public class CatalogsVerticalBatchRequest   {
  
  private CatalogsType catalogType;
  private Country country;
  private Language language;
  private List<CatalogsHotelBatchItem> items = new ArrayList<>();
  private String catalogId;

  public CatalogsVerticalBatchRequest () {

  }

  public CatalogsVerticalBatchRequest (CatalogsType catalogType, Country country, Language language, List<CatalogsHotelBatchItem> items, String catalogId) {
    this.catalogType = catalogType;
    this.country = country;
    this.language = language;
    this.items = items;
    this.catalogId = catalogId;
  }

    
  @JsonProperty("catalog_type")
  public CatalogsType getCatalogType() {
    return catalogType;
  }
  public void setCatalogType(CatalogsType catalogType) {
    this.catalogType = catalogType;
  }

    
  @JsonProperty("country")
  public Country getCountry() {
    return country;
  }
  public void setCountry(Country country) {
    this.country = country;
  }

    
  @JsonProperty("language")
  public Language getLanguage() {
    return language;
  }
  public void setLanguage(Language language) {
    this.language = language;
  }

    
  @JsonProperty("items")
  public List<CatalogsHotelBatchItem> getItems() {
    return items;
  }
  public void setItems(List<CatalogsHotelBatchItem> items) {
    this.items = items;
  }

    
  @JsonProperty("catalog_id")
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
    CatalogsVerticalBatchRequest catalogsVerticalBatchRequest = (CatalogsVerticalBatchRequest) o;
    return Objects.equals(catalogType, catalogsVerticalBatchRequest.catalogType) &&
        Objects.equals(country, catalogsVerticalBatchRequest.country) &&
        Objects.equals(language, catalogsVerticalBatchRequest.language) &&
        Objects.equals(items, catalogsVerticalBatchRequest.items) &&
        Objects.equals(catalogId, catalogsVerticalBatchRequest.catalogId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(catalogType, country, language, items, catalogId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsVerticalBatchRequest {\n");
    
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
