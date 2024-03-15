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

import org.openapitools.server.api.model.LeadFormQuestion
import org.openapitools.server.api.model.LeadFormStatus

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * Creation fields
 * @param name Internal name of the lead form.
 * @param privacyPolicyLink A link to the advertiser's privacy policy. This will be included in the lead form's disclosure language.
 * @param hasAcceptedTerms Whether the advertiser has accepted Pinterest's terms of service for creating a lead ad.
 * @param completionMessage A message for people who complete the form to let them know what happens next.
 * @param status 
 * @param disclosureLanguage Additional disclosure language to be included in the lead form.
 * @param questions List of questions to be displayed on the lead form.
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class LeadFormCommon (
    /* Internal name of the lead form. */
    val name: kotlin.String? = null,
    /* A link to the advertiser's privacy policy. This will be included in the lead form's disclosure language. */
    val privacyPolicyLink: kotlin.String? = null,
    /* Whether the advertiser has accepted Pinterest's terms of service for creating a lead ad. */
    val hasAcceptedTerms: kotlin.Boolean? = null,
    /* A message for people who complete the form to let them know what happens next. */
    val completionMessage: kotlin.String? = null,
    val status: LeadFormStatus? = null,
    /* Additional disclosure language to be included in the lead form. */
    val disclosureLanguage: kotlin.String? = null,
    /* List of questions to be displayed on the lead form. */
    val questions: kotlin.Array<LeadFormQuestion>? = null
) {

}

