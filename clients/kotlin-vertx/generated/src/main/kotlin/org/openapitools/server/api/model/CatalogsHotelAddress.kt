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
package org.openapitools.server.api.model


        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * 
 * @param addr1 Primary street address of hotel.
 * @param city City where the hotel is located.
 * @param region State, county, province, where the hotel is located.
 * @param country Country where the hotel is located.
 * @param postalCode Required for countries with a postal code system. Postal or zip code of the hotel.
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class CatalogsHotelAddress (
    /* Primary street address of hotel. */
    val addr1: kotlin.String? = null,
    /* City where the hotel is located. */
    val city: kotlin.String? = null,
    /* State, county, province, where the hotel is located. */
    val region: kotlin.String? = null,
    /* Country where the hotel is located. */
    val country: kotlin.String? = null,
    /* Required for countries with a postal code system. Postal or zip code of the hotel. */
    val postalCode: kotlin.String? = null
) {

}
