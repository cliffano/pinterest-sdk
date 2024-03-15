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
import org.openapitools.model.BatchOperation;
import org.openapitools.model.Country;
import org.openapitools.model.ItemUpdateBatchRecord;
import org.openapitools.model.Language;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Request object to update catalogs items
 */
@ApiModel(description = "Request object to update catalogs items")
@JsonPropertyOrder({
  CatalogsItemsUpdateBatchRequest.JSON_PROPERTY_COUNTRY,
  CatalogsItemsUpdateBatchRequest.JSON_PROPERTY_LANGUAGE,
  CatalogsItemsUpdateBatchRequest.JSON_PROPERTY_OPERATION,
  CatalogsItemsUpdateBatchRequest.JSON_PROPERTY_ITEMS
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class CatalogsItemsUpdateBatchRequest   {
  public static final String JSON_PROPERTY_COUNTRY = "country";
  @JsonProperty(JSON_PROPERTY_COUNTRY)
  private Country country;

  public static final String JSON_PROPERTY_LANGUAGE = "language";
  @JsonProperty(JSON_PROPERTY_LANGUAGE)
  private Language language;

  public static final String JSON_PROPERTY_OPERATION = "operation";
  @JsonProperty(JSON_PROPERTY_OPERATION)
  private BatchOperation operation;

  public static final String JSON_PROPERTY_ITEMS = "items";
  @JsonProperty(JSON_PROPERTY_ITEMS)
  private List<@Valid ItemUpdateBatchRecord> items = new ArrayList<>();

  public CatalogsItemsUpdateBatchRequest country(Country country) {
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

  public CatalogsItemsUpdateBatchRequest language(Language language) {
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

  public CatalogsItemsUpdateBatchRequest operation(BatchOperation operation) {
    this.operation = operation;
    return this;
  }

  /**
   * Get operation
   * @return operation
   **/
  @JsonProperty(value = "operation")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public BatchOperation getOperation() {
    return operation;
  }

  public void setOperation(BatchOperation operation) {
    this.operation = operation;
  }

  public CatalogsItemsUpdateBatchRequest items(List<@Valid ItemUpdateBatchRecord> items) {
    this.items = items;
    return this;
  }

  public CatalogsItemsUpdateBatchRequest addItemsItem(ItemUpdateBatchRecord itemsItem) {
    if (this.items == null) {
      this.items = new ArrayList<>();
    }
    this.items.add(itemsItem);
    return this;
  }

  /**
   * Array with catalogs items
   * @return items
   **/
  @JsonProperty(value = "items")
  @ApiModelProperty(required = true, value = "Array with catalogs items")
  @NotNull @Valid  @Size(min=1,max=1000)
  public List<@Valid ItemUpdateBatchRecord> getItems() {
    return items;
  }

  public void setItems(List<@Valid ItemUpdateBatchRecord> items) {
    this.items = items;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsItemsUpdateBatchRequest catalogsItemsUpdateBatchRequest = (CatalogsItemsUpdateBatchRequest) o;
    return Objects.equals(this.country, catalogsItemsUpdateBatchRequest.country) &&
        Objects.equals(this.language, catalogsItemsUpdateBatchRequest.language) &&
        Objects.equals(this.operation, catalogsItemsUpdateBatchRequest.operation) &&
        Objects.equals(this.items, catalogsItemsUpdateBatchRequest.items);
  }

  @Override
  public int hashCode() {
    return Objects.hash(country, language, operation, items);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsItemsUpdateBatchRequest {\n");
    
    sb.append("    country: ").append(toIndentedString(country)).append("\n");
    sb.append("    language: ").append(toIndentedString(language)).append("\n");
    sb.append("    operation: ").append(toIndentedString(operation)).append("\n");
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
