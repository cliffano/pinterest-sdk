package org.openapitools.model

import java.util.Objects
import com.fasterxml.jackson.annotation.JsonProperty
import org.openapitools.model.CatalogsProductGroupMultipleStringCriteria
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
 * @param AVAILABILITY 
 */
data class AvailabilityFilter(

    @field:Valid
    @field:JsonProperty("AVAILABILITY", required = true) val AVAILABILITY: CatalogsProductGroupMultipleStringCriteria
) {

}

