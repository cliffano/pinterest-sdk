package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.CatalogsHotelProductGroup
import org.openapitools.models.CatalogsProductGroupFilters
import org.openapitools.models.CatalogsProductGroupStatus
import org.openapitools.models.CatalogsProductGroupType
import org.openapitools.models.CatalogsRetailProductGroup

/**
 * 
 * @param catalogUnderscoretype 
 * @param id ID of the catalog product group.
 * @param name Name of catalog product group
 * @param description 
 * @param filters 
 * @param createdUnderscoreat Unix timestamp in seconds of when catalog product group was created.
 * @param updatedUnderscoreat Unix timestamp in seconds of last time catalog product group was updated.
 * @param catalogUnderscoreid 
 * @param isUnderscorefeatured boolean indicator of whether the product group is being featured or not
 * @param _type 
 * @param status 
 * @param feedUnderscoreid 
 */
case class CatalogsVerticalProductGroup(catalogUnderscoretype: String,
                id: String,
                name: Option[String],
                description: Option[String],
                filters: CatalogsProductGroupFilters,
                createdUnderscoreat: Option[Int],
                updatedUnderscoreat: Option[Int],
                catalogUnderscoreid: String,
                isUnderscorefeatured: Option[Boolean],
                _type: Option[CatalogsProductGroupType],
                status: Option[CatalogsProductGroupStatus],
                feedUnderscoreid: String
                )

object CatalogsVerticalProductGroup {
    /**
     * Creates the codec for converting CatalogsVerticalProductGroup from and to JSON.
     */
    implicit val decoder: Decoder[CatalogsVerticalProductGroup] = deriveDecoder
    implicit val encoder: ObjectEncoder[CatalogsVerticalProductGroup] = deriveEncoder
}
