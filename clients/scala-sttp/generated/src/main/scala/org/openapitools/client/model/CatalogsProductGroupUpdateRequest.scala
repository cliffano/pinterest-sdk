/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.client.model


  /**
   * product_groups_update_request
   * Request object for updating a product group.
   */
case class CatalogsProductGroupUpdateRequest(
  /* Catalog Feed id pertaining to the catalog product group. */
  feedId: String,
  name: String,
  description: Option[String] = None,
  filters: CatalogsProductGroupFilters
)
