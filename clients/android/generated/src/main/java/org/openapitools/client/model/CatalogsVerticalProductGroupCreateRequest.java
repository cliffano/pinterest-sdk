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

import org.openapitools.client.model.CatalogsHotelProductGroupCreateRequest;
import org.openapitools.client.model.CatalogsHotelProductGroupFilters;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * Request object for creating a hotel product group.
 **/
@ApiModel(description = "Request object for creating a hotel product group.")
public class CatalogsVerticalProductGroupCreateRequest {
  
  public enum CatalogTypeEnum {
     HOTEL, 
  };
  @SerializedName("catalog_type")
  private CatalogTypeEnum catalogType = null;
  @SerializedName("name")
  private String name = null;
  @SerializedName("description")
  private String description = null;
  @SerializedName("filters")
  private CatalogsHotelProductGroupFilters filters = null;
  @SerializedName("catalog_id")
  private String catalogId = null;

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public CatalogTypeEnum getCatalogType() {
    return catalogType;
  }
  public void setCatalogType(CatalogTypeEnum catalogType) {
    this.catalogType = catalogType;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getDescription() {
    return description;
  }
  public void setDescription(String description) {
    this.description = description;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public CatalogsHotelProductGroupFilters getFilters() {
    return filters;
  }
  public void setFilters(CatalogsHotelProductGroupFilters filters) {
    this.filters = filters;
  }

  /**
   * Catalog id pertaining to the hotel product group.
   **/
  @ApiModelProperty(required = true, value = "Catalog id pertaining to the hotel product group.")
  public String getCatalogId() {
    return catalogId;
  }
  public void setCatalogId(String catalogId) {
    this.catalogId = catalogId;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsVerticalProductGroupCreateRequest catalogsVerticalProductGroupCreateRequest = (CatalogsVerticalProductGroupCreateRequest) o;
    return (this.catalogType == null ? catalogsVerticalProductGroupCreateRequest.catalogType == null : this.catalogType.equals(catalogsVerticalProductGroupCreateRequest.catalogType)) &&
        (this.name == null ? catalogsVerticalProductGroupCreateRequest.name == null : this.name.equals(catalogsVerticalProductGroupCreateRequest.name)) &&
        (this.description == null ? catalogsVerticalProductGroupCreateRequest.description == null : this.description.equals(catalogsVerticalProductGroupCreateRequest.description)) &&
        (this.filters == null ? catalogsVerticalProductGroupCreateRequest.filters == null : this.filters.equals(catalogsVerticalProductGroupCreateRequest.filters)) &&
        (this.catalogId == null ? catalogsVerticalProductGroupCreateRequest.catalogId == null : this.catalogId.equals(catalogsVerticalProductGroupCreateRequest.catalogId));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.catalogType == null ? 0: this.catalogType.hashCode());
    result = 31 * result + (this.name == null ? 0: this.name.hashCode());
    result = 31 * result + (this.description == null ? 0: this.description.hashCode());
    result = 31 * result + (this.filters == null ? 0: this.filters.hashCode());
    result = 31 * result + (this.catalogId == null ? 0: this.catalogId.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsVerticalProductGroupCreateRequest {\n");
    
    sb.append("  catalogType: ").append(catalogType).append("\n");
    sb.append("  name: ").append(name).append("\n");
    sb.append("  description: ").append(description).append("\n");
    sb.append("  filters: ").append(filters).append("\n");
    sb.append("  catalogId: ").append(catalogId).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
