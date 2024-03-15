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

case class CatalogsProductGroup(
  /* ID of the catalog product group. */
  id: String,

  /* Name of catalog product group */
  name: Option[String],

  description: Option[String],

  filters: CatalogsProductGroupFilters,

  /* boolean indicator of whether the product group is being featured or not */
  isFeatured: Option[Boolean],

  `type`: Option[CatalogsProductGroupType],

  status: Option[CatalogsProductGroupStatus],

  /* Unix timestamp in seconds of when catalog product group was created. */
  createdAt: Option[Int],

  /* Unix timestamp in seconds of last time catalog product group was updated. */
  updatedAt: Option[Int],

  /* id of the catalogs feed belonging to this catalog product group */
  feedId: String,

  catalogType: Option[String]

 )
