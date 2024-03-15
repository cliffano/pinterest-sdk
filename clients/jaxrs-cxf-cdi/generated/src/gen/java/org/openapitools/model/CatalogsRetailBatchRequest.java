package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.CatalogsRetailBatchRequestItemsInner;
import org.openapitools.model.CatalogsType;
import org.openapitools.model.Country;
import org.openapitools.model.Language;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A request object that can have multiple operations on a single retail batch
 **/

import io.swagger.annotations.*;
import java.util.Objects;


@ApiModel(description = "A request object that can have multiple operations on a single retail batch")
public class CatalogsRetailBatchRequest   {
  
  private CatalogsType catalogType;

  private Country country;

  private Language language;

  private List<CatalogsRetailBatchRequestItemsInner> items = new ArrayList<>();

  /**
   **/
  public CatalogsRetailBatchRequest catalogType(CatalogsType catalogType) {
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
  public CatalogsRetailBatchRequest country(Country country) {
    this.country = country;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("country")
  @NotNull
  public Country getCountry() {
    return country;
  }
  public void setCountry(Country country) {
    this.country = country;
  }


  /**
   **/
  public CatalogsRetailBatchRequest language(Language language) {
    this.language = language;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("language")
  @NotNull
  public Language getLanguage() {
    return language;
  }
  public void setLanguage(Language language) {
    this.language = language;
  }


  /**
   * Array with catalogs item operations
   **/
  public CatalogsRetailBatchRequest items(List<CatalogsRetailBatchRequestItemsInner> items) {
    this.items = items;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "Array with catalogs item operations")
  @JsonProperty("items")
  @NotNull
 @Size(min=1,max=1000)  public List<CatalogsRetailBatchRequestItemsInner> getItems() {
    return items;
  }
  public void setItems(List<CatalogsRetailBatchRequestItemsInner> items) {
    this.items = items;
  }

  public CatalogsRetailBatchRequest addItemsItem(CatalogsRetailBatchRequestItemsInner itemsItem) {
    if (this.items == null) {
      this.items = new ArrayList<>();
    }
    this.items.add(itemsItem);
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
    CatalogsRetailBatchRequest catalogsRetailBatchRequest = (CatalogsRetailBatchRequest) o;
    return Objects.equals(this.catalogType, catalogsRetailBatchRequest.catalogType) &&
        Objects.equals(this.country, catalogsRetailBatchRequest.country) &&
        Objects.equals(this.language, catalogsRetailBatchRequest.language) &&
        Objects.equals(this.items, catalogsRetailBatchRequest.items);
  }

  @Override
  public int hashCode() {
    return Objects.hash(catalogType, country, language, items);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsRetailBatchRequest {\n");
    
    sb.append("    catalogType: ").append(toIndentedString(catalogType)).append("\n");
    sb.append("    country: ").append(toIndentedString(country)).append("\n");
    sb.append("    language: ").append(toIndentedString(language)).append("\n");
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

