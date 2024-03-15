package org.openapitools.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.BulkUpsertRequestCreate;
import org.openapitools.model.BulkUpsertRequestUpdate;
import javax.validation.constraints.*;
import javax.validation.Valid;
import io.swagger.annotations.*;
import javax.validation.Valid;

@ApiModel(description="Two set of objects to be managed asyncronusly by bulk. One for creations, one for modifications.")@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaResteasyServerCodegen", date = "2024-03-14T23:04:42.546429009Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class BulkUpsertRequest   {
  
  private BulkUpsertRequestCreate create;
  private BulkUpsertRequestUpdate update;

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("create")
  @Valid
  public BulkUpsertRequestCreate getCreate() {
    return create;
  }
  public void setCreate(BulkUpsertRequestCreate create) {
    this.create = create;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("update")
  @Valid
  public BulkUpsertRequestUpdate getUpdate() {
    return update;
  }
  public void setUpdate(BulkUpsertRequestUpdate update) {
    this.update = update;
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

