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


  /**
   * hotel_product_groups_update_request
   * Request object for updating a hotel product group.
   */
case class CatalogsHotelProductGroupUpdateRequest(
  catalogType: Option[CatalogsHotelProductGroupUpdateRequestEnums.CatalogType] = None,
  name: Option[String] = None,
  description: Option[String] = None,
  filters: Option[CatalogsHotelProductGroupFilters] = None
)

object CatalogsHotelProductGroupUpdateRequestEnums {

  type CatalogType = CatalogType.Value
  object CatalogType extends Enumeration {
    val HOTEL = Value("HOTEL")
  }

}
