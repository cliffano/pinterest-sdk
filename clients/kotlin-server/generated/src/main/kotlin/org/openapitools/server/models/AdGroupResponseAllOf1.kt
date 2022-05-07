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
package org.openapitools.server.models

import org.openapitools.server.models.ActionType

/**
 * 
 * @param campaignId Campaign ID of the ad group.
 * @param billableEvent 
 * @param id Ad group ID.
 * @param type Always \"adgroup\".
 * @param adAccountId Advertiser ID.
 * @param createdTime Ad group creation time. Unix timestamp in seconds.
 * @param updatedTime Ad group last update time. Unix timestamp in seconds.
 */
data class AdGroupResponseAllOf1(
    /* Campaign ID of the ad group. */
    val campaignId: kotlin.String? = null,
    val billableEvent: ActionType? = null,
    /* Ad group ID. */
    val id: kotlin.String? = null,
    /* Always \"adgroup\". */
    val type: kotlin.String? = null,
    /* Advertiser ID. */
    val adAccountId: kotlin.String? = null,
    /* Ad group creation time. Unix timestamp in seconds. */
    val createdTime: kotlin.Int? = null,
    /* Ad group last update time. Unix timestamp in seconds. */
    val updatedTime: kotlin.Int? = null
) 

