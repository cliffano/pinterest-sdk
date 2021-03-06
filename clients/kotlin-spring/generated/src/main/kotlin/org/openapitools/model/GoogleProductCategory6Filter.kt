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
 * @param GOOGLE_PRODUCT_CATEGORY_6 
 */
data class GoogleProductCategory6Filter(

    @field:Valid
    @field:JsonProperty("GOOGLE_PRODUCT_CATEGORY_6", required = true) val GOOGLE_PRODUCT_CATEGORY_6: CatalogsProductGroupMultipleStringListCriteria
) {

}

