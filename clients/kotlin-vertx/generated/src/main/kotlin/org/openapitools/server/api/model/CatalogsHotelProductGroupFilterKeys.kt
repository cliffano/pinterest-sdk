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

import org.openapitools.server.api.model.BrandFilter
import org.openapitools.server.api.model.CatalogsProductGroupMultipleCountriesCriteria
import org.openapitools.server.api.model.CatalogsProductGroupMultipleStringCriteria
import org.openapitools.server.api.model.CatalogsProductGroupPricingCurrencyCriteria
import org.openapitools.server.api.model.CountryFilter
import org.openapitools.server.api.model.CustomLabel0Filter
import org.openapitools.server.api.model.CustomLabel1Filter
import org.openapitools.server.api.model.CustomLabel2Filter
import org.openapitools.server.api.model.CustomLabel3Filter
import org.openapitools.server.api.model.CustomLabel4Filter
import org.openapitools.server.api.model.HotelIdFilter
import org.openapitools.server.api.model.PriceFilter

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * 
 * @param PRICE 
 * @param HOTEL_ID 
 * @param BRAND 
 * @param CUSTOM_LABEL_0 
 * @param CUSTOM_LABEL_1 
 * @param CUSTOM_LABEL_2 
 * @param CUSTOM_LABEL_3 
 * @param CUSTOM_LABEL_4 
 * @param COUNTRY 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class CatalogsHotelProductGroupFilterKeys (
    @SerializedName("PRICE") private val _PRICE: CatalogsProductGroupPricingCurrencyCriteria?,
    @SerializedName("HOTEL_ID") private val _HOTEL_ID: CatalogsProductGroupMultipleStringCriteria?,
    @SerializedName("BRAND") private val _BRAND: CatalogsProductGroupMultipleStringCriteria?,
    @SerializedName("CUSTOM_LABEL_0") private val _CUSTOM_LABEL_0: CatalogsProductGroupMultipleStringCriteria?,
    @SerializedName("CUSTOM_LABEL_1") private val _CUSTOM_LABEL_1: CatalogsProductGroupMultipleStringCriteria?,
    @SerializedName("CUSTOM_LABEL_2") private val _CUSTOM_LABEL_2: CatalogsProductGroupMultipleStringCriteria?,
    @SerializedName("CUSTOM_LABEL_3") private val _CUSTOM_LABEL_3: CatalogsProductGroupMultipleStringCriteria?,
    @SerializedName("CUSTOM_LABEL_4") private val _CUSTOM_LABEL_4: CatalogsProductGroupMultipleStringCriteria?,
    @SerializedName("COUNTRY") private val _COUNTRY: CatalogsProductGroupMultipleCountriesCriteria?
) {

        val PRICE get() = _PRICE ?: throw IllegalArgumentException("PRICE is required")
                    
        val HOTEL_ID get() = _HOTEL_ID ?: throw IllegalArgumentException("HOTEL_ID is required")
                    
        val BRAND get() = _BRAND ?: throw IllegalArgumentException("BRAND is required")
                    
        val CUSTOM_LABEL_0 get() = _CUSTOM_LABEL_0 ?: throw IllegalArgumentException("CUSTOM_LABEL_0 is required")
                    
        val CUSTOM_LABEL_1 get() = _CUSTOM_LABEL_1 ?: throw IllegalArgumentException("CUSTOM_LABEL_1 is required")
                    
        val CUSTOM_LABEL_2 get() = _CUSTOM_LABEL_2 ?: throw IllegalArgumentException("CUSTOM_LABEL_2 is required")
                    
        val CUSTOM_LABEL_3 get() = _CUSTOM_LABEL_3 ?: throw IllegalArgumentException("CUSTOM_LABEL_3 is required")
                    
        val CUSTOM_LABEL_4 get() = _CUSTOM_LABEL_4 ?: throw IllegalArgumentException("CUSTOM_LABEL_4 is required")
                    
        val COUNTRY get() = _COUNTRY ?: throw IllegalArgumentException("COUNTRY is required")
                    
}

