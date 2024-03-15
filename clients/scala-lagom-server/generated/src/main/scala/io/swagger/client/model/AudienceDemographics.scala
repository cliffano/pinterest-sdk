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

case class AudienceDemographics (
            /* Ages distribution. */
                  ages: Option[Seq[AudienceDemographicValue]],
            /* Gender distribution. */
                  genders: Option[Seq[AudienceDemographicValue]],
            /* Device usage distribution. */
                  devices: Option[Seq[AudienceDemographicValue]],
            /* Geographic metro area distribution. */
                  metros: Option[Seq[AudienceDemographicValue]],
            /* Country area distribution. */
                  countries: Option[Seq[AudienceDemographicValue]]
)

object AudienceDemographics {
implicit val format: Format[AudienceDemographics] = Json.format
}
