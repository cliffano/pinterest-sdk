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

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * The dynamic date range of the template
 **/
@ApiModel(description = "The dynamic date range of the template")
public class TemplateResponseDateRangeDynamicDateRange {
  
  @SerializedName("type")
  private String type = null;
  public enum RangeEnum {
     YEAR_TO_DATE,  QUARTER_TO_DATE,  MONTH_TO_DATE,  LAST_MONTH, 
  };
  @SerializedName("range")
  private RangeEnum range = null;

  /**
   * The date range type
   **/
  @ApiModelProperty(value = "The date range type")
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  /**
   * The dynamic range type
   **/
  @ApiModelProperty(value = "The dynamic range type")
  public RangeEnum getRange() {
    return range;
  }
  public void setRange(RangeEnum range) {
    this.range = range;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TemplateResponseDateRangeDynamicDateRange templateResponseDateRangeDynamicDateRange = (TemplateResponseDateRangeDynamicDateRange) o;
    return (this.type == null ? templateResponseDateRangeDynamicDateRange.type == null : this.type.equals(templateResponseDateRangeDynamicDateRange.type)) &&
        (this.range == null ? templateResponseDateRangeDynamicDateRange.range == null : this.range.equals(templateResponseDateRangeDynamicDateRange.range));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.type == null ? 0: this.type.hashCode());
    result = 31 * result + (this.range == null ? 0: this.range.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class TemplateResponseDateRangeDynamicDateRange {\n");
    
    sb.append("  type: ").append(type).append("\n");
    sb.append("  range: ").append(range).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
