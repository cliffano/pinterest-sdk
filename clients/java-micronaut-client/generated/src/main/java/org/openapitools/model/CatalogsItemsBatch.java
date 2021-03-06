/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.model;

import java.util.Objects;
import java.util.Arrays;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.time.LocalDateTime;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.BatchOperationStatus;
import org.openapitools.model.ItemProcessingRecord;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * Object describing the catalogs items batch
 */
@ApiModel(description = "Object describing the catalogs items batch")
@JsonPropertyOrder({
  CatalogsItemsBatch.JSON_PROPERTY_ITEMS,
  CatalogsItemsBatch.JSON_PROPERTY_BATCH_ID,
  CatalogsItemsBatch.JSON_PROPERTY_CREATED_TIME,
  CatalogsItemsBatch.JSON_PROPERTY_COMPLETED_TIME,
  CatalogsItemsBatch.JSON_PROPERTY_STATUS
})
@JsonTypeName("CatalogsItemsBatch")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2022-07-01T11:59:24.863123Z[Etc/UTC]")
@Introspected
public class CatalogsItemsBatch {
    public static final String JSON_PROPERTY_ITEMS = "items";
    private List<ItemProcessingRecord> items = null;

    public static final String JSON_PROPERTY_BATCH_ID = "batch_id";
    private String batchId;

    public static final String JSON_PROPERTY_CREATED_TIME = "created_time";
    private LocalDateTime createdTime;

    public static final String JSON_PROPERTY_COMPLETED_TIME = "completed_time";
    private LocalDateTime completedTime;

    public static final String JSON_PROPERTY_STATUS = "status";
    private BatchOperationStatus status;

    public CatalogsItemsBatch() {
    }

    public CatalogsItemsBatch items(List<ItemProcessingRecord> items) {
        this.items = items;
        return this;
    }

    public CatalogsItemsBatch addItemsItem(ItemProcessingRecord itemsItem) {
        if (this.items == null) {
            this.items = new ArrayList<ItemProcessingRecord>();
        }
        this.items.add(itemsItem);
        return this;
    }

    /**
     * Array with the catalogs items processing records part of the catalogs items batch
     * @return items
     **/
    @Nullable
    @ApiModelProperty(value = "Array with the catalogs items processing records part of the catalogs items batch")
    @JsonProperty(JSON_PROPERTY_ITEMS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public List<ItemProcessingRecord> getItems() {
        return items;
    }

    @JsonProperty(JSON_PROPERTY_ITEMS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setItems(List<ItemProcessingRecord> items) {
        this.items = items;
    }

    public CatalogsItemsBatch batchId(String batchId) {
        this.batchId = batchId;
        return this;
    }

    /**
     * Id of the catalogs items batch
     * @return batchId
     **/
    @Nullable
    @ApiModelProperty(example = "595953100599279259-66753b9bb65c46c49bd8503b27fecf9e", value = "Id of the catalogs items batch")
    @JsonProperty(JSON_PROPERTY_BATCH_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getBatchId() {
        return batchId;
    }

    @JsonProperty(JSON_PROPERTY_BATCH_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setBatchId(String batchId) {
        this.batchId = batchId;
    }

    /**
     * Time of the batch creation: YYYY-MM-DD&#39;T&#39;hh:mm:ssTZD
     * @return createdTime
     **/
    @Nullable
    @ApiModelProperty(example = "2020-01-01T20:10:40Z", value = "Time of the batch creation: YYYY-MM-DD'T'hh:mm:ssTZD")
    @JsonProperty(JSON_PROPERTY_CREATED_TIME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    @JsonFormat(shape = JsonFormat.Shape.STRING, pattern = "yyyy-MM-dd'T'HH:mm:ss.SSSXXXX")
       public LocalDateTime getCreatedTime() {
        return createdTime;
    }

    /**
     * Time of the batch completion: YYYY-MM-DD&#39;T&#39;hh:mm:ssTZD
     * @return completedTime
     **/
    @Nullable
    @ApiModelProperty(example = "2022-03-10T15:37:10Z", value = "Time of the batch completion: YYYY-MM-DD'T'hh:mm:ssTZD")
    @JsonProperty(JSON_PROPERTY_COMPLETED_TIME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    @JsonFormat(shape = JsonFormat.Shape.STRING, pattern = "yyyy-MM-dd'T'HH:mm:ss.SSSXXXX")
       public LocalDateTime getCompletedTime() {
        return completedTime;
    }

    public CatalogsItemsBatch status(BatchOperationStatus status) {
        this.status = status;
        return this;
    }

    /**
     * Get status
     * @return status
     **/
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public BatchOperationStatus getStatus() {
        return status;
    }

    @JsonProperty(JSON_PROPERTY_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setStatus(BatchOperationStatus status) {
        this.status = status;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CatalogsItemsBatch catalogsItemsBatch = (CatalogsItemsBatch) o;
        return Objects.equals(this.items, catalogsItemsBatch.items) &&
            Objects.equals(this.batchId, catalogsItemsBatch.batchId) &&
            Objects.equals(this.createdTime, catalogsItemsBatch.createdTime) &&
            Objects.equals(this.completedTime, catalogsItemsBatch.completedTime) &&
            Objects.equals(this.status, catalogsItemsBatch.status);
    }

    @Override
    public int hashCode() {
        return Objects.hash(items, batchId, createdTime, completedTime, status);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CatalogsItemsBatch {\n");
        sb.append("    items: ").append(toIndentedString(items)).append("\n");
        sb.append("    batchId: ").append(toIndentedString(batchId)).append("\n");
        sb.append("    createdTime: ").append(toIndentedString(createdTime)).append("\n");
        sb.append("    completedTime: ").append(toIndentedString(completedTime)).append("\n");
        sb.append("    status: ").append(toIndentedString(status)).append("\n");
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
