package org.openapitools.model;

import org.openapitools.model.CatalogsProductGroupMultipleStringCriteria;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.JsonFormat;
import com.fasterxml.jackson.annotation.JsonProperty;


public class BrandFilter  {
  
  @ApiModelProperty(required = true, value = "")
  @Valid
  private CatalogsProductGroupMultipleStringCriteria BRAND;
 /**
  * Get BRAND
  * @return BRAND
  */
  @JsonProperty("BRAND")
  @NotNull
  public CatalogsProductGroupMultipleStringCriteria getBRAND() {
    return BRAND;
  }

  /**
   * Sets the <code>BRAND</code> property.
   */
 public void setBRAND(CatalogsProductGroupMultipleStringCriteria BRAND) {
    this.BRAND = BRAND;
  }

  /**
   * Sets the <code>BRAND</code> property.
   */
  public BrandFilter BRAND(CatalogsProductGroupMultipleStringCriteria BRAND) {
    this.BRAND = BRAND;
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
    BrandFilter brandFilter = (BrandFilter) o;
    return Objects.equals(this.BRAND, brandFilter.BRAND);
  }

  @Override
  public int hashCode() {
    return Objects.hash(BRAND);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BrandFilter {\n");
    
    sb.append("    BRAND: ").append(toIndentedString(BRAND)).append("\n");
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

