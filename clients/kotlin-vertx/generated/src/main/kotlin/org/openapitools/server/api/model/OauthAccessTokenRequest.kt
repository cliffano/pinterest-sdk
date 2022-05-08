/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.api.model


        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * Describes the valid schema for possible OAuth access token requests.
 * @param grantType 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class OauthAccessTokenRequest (
    @SerializedName("grantType") private val _grantType: OauthAccessTokenRequest.GrantType?
) {

    /**
    * 
    * Values: authorizationCode,refreshToken
    */
    enum class GrantType(val value: kotlin.String){
    
        authorizationCode("authorization_code"),
    
        refreshToken("refresh_token");
    
    }

        val grantType get() = _grantType ?: throw IllegalArgumentException("grantType is required")
                    
}

