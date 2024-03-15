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
package org.openapitools.client.model

import org.openapitools.client.core.ApiModel

case class HotelProcessingRecord (
  /* The catalog hotel id in the merchant namespace */
  hotelId: Option[String] = None,
  /* Array with the validation errors for the item processing record. A non empty errors list causes the item processing to fail. */
  errors: Option[Seq[ItemValidationEvent]] = None,
  /* Array with the validation warnings for the item processing record */
  warnings: Option[Seq[ItemValidationEvent]] = None,
  status: Option[ItemProcessingStatus] = None
) extends ApiModel

object HotelProcessingRecordEnums {

}
