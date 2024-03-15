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

case class CatalogsItemsDeleteDiscontinuedBatchRequest(
  country: Country,

  language: Language,

  operation: BatchOperation,

  /* Array with catalogs items */
  items: List[ItemDeleteDiscontinuedBatchRecord]

 )
