package org.openapitools.model;

import org.openapitools.model.CatalogsProductGroupMultipleStringCriteria;

import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.JsonProperty;

public class CustomLabel2Filter  {
  
  @ApiModelProperty(required = true, value = "")
  private CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_2;
 /**
   * Get CUSTOM_LABEL_2
   * @return CUSTOM_LABEL_2
  **/
  @JsonProperty("CUSTOM_LABEL_2")
  public CatalogsProductGroupMultipleStringCriteria getCUSTOMLABEL2() {
    return CUSTOM_LABEL_2;
  }

  public void setCUSTOMLABEL2(CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_2) {
    this.CUSTOM_LABEL_2 = CUSTOM_LABEL_2;
  }

  public CustomLabel2Filter CUSTOM_LABEL_2(CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_2) {
    this.CUSTOM_LABEL_2 = CUSTOM_LABEL_2;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CustomLabel2Filter {\n");
    
    sb.append("    CUSTOM_LABEL_2: ").append(toIndentedString(CUSTOM_LABEL_2)).append("\n");
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

