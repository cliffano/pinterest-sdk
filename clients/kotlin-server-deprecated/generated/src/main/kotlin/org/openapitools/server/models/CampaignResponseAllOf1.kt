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

import org.openapitools.server.models.ObjectiveType

/**
 * 
 * @param objectiveType 
 * @param createdTime Campaign creation time. Unix timestamp in seconds.
 * @param updatedTime UTC timestamp. Last update time.
 * @param type Always \"campaign\".
 */
data class CampaignResponseAllOf1 (
    val objectiveType: ObjectiveType? = null,
    /* Campaign creation time. Unix timestamp in seconds. */
    val createdTime: kotlin.Int? = null,
    /* UTC timestamp. Last update time. */
    val updatedTime: kotlin.Int? = null,
    /* Always \"campaign\". */
    val type: kotlin.String? = null
) 

