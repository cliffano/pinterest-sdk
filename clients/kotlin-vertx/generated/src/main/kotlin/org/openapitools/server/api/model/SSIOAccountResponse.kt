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

import org.openapitools.server.api.model.SSIOAccountItem
import org.openapitools.server.api.model.SSIOAccountPMPName

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * 
 * @param eligible Advertiser eligible to create order lines
 * @param canEdit Advertiser eligible to update order lines
 * @param billtoInfos An array of Salesforce account information that includes address, io terms, etc.
 * @param currency 
 * @param pmpNames 
 * @param error Error indicator from Salesforce which could be \"No Error\"
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class SSIOAccountResponse (
    /* Advertiser eligible to create order lines */
    val eligible: kotlin.Boolean? = null,
    /* Advertiser eligible to update order lines */
    val canEdit: kotlin.Boolean? = null,
    /* An array of Salesforce account information that includes address, io terms, etc. */
    val billtoInfos: kotlin.Array<SSIOAccountItem>? = null,
    val currency: kotlin.String? = null,
    val pmpNames: kotlin.Array<SSIOAccountPMPName>? = null,
    /* Error indicator from Salesforce which could be \"No Error\" */
    val error: kotlin.String? = null
) {

}

