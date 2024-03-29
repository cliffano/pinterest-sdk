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
   * Request object to list products for a given product group filter.
   */
case class CatalogsListProductsByFilterRequest(
  /* Catalog Feed id pertaining to the catalog product group filter. */
  feedId: String,
  filters: CatalogsProductGroupFilters
)

