package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.BatchOperation;
import org.openapitools.model.CatalogsItemsBatchRequest;
import org.openapitools.model.CatalogsType;
import org.openapitools.model.CatalogsVerticalBatchRequest;
import org.openapitools.model.Country;
import org.openapitools.model.ItemDeleteBatchRecord;
import org.openapitools.model.Language;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ItemsBatchPostRequest  {
  
  @ApiModelProperty(required = true, value = "")
  private Country country;

  @ApiModelProperty(required = true, value = "")
  private Language language;

  @ApiModelProperty(required = true, value = "")
  private BatchOperation operation;

  @ApiModelProperty(required = true, value = "Array with catalogs items")
 /**
   * Array with catalogs items
  **/
  private List<ItemDeleteBatchRecord> items = new ArrayList<>();
 /**
   * Get country
   * @return country
  **/
  @JsonProperty("country")
  public Country getCountry() {
    return country;
  }

  public void setCountry(Country country) {
    this.country = country;
  }

  public ItemsBatchPostRequest country(Country country) {
    this.country = country;
    return this;
  }

 /**
   * Get language
   * @return language
  **/
  @JsonProperty("language")
  public Language getLanguage() {
    return language;
  }

  public void setLanguage(Language language) {
    this.language = language;
  }

  public ItemsBatchPostRequest language(Language language) {
    this.language = language;
    return this;
  }

 /**
   * Get operation
   * @return operation
  **/
  @JsonProperty("operation")
  public BatchOperation getOperation() {
    return operation;
  }

  public void setOperation(BatchOperation operation) {
    this.operation = operation;
  }

  public ItemsBatchPostRequest operation(BatchOperation operation) {
    this.operation = operation;
    return this;
  }

 /**
   * Array with catalogs items
   * @return items
  **/
  @JsonProperty("items")
  public List<ItemDeleteBatchRecord> getItems() {
    return items;
  }

  public void setItems(List<ItemDeleteBatchRecord> items) {
    this.items = items;
  }

  public ItemsBatchPostRequest items(List<ItemDeleteBatchRecord> items) {
    this.items = items;
    return this;
  }

  public ItemsBatchPostRequest addItemsItem(ItemDeleteBatchRecord itemsItem) {
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
    ItemsBatchPostRequest itemsBatchPostRequest = (ItemsBatchPostRequest) o;
    return Objects.equals(this.country, itemsBatchPostRequest.country) &&
        Objects.equals(this.language, itemsBatchPostRequest.language) &&
        Objects.equals(this.operation, itemsBatchPostRequest.operation) &&
        Objects.equals(this.items, itemsBatchPostRequest.items);
  }

  @Override
  public int hashCode() {
    return Objects.hash(country, language, operation, items);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ItemsBatchPostRequest {\n");
    
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

