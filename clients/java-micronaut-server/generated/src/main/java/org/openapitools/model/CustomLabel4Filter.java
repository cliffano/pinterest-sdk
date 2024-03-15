/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.model;

import java.util.Objects;
import java.util.Arrays;
import org.openapitools.model.CatalogsProductGroupMultipleStringCriteria;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * CustomLabel4Filter
 */
@JsonPropertyOrder({
  CustomLabel4Filter.JSON_PROPERTY_C_U_S_T_O_M_L_A_B_E_L4
})
@JsonTypeName("CustomLabel4Filter")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class CustomLabel4Filter {
    public static final String JSON_PROPERTY_C_U_S_T_O_M_L_A_B_E_L4 = "CUSTOM_LABEL_4";
    private CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_4;

    public CustomLabel4Filter(CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_4) {
        this.CUSTOM_LABEL_4 = CUSTOM_LABEL_4;
    }

    public CustomLabel4Filter CUSTOM_LABEL_4(CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_4) {
        this.CUSTOM_LABEL_4 = CUSTOM_LABEL_4;
        return this;
    }

    /**
     * Get CUSTOM_LABEL_4
     * @return CUSTOM_LABEL_4
     **/
    @NotNull
    @Schema(name = "CUSTOM_LABEL_4", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_C_U_S_T_O_M_L_A_B_E_L4)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public CatalogsProductGroupMultipleStringCriteria getCUSTOMLABEL4() {
        return CUSTOM_LABEL_4;
    }

    @JsonProperty(JSON_PROPERTY_C_U_S_T_O_M_L_A_B_E_L4)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setCUSTOMLABEL4(CatalogsProductGroupMultipleStringCriteria CUSTOM_LABEL_4) {
        this.CUSTOM_LABEL_4 = CUSTOM_LABEL_4;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CustomLabel4Filter customLabel4Filter = (CustomLabel4Filter) o;
        return Objects.equals(this.CUSTOM_LABEL_4, customLabel4Filter.CUSTOM_LABEL_4);
    }

    @Override
    public int hashCode() {
        return Objects.hash(CUSTOM_LABEL_4);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CustomLabel4Filter {\n");
        sb.append("    CUSTOM_LABEL_4: ").append(toIndentedString(CUSTOM_LABEL_4)).append("\n");
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

