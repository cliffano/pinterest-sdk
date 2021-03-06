package org.openapitools.model

import java.util.Objects
import com.fasterxml.jackson.annotation.JsonProperty
import javax.validation.constraints.DecimalMax
import javax.validation.constraints.DecimalMin
import javax.validation.constraints.Max
import javax.validation.constraints.Min
import javax.validation.constraints.NotNull
import javax.validation.constraints.Pattern
import javax.validation.constraints.Size
import javax.validation.Valid

/**
 * Sections help organize pins within a board.
 * @param id 
 * @param name 
 */
data class BoardSection(

    @field:JsonProperty("id") val id: kotlin.String? = null,

    @get:Size(min=1,max=180)
    @field:JsonProperty("name") val name: kotlin.String? = null
) {

}

