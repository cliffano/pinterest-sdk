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
import org.openapitools.client.model.AdGroupResponse;
import org.openapitools.client.model.Exception;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class AdGroupArrayResponseElement {
  
  @SerializedName("data")
  private AdGroupResponse data = null;
  @SerializedName("exceptions")
  private List<Exception> exceptions = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public AdGroupResponse getData() {
    return data;
  }
  public void setData(AdGroupResponse data) {
    this.data = data;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public List<Exception> getExceptions() {
    return exceptions;
  }
  public void setExceptions(List<Exception> exceptions) {
    this.exceptions = exceptions;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdGroupArrayResponseElement adGroupArrayResponseElement = (AdGroupArrayResponseElement) o;
    return (this.data == null ? adGroupArrayResponseElement.data == null : this.data.equals(adGroupArrayResponseElement.data)) &&
        (this.exceptions == null ? adGroupArrayResponseElement.exceptions == null : this.exceptions.equals(adGroupArrayResponseElement.exceptions));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.data == null ? 0: this.data.hashCode());
    result = 31 * result + (this.exceptions == null ? 0: this.exceptions.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdGroupArrayResponseElement {\n");
    
    sb.append("  data: ").append(data).append("\n");
    sb.append("  exceptions: ").append(exceptions).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
