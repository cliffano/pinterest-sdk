package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.annotations.ApiModel;
import org.openapitools.model.BulkUpsertStatus;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.JsonFormat;
import com.fasterxml.jackson.annotation.JsonProperty;


/**
 * ID of the bulk request.
 */
@ApiModel(description="ID of the bulk request.")

public class BulkUpsertStatusResponse  {
  
  @ApiModelProperty(value = "")
  @Valid
  private BulkUpsertStatus status;

  @ApiModelProperty(example = "https://pinterest-waterloo.s3.us-east-1.amazonaws.com/bulk_framework/AD_ENTITY_UPSERT/549763856637-1659122537-0b4d77d3-f620-48ce-bec9-616106afb8d4/(...)", value = "")
  private String resultUrl;
 /**
  * Get status
  * @return status
  */
  @JsonProperty("status")
  public BulkUpsertStatus getStatus() {
    return status;
  }

  /**
   * Sets the <code>status</code> property.
   */
 public void setStatus(BulkUpsertStatus status) {
    this.status = status;
  }

  /**
   * Sets the <code>status</code> property.
   */
  public BulkUpsertStatusResponse status(BulkUpsertStatus status) {
    this.status = status;
    return this;
  }

 /**
  * Get resultUrl
  * @return resultUrl
  */
  @JsonProperty("result_url")
  public String getResultUrl() {
    return resultUrl;
  }

  /**
   * Sets the <code>resultUrl</code> property.
   */
 public void setResultUrl(String resultUrl) {
    this.resultUrl = resultUrl;
  }

  /**
   * Sets the <code>resultUrl</code> property.
   */
  public BulkUpsertStatusResponse resultUrl(String resultUrl) {
    this.resultUrl = resultUrl;
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
    BulkUpsertStatusResponse bulkUpsertStatusResponse = (BulkUpsertStatusResponse) o;
    return Objects.equals(this.status, bulkUpsertStatusResponse.status) &&
        Objects.equals(this.resultUrl, bulkUpsertStatusResponse.resultUrl);
  }

  @Override
  public int hashCode() {
    return Objects.hash(status, resultUrl);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BulkUpsertStatusResponse {\n");
    
    sb.append("    status: ").append(toIndentedString(status)).append("\n");
    sb.append("    resultUrl: ").append(toIndentedString(resultUrl)).append("\n");
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

