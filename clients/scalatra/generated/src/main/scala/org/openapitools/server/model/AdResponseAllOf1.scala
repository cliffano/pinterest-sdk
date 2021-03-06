/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */

package org.openapitools.server.model

case class AdResponseAllOf1(
  /* The ID of the advertiser that this ad belongs to. */
  adAccountId: Option[String],

  /* ID of the ad campaign that contains this ad. */
  campaignId: Option[String],

  /* Destination URL template for all items within a collections drawer. */
  collectionItemsDestinationUrlTemplate: Option[String],

  /* Pin creation time. Unix timestamp in seconds. */
  createdTime: Option[Int],

  /* The ID of this ad. */
  id: Option[String],

  /* Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\". */
  rejectedReasons: Option[List[String]],

  /* Text reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\". */
  rejectionLabels: Option[List[String]],

  /* Ad review status */
  reviewStatus: Option[String],

  /* Always \"ad\". */
  `type`: Option[String],

  /* Last update time. Unix timestamp in seconds. */
  updatedTime: Option[Int],

  /* Ad summary status */
  summaryStatus: Option[PinPromotionSummaryStatus]

 )
