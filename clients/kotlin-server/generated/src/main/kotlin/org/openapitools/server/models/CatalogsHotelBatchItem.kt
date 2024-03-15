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

import org.openapitools.server.models.CatalogsCreateHotelItem
import org.openapitools.server.models.CatalogsDeleteHotelItem
import org.openapitools.server.models.CatalogsUpdatableHotelAttributes
import org.openapitools.server.models.CatalogsUpdateHotelItem
import org.openapitools.server.models.CatalogsUpsertHotelItem

/**
 * Hotel batch item
 * @param hotelId The catalog hotel id in the merchant namespace
 * @param operation 
 * @param attributes 
 */
data class CatalogsHotelBatchItem(
    /* The catalog hotel id in the merchant namespace */
    val hotelId: kotlin.String,
    val operation: CatalogsHotelBatchItem.Operation,
    val attributes: CatalogsUpdatableHotelAttributes
) 
{
    /**
    * 
    * Values: DELETE
    */
    enum class Operation(val value: kotlin.String){
        DELETE("DELETE");
    }
}

