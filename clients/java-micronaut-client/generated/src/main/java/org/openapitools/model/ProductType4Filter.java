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
 * ProductType4Filter
 */
@JsonPropertyOrder({
  ProductType4Filter.JSON_PROPERTY_P_R_O_D_U_C_T_T_Y_P_E4
})
@JsonTypeName("ProductType4Filter")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2022-05-08T00:31:09.924165Z[Etc/UTC]")
@Introspected
public class ProductType4Filter {
    public static final String JSON_PROPERTY_P_R_O_D_U_C_T_T_Y_P_E4 = "PRODUCT_TYPE_4";
    private CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_4;

    public ProductType4Filter(CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_4) {
        this.PRODUCT_TYPE_4 = PRODUCT_TYPE_4;
    }

    public ProductType4Filter PRODUCT_TYPE_4(CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_4) {
        this.PRODUCT_TYPE_4 = PRODUCT_TYPE_4;
        return this;
    }

    /**
     * Get PRODUCT_TYPE_4
     * @return PRODUCT_TYPE_4
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_P_R_O_D_U_C_T_T_Y_P_E4)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public CatalogsProductGroupMultipleStringListCriteria getPRODUCTTYPE4() {
        return PRODUCT_TYPE_4;
    }

    @JsonProperty(JSON_PROPERTY_P_R_O_D_U_C_T_T_Y_P_E4)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setPRODUCTTYPE4(CatalogsProductGroupMultipleStringListCriteria PRODUCT_TYPE_4) {
        this.PRODUCT_TYPE_4 = PRODUCT_TYPE_4;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        ProductType4Filter productType4Filter = (ProductType4Filter) o;
        return Objects.equals(this.PRODUCT_TYPE_4, productType4Filter.PRODUCT_TYPE_4);
    }

    @Override
    public int hashCode() {
        return Objects.hash(PRODUCT_TYPE_4);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class ProductType4Filter {\n");
        sb.append("    PRODUCT_TYPE_4: ").append(toIndentedString(PRODUCT_TYPE_4)).append("\n");
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
