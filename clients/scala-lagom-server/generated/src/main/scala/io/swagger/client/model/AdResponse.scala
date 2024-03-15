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

case class AdResponse (
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
                  customizableCtaType:  Option[AdResponseCustomizableCtaTypeEnum.AdResponseCustomizableCtaTypeEnum],
                  quizPinData: Option[AdCommonQuizPinData],
            /* Pin ID. */
                  pinId: Option[String],
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
                  rejectedReasons:  Option[AdResponseSeq[RejectedReasonsEnum].AdResponseSeq[RejectedReasonsEnum]],
            /* Text reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\". */
                  rejectionLabels: Option[Seq[String]],
                  reviewStatus:  Option[AdResponseReviewStatusEnum.AdResponseReviewStatusEnum],
            /* Always \"ad\". */
                  `type`: Option[String],
            /* Last update time. Unix timestamp in seconds. */
                  updatedTime: Option[Int],
            /* Ad summary status */
                  summaryStatus: Option[PinPromotionSummaryStatus]
)

object AdResponse {
implicit val format: Format[AdResponse] = Json.format
}

object AdResponseCustomizableCtaTypeEnum extends Enumeration {
  val   GET_OFFER, LEARN_MORE, ORDER_NOW, SHOP_NOW, SIGN_UP, SUBSCRIBE, BUY_NOW, CONTACT_US, GET_QUOTE, VISIT_WEBSITE, APPLY_NOW, BOOK_NOW, REQUEST_DEMO, REGISTER_NOW, FIND_A_DEALER, ADD_TO_CART, WATCH_NOW, READ_MORE,  = Value
  type AdResponseCustomizableCtaTypeEnum = Value
  implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[AdResponseCustomizableCtaTypeEnum.type])
}
object AdResponseSeq[RejectedReasonsEnum] extends Enumeration {
  val   HASHTAGS, PROMOTIONS_AND_PRICES, TARGETING, LANDING_PAGE, CAPS_AND_SYMBOLS, SHOCKING, WEIGHT_LOSS, PROHIBITED_PRODUCT, AUTHENTICITY, NUDITY, CONFUSING_DESIGN, URGENCY, RATINGS, APP, ALCOHOL, CONTESTS, POLITICAL, OTHER, IMAGE, NAR, INCONSISTENT, CLICKBAIT, NO_DESCRIPTION, LOW_QUALITY, EXAGGERATED_CLAIMS, PINTEREST_BRAND, ALCOHOL_NO_SALE, LANDING_PAGE_SPEED, LANDING_PAGE_HARDWALL, LANDING_PAGE_BROKEN, LANDING_PAGE_QUALITY, OUT_OF_STOCK, IMAGE_LOW_QUALITY, IMAGE_BUSY, IMAGE_POORLY_EDITED, IMAGE_BEFORE_AFTER, UGC, FAKE_BUTTONS, WEAPONS, SENSITIVE, UNACCEPTABLE_BUSINESS, SUSPICIOUS_CLAIMS, PHARMA, SUSPICIOUS_SUPPLEMENTS, ILLEGAL_RECREATIONAL_DRUG, LOW_QUALITY_LANDING_PAGE, RESTRICTED_HEALTHCARE, INCONSISTENT_LANG_FR = Value
  type AdResponseSeq[RejectedReasonsEnum] = Value
  implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[AdResponseSeq[RejectedReasonsEnum].type])
}
object AdResponseReviewStatusEnum extends Enumeration {
  val   OTHER, PENDING, REJECTED, APPROVED = Value
  type AdResponseReviewStatusEnum = Value
  implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[AdResponseReviewStatusEnum.type])
}
