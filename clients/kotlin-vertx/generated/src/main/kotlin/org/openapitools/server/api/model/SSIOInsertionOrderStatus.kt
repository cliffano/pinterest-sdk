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
 * 
 * @param pinOrderId Salesforce order id
 * @param status Salesforce insertion order status
 * @param creationTime Salesforce insertion order creation time
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class SSIOInsertionOrderStatus (
    /* Salesforce order id */
    val pinOrderId: kotlin.String? = null,
    /* Salesforce insertion order status */
    val status: kotlin.String? = null,
    /* Salesforce insertion order creation time */
    val creationTime: kotlin.String? = null
) {

}

