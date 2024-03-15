package org.openapitools.model

import java.util.Objects
import com.fasterxml.jackson.annotation.JsonProperty
import org.openapitools.model.PinMedia
import org.openapitools.model.PinMediaMetadata
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
 * Pin with a mix of images and videos.
 * @param items 
 */
data class PinMediaWithImageAndVideo(

    @field:Valid
    @Schema(example = "null", description = "")
    @get:JsonProperty("items") val items: kotlin.collections.List<PinMediaMetadata>? = null,

    @Schema(example = "null", description = "")
    @get:JsonProperty("media_type") override val mediaType: kotlin.String? = null
) : PinMedia{

}

