/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package com.cliffano.pinterestsdk.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * The counts can be null early in the process.
 */
@ApiModel(description = "The counts can be null early in the process.")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2022-05-07T06:37:33.786272Z[Etc/UTC]")
public class CatalogsFeedProductCounts {
  public static final String SERIALIZED_NAME_ORIGINAL = "original";
  @SerializedName(SERIALIZED_NAME_ORIGINAL)
  private Integer original;

  public CatalogsFeedProductCounts() { 
  }

  public CatalogsFeedProductCounts original(Integer original) {
    
    this.original = original;
    return this;
  }

   /**
   * The number of products in the feed file
   * @return original
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "The number of products in the feed file")

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
    return Objects.equals(this.original, catalogsFeedProductCounts.original);
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

