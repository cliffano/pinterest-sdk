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

case class AudienceCategory (
            /* Interest unique key (same as ID). */
                  key: Option[String],
            /* Interest name. */
                  name: Option[String],
            /* Interest's percent of category's total audience. */
                  ratio: Option[Number],
            /* Interest affinity index. */
                  index: Option[Number],
            /* Interest ID. */
                  id: Option[String],
            /* Subcategory interest distribution */
                  subcategories: Option[Seq[AudienceSubcategory]]
)

object AudienceCategory {
implicit val format: Format[AudienceCategory] = Json.format
}
