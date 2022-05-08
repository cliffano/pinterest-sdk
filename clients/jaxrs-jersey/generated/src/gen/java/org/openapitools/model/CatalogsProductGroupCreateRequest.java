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


package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.CatalogsProductGroupFilters;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Request object for creating a product group.
 */
@ApiModel(description = "Request object for creating a product group.")
@JsonPropertyOrder({
  CatalogsProductGroupCreateRequest.JSON_PROPERTY_FEED_ID,
  CatalogsProductGroupCreateRequest.JSON_PROPERTY_NAME,
  CatalogsProductGroupCreateRequest.JSON_PROPERTY_DESCRIPTION,
  CatalogsProductGroupCreateRequest.JSON_PROPERTY_FILTERS
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2022-05-08T00:33:19.615491Z[Etc/UTC]")
public class CatalogsProductGroupCreateRequest   {
  public static final String JSON_PROPERTY_FEED_ID = "feed_id";
  @JsonProperty(JSON_PROPERTY_FEED_ID)
  private String feedId;

  public static final String JSON_PROPERTY_NAME = "name";
  @JsonProperty(JSON_PROPERTY_NAME)
  private String name;

  public static final String JSON_PROPERTY_DESCRIPTION = "description";
  @JsonProperty(JSON_PROPERTY_DESCRIPTION)
  private String description;

  public static final String JSON_PROPERTY_FILTERS = "filters";
  @JsonProperty(JSON_PROPERTY_FILTERS)
  private CatalogsProductGroupFilters filters;

  public CatalogsProductGroupCreateRequest feedId(String feedId) {
    this.feedId = feedId;
    return this;
  }

  /**
   * Catalog Feed id pertaining to the catalog product group.
   * @return feedId
   **/
  @JsonProperty(value = "feed_id")
  @ApiModelProperty(example = "2680059592705", required = true, value = "Catalog Feed id pertaining to the catalog product group.")
  @NotNull  @Pattern(regexp="^\\d+$")
  public String getFeedId() {
    return feedId;
  }

  public void setFeedId(String feedId) {
    this.feedId = feedId;
  }

  public CatalogsProductGroupCreateRequest name(String name) {
    this.name = name;
    return this;
  }

  /**
   * Get name
   * @return name
   **/
  @JsonProperty(value = "name")
  @ApiModelProperty(required = true, value = "")
  @NotNull 
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public CatalogsProductGroupCreateRequest description(String description) {
    this.description = description;
    return this;
  }

  /**
   * Get description
   * @return description
   **/
  @JsonProperty(value = "description")
  @ApiModelProperty(value = "")
  
  public String getDescription() {
    return description;
  }

  public void setDescription(String description) {
    this.description = description;
  }

  public CatalogsProductGroupCreateRequest filters(CatalogsProductGroupFilters filters) {
    this.filters = filters;
    return this;
  }

  /**
   * Get filters
   * @return filters
   **/
  @JsonProperty(value = "filters")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public CatalogsProductGroupFilters getFilters() {
    return filters;
  }

  public void setFilters(CatalogsProductGroupFilters filters) {
    this.filters = filters;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsProductGroupCreateRequest catalogsProductGroupCreateRequest = (CatalogsProductGroupCreateRequest) o;
    return Objects.equals(this.feedId, catalogsProductGroupCreateRequest.feedId) &&
        Objects.equals(this.name, catalogsProductGroupCreateRequest.name) &&
        Objects.equals(this.description, catalogsProductGroupCreateRequest.description) &&
        Objects.equals(this.filters, catalogsProductGroupCreateRequest.filters);
  }

  @Override
  public int hashCode() {
    return Objects.hash(feedId, name, description, filters);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsProductGroupCreateRequest {\n");
    
    sb.append("    feedId: ").append(toIndentedString(feedId)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    description: ").append(toIndentedString(description)).append("\n");
    sb.append("    filters: ").append(toIndentedString(filters)).append("\n");
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

