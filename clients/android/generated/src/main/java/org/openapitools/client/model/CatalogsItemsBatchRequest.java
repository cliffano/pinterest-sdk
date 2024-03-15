/**
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

package org.openapitools.client.model;

import java.util.*;
import org.openapitools.client.model.BatchOperation;
import org.openapitools.client.model.CatalogsItemsCreateBatchRequest;
import org.openapitools.client.model.CatalogsItemsDeleteBatchRequest;
import org.openapitools.client.model.CatalogsItemsDeleteDiscontinuedBatchRequest;
import org.openapitools.client.model.CatalogsItemsUpdateBatchRequest;
import org.openapitools.client.model.CatalogsItemsUpsertBatchRequest;
import org.openapitools.client.model.Country;
import org.openapitools.client.model.ItemDeleteBatchRecord;
import org.openapitools.client.model.Language;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * Request object of catalogs items batch
 **/
@ApiModel(description = "Request object of catalogs items batch")
public class CatalogsItemsBatchRequest {
  
  @SerializedName("country")
  private Country country = null;
  @SerializedName("language")
  private Language language = null;
  @SerializedName("operation")
  private BatchOperation operation = null;
  @SerializedName("items")
  private List<ItemDeleteBatchRecord> items = null;

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public Country getCountry() {
    return country;
  }
  public void setCountry(Country country) {
    this.country = country;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public Language getLanguage() {
    return language;
  }
  public void setLanguage(Language language) {
    this.language = language;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
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
  public List<ItemDeleteBatchRecord> getItems() {
    return items;
  }
  public void setItems(List<ItemDeleteBatchRecord> items) {
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
    CatalogsItemsBatchRequest catalogsItemsBatchRequest = (CatalogsItemsBatchRequest) o;
    return (this.country == null ? catalogsItemsBatchRequest.country == null : this.country.equals(catalogsItemsBatchRequest.country)) &&
        (this.language == null ? catalogsItemsBatchRequest.language == null : this.language.equals(catalogsItemsBatchRequest.language)) &&
        (this.operation == null ? catalogsItemsBatchRequest.operation == null : this.operation.equals(catalogsItemsBatchRequest.operation)) &&
        (this.items == null ? catalogsItemsBatchRequest.items == null : this.items.equals(catalogsItemsBatchRequest.items));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.country == null ? 0: this.country.hashCode());
    result = 31 * result + (this.language == null ? 0: this.language.hashCode());
    result = 31 * result + (this.operation == null ? 0: this.operation.hashCode());
    result = 31 * result + (this.items == null ? 0: this.items.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsItemsBatchRequest {\n");
    
    sb.append("  country: ").append(country).append("\n");
    sb.append("  language: ").append(language).append("\n");
    sb.append("  operation: ").append(operation).append("\n");
    sb.append("  items: ").append(items).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
