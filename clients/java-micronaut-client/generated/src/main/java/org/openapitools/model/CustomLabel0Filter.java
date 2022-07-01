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
import org.openapitools.model.CatalogsProductGroupMultipleStringCriteria;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * CustomLabel0Filter
 */
@JsonPropertyOrder({
  CustomLabel0Filter.JSON_PROPERTY_C_U_S_T_O_M_L_A_B_E_L0
})
@JsonTypeName("CustomLabel0Filter")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2022-07-01T11:59:24.863123Z[Etc/UTC]")
@Introspected
public class CustomLabel0Filter {
    public static final String JSON_PROPERTY_C_U_S_T_O_M_L_A_B_E_L0 = "CUSTOM_LABEL_0";
    private CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_0;

    public CustomLabel0Filter(CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_0) {
        this.CUSTOM_LABEL_0 = CUSTOM_LABEL_0;
    }

    public CustomLabel0Filter CUSTOM_LABEL_0(CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_0) {
        this.CUSTOM_LABEL_0 = CUSTOM_LABEL_0;
        return this;
    }

    /**
     * Get CUSTOM_LABEL_0
     * @return CUSTOM_LABEL_0
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_C_U_S_T_O_M_L_A_B_E_L0)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public CatalogsProductGroupMultipleStringCriteria getCUSTOMLABEL0() {
        return CUSTOM_LABEL_0;
    }

    @JsonProperty(JSON_PROPERTY_C_U_S_T_O_M_L_A_B_E_L0)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setCUSTOMLABEL0(CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_0) {
        this.CUSTOM_LABEL_0 = CUSTOM_LABEL_0;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CustomLabel0Filter customLabel0Filter = (CustomLabel0Filter) o;
        return Objects.equals(this.CUSTOM_LABEL_0, customLabel0Filter.CUSTOM_LABEL_0);
    }

    @Override
    public int hashCode() {
        return Objects.hash(CUSTOM_LABEL_0);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CustomLabel0Filter {\n");
        sb.append("    CUSTOM_LABEL_0: ").append(toIndentedString(CUSTOM_LABEL_0)).append("\n");
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
