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

import org.openapitools.server.models.OauthAccessTokenRequest
import org.openapitools.server.models.OauthAccessTokenRequestRefreshAllOf

/**
 * A request to exchange a refresh token for a new access token.
 * @param refreshToken 
 * @param scope 
 */
data class OauthAccessTokenRequestRefresh(
    val refreshToken: kotlin.String,
    val grantType: OauthAccessTokenRequestRefresh.GrantType,
    val scope: kotlin.String? = null
) 

