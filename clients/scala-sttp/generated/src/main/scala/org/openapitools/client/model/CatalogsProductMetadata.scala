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

import org.openapitools.client.model.NonNullableCatalogsCurrency._
import org.openapitools.client.model.NonNullableProductAvailabilityType._

  /**
   * Product metadata entity
   */
case class CatalogsProductMetadata(
  /* The user-created unique ID that represents the product. */
  itemId: String,
  /* The parent ID of the product. */
  itemGroupId: String,
  availability: NonNullableProductAvailabilityType,
  /* The price of the product. */
  price: Double,
  /* The discounted price of the product. */
  salePrice: Double,
  currency: NonNullableCatalogsCurrency
)

object CatalogsProductMetadataEnums {

}
