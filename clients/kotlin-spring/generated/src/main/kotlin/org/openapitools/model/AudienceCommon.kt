package org.openapitools.model

import java.util.Objects
import com.fasterxml.jackson.annotation.JsonProperty
import org.openapitools.model.AudienceRule
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
 * @param adAccountId Ad account ID.
 * @param name Audience name.
 * @param rule 
 */
data class AudienceCommon(

    @get:Pattern(regexp="^\\d+$")
    @Schema(example = "549755885175", description = "Ad account ID.")
    @get:JsonProperty("ad_account_id") val adAccountId: kotlin.String? = null,

    @Schema(example = "string", description = "Audience name.")
    @get:JsonProperty("name") val name: kotlin.String? = null,

    @field:Valid
    @Schema(example = "null", description = "")
    @get:JsonProperty("rule") val rule: AudienceRule? = null
) {

}

