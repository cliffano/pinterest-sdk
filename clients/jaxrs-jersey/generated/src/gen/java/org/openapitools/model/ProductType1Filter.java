/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
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
import org.openapitools.model.CatalogsProductGroupMultipleStringListCriteria;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * ProductType1Filter
 */
@JsonPropertyOrder({
  ProductType1Filter.JSON_PROPERTY_P_R_O_D_U_C_T_T_Y_P_E1
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2022-07-01T12:00:52.037403Z[Etc/UTC]")
public class ProductType1Filter   {
  public static final String JSON_PROPERTY_P_R_O_D_U_C_T_T_Y_P_E1 = "PRODUCT_TYPE_1";
  @JsonProperty(JSON_PROPERTY_P_R_O_D_U_C_T_T_Y_P_E1)
  private CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_1;

  public ProductType1Filter PRODUCT_TYPE_1(CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_1) {
    this.PRODUCT_TYPE_1 = PRODUCT_TYPE_1;
    return this;
  }

  /**
   * Get PRODUCT_TYPE_1
   * @return PRODUCT_TYPE_1
   **/
  @JsonProperty(value = "PRODUCT_TYPE_1")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public CatalogsProductGroupMultipleStringListCriteria getPRODUCTTYPE1() {
    return PRODUCT_TYPE_1;
  }

  public void setPRODUCTTYPE1(CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_1) {
    this.PRODUCT_TYPE_1 = PRODUCT_TYPE_1;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ProductType1Filter productType1Filter = (ProductType1Filter) o;
    return Objects.equals(this.PRODUCT_TYPE_1, productType1Filter.PRODUCT_TYPE_1);
  }

  @Override
  public int hashCode() {
    return Objects.hash(PRODUCT_TYPE_1);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ProductType1Filter {\n");
    
    sb.append("    PRODUCT_TYPE_1: ").append(toIndentedString(PRODUCT_TYPE_1)).append("\n");
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

