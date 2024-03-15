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

import org.openapitools.client.model.BulkUpsertStatus;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * ID of the bulk request.
 **/
@ApiModel(description = "ID of the bulk request.")
public class BulkUpsertStatusResponse {
  
  @SerializedName("status")
  private BulkUpsertStatus status = null;
  @SerializedName("result_url")
  private String resultUrl = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public BulkUpsertStatus getStatus() {
    return status;
  }
  public void setStatus(BulkUpsertStatus status) {
    this.status = status;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getResultUrl() {
    return resultUrl;
  }
  public void setResultUrl(String resultUrl) {
    this.resultUrl = resultUrl;
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
    return (this.status == null ? bulkUpsertStatusResponse.status == null : this.status.equals(bulkUpsertStatusResponse.status)) &&
        (this.resultUrl == null ? bulkUpsertStatusResponse.resultUrl == null : this.resultUrl.equals(bulkUpsertStatusResponse.resultUrl));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.status == null ? 0: this.status.hashCode());
    result = 31 * result + (this.resultUrl == null ? 0: this.resultUrl.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class BulkUpsertStatusResponse {\n");
    
    sb.append("  status: ").append(status).append("\n");
    sb.append("  resultUrl: ").append(resultUrl).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
