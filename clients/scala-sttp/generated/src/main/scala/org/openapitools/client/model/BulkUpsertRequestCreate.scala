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
   * Request for creation of entities in bulk.
   */
case class BulkUpsertRequestCreate(
  campaigns: Option[Seq[CampaignCreateRequest]] = None,
  adGroups: Option[Seq[AdGroupCreateRequest]] = None,
  ads: Option[Seq[AdCreateRequest]] = None,
  productGroups: Option[Seq[ProductGroupPromotionCreateRequest]] = None,
  keywords: Option[Seq[KeywordsRequest]] = None
)

