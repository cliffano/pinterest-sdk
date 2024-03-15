package model

import play.api.libs.json._

/**
  * Represents the Swagger definition for CatalogsHotelProductGroup.
  * @param id ID of the hotel product group.
  * @param name Name of hotel product group
  * @param createdAt Unix timestamp in seconds of when catalog product group was created.
  * @param updatedAt Unix timestamp in seconds of last time catalog product group was updated.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2024-03-14T23:15:00.394859410Z[Etc/UTC]", comments = "Generator version: 7.4.0")
case class CatalogsHotelProductGroup(
  catalogType: CatalogsHotelProductGroup.CatalogType.Value,
  id: String,
  name: Option[String],
  description: Option[String],
  filters: CatalogsHotelProductGroupFilters,
  createdAt: Option[Int],
  updatedAt: Option[Int],
  catalogId: String
)

object CatalogsHotelProductGroup {
  implicit lazy val catalogsHotelProductGroupJsonFormat: Format[CatalogsHotelProductGroup] = Json.format[CatalogsHotelProductGroup]

  // noinspection TypeAnnotation
  object CatalogType extends Enumeration {
    val HOTEL = Value("HOTEL")

    type CatalogType = Value
    implicit lazy val CatalogTypeJsonFormat: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[this.type])
  }
}

