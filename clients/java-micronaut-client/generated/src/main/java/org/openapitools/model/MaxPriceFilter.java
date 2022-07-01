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
import org.openapitools.model.CatalogsProductGroupPricingCriteria;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * MaxPriceFilter
 */
@JsonPropertyOrder({
  MaxPriceFilter.JSON_PROPERTY_M_A_X_P_R_I_C_E
})
@JsonTypeName("MaxPriceFilter")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2022-07-01T11:59:24.863123Z[Etc/UTC]")
@Introspected
public class MaxPriceFilter {
    public static final String JSON_PROPERTY_M_A_X_P_R_I_C_E = "MAX_PRICE";
    private CatalogsProductGroupPricingCriteria MAX_PRICE;

    public MaxPriceFilter(CatalogsProductGroupPricingCriteria MAX_PRICE) {
        this.MAX_PRICE = MAX_PRICE;
    }

    public MaxPriceFilter MAX_PRICE(CatalogsProductGroupPricingCriteria MAX_PRICE) {
        this.MAX_PRICE = MAX_PRICE;
        return this;
    }

    /**
     * Get MAX_PRICE
     * @return MAX_PRICE
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_M_A_X_P_R_I_C_E)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public CatalogsProductGroupPricingCriteria getMAXPRICE() {
        return MAX_PRICE;
    }

    @JsonProperty(JSON_PROPERTY_M_A_X_P_R_I_C_E)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setMAXPRICE(CatalogsProductGroupPricingCriteria MAX_PRICE) {
        this.MAX_PRICE = MAX_PRICE;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        MaxPriceFilter maxPriceFilter = (MaxPriceFilter) o;
        return Objects.equals(this.MAX_PRICE, maxPriceFilter.MAX_PRICE);
    }

    @Override
    public int hashCode() {
        return Objects.hash(MAX_PRICE);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class MaxPriceFilter {\n");
        sb.append("    MAX_PRICE: ").append(toIndentedString(MAX_PRICE)).append("\n");
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
