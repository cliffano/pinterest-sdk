package org.openapitools.server.model


/**
 * = hotel_product_groups_update_request =
 *
 * Request object for updating a hotel product group.
 *
 * @param catalogType  for example: ''null''
 * @param name  for example: ''null''
 * @param description  for example: ''null''
 * @param filters  for example: ''null''
*/
final case class CatalogsHotelProductGroupUpdateRequest (
  catalogType: Option[String] = None,
  name: Option[String] = None,
  description: Option[String] = None,
  filters: Option[CatalogsHotelProductGroupFilters] = None
)

