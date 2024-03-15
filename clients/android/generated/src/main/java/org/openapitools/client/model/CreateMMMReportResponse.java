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

import java.math.BigDecimal;
import org.openapitools.client.model.CreateMMMReportResponseData;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class CreateMMMReportResponse {
  
  @SerializedName("code")
  private BigDecimal code = null;
  @SerializedName("data")
  private CreateMMMReportResponseData data = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getCode() {
    return code;
  }
  public void setCode(BigDecimal code) {
    this.code = code;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public CreateMMMReportResponseData getData() {
    return data;
  }
  public void setData(CreateMMMReportResponseData data) {
    this.data = data;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CreateMMMReportResponse createMMMReportResponse = (CreateMMMReportResponse) o;
    return (this.code == null ? createMMMReportResponse.code == null : this.code.equals(createMMMReportResponse.code)) &&
        (this.data == null ? createMMMReportResponse.data == null : this.data.equals(createMMMReportResponse.data));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.code == null ? 0: this.code.hashCode());
    result = 31 * result + (this.data == null ? 0: this.data.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CreateMMMReportResponse {\n");
    
    sb.append("  code: ").append(code).append("\n");
    sb.append("  data: ").append(data).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}