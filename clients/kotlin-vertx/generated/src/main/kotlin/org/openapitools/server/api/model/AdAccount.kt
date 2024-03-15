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

import org.openapitools.server.api.model.AdAccountOwner
import org.openapitools.server.api.model.BusinessAccessRole
import org.openapitools.server.api.model.Country
import org.openapitools.server.api.model.Currency

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * 
 * @param id 
 * @param name 
 * @param owner 
 * @param country 
 * @param currency 
 * @param permissions 
 * @param createdTime Creation time. Unix timestamp in seconds.
 * @param updatedTime Last update time. Unix timestamp in seconds.
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class AdAccount (
    val id: kotlin.String? = null,
    val name: kotlin.String? = null,
    val owner: AdAccountOwner? = null,
    val country: Country? = null,
    val currency: Currency? = null,
    val permissions: kotlin.Array<BusinessAccessRole>? = null,
    /* Creation time. Unix timestamp in seconds. */
    val createdTime: kotlin.Int? = null,
    /* Last update time. Unix timestamp in seconds. */
    val updatedTime: kotlin.Int? = null
) {

}

