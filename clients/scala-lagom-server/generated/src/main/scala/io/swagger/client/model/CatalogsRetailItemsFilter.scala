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

package io.swagger.client.model
import play.api.libs.json._

case class CatalogsRetailItemsFilter (
                  catalogType:  Option[CatalogsRetailItemsFilterCatalogTypeEnum.CatalogsRetailItemsFilterCatalogTypeEnum],
                  itemIds: Seq[String],
            /* Catalog id pertaining to the retail item. If not provided, default to oldest retail catalog */
                  catalogId: Option[String]
)

object CatalogsRetailItemsFilter {
implicit val format: Format[CatalogsRetailItemsFilter] = Json.format
}

object CatalogsRetailItemsFilterCatalogTypeEnum extends Enumeration {
  val   RETAIL = Value
  type CatalogsRetailItemsFilterCatalogTypeEnum = Value
  implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[CatalogsRetailItemsFilterCatalogTypeEnum.type])
}
