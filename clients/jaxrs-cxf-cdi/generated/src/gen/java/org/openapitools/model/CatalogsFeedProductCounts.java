package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import javax.validation.constraints.*;

/**
 * The counts can be null early in the process.
 **/

import io.swagger.annotations.*;
import java.util.Objects;


@ApiModel(description = "The counts can be null early in the process.")
public class CatalogsFeedProductCounts   {
  
  private Integer original;


  /**
   * The number of products in the feed file
   **/
  public CatalogsFeedProductCounts original(Integer original) {
    this.original = original;
    return this;
  }

  
  @ApiModelProperty(value = "The number of products in the feed file")
  @JsonProperty("original")
  public Integer getOriginal() {
    return original;
  }
  public void setOriginal(Integer original) {
    this.original = original;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsFeedProductCounts catalogsFeedProductCounts = (CatalogsFeedProductCounts) o;
    return Objects.equals(original, catalogsFeedProductCounts.original);
  }

  @Override
  public int hashCode() {
    return Objects.hash(original);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsFeedProductCounts {\n");
    
    sb.append("    original: ").append(toIndentedString(original)).append("\n");
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

