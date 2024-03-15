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

import org.openapitools.client.model.CatalogsHotelProductGroupFilters;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class CatalogsHotelProductGroup {
  
  public enum CatalogTypeEnum {
     HOTEL, 
  };
  @SerializedName("catalog_type")
  private CatalogTypeEnum catalogType = null;
  @SerializedName("id")
  private String id = null;
  @SerializedName("name")
  private String name = null;
  @SerializedName("description")
  private String description = null;
  @SerializedName("filters")
  private CatalogsHotelProductGroupFilters filters = null;
  @SerializedName("created_at")
  private Integer createdAt = null;
  @SerializedName("updated_at")
  private Integer updatedAt = null;
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
   * ID of the hotel product group.
   **/
  @ApiModelProperty(required = true, value = "ID of the hotel product group.")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   * Name of hotel product group
   **/
  @ApiModelProperty(value = "Name of hotel product group")
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
   * Unix timestamp in seconds of when catalog product group was created.
   **/
  @ApiModelProperty(value = "Unix timestamp in seconds of when catalog product group was created.")
  public Integer getCreatedAt() {
    return createdAt;
  }
  public void setCreatedAt(Integer createdAt) {
    this.createdAt = createdAt;
  }

  /**
   * Unix timestamp in seconds of last time catalog product group was updated.
   **/
  @ApiModelProperty(value = "Unix timestamp in seconds of last time catalog product group was updated.")
  public Integer getUpdatedAt() {
    return updatedAt;
  }
  public void setUpdatedAt(Integer updatedAt) {
    this.updatedAt = updatedAt;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
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
    CatalogsHotelProductGroup catalogsHotelProductGroup = (CatalogsHotelProductGroup) o;
    return (this.catalogType == null ? catalogsHotelProductGroup.catalogType == null : this.catalogType.equals(catalogsHotelProductGroup.catalogType)) &&
        (this.id == null ? catalogsHotelProductGroup.id == null : this.id.equals(catalogsHotelProductGroup.id)) &&
        (this.name == null ? catalogsHotelProductGroup.name == null : this.name.equals(catalogsHotelProductGroup.name)) &&
        (this.description == null ? catalogsHotelProductGroup.description == null : this.description.equals(catalogsHotelProductGroup.description)) &&
        (this.filters == null ? catalogsHotelProductGroup.filters == null : this.filters.equals(catalogsHotelProductGroup.filters)) &&
        (this.createdAt == null ? catalogsHotelProductGroup.createdAt == null : this.createdAt.equals(catalogsHotelProductGroup.createdAt)) &&
        (this.updatedAt == null ? catalogsHotelProductGroup.updatedAt == null : this.updatedAt.equals(catalogsHotelProductGroup.updatedAt)) &&
        (this.catalogId == null ? catalogsHotelProductGroup.catalogId == null : this.catalogId.equals(catalogsHotelProductGroup.catalogId));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.catalogType == null ? 0: this.catalogType.hashCode());
    result = 31 * result + (this.id == null ? 0: this.id.hashCode());
    result = 31 * result + (this.name == null ? 0: this.name.hashCode());
    result = 31 * result + (this.description == null ? 0: this.description.hashCode());
    result = 31 * result + (this.filters == null ? 0: this.filters.hashCode());
    result = 31 * result + (this.createdAt == null ? 0: this.createdAt.hashCode());
    result = 31 * result + (this.updatedAt == null ? 0: this.updatedAt.hashCode());
    result = 31 * result + (this.catalogId == null ? 0: this.catalogId.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsHotelProductGroup {\n");
    
    sb.append("  catalogType: ").append(catalogType).append("\n");
    sb.append("  id: ").append(id).append("\n");
    sb.append("  name: ").append(name).append("\n");
    sb.append("  description: ").append(description).append("\n");
    sb.append("  filters: ").append(filters).append("\n");
    sb.append("  createdAt: ").append(createdAt).append("\n");
    sb.append("  updatedAt: ").append(updatedAt).append("\n");
    sb.append("  catalogId: ").append(catalogId).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
