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

case class AdUpdateRequest (
            /* ID of the ad group that contains the ad. */
                  adGroupId: Option[String],
            /* Deep link URL for Android devices. Not currently available. Using this field will generate an error. */
                  androidDeepLink: Option[String],
            /* Comma-separated deep links for the carousel pin on Android. */
                  carouselAndroidDeepLinks: Option[Seq[String]],
            /* Comma-separated destination URLs for the carousel pin to promote. */
                  carouselDestinationUrls: Option[Seq[String]],
            /* Comma-separated deep links for the carousel pin on iOS. */
                  carouselIosDeepLinks: Option[Seq[String]],
            /* Tracking url for the ad clicks. */
                  clickTrackingUrl: Option[String],
                  creativeType: Option[CreativeType],
            /* Destination URL. */
                  destinationUrl: Option[String],
            /* Deep link URL for iOS devices. Not currently available. Using this field will generate an error. */
                  iosDeepLink: Option[String],
            /* Is original pin deleted? */
                  isPinDeleted: Option[Boolean],
            /* Is pin repinnable? */
                  isRemovable: Option[Boolean],
            /* Name of the ad - 255 chars max. */
                  name: Option[String],
                  status: Option[EntityStatus],
                  trackingUrls: Option[AdCommonTrackingUrls],
            /* Tracking URL for ad impressions. */
                  viewTrackingUrl: Option[String],
            /* Lead form ID for lead ad generation. */
                  leadFormId: Option[String],
                  gridClickType: Option[GridClickType],
                  customizableCtaType:  Option[AdUpdateRequestCustomizableCtaTypeEnum.AdUpdateRequestCustomizableCtaTypeEnum],
                  quizPinData: Option[AdCommonQuizPinData],
            /* The ID of this ad. */
                  id: String,
            /* Pin ID. This field may only be updated for draft ads. */
                  pinId: Option[String]
)

object AdUpdateRequest {
implicit val format: Format[AdUpdateRequest] = Json.format
}

object AdUpdateRequestCustomizableCtaTypeEnum extends Enumeration {
  val   GET_OFFER, LEARN_MORE, ORDER_NOW, SHOP_NOW, SIGN_UP, SUBSCRIBE, BUY_NOW, CONTACT_US, GET_QUOTE, VISIT_WEBSITE, APPLY_NOW, BOOK_NOW, REQUEST_DEMO, REGISTER_NOW, FIND_A_DEALER, ADD_TO_CART, WATCH_NOW, READ_MORE,  = Value
  type AdUpdateRequestCustomizableCtaTypeEnum = Value
  implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[AdUpdateRequestCustomizableCtaTypeEnum.type])
}
