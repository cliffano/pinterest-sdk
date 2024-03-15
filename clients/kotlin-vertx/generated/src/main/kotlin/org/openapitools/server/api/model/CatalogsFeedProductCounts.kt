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
 * The counts can be null early in the process.
 * @param original The number of products in the feed file.
 * @param ingested The number of products successfully ingested from the feed file.
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class CatalogsFeedProductCounts (
    /* The number of products in the feed file. */
    val original: kotlin.Int? = null,
    /* The number of products successfully ingested from the feed file. */
    val ingested: kotlin.Int? = null
) {

}

