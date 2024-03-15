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

import org.openapitools.server.models.SummaryPinMedia

/**
 * Summarized pin information
 * @param media 
 * @param altText 
 * @param link 
 * @param title 
 * @param description 
 */
data class SummaryPin(
    val media: SummaryPinMedia? = null,
    val altText: kotlin.String? = null,
    val link: kotlin.String? = null,
    val title: kotlin.String? = null,
    val description: kotlin.String? = null
) 

