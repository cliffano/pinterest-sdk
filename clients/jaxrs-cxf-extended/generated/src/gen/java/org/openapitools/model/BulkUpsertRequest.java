package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import org.openapitools.model.BulkUpsertRequestCreate;
import org.openapitools.model.BulkUpsertRequestUpdate;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.JsonFormat;
import com.fasterxml.jackson.annotation.JsonProperty;


/**
 * Two set of objects to be managed asyncronusly by bulk. One for creations, one for modifications.
 */
@ApiModel(description="Two set of objects to be managed asyncronusly by bulk. One for creations, one for modifications.")

public class BulkUpsertRequest  {
  
  @ApiModelProperty(value = "")
  @Valid
  private BulkUpsertRequestCreate create;

  @ApiModelProperty(value = "")
  @Valid
  private BulkUpsertRequestUpdate update;
 /**
  * Get create
  * @return create
  */
  @JsonProperty("create")
  public BulkUpsertRequestCreate getCreate() {
    return create;
  }

  /**
   * Sets the <code>create</code> property.
   */
 public void setCreate(BulkUpsertRequestCreate create) {
    this.create = create;
  }

  /**
   * Sets the <code>create</code> property.
   */
  public BulkUpsertRequest create(BulkUpsertRequestCreate create) {
    this.create = create;
    return this;
  }

 /**
  * Get update
  * @return update
  */
  @JsonProperty("update")
  public BulkUpsertRequestUpdate getUpdate() {
    return update;
  }

  /**
   * Sets the <code>update</code> property.
   */
 public void setUpdate(BulkUpsertRequestUpdate update) {
    this.update = update;
  }

  /**
   * Sets the <code>update</code> property.
   */
  public BulkUpsertRequest update(BulkUpsertRequestUpdate update) {
    this.update = update;
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
    BulkUpsertRequest bulkUpsertRequest = (BulkUpsertRequest) o;
    return Objects.equals(this.create, bulkUpsertRequest.create) &&
        Objects.equals(this.update, bulkUpsertRequest.update);
  }

  @Override
  public int hashCode() {
    return Objects.hash(create, update);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BulkUpsertRequest {\n");
    
    sb.append("    create: ").append(toIndentedString(create)).append("\n");
    sb.append("    update: ").append(toIndentedString(update)).append("\n");
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

