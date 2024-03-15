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

package io.swagger.client.model
import play.api.libs.json._

case class BulkUpsertRequestCreate (
                  campaigns: Option[Seq[CampaignCreateRequest]],
                  adGroups: Option[Seq[AdGroupCreateRequest]],
                  ads: Option[Seq[AdCreateRequest]],
                  productGroups: Option[Seq[ProductGroupPromotionCreateRequest]],
                  keywords: Option[Seq[KeywordsRequest]]
)

object BulkUpsertRequestCreate {
implicit val format: Format[BulkUpsertRequestCreate] = Json.format
}

