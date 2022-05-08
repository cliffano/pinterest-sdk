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
import org.openapitools.model.CatalogsProductGroupPricingCriteria;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * MinPriceFilter
 */
@JsonPropertyOrder({
  MinPriceFilter.JSON_PROPERTY_M_I_N_P_R_I_C_E
})
@JsonTypeName("MinPriceFilter")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-05-08T00:31:24.314778Z[Etc/UTC]")
@Introspected
public class MinPriceFilter {
    public static final String JSON_PROPERTY_M_I_N_P_R_I_C_E = "MIN_PRICE";
    private CatalogsProductGroupPricingCriteria MIN_PRICE;

    public MinPriceFilter(CatalogsProductGroupPricingCriteria MIN_PRICE) {
        this.MIN_PRICE = MIN_PRICE;
    }

    public MinPriceFilter MIN_PRICE(CatalogsProductGroupPricingCriteria MIN_PRICE) {
        this.MIN_PRICE = MIN_PRICE;
        return this;
    }

    /**
     * Get MIN_PRICE
     * @return MIN_PRICE
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_M_I_N_P_R_I_C_E)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public CatalogsProductGroupPricingCriteria getMINPRICE() {
        return MIN_PRICE;
    }

    @JsonProperty(JSON_PROPERTY_M_I_N_P_R_I_C_E)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setMINPRICE(CatalogsProductGroupPricingCriteria MIN_PRICE) {
        this.MIN_PRICE = MIN_PRICE;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        MinPriceFilter minPriceFilter = (MinPriceFilter) o;
        return Objects.equals(this.MIN_PRICE, minPriceFilter.MIN_PRICE);
    }

    @Override
    public int hashCode() {
        return Objects.hash(MIN_PRICE);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class MinPriceFilter {\n");
        sb.append("    MIN_PRICE: ").append(toIndentedString(MIN_PRICE)).append("\n");
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
