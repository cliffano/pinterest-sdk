package org.openapitools.model;

import java.util.Objects;
import java.util.ArrayList;
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
import org.openapitools.model.ItemCreateBatchRecord;
import org.openapitools.model.Language;
import javax.validation.constraints.*;
import javax.validation.Valid;
import io.swagger.annotations.*;

@ApiModel(description="Request object to create catalogs items")@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaResteasyEapServerCodegen", date = "2024-03-14T23:04:54.712028318Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class CatalogsItemsCreateBatchRequest   {
  
  private Country country;
  private Language language;
  private BatchOperation operation;
  private List<@Valid ItemCreateBatchRecord> items = new ArrayList<>();

  /**
   **/
  
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
   **/
  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("operation")
  @NotNull
  public BatchOperation getOperation() {
    return operation;
  }
  public void setOperation(BatchOperation operation) {
    this.operation = operation;
  }

  /**
   * Array with catalogs items
   **/
  
  @ApiModelProperty(required = true, value = "Array with catalogs items")
  @JsonProperty("items")
  @NotNull
 @Size(min=1,max=1000)  public List<@Valid ItemCreateBatchRecord> getItems() {
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

