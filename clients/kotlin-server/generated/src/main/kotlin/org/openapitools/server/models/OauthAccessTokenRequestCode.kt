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
import org.openapitools.server.models.OauthAccessTokenRequestCodeAllOf

/**
 * A request to exchange an authorization code for an access token.
 * @param code 
 * @param redirectUri 
 */
data class OauthAccessTokenRequestCode(
    val code: kotlin.String,
    val redirectUri: kotlin.String,
    val grantType: OauthAccessTokenRequestCode.GrantType
) 

