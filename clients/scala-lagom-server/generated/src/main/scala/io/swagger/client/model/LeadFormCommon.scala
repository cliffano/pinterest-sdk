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

package io.swagger.client.model
import play.api.libs.json._

case class LeadFormCommon (
            /* Internal name of the lead form. */
                  name: Option[String],
            /* A link to the advertiser's privacy policy. This will be included in the lead form's disclosure language. */
                  privacyPolicyLink: Option[String],
            /* Whether the advertiser has accepted Pinterest's terms of service for creating a lead ad. */
                  hasAcceptedTerms: Option[Boolean],
            /* A message for people who complete the form to let them know what happens next. */
                  completionMessage: Option[String],
                  status: Option[LeadFormStatus],
            /* Additional disclosure language to be included in the lead form. */
                  disclosureLanguage: Option[String],
            /* List of questions to be displayed on the lead form. */
                  questions: Option[Seq[LeadFormQuestion]]
)

object LeadFormCommon {
implicit val format: Format[LeadFormCommon] = Json.format
}

