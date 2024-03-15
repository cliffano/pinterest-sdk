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

import org.openapitools.client.model.CatalogsProductGroupMultipleStringCriteria;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class CustomLabel1Filter {
  
  @SerializedName("CUSTOM_LABEL_1")
  private CatalogsProductGroupMultipleStringCriteria cUSTOMLABEL1 = null;

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public CatalogsProductGroupMultipleStringCriteria getCUSTOMLABEL1() {
    return cUSTOMLABEL1;
  }
  public void setCUSTOMLABEL1(CatalogsProductGroupMultipleStringCriteria cUSTOMLABEL1) {
    this.cUSTOMLABEL1 = cUSTOMLABEL1;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CustomLabel1Filter customLabel1Filter = (CustomLabel1Filter) o;
    return (this.cUSTOMLABEL1 == null ? customLabel1Filter.cUSTOMLABEL1 == null : this.cUSTOMLABEL1.equals(customLabel1Filter.cUSTOMLABEL1));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.cUSTOMLABEL1 == null ? 0: this.cUSTOMLABEL1.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CustomLabel1Filter {\n");
    
    sb.append("  cUSTOMLABEL1: ").append(cUSTOMLABEL1).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
