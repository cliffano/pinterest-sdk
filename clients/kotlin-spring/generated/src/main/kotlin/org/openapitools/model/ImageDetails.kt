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
 * 
 * @param width 
 * @param height 
 * @param url 
 */
data class ImageDetails(

    @get:Min(100)
    @field:JsonProperty("width", required = true) val width: kotlin.Int,

    @get:Min(100)
    @field:JsonProperty("height", required = true) val height: kotlin.Int,

    @field:JsonProperty("url", required = true) val url: kotlin.String
) {

}

