package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.annotations.ApiModel;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Date;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.BatchOperationStatus;
import org.openapitools.model.CatalogsType;
import org.openapitools.model.ItemProcessingRecord;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
  * Object describing the catalogs retail items batch
 **/
@ApiModel(description="Object describing the catalogs retail items batch")

public class CatalogsRetailItemsBatch  {
  
  @ApiModelProperty(example = "595953100599279259-66753b9bb65c46c49bd8503b27fecf9e", value = "Id of the catalogs items batch")
 /**
   * Id of the catalogs items batch
  **/
  private String batchId;

  @ApiModelProperty(example = "2020-01-01T20:10:40Z", value = "Time of the batch creation: YYYY-MM-DD'T'hh:mm:ssTZD")
 /**
   * Time of the batch creation: YYYY-MM-DD'T'hh:mm:ssTZD
  **/
  private Date createdTime;

  @ApiModelProperty(example = "2022-03-10T15:37:10Z", value = "Time of the batch completion: YYYY-MM-DD'T'hh:mm:ssTZD")
 /**
   * Time of the batch completion: YYYY-MM-DD'T'hh:mm:ssTZD
  **/
  private Date completedTime;

  @ApiModelProperty(value = "")
  @Valid
  private BatchOperationStatus status;

  @ApiModelProperty(required = true, value = "")
  @Valid
  private CatalogsType catalogType;

  @ApiModelProperty(value = "Array with the catalogs items processing records part of the catalogs items batch")
  @Valid
 /**
   * Array with the catalogs items processing records part of the catalogs items batch
  **/
  private List<@Valid ItemProcessingRecord> items;
 /**
   * Id of the catalogs items batch
   * @return batchId
  **/
  @JsonProperty("batch_id")
  public String getBatchId() {
    return batchId;
  }

  public void setBatchId(String batchId) {
    this.batchId = batchId;
  }

  public CatalogsRetailItemsBatch batchId(String batchId) {
    this.batchId = batchId;
    return this;
  }

 /**
   * Time of the batch creation: YYYY-MM-DD&#39;T&#39;hh:mm:ssTZD
   * @return createdTime
  **/
  @JsonProperty("created_time")
  public Date getCreatedTime() {
    return createdTime;
  }


 /**
   * Time of the batch completion: YYYY-MM-DD&#39;T&#39;hh:mm:ssTZD
   * @return completedTime
  **/
  @JsonProperty("completed_time")
  public Date getCompletedTime() {
    return completedTime;
  }


 /**
   * Get status
   * @return status
  **/
  @JsonProperty("status")
  public BatchOperationStatus getStatus() {
    return status;
  }

  public void setStatus(BatchOperationStatus status) {
    this.status = status;
  }

  public CatalogsRetailItemsBatch status(BatchOperationStatus status) {
    this.status = status;
    return this;
  }

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

  public CatalogsRetailItemsBatch catalogType(CatalogsType catalogType) {
    this.catalogType = catalogType;
    return this;
  }

 /**
   * Array with the catalogs items processing records part of the catalogs items batch
   * @return items
  **/
  @JsonProperty("items")
  public List<@Valid ItemProcessingRecord> getItems() {
    return items;
  }

  public void setItems(List<@Valid ItemProcessingRecord> items) {
    this.items = items;
  }

  public CatalogsRetailItemsBatch items(List<@Valid ItemProcessingRecord> items) {
    this.items = items;
    return this;
  }

  public CatalogsRetailItemsBatch addItemsItem(ItemProcessingRecord itemsItem) {
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
    CatalogsRetailItemsBatch catalogsRetailItemsBatch = (CatalogsRetailItemsBatch) o;
    return Objects.equals(this.batchId, catalogsRetailItemsBatch.batchId) &&
        Objects.equals(this.createdTime, catalogsRetailItemsBatch.createdTime) &&
        Objects.equals(this.completedTime, catalogsRetailItemsBatch.completedTime) &&
        Objects.equals(this.status, catalogsRetailItemsBatch.status) &&
        Objects.equals(this.catalogType, catalogsRetailItemsBatch.catalogType) &&
        Objects.equals(this.items, catalogsRetailItemsBatch.items);
  }

  @Override
  public int hashCode() {
    return Objects.hash(batchId, createdTime, completedTime, status, catalogType, items);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsRetailItemsBatch {\n");
    
    sb.append("    batchId: ").append(toIndentedString(batchId)).append("\n");
    sb.append("    createdTime: ").append(toIndentedString(createdTime)).append("\n");
    sb.append("    completedTime: ").append(toIndentedString(completedTime)).append("\n");
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    catalogType: ").append(toIndentedString(catalogType)).append("\n");
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

