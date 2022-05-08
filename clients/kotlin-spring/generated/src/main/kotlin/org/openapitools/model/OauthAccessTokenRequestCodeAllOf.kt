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
 * @param code 
 * @param redirectUri 
 */
data class OauthAccessTokenRequestCodeAllOf(

    @field:JsonProperty("code", required = true) val code: kotlin.String,

    @field:JsonProperty("redirect_uri", required = true) val redirectUri: kotlin.String
) {

}
