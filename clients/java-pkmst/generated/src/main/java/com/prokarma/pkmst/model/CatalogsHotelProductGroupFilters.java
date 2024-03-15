package com.prokarma.pkmst.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.prokarma.pkmst.model.CatalogsHotelProductGroupFilterKeys;
import com.prokarma.pkmst.model.CatalogsHotelProductGroupFiltersAllOf;
import com.prokarma.pkmst.model.CatalogsHotelProductGroupFiltersAnyOf;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
/**
 * Response class to be returned by Api
 * @author pkmst
 *
 */
/**
 * Object holding a group of filters for a hotel product group
 */
@ApiModel(description = "Object holding a group of filters for a hotel product group")

@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaPKMSTServerCodegen", date = "2024-03-14T23:02:40.880156196Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class CatalogsHotelProductGroupFilters   {
  @JsonProperty("any_of")
  
  private List<CatalogsHotelProductGroupFilterKeys> anyOf = new ArrayList<>();

  @JsonProperty("all_of")
  
  private List<CatalogsHotelProductGroupFilterKeys> allOf = new ArrayList<>();

  public CatalogsHotelProductGroupFilters anyOf(List<CatalogsHotelProductGroupFilterKeys> anyOf) {
    this.anyOf = anyOf;
    return this;
  }

  public CatalogsHotelProductGroupFilters addAnyOfItem(CatalogsHotelProductGroupFilterKeys anyOfItem) {
    if (this.anyOf == null) {
      this.anyOf = new ArrayList<>();
    }
    this.anyOf.add(anyOfItem);
    return this;
  }

   /**
   * Get anyOf
   * @return anyOf
  **/
  @ApiModelProperty(required = true, value = "")
  public List<CatalogsHotelProductGroupFilterKeys> getAnyOf() {
    return anyOf;
  }

  public void setAnyOf(List<CatalogsHotelProductGroupFilterKeys> anyOf) {
    this.anyOf = anyOf;
  }

  public CatalogsHotelProductGroupFilters allOf(List<CatalogsHotelProductGroupFilterKeys> allOf) {
    this.allOf = allOf;
    return this;
  }

  public CatalogsHotelProductGroupFilters addAllOfItem(CatalogsHotelProductGroupFilterKeys allOfItem) {
    if (this.allOf == null) {
      this.allOf = new ArrayList<>();
    }
    this.allOf.add(allOfItem);
    return this;
  }

   /**
   * Get allOf
   * @return allOf
  **/
  @ApiModelProperty(required = true, value = "")
  public List<CatalogsHotelProductGroupFilterKeys> getAllOf() {
    return allOf;
  }

  public void setAllOf(List<CatalogsHotelProductGroupFilterKeys> allOf) {
    this.allOf = allOf;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsHotelProductGroupFilters catalogsHotelProductGroupFilters = (CatalogsHotelProductGroupFilters) o;
    return Objects.equals(this.anyOf, catalogsHotelProductGroupFilters.anyOf) &&
        Objects.equals(this.allOf, catalogsHotelProductGroupFilters.allOf);
  }

  @Override
  public int hashCode() {
    return Objects.hash(anyOf, allOf);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsHotelProductGroupFilters {\n");
    
    sb.append("    anyOf: ").append(toIndentedString(anyOf)).append("\n");
    sb.append("    allOf: ").append(toIndentedString(allOf)).append("\n");
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

