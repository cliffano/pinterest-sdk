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
 * @param MAX_PRICE 
 */
data class MaxPriceFilter(

    @field:Valid
    @field:JsonProperty("MAX_PRICE", required = true) val MAX_PRICE: CatalogsProductGroupPricingCriteria
) {

}

