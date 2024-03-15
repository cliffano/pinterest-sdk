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

case class CatalogsHotelBatchItem (
            /* The catalog hotel id in the merchant namespace */
                  hotelId: String,
                  operation:  Option[CatalogsHotelBatchItemOperationEnum.CatalogsHotelBatchItemOperationEnum],
                  attributes: CatalogsUpdatableHotelAttributes
)

object CatalogsHotelBatchItem {
implicit val format: Format[CatalogsHotelBatchItem] = Json.format
}

object CatalogsHotelBatchItemOperationEnum extends Enumeration {
  val   DELETE = Value
  type CatalogsHotelBatchItemOperationEnum = Value
  implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[CatalogsHotelBatchItemOperationEnum.type])
}