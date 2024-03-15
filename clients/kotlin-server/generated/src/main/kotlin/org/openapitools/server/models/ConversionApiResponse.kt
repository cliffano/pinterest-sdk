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

import org.openapitools.server.models.ConversionApiResponseEventsInner

/**
 * Schema describing the object in the response, which contains information about the events that were received and processed.
 * @param numEventsReceived Total number of events received in the request.
 * @param numEventsProcessed Number of events that were successfully processed from the events.
 * @param events Specific messages for each event received. The order will match the order in which the events were received in the request.
 */
data class ConversionApiResponse(
    /* Total number of events received in the request. */
    val numEventsReceived: kotlin.Int,
    /* Number of events that were successfully processed from the events. */
    val numEventsProcessed: kotlin.Int,
    /* Specific messages for each event received. The order will match the order in which the events were received in the request. */
    val events: kotlin.collections.List<ConversionApiResponseEventsInner>
) 
