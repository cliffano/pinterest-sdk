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
import org.openapitools.model.CatalogsProductGroupMultipleStringCriteria;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * BrandFilter
 */
@JsonPropertyOrder({
  BrandFilter.JSON_PROPERTY_B_R_A_N_D
})
@JsonTypeName("BrandFilter")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-05-08T00:31:24.314778Z[Etc/UTC]")
@Introspected
public class BrandFilter {
    public static final String JSON_PROPERTY_B_R_A_N_D = "BRAND";
    private CatalogsProductGroupMultipleStringCriteria BRAND;

    public BrandFilter(CatalogsProductGroupMultipleStringCriteria BRAND) {
        this.BRAND = BRAND;
    }

    public BrandFilter BRAND(CatalogsProductGroupMultipleStringCriteria BRAND) {
        this.BRAND = BRAND;
        return this;
    }

    /**
     * Get BRAND
     * @return BRAND
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_B_R_A_N_D)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public CatalogsProductGroupMultipleStringCriteria getBRAND() {
        return BRAND;
    }

    @JsonProperty(JSON_PROPERTY_B_R_A_N_D)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setBRAND(CatalogsProductGroupMultipleStringCriteria BRAND) {
        this.BRAND = BRAND;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        BrandFilter brandFilter = (BrandFilter) o;
        return Objects.equals(this.BRAND, brandFilter.BRAND);
    }

    @Override
    public int hashCode() {
        return Objects.hash(BRAND);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class BrandFilter {\n");
        sb.append("    BRAND: ").append(toIndentedString(BRAND)).append("\n");
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