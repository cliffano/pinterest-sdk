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

import org.openapitools.server.api.model.CatalogsProductGroupMultipleStringListCriteria

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * 
 * @param GOOGLE_PRODUCT_CATEGORY_3 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class GoogleProductCategory3Filter (
    @SerializedName("GOOGLE_PRODUCT_CATEGORY_3") private val _GOOGLE_PRODUCT_CATEGORY_3: CatalogsProductGroupMultipleStringListCriteria?
) {

        val GOOGLE_PRODUCT_CATEGORY_3 get() = _GOOGLE_PRODUCT_CATEGORY_3 ?: throw IllegalArgumentException("GOOGLE_PRODUCT_CATEGORY_3 is required")
                    
}

