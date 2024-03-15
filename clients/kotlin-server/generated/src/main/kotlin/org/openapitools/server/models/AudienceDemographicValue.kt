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
 * Demographic detail for a single audience demographic
 * @param key Unique key for demographic item
 * @param name Display name for demographic
 * @param ratio Value of demographic item as a percent of total audience
 */
data class AudienceDemographicValue(
    /* Unique key for demographic item */
    val key: kotlin.String? = null,
    /* Display name for demographic */
    val name: kotlin.String? = null,
    /* Value of demographic item as a percent of total audience */
    val ratio: java.math.BigDecimal? = null
) 
