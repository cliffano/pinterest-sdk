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

case class SsioInsertionOrdersStatusGetByAdAccount200Response (
            /* Insertion orders status by ad acount id */
                  items: Seq[SSIOInsertionOrderStatus],
                  bookmark: Option[String]
)

object SsioInsertionOrdersStatusGetByAdAccount200Response {
implicit val format: Format[SsioInsertionOrdersStatusGetByAdAccount200Response] = Json.format
}
