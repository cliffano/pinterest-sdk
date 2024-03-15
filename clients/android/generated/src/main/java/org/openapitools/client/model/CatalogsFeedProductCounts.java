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
 * The counts can be null early in the process.
 **/
@ApiModel(description = "The counts can be null early in the process.")
public class CatalogsFeedProductCounts {
  
  @SerializedName("original")
  private Integer original = null;
  @SerializedName("ingested")
  private Integer ingested = null;

  /**
   * The number of products in the feed file.
   **/
  @ApiModelProperty(value = "The number of products in the feed file.")
  public Integer getOriginal() {
    return original;
  }
  public void setOriginal(Integer original) {
    this.original = original;
  }

  /**
   * The number of products successfully ingested from the feed file.
   **/
  @ApiModelProperty(value = "The number of products successfully ingested from the feed file.")
  public Integer getIngested() {
    return ingested;
  }
  public void setIngested(Integer ingested) {
    this.ingested = ingested;
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
    return (this.original == null ? catalogsFeedProductCounts.original == null : this.original.equals(catalogsFeedProductCounts.original)) &&
        (this.ingested == null ? catalogsFeedProductCounts.ingested == null : this.ingested.equals(catalogsFeedProductCounts.ingested));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.original == null ? 0: this.original.hashCode());
    result = 31 * result + (this.ingested == null ? 0: this.ingested.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsFeedProductCounts {\n");
    
    sb.append("  original: ").append(original).append("\n");
    sb.append("  ingested: ").append(ingested).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}