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

import org.openapitools.client.model.BatchOperation._
import org.openapitools.client.model.Country._
import org.openapitools.client.model.Language._

  /**
   * Request object to delete catalogs items
   */
case class CatalogsItemsDeleteBatchRequest(
  country: Country,
  language: Language,
  operation: BatchOperation,
  /* Array with catalogs items */
  items: Seq[ItemDeleteBatchRecord]
)

object CatalogsItemsDeleteBatchRequestEnums {

}
