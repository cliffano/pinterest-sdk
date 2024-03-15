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

case class CatalogsItemsFilters(
  catalogType: CatalogsType,

  itemIds: List[String],

  /* Catalog id pertaining to the hotel item. If not provided, default to oldest hotel catalog */
  catalogId: Option[String],

  hotelIds: List[String]

 )
