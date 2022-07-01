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
package org.openapitools.server.models

import org.openapitools.server.models.OauthAccessTokenResponse
import org.openapitools.server.models.OauthAccessTokenResponseCodeAllOf

/**
 * A successful OAuth access token response for the authorization code flow.
 * @param refreshToken 
 * @param refreshTokenExpiresIn 
 */
data class OauthAccessTokenResponseCode (
    val refreshToken: kotlin.String,
    val refreshTokenExpiresIn: kotlin.Int,
    val accessToken: kotlin.String,
    val tokenType: kotlin.String,
    val expiresIn: kotlin.Int,
    val scope: kotlin.String,
    val responseType: OauthAccessTokenResponseCode.ResponseType? = null
) 

