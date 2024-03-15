
package org.openapitools.client.model


case class CatalogsHotelProductGroupUpdateRequest (
    _catalogType: Option[String],
    _name: Option[String],
    _description: Option[String],
    _filters: Option[CatalogsHotelProductGroupFilters]
)
object CatalogsHotelProductGroupUpdateRequest {
    def toStringBody(var_catalogType: Object, var_name: Object, var_description: Object, var_filters: Object) =
        s"""
        | {
        | "catalogType":$var_catalogType,"name":$var_name,"description":$var_description,"filters":$var_filters
        | }
        """.stripMargin
}
