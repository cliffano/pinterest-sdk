/**
 *
 * Please note:
 * This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * Do not edit this file manually.
 *
 */

@file:Suppress(
    "ArrayInDataClass",
    "EnumEntryName",
    "RemoveRedundantQualifierName",
    "UnusedImport"
)

package org.openapitools.client.models


import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * A successful OAuth access token response.
 *
 * @param accessToken 
 * @param tokenType 
 * @param expiresIn 
 * @param scope 
 * @param responseType 
 */


interface OauthAccessTokenResponse {

    @Json(name = "access_token")
    val accessToken: kotlin.String
    @Json(name = "token_type")
    val tokenType: kotlin.String
    @Json(name = "expires_in")
    val expiresIn: kotlin.Int
    @Json(name = "scope")
    val scope: kotlin.String
    @Json(name = "response_type")
    val responseType: OauthAccessTokenResponse.ResponseType?
    /**
     * 
     *
     * Values: authorization_code,refresh_token
     */
    @JsonClass(generateAdapter = false)
    enum class ResponseType(val value: kotlin.String) {
        @Json(name = "authorization_code") authorization_code("authorization_code"),
        @Json(name = "refresh_token") refresh_token("refresh_token");
    }
}
