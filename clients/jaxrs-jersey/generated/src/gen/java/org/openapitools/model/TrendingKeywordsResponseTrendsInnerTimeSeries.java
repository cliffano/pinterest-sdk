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
import java.util.Date;
import java.util.HashMap;
import java.util.Map;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A sequence of weekly observations of the relative search volume for this keyword over the past year.&lt;br /&gt; These values are normalized to a [0-100] range, and can be used to visualize the history of user interest in this keyword. By default, normalization is applied independently to the time series of each keyword, but the &#x60;normalize_against_group&#x60; query parameter can be used in cases where you wish to compare relative volume between keywords.&lt;br /&gt; **Note**: The date of each observation is in ISO-8601 format and represents the *end* of the week.  For example, a value of &#x60;2023-10-31&#x60; would include searches that happened between &#x60;2023-10-25&#x60; and &#x60;2023-10-31&#x60;.
 */
@ApiModel(description = "A sequence of weekly observations of the relative search volume for this keyword over the past year.<br /> These values are normalized to a [0-100] range, and can be used to visualize the history of user interest in this keyword. By default, normalization is applied independently to the time series of each keyword, but the `normalize_against_group` query parameter can be used in cases where you wish to compare relative volume between keywords.<br /> **Note**: The date of each observation is in ISO-8601 format and represents the *end* of the week.  For example, a value of `2023-10-31` would include searches that happened between `2023-10-25` and `2023-10-31`.")
@JsonPropertyOrder({
  TrendingKeywordsResponseTrendsInnerTimeSeries.JSON_PROPERTY_DATE
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class TrendingKeywordsResponseTrendsInnerTimeSeries extends HashMap<String, Integer>  {
  public static final String JSON_PROPERTY_DATE = "date";
  @JsonProperty(JSON_PROPERTY_DATE)
  private Date date;

  public TrendingKeywordsResponseTrendsInnerTimeSeries date(Date date) {
    this.date = date;
    return this;
  }

  /**
   * Get date
   * @return date
   **/
  @JsonProperty(value = "date")
  @ApiModelProperty(value = "")
  
  public Date getDate() {
    return date;
  }

  public void setDate(Date date) {
    this.date = date;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TrendingKeywordsResponseTrendsInnerTimeSeries trendingKeywordsResponseTrendsInnerTimeSeries = (TrendingKeywordsResponseTrendsInnerTimeSeries) o;
    return super.equals(o) && Objects.equals(this.date, trendingKeywordsResponseTrendsInnerTimeSeries.date);
  }

  @Override
  public int hashCode() {
    return Objects.hash(super.hashCode(), date);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class TrendingKeywordsResponseTrendsInnerTimeSeries {\n");
    sb.append("    ").append(toIndentedString(super.toString())).append("\n");
    sb.append("    date: ").append(toIndentedString(date)).append("\n");
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

