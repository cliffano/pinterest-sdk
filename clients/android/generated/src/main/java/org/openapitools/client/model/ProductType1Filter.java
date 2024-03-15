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

import org.openapitools.client.model.CatalogsProductGroupMultipleStringListCriteria;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ProductType1Filter {
  
  @SerializedName("PRODUCT_TYPE_1")
  private CatalogsProductGroupMultipleStringListCriteria pRODUCTTYPE1 = null;

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public CatalogsProductGroupMultipleStringListCriteria getPRODUCTTYPE1() {
    return pRODUCTTYPE1;
  }
  public void setPRODUCTTYPE1(CatalogsProductGroupMultipleStringListCriteria pRODUCTTYPE1) {
    this.pRODUCTTYPE1 = pRODUCTTYPE1;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ProductType1Filter productType1Filter = (ProductType1Filter) o;
    return (this.pRODUCTTYPE1 == null ? productType1Filter.pRODUCTTYPE1 == null : this.pRODUCTTYPE1.equals(productType1Filter.pRODUCTTYPE1));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.pRODUCTTYPE1 == null ? 0: this.pRODUCTTYPE1.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ProductType1Filter {\n");
    
    sb.append("  pRODUCTTYPE1: ").append(pRODUCTTYPE1).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}