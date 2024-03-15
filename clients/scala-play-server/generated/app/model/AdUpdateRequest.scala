package model

import play.api.libs.json._

/**
  * Represents the Swagger definition for AdUpdateRequest.
  * @param adGroupId ID of the ad group that contains the ad.
  * @param androidDeepLink Deep link URL for Android devices. Not currently available. Using this field will generate an error.
  * @param carouselAndroidDeepLinks Comma-separated deep links for the carousel pin on Android.
  * @param carouselDestinationUrls Comma-separated destination URLs for the carousel pin to promote.
  * @param carouselIosDeepLinks Comma-separated deep links for the carousel pin on iOS.
  * @param clickTrackingUrl Tracking url for the ad clicks.
  * @param destinationUrl Destination URL.
  * @param iosDeepLink Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
  * @param isPinDeleted Is original pin deleted?
  * @param isRemovable Is pin repinnable?
  * @param name Name of the ad - 255 chars max.
  * @param viewTrackingUrl Tracking URL for ad impressions.
  * @param leadFormId Lead form ID for lead ad generation.
  * @param customizableCtaType Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only)
  * @param id The ID of this ad.
  * @param pinId Pin ID. This field may only be updated for draft ads.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2024-03-14T23:15:00.394859410Z[Etc/UTC]", comments = "Generator version: 7.4.0")
case class AdUpdateRequest(
  adGroupId: Option[String],
  androidDeepLink: Option[String],
  carouselAndroidDeepLinks: Option[List[String]],
  carouselDestinationUrls: Option[List[String]],
  carouselIosDeepLinks: Option[List[String]],
  clickTrackingUrl: Option[String],
  creativeType: Option[CreativeType],
  destinationUrl: Option[String],
  iosDeepLink: Option[String],
  isPinDeleted: Option[Boolean],
  isRemovable: Option[Boolean],
  name: Option[String],
  status: Option[EntityStatus],
  trackingUrls: Option[AdCommonTrackingUrls],
  viewTrackingUrl: Option[String],
  leadFormId: Option[String],
  gridClickType: Option[GridClickType],
  customizableCtaType: Option[AdUpdateRequest.CustomizableCtaType.Value],
  quizPinData: Option[AdCommonQuizPinData],
  id: String,
  pinId: Option[String]
)

object AdUpdateRequest {
  implicit lazy val adUpdateRequestJsonFormat: Format[AdUpdateRequest] = Json.format[AdUpdateRequest]

  // noinspection TypeAnnotation
  object CustomizableCtaType extends Enumeration {
    val GETOFFER = Value("GET_OFFER")
    val LEARNMORE = Value("LEARN_MORE")
    val ORDERNOW = Value("ORDER_NOW")
    val SHOPNOW = Value("SHOP_NOW")
    val SIGNUP = Value("SIGN_UP")
    val SUBSCRIBE = Value("SUBSCRIBE")
    val BUYNOW = Value("BUY_NOW")
    val CONTACTUS = Value("CONTACT_US")
    val GETQUOTE = Value("GET_QUOTE")
    val VISITWEBSITE = Value("VISIT_WEBSITE")
    val APPLYNOW = Value("APPLY_NOW")
    val BOOKNOW = Value("BOOK_NOW")
    val REQUESTDEMO = Value("REQUEST_DEMO")
    val REGISTERNOW = Value("REGISTER_NOW")
    val FINDADEALER = Value("FIND_A_DEALER")
    val ADDTOCART = Value("ADD_TO_CART")
    val WATCHNOW = Value("WATCH_NOW")
    val READMORE = Value("READ_MORE")
    val Null = Value("null")

    type CustomizableCtaType = Value
    implicit lazy val CustomizableCtaTypeJsonFormat: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[this.type])
  }
}

