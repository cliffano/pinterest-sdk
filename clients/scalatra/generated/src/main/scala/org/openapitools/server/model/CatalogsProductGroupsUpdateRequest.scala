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

case class CatalogsProductGroupsUpdateRequest(
  name: Option[String],

  description: Option[String],

  /* boolean indicator of whether the product group is being featured or not */
  isFeatured: Option[Boolean],

  filters: Option[CatalogsHotelProductGroupFilters],

  catalogType: Option[String]

 )
