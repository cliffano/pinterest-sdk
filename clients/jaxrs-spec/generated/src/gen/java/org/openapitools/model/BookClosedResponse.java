package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonTypeName;

/**
 * Creation fields
 **/
@ApiModel(description = "Creation fields")
@JsonTypeName("BookClosedResponse")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJAXRSSpecServerCodegen", date = "2024-03-14T23:05:05.545684373Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class BookClosedResponse   {
  private @Valid Boolean conversionMetricsReady;
  private @Valid Boolean nonConversionMetricsReady;

  /**
   * Are conversion metrics ready?
   **/
  public BookClosedResponse conversionMetricsReady(Boolean conversionMetricsReady) {
    this.conversionMetricsReady = conversionMetricsReady;
    return this;
  }

  
  @ApiModelProperty(example = "false", value = "Are conversion metrics ready?")
  @JsonProperty("conversion_metrics_ready")
  public Boolean getConversionMetricsReady() {
    return conversionMetricsReady;
  }

  @JsonProperty("conversion_metrics_ready")
  public void setConversionMetricsReady(Boolean conversionMetricsReady) {
    this.conversionMetricsReady = conversionMetricsReady;
  }

  /**
   * Are non-conversion metrics ready?
   **/
  public BookClosedResponse nonConversionMetricsReady(Boolean nonConversionMetricsReady) {
    this.nonConversionMetricsReady = nonConversionMetricsReady;
    return this;
  }

  
  @ApiModelProperty(example = "false", value = "Are non-conversion metrics ready?")
  @JsonProperty("non_conversion_metrics_ready")
  public Boolean getNonConversionMetricsReady() {
    return nonConversionMetricsReady;
  }

  @JsonProperty("non_conversion_metrics_ready")
  public void setNonConversionMetricsReady(Boolean nonConversionMetricsReady) {
    this.nonConversionMetricsReady = nonConversionMetricsReady;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BookClosedResponse bookClosedResponse = (BookClosedResponse) o;
    return Objects.equals(this.conversionMetricsReady, bookClosedResponse.conversionMetricsReady) &&
        Objects.equals(this.nonConversionMetricsReady, bookClosedResponse.nonConversionMetricsReady);
  }

  @Override
  public int hashCode() {
    return Objects.hash(conversionMetricsReady, nonConversionMetricsReady);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BookClosedResponse {\n");
    
    sb.append("    conversionMetricsReady: ").append(toIndentedString(conversionMetricsReady)).append("\n");
    sb.append("    nonConversionMetricsReady: ").append(toIndentedString(nonConversionMetricsReady)).append("\n");
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

