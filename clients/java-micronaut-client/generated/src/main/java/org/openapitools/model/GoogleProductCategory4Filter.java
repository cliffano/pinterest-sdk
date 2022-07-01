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
 * GoogleProductCategory4Filter
 */
@JsonPropertyOrder({
  GoogleProductCategory4Filter.JSON_PROPERTY_G_O_O_G_L_E_P_R_O_D_U_C_T_C_A_T_E_G_O_R_Y4
})
@JsonTypeName("GoogleProductCategory4Filter")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2022-07-01T11:59:24.863123Z[Etc/UTC]")
@Introspected
public class GoogleProductCategory4Filter {
    public static final String JSON_PROPERTY_G_O_O_G_L_E_P_R_O_D_U_C_T_C_A_T_E_G_O_R_Y4 = "GOOGLE_PRODUCT_CATEGORY_4";
    private CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_4;

    public GoogleProductCategory4Filter(CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_4) {
        this.GOOGLE_PRODUCT_CATEGORY_4 = GOOGLE_PRODUCT_CATEGORY_4;
    }

    public GoogleProductCategory4Filter GOOGLE_PRODUCT_CATEGORY_4(CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_4) {
        this.GOOGLE_PRODUCT_CATEGORY_4 = GOOGLE_PRODUCT_CATEGORY_4;
        return this;
    }

    /**
     * Get GOOGLE_PRODUCT_CATEGORY_4
     * @return GOOGLE_PRODUCT_CATEGORY_4
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_G_O_O_G_L_E_P_R_O_D_U_C_T_C_A_T_E_G_O_R_Y4)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public CatalogsProductGroupMultipleStringListCriteria getGOOGLEPRODUCTCATEGORY4() {
        return GOOGLE_PRODUCT_CATEGORY_4;
    }

    @JsonProperty(JSON_PROPERTY_G_O_O_G_L_E_P_R_O_D_U_C_T_C_A_T_E_G_O_R_Y4)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setGOOGLEPRODUCTCATEGORY4(CatalogsProductGroupMultipleStringListCriteria GOOGLE_PRODUCT_CATEGORY_4) {
        this.GOOGLE_PRODUCT_CATEGORY_4 = GOOGLE_PRODUCT_CATEGORY_4;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        GoogleProductCategory4Filter googleProductCategory4Filter = (GoogleProductCategory4Filter) o;
        return Objects.equals(this.GOOGLE_PRODUCT_CATEGORY_4, googleProductCategory4Filter.GOOGLE_PRODUCT_CATEGORY_4);
    }

    @Override
    public int hashCode() {
        return Objects.hash(GOOGLE_PRODUCT_CATEGORY_4);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class GoogleProductCategory4Filter {\n");
        sb.append("    GOOGLE_PRODUCT_CATEGORY_4: ").append(toIndentedString(GOOGLE_PRODUCT_CATEGORY_4)).append("\n");
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
