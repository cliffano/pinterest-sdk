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

import org.openapitools.client.model.CatalogsProductGroupStatus._
import org.openapitools.client.model.CatalogsProductGroupType._

case class CatalogsRetailProductGroup(
  catalogType: CatalogsRetailProductGroupEnums.CatalogType,
  /* ID of the catalog product group. */
  id: String,
  /* Name of catalog product group */
  name: Option[String] = None,
  description: Option[String] = None,
  filters: CatalogsProductGroupFilters,
  /* boolean indicator of whether the product group is being featured or not */
  isFeatured: Option[Boolean] = None,
  `type`: Option[CatalogsProductGroupType] = None,
  status: Option[CatalogsProductGroupStatus] = None,
  /* Unix timestamp in seconds of when catalog product group was created. */
  createdAt: Option[Int] = None,
  /* Unix timestamp in seconds of last time catalog product group was updated. */
  updatedAt: Option[Int] = None,
  feedId: CatalogsRetailProductGroupEnums.FeedId
)

object CatalogsRetailProductGroupEnums {

  type CatalogType = CatalogType.Value
  type FeedId = FeedId.Value
  object CatalogType extends Enumeration {
    val RETAIL = Value("RETAIL")
  }

  object FeedId extends Enumeration {
    val `Null` = Value("null")
  }

}
