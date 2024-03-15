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

import org.openapitools.server.models.CatalogsHotelAttributes

/**
 * A hotel item to be upserted.
 * @param hotelId The catalog hotel id in the merchant namespace
 * @param operation 
 * @param attributes 
 */
data class CatalogsUpsertHotelItem(
    /* The catalog hotel id in the merchant namespace */
    val hotelId: kotlin.String,
    val operation: CatalogsUpsertHotelItem.Operation,
    val attributes: CatalogsHotelAttributes
) 
{
    /**
    * 
    * Values: UPSERT
    */
    enum class Operation(val value: kotlin.String){
        UPSERT("UPSERT");
    }
}

