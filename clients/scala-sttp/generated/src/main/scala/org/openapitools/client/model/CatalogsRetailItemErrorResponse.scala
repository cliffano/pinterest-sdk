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

import org.openapitools.client.model.CatalogsType._

  /**
   * Object describing a retail item error
   */
case class CatalogsRetailItemErrorResponse(
  catalogType: CatalogsType,
  /* The catalog item id in the merchant namespace */
  itemId: Option[String] = None,
  /* Array with the errors for the item id requested */
  errors: Option[Seq[ItemValidationEvent]] = None
)

object CatalogsRetailItemErrorResponseEnums {

}
