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

case class ItemResponse(
  catalogType: CatalogsType,

  /* The catalog item id in the merchant namespace */
  itemId: Option[String],

  /* The pins mapped to the item */
  pins: Option[List[Pin]],

  attributes: Option[CatalogsHotelAttributes],

  /* The catalog hotel id in the merchant namespace */
  hotelId: Option[String],

  /* Array with the errors for the item id requested */
  errors: Option[List[ItemValidationEvent]]

 )
