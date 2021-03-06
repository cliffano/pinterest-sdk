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

case class AdResponseAllOf (
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
  creativeType: Option[AdResponseAllOfEnums.CreativeType] = None,
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
  viewTrackingUrl: Option[String] = None
) extends ApiModel

object AdResponseAllOfEnums {

  type CreativeType = CreativeType.Value
  object CreativeType extends Enumeration {
    val REGULAR = Value("REGULAR")
    val VIDEO = Value("VIDEO")
    val SHOPPING = Value("SHOPPING")
    val CAROUSEL = Value("CAROUSEL")
    val MAXVIDEO = Value("MAX_VIDEO")
    val SHOPTHEPIN = Value("SHOP_THE_PIN")
    val STORY = Value("STORY")
  }

}
