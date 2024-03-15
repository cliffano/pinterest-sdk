package org.openapitools.model

import java.util.Objects
import com.fasterxml.jackson.annotation.JsonProperty
import com.fasterxml.jackson.annotation.JsonValue
import org.openapitools.model.LeadFormQuestion
import org.openapitools.model.LeadFormStatus
import javax.validation.constraints.DecimalMax
import javax.validation.constraints.DecimalMin
import javax.validation.constraints.Email
import javax.validation.constraints.Max
import javax.validation.constraints.Min
import javax.validation.constraints.NotNull
import javax.validation.constraints.Pattern
import javax.validation.constraints.Size
import javax.validation.Valid
import io.swagger.v3.oas.annotations.media.Schema

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
data class LeadFormCommon(

    @Schema(example = "Lead Form 3/14/2023", description = "Internal name of the lead form.")
    @get:JsonProperty("name") val name: kotlin.String? = null,

    @Schema(example = "https://www.advertisername.com/privacy-policy", description = "A link to the advertiser's privacy policy. This will be included in the lead form's disclosure language.")
    @get:JsonProperty("privacy_policy_link") val privacyPolicyLink: kotlin.String? = null,

    @Schema(example = "false", description = "Whether the advertiser has accepted Pinterest's terms of service for creating a lead ad.")
    @get:JsonProperty("has_accepted_terms") val hasAcceptedTerms: kotlin.Boolean? = null,

    @Schema(example = "Thank you for submitting. We will contact you soon.", description = "A message for people who complete the form to let them know what happens next.")
    @get:JsonProperty("completion_message") val completionMessage: kotlin.String? = null,

    @field:Valid
    @Schema(example = "null", description = "")
    @get:JsonProperty("status") val status: LeadFormStatus? = null,

    @Schema(example = "By entering your personal information, you agree that your data will be collected and used.", description = "Additional disclosure language to be included in the lead form.")
    @get:JsonProperty("disclosure_language") val disclosureLanguage: kotlin.String? = null,

    @field:Valid
    @get:Size(min=0,max=10) 
    @Schema(example = "[{\"question_type\":\"CUSTOM\",\"custom_question_field_type\":\"CHECKBOX\",\"custom_question_label\":\"What is your favorite animal?\",\"custom_question_options\":[\"Dog\",\"Cat\",\"Bird\",\"Turtle\"]}]", description = "List of questions to be displayed on the lead form.")
    @get:JsonProperty("questions") val questions: kotlin.collections.List<LeadFormQuestion>? = null
) {

}

