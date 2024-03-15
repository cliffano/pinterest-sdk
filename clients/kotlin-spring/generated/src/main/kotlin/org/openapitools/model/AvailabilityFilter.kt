package org.openapitools.model

import java.util.Objects
import com.fasterxml.jackson.annotation.JsonProperty
import org.openapitools.model.CatalogsProductGroupMultipleStringCriteria
import javax.validation.constraints.DecimalMax
import javax.validation.constraints.DecimalMin
import javax.validation.constraints.Email
import javax.validation.constraints.Max
import javax.validation.constraints.Min
import javax.validation.constraints.NotNull
import javax.validation.constraints.Pattern
import javax.validation.constraints.Size
import javax.validation.Valid
import io.swagger.v3.oas.annotations.media.Schema

/**
 * 
 * @param AVAILABILITY 
 */
data class AvailabilityFilter(

    @field:Valid
    @Schema(example = "null", required = true, description = "")
    @get:JsonProperty("AVAILABILITY", required = true) val AVAILABILITY: CatalogsProductGroupMultipleStringCriteria
) {

}

