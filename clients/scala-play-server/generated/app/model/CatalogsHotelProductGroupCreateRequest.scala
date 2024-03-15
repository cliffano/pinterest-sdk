package model

import play.api.libs.json._

/**
  * Request object for creating a hotel product group.
  * @param catalogId Catalog id pertaining to the hotel product group.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2024-03-14T23:15:00.394859410Z[Etc/UTC]", comments = "Generator version: 7.4.0")
case class CatalogsHotelProductGroupCreateRequest(
  catalogType: CatalogsHotelProductGroupCreateRequest.CatalogType.Value,
  name: String,
  description: Option[String],
  filters: CatalogsHotelProductGroupFilters,
  catalogId: String
)

object CatalogsHotelProductGroupCreateRequest {
  implicit lazy val catalogsHotelProductGroupCreateRequestJsonFormat: Format[CatalogsHotelProductGroupCreateRequest] = Json.format[CatalogsHotelProductGroupCreateRequest]

  // noinspection TypeAnnotation
  object CatalogType extends Enumeration {
    val HOTEL = Value("HOTEL")

    type CatalogType = Value
    implicit lazy val CatalogTypeJsonFormat: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[this.type])
  }
}

