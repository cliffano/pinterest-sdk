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

case class CatalogsItemsDeleteDiscontinuedBatchRequest (
                  country: Country,
                  language: Language,
                  operation: BatchOperation,
            /* Array with catalogs items */
                  items: Seq[ItemDeleteDiscontinuedBatchRecord]
)

object CatalogsItemsDeleteDiscontinuedBatchRequest {
implicit val format: Format[CatalogsItemsDeleteDiscontinuedBatchRequest] = Json.format
}

