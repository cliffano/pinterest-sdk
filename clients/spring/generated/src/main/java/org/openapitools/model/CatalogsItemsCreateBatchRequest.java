package org.openapitools.model;

import java.net.URI;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.BatchOperation;
import org.openapitools.model.Country;
import org.openapitools.model.ItemCreateBatchRecord;
import org.openapitools.model.Language;
import com.fasterxml.jackson.annotation.JsonIgnoreProperties;
import com.fasterxml.jackson.annotation.JsonSubTypes;
import com.fasterxml.jackson.annotation.JsonTypeInfo;
import org.openapitools.jackson.nullable.JsonNullable;
import java.time.OffsetDateTime;
import javax.validation.Valid;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;


import java.util.*;
import javax.annotation.Generated;

/**
 * Request object to create catalogs items
 */

@Schema(name = "CatalogsItemsCreateBatchRequest", description = "Request object to create catalogs items")
@Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2024-03-14T23:15:39.458648915Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class CatalogsItemsCreateBatchRequest implements CatalogsItemsBatchRequest {

  private Country country;

  private Language language;

  private BatchOperation operation;

  @Valid
  private List<@Valid ItemCreateBatchRecord> items = new ArrayList<>();

  public CatalogsItemsCreateBatchRequest() {
    super();
  }

  /**
   * Constructor with only required parameters
   */
  public CatalogsItemsCreateBatchRequest(Country country, Language language, BatchOperation operation, List<@Valid ItemCreateBatchRecord> items) {
    this.country = country;
    this.language = language;
    this.operation = operation;
    this.items = items;
  }

  public CatalogsItemsCreateBatchRequest country(Country country) {
    this.country = country;
    return this;
  }

  /**
   * Get country
   * @return country
  */
  @NotNull @Valid 
  @Schema(name = "country", requiredMode = Schema.RequiredMode.REQUIRED)
  @JsonProperty("country")
  public Country getCountry() {
    return country;
  }

  public void setCountry(Country country) {
    this.country = country;
  }

  public CatalogsItemsCreateBatchRequest language(Language language) {
    this.language = language;
    return this;
  }

  /**
   * Get language
   * @return language
  */
  @NotNull @Valid 
  @Schema(name = "language", requiredMode = Schema.RequiredMode.REQUIRED)
  @JsonProperty("language")
  public Language getLanguage() {
    return language;
  }

  public void setLanguage(Language language) {
    this.language = language;
  }

  public CatalogsItemsCreateBatchRequest operation(BatchOperation operation) {
    this.operation = operation;
    return this;
  }

  /**
   * Get operation
   * @return operation
  */
  @NotNull @Valid 
  @Schema(name = "operation", requiredMode = Schema.RequiredMode.REQUIRED)
  @JsonProperty("operation")
  public BatchOperation getOperation() {
    return operation;
  }

  public void setOperation(BatchOperation operation) {
    this.operation = operation;
  }

  public CatalogsItemsCreateBatchRequest items(List<@Valid ItemCreateBatchRecord> items) {
    this.items = items;
    return this;
  }

  public CatalogsItemsCreateBatchRequest addItemsItem(ItemCreateBatchRecord itemsItem) {
    if (this.items == null) {
      this.items = new ArrayList<>();
    }
    this.items.add(itemsItem);
    return this;
  }

  /**
   * Array with catalogs items
   * @return items
  */
  @NotNull @Valid @Size(min = 1, max = 1000) 
  @Schema(name = "items", description = "Array with catalogs items", requiredMode = Schema.RequiredMode.REQUIRED)
  @JsonProperty("items")
  public List<@Valid ItemCreateBatchRecord> getItems() {
    return items;
  }

  public void setItems(List<@Valid ItemCreateBatchRecord> items) {
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
    CatalogsItemsCreateBatchRequest catalogsItemsCreateBatchRequest = (CatalogsItemsCreateBatchRequest) o;
    return Objects.equals(this.country, catalogsItemsCreateBatchRequest.country) &&
        Objects.equals(this.language, catalogsItemsCreateBatchRequest.language) &&
        Objects.equals(this.operation, catalogsItemsCreateBatchRequest.operation) &&
        Objects.equals(this.items, catalogsItemsCreateBatchRequest.items);
  }

  @Override
  public int hashCode() {
    return Objects.hash(country, language, operation, items);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsItemsCreateBatchRequest {\n");
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
