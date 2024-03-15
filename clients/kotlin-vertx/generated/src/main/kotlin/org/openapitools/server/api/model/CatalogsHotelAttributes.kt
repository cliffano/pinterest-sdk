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

import org.openapitools.server.api.model.CatalogsHotelAddress
import org.openapitools.server.api.model.CatalogsHotelAttributesAllOfMainImage
import org.openapitools.server.api.model.CatalogsHotelGuestRatings

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * 
 * @param name The hotel's name.
 * @param link Link to the product page
 * @param description Brief description of the hotel.
 * @param brand The brand to which this hotel belongs to.
 * @param latitude Latitude of the hotel.
 * @param longitude Longitude of the hotel.
 * @param neighborhood A list of neighborhoods where the hotel is located
 * @param address 
 * @param customLabel0 Custom grouping of hotels
 * @param customLabel1 Custom grouping of hotels
 * @param customLabel2 Custom grouping of hotels
 * @param customLabel3 Custom grouping of hotels
 * @param customLabel4 Custom grouping of hotels
 * @param category The type of property. The category can be any type of internal description desired.
 * @param basePrice Base price of the hotel room per night followed by the ISO currency code
 * @param salePrice Sale price of a hotel room per night. Used to advertise discounts off the regular price of the hotel.
 * @param guestRatings 
 * @param mainImage 
 * @param additionalImageLink <p><= 2000 characters</p> <p>The links to additional images for your hotel. Up to ten additional images can be used to show a hotel from different angles. Must begin with http:// or https://.</p>
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class CatalogsHotelAttributes (
    /* The hotel's name. */
    val name: kotlin.String? = null,
    /* Link to the product page */
    val link: kotlin.String? = null,
    /* Brief description of the hotel. */
    val description: kotlin.String? = null,
    /* The brand to which this hotel belongs to. */
    val brand: kotlin.String? = null,
    /* Latitude of the hotel. */
    val latitude: java.math.BigDecimal? = null,
    /* Longitude of the hotel. */
    val longitude: java.math.BigDecimal? = null,
    /* A list of neighborhoods where the hotel is located */
    val neighborhood: kotlin.Array<kotlin.String>? = null,
    val address: CatalogsHotelAddress? = null,
    /* Custom grouping of hotels */
    val customLabel0: kotlin.String? = null,
    /* Custom grouping of hotels */
    val customLabel1: kotlin.String? = null,
    /* Custom grouping of hotels */
    val customLabel2: kotlin.String? = null,
    /* Custom grouping of hotels */
    val customLabel3: kotlin.String? = null,
    /* Custom grouping of hotels */
    val customLabel4: kotlin.String? = null,
    /* The type of property. The category can be any type of internal description desired. */
    val category: kotlin.String? = null,
    /* Base price of the hotel room per night followed by the ISO currency code */
    val basePrice: kotlin.String? = null,
    /* Sale price of a hotel room per night. Used to advertise discounts off the regular price of the hotel. */
    val salePrice: kotlin.String? = null,
    val guestRatings: CatalogsHotelGuestRatings? = null,
    val mainImage: CatalogsHotelAttributesAllOfMainImage? = null,
    /* <p><= 2000 characters</p> <p>The links to additional images for your hotel. Up to ten additional images can be used to show a hotel from different angles. Must begin with http:// or https://.</p> */
    val additionalImageLink: kotlin.Array<kotlin.String>? = null
) {

}

