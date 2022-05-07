package org.openapitools.model

import java.util.Objects
import com.fasterxml.jackson.annotation.JsonProperty
import org.openapitools.model.CatalogsProductGroupPricingCriteria
import javax.validation.constraints.DecimalMax
import javax.validation.constraints.DecimalMin
import javax.validation.constraints.Max
import javax.validation.constraints.Min
import javax.validation.constraints.NotNull
import javax.validation.constraints.Pattern
import javax.validation.constraints.Size
import javax.validation.Valid

/**
 * 
 * @param MIN_PRICE 
 */
data class MinPriceFilter(

    @field:Valid
    @field:JsonProperty("MIN_PRICE", required = true) val MIN_PRICE: CatalogsProductGroupPricingCriteria
) {

}

