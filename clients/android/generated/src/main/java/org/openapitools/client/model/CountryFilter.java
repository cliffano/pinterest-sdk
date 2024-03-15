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

import org.openapitools.client.model.CatalogsProductGroupMultipleCountriesCriteria;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class CountryFilter {
  
  @SerializedName("COUNTRY")
  private CatalogsProductGroupMultipleCountriesCriteria COUNTRY = null;

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public CatalogsProductGroupMultipleCountriesCriteria getCOUNTRY() {
    return COUNTRY;
  }
  public void setCOUNTRY(CatalogsProductGroupMultipleCountriesCriteria COUNTRY) {
    this.COUNTRY = COUNTRY;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CountryFilter countryFilter = (CountryFilter) o;
    return (this.COUNTRY == null ? countryFilter.COUNTRY == null : this.COUNTRY.equals(countryFilter.COUNTRY));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.COUNTRY == null ? 0: this.COUNTRY.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CountryFilter {\n");
    
    sb.append("  COUNTRY: ").append(COUNTRY).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
