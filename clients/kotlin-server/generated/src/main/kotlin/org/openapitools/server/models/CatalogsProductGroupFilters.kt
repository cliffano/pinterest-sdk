/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.models

import org.openapitools.server.models.CatalogsProductGroupFilterKeys
import org.openapitools.server.models.CatalogsProductGroupFiltersAllOf
import org.openapitools.server.models.CatalogsProductGroupFiltersAnyOf

/**
 * Object holding a group of filters for a catalog product group
 * @param anyOf 
 * @param allOf 
 */
data class CatalogsProductGroupFilters(
    val anyOf: kotlin.collections.List<CatalogsProductGroupFilterKeys>? = null,
    val allOf: kotlin.collections.List<CatalogsProductGroupFilterKeys>? = null
) 

