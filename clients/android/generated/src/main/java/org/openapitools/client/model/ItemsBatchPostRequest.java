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
import org.openapitools.client.model.CatalogsItemsBatchRequest;
import org.openapitools.client.model.CatalogsType;
import org.openapitools.client.model.CatalogsVerticalBatchRequest;
import org.openapitools.client.model.Country;
import org.openapitools.client.model.ItemDeleteBatchRecord;
import org.openapitools.client.model.Language;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ItemsBatchPostRequest {
  
  @SerializedName("catalog_type")
  private CatalogsType catalogType = null;
  @SerializedName("country")
  private Country country = null;
  @SerializedName("language")
  private Language language = null;
  @SerializedName("items")
  private List<ItemDeleteBatchRecord> items = null;
  @SerializedName("catalog_id")
  private String catalogId = null;
  @SerializedName("operation")
  private BatchOperation operation = null;

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public CatalogsType getCatalogType() {
    return catalogType;
  }
  public void setCatalogType(CatalogsType catalogType) {
    this.catalogType = catalogType;
  }

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
   * Array with catalogs items
   **/
  @ApiModelProperty(required = true, value = "Array with catalogs items")
  public List<ItemDeleteBatchRecord> getItems() {
    return items;
  }
  public void setItems(List<ItemDeleteBatchRecord> items) {
    this.items = items;
  }

  /**
   * Catalog id pertaining to the hotel item. If not provided, default to oldest hotel catalog
   **/
  @ApiModelProperty(value = "Catalog id pertaining to the hotel item. If not provided, default to oldest hotel catalog")
  public String getCatalogId() {
    return catalogId;
  }
  public void setCatalogId(String catalogId) {
    this.catalogId = catalogId;
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


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ItemsBatchPostRequest itemsBatchPostRequest = (ItemsBatchPostRequest) o;
    return (this.catalogType == null ? itemsBatchPostRequest.catalogType == null : this.catalogType.equals(itemsBatchPostRequest.catalogType)) &&
        (this.country == null ? itemsBatchPostRequest.country == null : this.country.equals(itemsBatchPostRequest.country)) &&
        (this.language == null ? itemsBatchPostRequest.language == null : this.language.equals(itemsBatchPostRequest.language)) &&
        (this.items == null ? itemsBatchPostRequest.items == null : this.items.equals(itemsBatchPostRequest.items)) &&
        (this.catalogId == null ? itemsBatchPostRequest.catalogId == null : this.catalogId.equals(itemsBatchPostRequest.catalogId)) &&
        (this.operation == null ? itemsBatchPostRequest.operation == null : this.operation.equals(itemsBatchPostRequest.operation));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.catalogType == null ? 0: this.catalogType.hashCode());
    result = 31 * result + (this.country == null ? 0: this.country.hashCode());
    result = 31 * result + (this.language == null ? 0: this.language.hashCode());
    result = 31 * result + (this.items == null ? 0: this.items.hashCode());
    result = 31 * result + (this.catalogId == null ? 0: this.catalogId.hashCode());
    result = 31 * result + (this.operation == null ? 0: this.operation.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ItemsBatchPostRequest {\n");
    
    sb.append("  catalogType: ").append(catalogType).append("\n");
    sb.append("  country: ").append(country).append("\n");
    sb.append("  language: ").append(language).append("\n");
    sb.append("  items: ").append(items).append("\n");
    sb.append("  catalogId: ").append(catalogId).append("\n");
    sb.append("  operation: ").append(operation).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}