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

import org.openapitools.server.models.BatchOperation
import org.openapitools.server.models.Country
import org.openapitools.server.models.ItemDeleteBatchRecord
import org.openapitools.server.models.Language

/**
 * Request object to delete catalogs items
 * @param country 
 * @param language 
 * @param operation 
 * @param items Array with catalogs items
 */
data class CatalogsItemsDeleteBatchRequest(
    val country: Country,
    val language: Language,
    val operation: BatchOperation,
    /* Array with catalogs items */
    val items: kotlin.collections.List<ItemDeleteBatchRecord>
) 

