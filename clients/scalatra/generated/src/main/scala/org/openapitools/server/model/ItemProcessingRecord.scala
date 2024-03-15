/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */

package org.openapitools.server.model

case class ItemProcessingRecord(
  /* The catalog item id in the merchant namespace */
  itemId: Option[String],

  /* Array with the validation errors for the item processing record. A non empty errors list causes the item processing to fail. */
  errors: Option[List[ItemValidationEvent]],

  /* Array with the validation warnings for the item processing record */
  warnings: Option[List[ItemValidationEvent]],

  status: Option[ItemProcessingStatus]

 )
