package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.CatalogsProductGroupMultipleStringListCriteria;

/**
 * GoogleProductCategory0Filter
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaMSF4JServerCodegen", date = "2024-03-14T23:02:29.393275857Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class GoogleProductCategory0Filter   {
  @JsonProperty("GOOGLE_PRODUCT_CATEGORY_0")
  private CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_0;

  public GoogleProductCategory0Filter GOOGLE_PRODUCT_CATEGORY_0(CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_0) {
    this.GOOGLE_PRODUCT_CATEGORY_0 = GOOGLE_PRODUCT_CATEGORY_0;
    return this;
  }

   /**
   * Get GOOGLE_PRODUCT_CATEGORY_0
   * @return GOOGLE_PRODUCT_CATEGORY_0
  **/
  @ApiModelProperty(required = true, value = "")
  public CatalogsProductGroupMultipleStringListCriteria getGOOGLEPRODUCTCATEGORY0() {
    return GOOGLE_PRODUCT_CATEGORY_0;
  }

  public void setGOOGLEPRODUCTCATEGORY0(CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_0) {
    this.GOOGLE_PRODUCT_CATEGORY_0 = GOOGLE_PRODUCT_CATEGORY_0;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    GoogleProductCategory0Filter googleProductCategory0Filter = (GoogleProductCategory0Filter) o;
    return Objects.equals(this.GOOGLE_PRODUCT_CATEGORY_0, googleProductCategory0Filter.GOOGLE_PRODUCT_CATEGORY_0);
  }

  @Override
  public int hashCode() {
    return Objects.hash(GOOGLE_PRODUCT_CATEGORY_0);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GoogleProductCategory0Filter {\n");
    
    sb.append("    GOOGLE_PRODUCT_CATEGORY_0: ").append(toIndentedString(GOOGLE_PRODUCT_CATEGORY_0)).append("\n");
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

