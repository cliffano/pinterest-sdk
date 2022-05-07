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
package org.openapitools.server.models

import org.openapitools.server.models.BatchOperation
import org.openapitools.server.models.Country
import org.openapitools.server.models.ItemBatchRecord
import org.openapitools.server.models.Language

/**
 * Request object of catalogs items batch
 * @param country 
 * @param language 
 * @param operation 
 * @param items Array with catalogs items
 */
data class CatalogsItemsBatchRequest(
    val country: Country? = null,
    val language: Language? = null,
    val operation: BatchOperation? = null,
    /* Array with catalogs items */
    val items: kotlin.collections.List<ItemBatchRecord>? = null
) 

