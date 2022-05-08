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
 * GoogleProductCategory3Filter
 */
@JsonPropertyOrder({
  GoogleProductCategory3Filter.JSON_PROPERTY_G_O_O_G_L_E_P_R_O_D_U_C_T_C_A_T_E_G_O_R_Y3
})
@JsonTypeName("GoogleProductCategory3Filter")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-05-08T00:31:24.314778Z[Etc/UTC]")
@Introspected
public class GoogleProductCategory3Filter {
    public static final String JSON_PROPERTY_G_O_O_G_L_E_P_R_O_D_U_C_T_C_A_T_E_G_O_R_Y3 = "GOOGLE_PRODUCT_CATEGORY_3";
    private CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_3;

    public GoogleProductCategory3Filter(CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_3) {
        this.GOOGLE_PRODUCT_CATEGORY_3 = GOOGLE_PRODUCT_CATEGORY_3;
    }

    public GoogleProductCategory3Filter GOOGLE_PRODUCT_CATEGORY_3(CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_3) {
        this.GOOGLE_PRODUCT_CATEGORY_3 = GOOGLE_PRODUCT_CATEGORY_3;
        return this;
    }

    /**
     * Get GOOGLE_PRODUCT_CATEGORY_3
     * @return GOOGLE_PRODUCT_CATEGORY_3
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_G_O_O_G_L_E_P_R_O_D_U_C_T_C_A_T_E_G_O_R_Y3)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public CatalogsProductGroupMultipleStringListCriteria getGOOGLEPRODUCTCATEGORY3() {
        return GOOGLE_PRODUCT_CATEGORY_3;
    }

    @JsonProperty(JSON_PROPERTY_G_O_O_G_L_E_P_R_O_D_U_C_T_C_A_T_E_G_O_R_Y3)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setGOOGLEPRODUCTCATEGORY3(CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_3) {
        this.GOOGLE_PRODUCT_CATEGORY_3 = GOOGLE_PRODUCT_CATEGORY_3;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        GoogleProductCategory3Filter googleProductCategory3Filter = (GoogleProductCategory3Filter) o;
        return Objects.equals(this.GOOGLE_PRODUCT_CATEGORY_3, googleProductCategory3Filter.GOOGLE_PRODUCT_CATEGORY_3);
    }

    @Override
    public int hashCode() {
        return Objects.hash(GOOGLE_PRODUCT_CATEGORY_3);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class GoogleProductCategory3Filter {\n");
        sb.append("    GOOGLE_PRODUCT_CATEGORY_3: ").append(toIndentedString(GOOGLE_PRODUCT_CATEGORY_3)).append("\n");
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
