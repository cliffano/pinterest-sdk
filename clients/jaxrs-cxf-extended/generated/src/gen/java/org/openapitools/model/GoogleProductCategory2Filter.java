package org.openapitools.model;

import org.openapitools.model.CatalogsProductGroupMultipleStringListCriteria;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.JsonFormat;
import com.fasterxml.jackson.annotation.JsonProperty;


public class GoogleProductCategory2Filter  {
  
  @ApiModelProperty(required = true, value = "")
  @Valid
  private CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_2;
 /**
  * Get GOOGLE_PRODUCT_CATEGORY_2
  * @return GOOGLE_PRODUCT_CATEGORY_2
  */
  @JsonProperty("GOOGLE_PRODUCT_CATEGORY_2")
  @NotNull
  public CatalogsProductGroupMultipleStringListCriteria getGOOGLEPRODUCTCATEGORY2() {
    return GOOGLE_PRODUCT_CATEGORY_2;
  }

  /**
   * Sets the <code>GOOGLE_PRODUCT_CATEGORY_2</code> property.
   */
 public void setGOOGLEPRODUCTCATEGORY2(CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_2) {
    this.GOOGLE_PRODUCT_CATEGORY_2 = GOOGLE_PRODUCT_CATEGORY_2;
  }

  /**
   * Sets the <code>GOOGLE_PRODUCT_CATEGORY_2</code> property.
   */
  public GoogleProductCategory2Filter GOOGLE_PRODUCT_CATEGORY_2(CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_2) {
    this.GOOGLE_PRODUCT_CATEGORY_2 = GOOGLE_PRODUCT_CATEGORY_2;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GoogleProductCategory2Filter {\n");
    
    sb.append("    GOOGLE_PRODUCT_CATEGORY_2: ").append(toIndentedString(GOOGLE_PRODUCT_CATEGORY_2)).append("\n");
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

