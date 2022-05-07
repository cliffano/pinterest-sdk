/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */

package org.openapitools.server.model
import java.time.OffsetDateTime

case class CatalogsFeedProcessingResult(
  createdAt: Option[OffsetDateTime],

  id: Option[String],

  updatedAt: Option[OffsetDateTime],

  ingestionDetails: CatalogsFeedIngestionDetails,

  status: CatalogsFeedProcessingStatus,

  productCounts: CatalogsFeedProductCounts,

  validationDetails: CatalogsFeedValidationDetails

 )
