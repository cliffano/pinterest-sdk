package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import org.openapitools.model.CatalogsProductGroupFilters;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
  * Request object to list products for a given feed_id and product group filter.
 **/
@ApiModel(description="Request object to list products for a given feed_id and product group filter.")

public class CatalogsListProductsByFilterRequestOneOf  {
  
  @ApiModelProperty(example = "2680059592705", required = true, value = "Catalog Feed id pertaining to the catalog product group filter.")
 /**
   * Catalog Feed id pertaining to the catalog product group filter.
  **/
  private String feedId;

  @ApiModelProperty(required = true, value = "")
  private CatalogsProductGroupFilters filters;
 /**
   * Catalog Feed id pertaining to the catalog product group filter.
   * @return feedId
  **/
  @JsonProperty("feed_id")
  public String getFeedId() {
    return feedId;
  }

  public void setFeedId(String feedId) {
    this.feedId = feedId;
  }

  public CatalogsListProductsByFilterRequestOneOf feedId(String feedId) {
    this.feedId = feedId;
    return this;
  }

 /**
   * Get filters
   * @return filters
  **/
  @JsonProperty("filters")
  public CatalogsProductGroupFilters getFilters() {
    return filters;
  }

  public void setFilters(CatalogsProductGroupFilters filters) {
    this.filters = filters;
  }

  public CatalogsListProductsByFilterRequestOneOf filters(CatalogsProductGroupFilters filters) {
    this.filters = filters;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsListProductsByFilterRequestOneOf catalogsListProductsByFilterRequestOneOf = (CatalogsListProductsByFilterRequestOneOf) o;
    return Objects.equals(this.feedId, catalogsListProductsByFilterRequestOneOf.feedId) &&
        Objects.equals(this.filters, catalogsListProductsByFilterRequestOneOf.filters);
  }

  @Override
  public int hashCode() {
    return Objects.hash(feedId, filters);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsListProductsByFilterRequestOneOf {\n");
    
    sb.append("    feedId: ").append(toIndentedString(feedId)).append("\n");
    sb.append("    filters: ").append(toIndentedString(filters)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

