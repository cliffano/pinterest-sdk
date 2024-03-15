/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.models


/**
 * Schema used for creating the integration metadata.
 * @param externalBusinessId External business ID for the integration.
 * @param connectedMerchantId 
 * @param connectedAdvertiserId 
 * @param connectedLbaId 
 * @param connectedTagId 
 * @param partnerAccessToken 
 * @param partnerRefreshToken 
 * @param partnerPrimaryEmail 
 * @param partnerAccessTokenExpiry 
 * @param partnerRefreshTokenExpiry 
 * @param scopes 
 * @param additionalId1 
 * @param partnerMetadata 
 */
data class IntegrationRequest(
    /* External business ID for the integration. */
    val externalBusinessId: kotlin.String? = null,
    val connectedMerchantId: kotlin.String? = null,
    val connectedAdvertiserId: kotlin.String? = null,
    val connectedLbaId: kotlin.String? = null,
    val connectedTagId: kotlin.String? = null,
    val partnerAccessToken: kotlin.String? = null,
    val partnerRefreshToken: kotlin.String? = null,
    val partnerPrimaryEmail: kotlin.String? = null,
    val partnerAccessTokenExpiry: kotlin.Int? = null,
    val partnerRefreshTokenExpiry: kotlin.Int? = null,
    val scopes: kotlin.String? = null,
    val additionalId1: kotlin.String? = null,
    val partnerMetadata: kotlin.String? = null
) 

