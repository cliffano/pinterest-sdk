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

case class SSIOInsertionOrderCommon (
            /* Starting date of time period. Format: YYYY-MM-DD */
                  startDate: Option[String],
            /* End date of time period. Format: YYYY-MM-DD */
                  endDate: Option[String],
            /* The po number */
                  poNumber: Option[String],
            /* If Budget order line, the budget amount. */
                  budgetAmount: Option[Number],
            /* The billing contact first name */
                  billingContactFirstname: Option[String],
            /* The billing contact last name */
                  billingContactLastname: Option[String],
            /* The billing contact email */
                  billingContactEmail: Option[String],
            /* The media contact first name */
                  mediaContactFirstname: Option[String],
            /* The media contact last name */
                  mediaContactLastname: Option[String],
            /* The media contact email */
                  mediaContactEmail: Option[String],
            /* URL link for agency */
                  agencyLink: Option[String],
            /* The email of user submitting the insertion order */
                  userEmail: Option[String]
)

object SSIOInsertionOrderCommon {
implicit val format: Format[SSIOInsertionOrderCommon] = Json.format
}

