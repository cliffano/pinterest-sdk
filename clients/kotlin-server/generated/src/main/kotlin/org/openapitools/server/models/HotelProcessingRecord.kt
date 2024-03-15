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

import org.openapitools.server.models.ItemProcessingStatus
import org.openapitools.server.models.ItemValidationEvent

/**
 * Object describing an item processing record
 * @param hotelId The catalog hotel id in the merchant namespace
 * @param errors Array with the validation errors for the item processing record. A non empty errors list causes the item processing to fail.
 * @param warnings Array with the validation warnings for the item processing record
 * @param status 
 */
data class HotelProcessingRecord(
    /* The catalog hotel id in the merchant namespace */
    val hotelId: kotlin.String? = null,
    /* Array with the validation errors for the item processing record. A non empty errors list causes the item processing to fail. */
    val errors: kotlin.collections.List<ItemValidationEvent>? = null,
    /* Array with the validation warnings for the item processing record */
    val warnings: kotlin.collections.List<ItemValidationEvent>? = null,
    val status: ItemProcessingStatus? = null
) 
