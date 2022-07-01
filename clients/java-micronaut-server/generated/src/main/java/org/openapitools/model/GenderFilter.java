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
 * GenderFilter
 */
@JsonPropertyOrder({
  GenderFilter.JSON_PROPERTY_G_E_N_D_E_R
})
@JsonTypeName("GenderFilter")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-07-01T11:59:34.708172Z[Etc/UTC]")
@Introspected
public class GenderFilter {
    public static final String JSON_PROPERTY_G_E_N_D_E_R = "GENDER";
    private CatalogsProductGroupMultipleStringCriteria GENDER;

    public GenderFilter(CatalogsProductGroupMultipleStringCriteria GENDER) {
        this.GENDER = GENDER;
    }

    public GenderFilter GENDER(CatalogsProductGroupMultipleStringCriteria GENDER) {
        this.GENDER = GENDER;
        return this;
    }

    /**
     * Get GENDER
     * @return GENDER
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_G_E_N_D_E_R)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public CatalogsProductGroupMultipleStringCriteria getGENDER() {
        return GENDER;
    }

    @JsonProperty(JSON_PROPERTY_G_E_N_D_E_R)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setGENDER(CatalogsProductGroupMultipleStringCriteria GENDER) {
        this.GENDER = GENDER;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        GenderFilter genderFilter = (GenderFilter) o;
        return Objects.equals(this.GENDER, genderFilter.GENDER);
    }

    @Override
    public int hashCode() {
        return Objects.hash(GENDER);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class GenderFilter {\n");
        sb.append("    GENDER: ").append(toIndentedString(GENDER)).append("\n");
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
