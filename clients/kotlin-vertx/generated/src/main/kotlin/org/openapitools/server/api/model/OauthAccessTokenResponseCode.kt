/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.api.model

import org.openapitools.server.api.model.OauthAccessTokenResponse
import org.openapitools.server.api.model.OauthAccessTokenResponseCodeAllOf

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * A successful OAuth access token response for the authorization code flow.
 * @param refreshToken 
 * @param refreshTokenExpiresIn 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class OauthAccessTokenResponseCode (
    @SerializedName("refreshToken") private val _refreshToken: kotlin.String?,
    @SerializedName("refreshTokenExpiresIn") private val _refreshTokenExpiresIn: kotlin.Int?,
    @SerializedName("accessToken") private val _accessToken: kotlin.String?,
    @SerializedName("tokenType") private val _tokenType: kotlin.String?,
    @SerializedName("expiresIn") private val _expiresIn: kotlin.Int?,
    @SerializedName("scope") private val _scope: kotlin.String?,
    val responseType: OauthAccessTokenResponseCode.ResponseType? = null
) {

        val refreshToken get() = _refreshToken ?: throw IllegalArgumentException("refreshToken is required")
                    
        val refreshTokenExpiresIn get() = _refreshTokenExpiresIn ?: throw IllegalArgumentException("refreshTokenExpiresIn is required")
                    
        val accessToken get() = _accessToken ?: throw IllegalArgumentException("accessToken is required")
                    
        val tokenType get() = _tokenType ?: throw IllegalArgumentException("tokenType is required")
                    
        val expiresIn get() = _expiresIn ?: throw IllegalArgumentException("expiresIn is required")
                    
        val scope get() = _scope ?: throw IllegalArgumentException("scope is required")
                    
}

