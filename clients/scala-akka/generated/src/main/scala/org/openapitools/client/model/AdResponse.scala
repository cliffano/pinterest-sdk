/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.client.model

import org.openapitools.client.core.ApiModel

case class AdResponse (
  /* ID of the ad group that contains the ad. */
  adGroupId: Option[String] = None,
  /* Deep link URL for Android devices. Not currently available. Using this field will generate an error. */
  androidDeepLink: Option[String] = None,
  /* Comma-separated deep links for the carousel pin on Android. */
  carouselAndroidDeepLinks: Option[Seq[String]] = None,
  /* Comma-separated destination URLs for the carousel pin to promote. */
  carouselDestinationUrls: Option[Seq[String]] = None,
  /* Comma-separated deep links for the carousel pin on iOS. */
  carouselIosDeepLinks: Option[Seq[String]] = None,
  /* Tracking url for the ad clicks. */
  clickTrackingUrl: Option[String] = None,
  /* Ad creative type enum */
  creativeType: Option[AdResponseEnums.CreativeType] = None,
  /* Destination URL. */
  destinationUrl: Option[String] = None,
  /* Deep link URL for iOS devices. Not currently available. Using this field will generate an error. */
  iosDeepLink: Option[String] = None,
  /* Is original pin deleted? */
  isPinDeleted: Option[Boolean] = None,
  /* Is pin repinnable? */
  isRemovable: Option[Boolean] = None,
  /* Name of the ad - 255 chars max. */
  name: Option[String] = None,
  /* Pin ID. */
  pinId: Option[String] = None,
  status: Option[EntityStatus] = None,
  trackingUrls: Option[TrackingUrls] = None,
  /* Tracking URL for ad impressions. */
  viewTrackingUrl: Option[String] = None,
  /* The ID of the advertiser that this ad belongs to. */
  adAccountId: Option[String] = None,
  /* ID of the ad campaign that contains this ad. */
  campaignId: Option[String] = None,
  /* Destination URL template for all items within a collections drawer. */
  collectionItemsDestinationUrlTemplate: Option[String] = None,
  /* Pin creation time. Unix timestamp in seconds. */
  createdTime: Option[Int] = None,
  /* The ID of this ad. */
  id: Option[String] = None,
  /* Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\". */
  rejectedReasons: Option[AdResponseEnums.Seq[RejectedReasons]] = None,
  /* Text reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\". */
  rejectionLabels: Option[Seq[String]] = None,
  /* Ad review status */
  reviewStatus: Option[AdResponseEnums.ReviewStatus] = None,
  /* Always \"ad\". */
  `type`: Option[String] = None,
  /* Last update time. Unix timestamp in seconds. */
  updatedTime: Option[Int] = None,
  /* Ad summary status */
  summaryStatus: Option[PinPromotionSummaryStatus] = None
) extends ApiModel

object AdResponseEnums {

  type CreativeType = CreativeType.Value
  type Seq[RejectedReasons] = Seq[RejectedReasons].Value
  type ReviewStatus = ReviewStatus.Value
  object CreativeType extends Enumeration {
    val REGULAR = Value("REGULAR")
    val VIDEO = Value("VIDEO")
    val SHOPPING = Value("SHOPPING")
    val CAROUSEL = Value("CAROUSEL")
    val MAXVIDEO = Value("MAX_VIDEO")
    val SHOPTHEPIN = Value("SHOP_THE_PIN")
    val STORY = Value("STORY")
  }

  object Seq[RejectedReasons] extends Enumeration {
  }

  object ReviewStatus extends Enumeration {
    val OTHER = Value("OTHER")
    val PENDING = Value("PENDING")
    val REJECTED = Value("REJECTED")
    val APPROVED = Value("APPROVED")
  }

}
