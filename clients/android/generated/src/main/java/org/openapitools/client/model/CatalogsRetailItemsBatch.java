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
import java.util.Date;
import org.openapitools.client.model.BatchOperationStatus;
import org.openapitools.client.model.CatalogsType;
import org.openapitools.client.model.ItemProcessingRecord;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * Object describing the catalogs retail items batch
 **/
@ApiModel(description = "Object describing the catalogs retail items batch")
public class CatalogsRetailItemsBatch {
  
  @SerializedName("batch_id")
  private String batchId = null;
  @SerializedName("created_time")
  private Date createdTime = null;
  @SerializedName("completed_time")
  private Date completedTime = null;
  @SerializedName("status")
  private BatchOperationStatus status = null;
  @SerializedName("catalog_type")
  private CatalogsType catalogType = null;
  @SerializedName("items")
  private List<ItemProcessingRecord> items = null;

  /**
   * Id of the catalogs items batch
   **/
  @ApiModelProperty(value = "Id of the catalogs items batch")
  public String getBatchId() {
    return batchId;
  }
  public void setBatchId(String batchId) {
    this.batchId = batchId;
  }

  /**
   * Time of the batch creation: YYYY-MM-DD'T'hh:mm:ssTZD
   **/
  @ApiModelProperty(value = "Time of the batch creation: YYYY-MM-DD'T'hh:mm:ssTZD")
  public Date getCreatedTime() {
    return createdTime;
  }
  public void setCreatedTime(Date createdTime) {
    this.createdTime = createdTime;
  }

  /**
   * Time of the batch completion: YYYY-MM-DD'T'hh:mm:ssTZD
   **/
  @ApiModelProperty(value = "Time of the batch completion: YYYY-MM-DD'T'hh:mm:ssTZD")
  public Date getCompletedTime() {
    return completedTime;
  }
  public void setCompletedTime(Date completedTime) {
    this.completedTime = completedTime;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BatchOperationStatus getStatus() {
    return status;
  }
  public void setStatus(BatchOperationStatus status) {
    this.status = status;
  }

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
   * Array with the catalogs items processing records part of the catalogs items batch
   **/
  @ApiModelProperty(value = "Array with the catalogs items processing records part of the catalogs items batch")
  public List<ItemProcessingRecord> getItems() {
    return items;
  }
  public void setItems(List<ItemProcessingRecord> items) {
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
    CatalogsRetailItemsBatch catalogsRetailItemsBatch = (CatalogsRetailItemsBatch) o;
    return (this.batchId == null ? catalogsRetailItemsBatch.batchId == null : this.batchId.equals(catalogsRetailItemsBatch.batchId)) &&
        (this.createdTime == null ? catalogsRetailItemsBatch.createdTime == null : this.createdTime.equals(catalogsRetailItemsBatch.createdTime)) &&
        (this.completedTime == null ? catalogsRetailItemsBatch.completedTime == null : this.completedTime.equals(catalogsRetailItemsBatch.completedTime)) &&
        (this.status == null ? catalogsRetailItemsBatch.status == null : this.status.equals(catalogsRetailItemsBatch.status)) &&
        (this.catalogType == null ? catalogsRetailItemsBatch.catalogType == null : this.catalogType.equals(catalogsRetailItemsBatch.catalogType)) &&
        (this.items == null ? catalogsRetailItemsBatch.items == null : this.items.equals(catalogsRetailItemsBatch.items));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.batchId == null ? 0: this.batchId.hashCode());
    result = 31 * result + (this.createdTime == null ? 0: this.createdTime.hashCode());
    result = 31 * result + (this.completedTime == null ? 0: this.completedTime.hashCode());
    result = 31 * result + (this.status == null ? 0: this.status.hashCode());
    result = 31 * result + (this.catalogType == null ? 0: this.catalogType.hashCode());
    result = 31 * result + (this.items == null ? 0: this.items.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsRetailItemsBatch {\n");
    
    sb.append("  batchId: ").append(batchId).append("\n");
    sb.append("  createdTime: ").append(createdTime).append("\n");
    sb.append("  completedTime: ").append(completedTime).append("\n");
    sb.append("  status: ").append(status).append("\n");
    sb.append("  catalogType: ").append(catalogType).append("\n");
    sb.append("  items: ").append(items).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
