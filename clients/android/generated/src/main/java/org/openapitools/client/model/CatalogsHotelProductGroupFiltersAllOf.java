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
import org.openapitools.client.model.CatalogsHotelProductGroupFilterKeys;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class CatalogsHotelProductGroupFiltersAllOf {
  
  @SerializedName("all_of")
  private List<CatalogsHotelProductGroupFilterKeys> allOf = null;

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public List<CatalogsHotelProductGroupFilterKeys> getAllOf() {
    return allOf;
  }
  public void setAllOf(List<CatalogsHotelProductGroupFilterKeys> allOf) {
    this.allOf = allOf;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsHotelProductGroupFiltersAllOf catalogsHotelProductGroupFiltersAllOf = (CatalogsHotelProductGroupFiltersAllOf) o;
    return (this.allOf == null ? catalogsHotelProductGroupFiltersAllOf.allOf == null : this.allOf.equals(catalogsHotelProductGroupFiltersAllOf.allOf));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.allOf == null ? 0: this.allOf.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsHotelProductGroupFiltersAllOf {\n");
    
    sb.append("  allOf: ").append(allOf).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
