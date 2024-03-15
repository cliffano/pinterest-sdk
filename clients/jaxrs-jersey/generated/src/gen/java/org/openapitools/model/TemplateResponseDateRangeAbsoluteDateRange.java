/*
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


package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonTypeName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.math.BigDecimal;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * The absolute date range of the template
 */
@ApiModel(description = "The absolute date range of the template")
@JsonPropertyOrder({
  TemplateResponseDateRangeAbsoluteDateRange.JSON_PROPERTY_TYPE,
  TemplateResponseDateRangeAbsoluteDateRange.JSON_PROPERTY_START_DATE,
  TemplateResponseDateRangeAbsoluteDateRange.JSON_PROPERTY_END_DATE
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class TemplateResponseDateRangeAbsoluteDateRange   {
  public static final String JSON_PROPERTY_TYPE = "type";
  @JsonProperty(JSON_PROPERTY_TYPE)
  private String type;

  public static final String JSON_PROPERTY_START_DATE = "start_date";
  @JsonProperty(JSON_PROPERTY_START_DATE)
  private BigDecimal startDate;

  public static final String JSON_PROPERTY_END_DATE = "end_date";
  @JsonProperty(JSON_PROPERTY_END_DATE)
  private BigDecimal endDate;

  public TemplateResponseDateRangeAbsoluteDateRange type(String type) {
    this.type = type;
    return this;
  }

  /**
   * The date range type
   * @return type
   **/
  @JsonProperty(value = "type")
  @ApiModelProperty(example = "absolute", value = "The date range type")
  
  public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }

  public TemplateResponseDateRangeAbsoluteDateRange startDate(BigDecimal startDate) {
    this.startDate = startDate;
    return this;
  }

  /**
   * The start date of the date range
   * @return startDate
   **/
  @JsonProperty(value = "start_date")
  @ApiModelProperty(example = "0.8008281904610115", value = "The start date of the date range")
  @Valid 
  public BigDecimal getStartDate() {
    return startDate;
  }

  public void setStartDate(BigDecimal startDate) {
    this.startDate = startDate;
  }

  public TemplateResponseDateRangeAbsoluteDateRange endDate(BigDecimal endDate) {
    this.endDate = endDate;
    return this;
  }

  /**
   * The end date of the date range
   * @return endDate
   **/
  @JsonProperty(value = "end_date")
  @ApiModelProperty(example = "6.027456183070403", value = "The end date of the date range")
  @Valid 
  public BigDecimal getEndDate() {
    return endDate;
  }

  public void setEndDate(BigDecimal endDate) {
    this.endDate = endDate;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TemplateResponseDateRangeAbsoluteDateRange templateResponseDateRangeAbsoluteDateRange = (TemplateResponseDateRangeAbsoluteDateRange) o;
    return Objects.equals(this.type, templateResponseDateRangeAbsoluteDateRange.type) &&
        Objects.equals(this.startDate, templateResponseDateRangeAbsoluteDateRange.startDate) &&
        Objects.equals(this.endDate, templateResponseDateRangeAbsoluteDateRange.endDate);
  }

  @Override
  public int hashCode() {
    return Objects.hash(type, startDate, endDate);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class TemplateResponseDateRangeAbsoluteDateRange {\n");
    
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    startDate: ").append(toIndentedString(startDate)).append("\n");
    sb.append("    endDate: ").append(toIndentedString(endDate)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
