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
public class HotelIdFilter {
  
  @SerializedName("HOTEL_ID")
  private CatalogsProductGroupMultipleStringCriteria HOTEL_ID = null;

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public CatalogsProductGroupMultipleStringCriteria getHOTELID() {
    return HOTEL_ID;
  }
  public void setHOTELID(CatalogsProductGroupMultipleStringCriteria HOTEL_ID) {
    this.HOTEL_ID = HOTEL_ID;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HotelIdFilter hotelIdFilter = (HotelIdFilter) o;
    return (this.HOTEL_ID == null ? hotelIdFilter.HOTEL_ID == null : this.HOTEL_ID.equals(hotelIdFilter.HOTEL_ID));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.HOTEL_ID == null ? 0: this.HOTEL_ID.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class HotelIdFilter {\n");
    
    sb.append("  HOTEL_ID: ").append(HOTEL_ID).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
