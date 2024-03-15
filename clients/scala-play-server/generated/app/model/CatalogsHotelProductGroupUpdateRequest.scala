package model

import play.api.libs.json._

/**
  * Request object for updating a hotel product group.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2024-03-14T23:15:00.394859410Z[Etc/UTC]", comments = "Generator version: 7.4.0")
case class CatalogsHotelProductGroupUpdateRequest(
  catalogType: Option[CatalogsHotelProductGroupUpdateRequest.CatalogType.Value],
  name: Option[String],
  description: Option[String],
  filters: Option[CatalogsHotelProductGroupFilters]
)

object CatalogsHotelProductGroupUpdateRequest {
  implicit lazy val catalogsHotelProductGroupUpdateRequestJsonFormat: Format[CatalogsHotelProductGroupUpdateRequest] = Json.format[CatalogsHotelProductGroupUpdateRequest]

  // noinspection TypeAnnotation
  object CatalogType extends Enumeration {
    val HOTEL = Value("HOTEL")

    type CatalogType = Value
    implicit lazy val CatalogTypeJsonFormat: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[this.type])
  }
}

