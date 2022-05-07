/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.api.model

import org.openapitools.server.api.model.CatalogsProductGroupFilterKeys
import org.openapitools.server.api.model.CatalogsProductGroupFiltersAllOf
import org.openapitools.server.api.model.CatalogsProductGroupFiltersAnyOf

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * Object holding a group of filters for a catalog product group
 * @param anyOf 
 * @param allOf 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class CatalogsProductGroupFilters (
    val anyOf: kotlin.Array<CatalogsProductGroupFilterKeys>? = null,
    val allOf: kotlin.Array<CatalogsProductGroupFilterKeys>? = null
) {

}

