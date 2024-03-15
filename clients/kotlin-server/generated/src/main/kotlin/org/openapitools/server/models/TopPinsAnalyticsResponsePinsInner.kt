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

import org.openapitools.server.models.DataStatus

/**
 * Array with metrics, status, and pin id for the requested metric
 * @param metrics The metric name and daily value for each requested metric
 * @param dataStatus 
 * @param pinId The pin id
 */
data class TopPinsAnalyticsResponsePinsInner(
    /* The metric name and daily value for each requested metric */
    val metrics: kotlin.collections.Map<kotlin.String, java.math.BigDecimal>? = null,
    val dataStatus: kotlin.collections.Map<kotlin.String, DataStatus>? = null,
    /* The pin id */
    val pinId: kotlin.String? = null
) 
