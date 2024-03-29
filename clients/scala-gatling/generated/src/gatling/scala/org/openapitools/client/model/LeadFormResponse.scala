
package org.openapitools.client.model


case class LeadFormResponse (
    /* Internal name of the lead form. */
    _name: Option[String],
    /* A link to the advertiser's privacy policy. This will be included in the lead form's disclosure language. */
    _privacyPolicyLink: Option[String],
    /* Whether the advertiser has accepted Pinterest's terms of service for creating a lead ad. */
    _hasAcceptedTerms: Option[Boolean],
    /* A message for people who complete the form to let them know what happens next. */
    _completionMessage: Option[String],
    _status: Option[LeadFormStatus],
    /* Additional disclosure language to be included in the lead form. */
    _disclosureLanguage: Option[String],
    /* List of questions to be displayed on the lead form. */
    _questions: Option[List[LeadFormQuestion]],
    /* The ID of this lead form */
    _id: Option[String],
    /* The Ad Account ID that this lead form belongs to. */
    _adAccountId: Option[String],
    /* Lead form creation time. Unix timestamp in seconds. */
    _createdTime: Option[Integer],
    /* Last update time. Unix timestamp in seconds. */
    _updatedTime: Option[Integer]
)
object LeadFormResponse {
    def toStringBody(var_name: Object, var_privacyPolicyLink: Object, var_hasAcceptedTerms: Object, var_completionMessage: Object, var_status: Object, var_disclosureLanguage: Object, var_questions: Object, var_id: Object, var_adAccountId: Object, var_createdTime: Object, var_updatedTime: Object) =
        s"""
        | {
        | "name":$var_name,"privacyPolicyLink":$var_privacyPolicyLink,"hasAcceptedTerms":$var_hasAcceptedTerms,"completionMessage":$var_completionMessage,"status":$var_status,"disclosureLanguage":$var_disclosureLanguage,"questions":$var_questions,"id":$var_id,"adAccountId":$var_adAccountId,"createdTime":$var_createdTime,"updatedTime":$var_updatedTime
        | }
        """.stripMargin
}
