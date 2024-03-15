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

case class CatalogsRetailItemResponse(
  catalogType: CatalogsType,

  /* The catalog retail item id in the merchant namespace */
  itemId: Option[String],

  /* The pins mapped to the item */
  pins: Option[List[Pin]],

  attributes: Option[ItemAttributes]

 )