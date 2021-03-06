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
import java.util.Arrays;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.CatalogsProductGroupMultipleStringListCriteria;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * ProductType2Filter
 */
@JsonPropertyOrder({
  ProductType2Filter.JSON_PROPERTY_P_R_O_D_U_C_T_T_Y_P_E2
})
@JsonTypeName("ProductType2Filter")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-07-01T11:59:34.708172Z[Etc/UTC]")
@Introspected
public class ProductType2Filter {
    public static final String JSON_PROPERTY_P_R_O_D_U_C_T_T_Y_P_E2 = "PRODUCT_TYPE_2";
    private CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_2;

    public ProductType2Filter(CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_2) {
        this.PRODUCT_TYPE_2 = PRODUCT_TYPE_2;
    }

    public ProductType2Filter PRODUCT_TYPE_2(CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_2) {
        this.PRODUCT_TYPE_2 = PRODUCT_TYPE_2;
        return this;
    }

    /**
     * Get PRODUCT_TYPE_2
     * @return PRODUCT_TYPE_2
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_P_R_O_D_U_C_T_T_Y_P_E2)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public CatalogsProductGroupMultipleStringListCriteria getPRODUCTTYPE2() {
        return PRODUCT_TYPE_2;
    }

    @JsonProperty(JSON_PROPERTY_P_R_O_D_U_C_T_T_Y_P_E2)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setPRODUCTTYPE2(CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_2) {
        this.PRODUCT_TYPE_2 = PRODUCT_TYPE_2;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        ProductType2Filter productType2Filter = (ProductType2Filter) o;
        return Objects.equals(this.PRODUCT_TYPE_2, productType2Filter.PRODUCT_TYPE_2);
    }

    @Override
    public int hashCode() {
        return Objects.hash(PRODUCT_TYPE_2);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class ProductType2Filter {\n");
        sb.append("    PRODUCT_TYPE_2: ").append(toIndentedString(PRODUCT_TYPE_2)).append("\n");
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
