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

import org.openapitools.server.models.CatalogsProductGroupFilters

/**
 * Request object for updating a product group.
 * @param feedId Catalog Feed id pertaining to the catalog product group.
 * @param name 
 * @param filters 
 * @param description 
 */
data class CatalogsProductGroupUpdateRequest (
    /* Catalog Feed id pertaining to the catalog product group. */
    val feedId: kotlin.String,
    val name: kotlin.String,
    val filters: CatalogsProductGroupFilters,
    val description: kotlin.String? = null
) 

