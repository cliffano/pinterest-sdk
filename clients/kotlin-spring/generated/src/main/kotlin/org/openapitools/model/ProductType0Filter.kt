package org.openapitools.model

import java.util.Objects
import com.fasterxml.jackson.annotation.JsonProperty
import org.openapitools.model.CatalogsProductGroupMultipleStringListCriteria
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
 * @param PRODUCT_TYPE_0 
 */
data class ProductType0Filter(

    @field:Valid
    @field:JsonProperty("PRODUCT_TYPE_0", required = true) val PRODUCT_TYPE_0: CatalogsProductGroupMultipleStringListCriteria
) {

}

