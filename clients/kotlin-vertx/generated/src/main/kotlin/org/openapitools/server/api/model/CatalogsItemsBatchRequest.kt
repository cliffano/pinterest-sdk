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
package org.openapitools.server.api.model

import org.openapitools.server.api.model.BatchOperation
import org.openapitools.server.api.model.Country
import org.openapitools.server.api.model.ItemBatchRecord
import org.openapitools.server.api.model.Language

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * Request object of catalogs items batch
 * @param country 
 * @param language 
 * @param operation 
 * @param items Array with catalogs items
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class CatalogsItemsBatchRequest (
    val country: Country? = null,
    val language: Language? = null,
    val operation: BatchOperation? = null,
    /* Array with catalogs items */
    val items: kotlin.Array<ItemBatchRecord>? = null
) {

}

