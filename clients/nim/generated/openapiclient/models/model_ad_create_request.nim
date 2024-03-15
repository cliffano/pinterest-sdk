#
# Pinterest REST API
# 
# Pinterest's REST API
# The version of the OpenAPI document: 5.12.0
# Contact: blah+oapicf@cliffano.com
# Generated by: https://openapi-generator.tech
#

import json
import tables

import model_ad_common_quiz_pin_data
import model_ad_common_tracking_urls
import model_creative_type
import model_entity_status
import model_grid_click_type

type CustomizableCtaType* {.pure.} = enum
  GETOFFER
  LEARNMORE
  ORDERNOW
  SHOPNOW
  SIGNUP
  SUBSCRIBE
  BUYNOW
  CONTACTUS
  GETQUOTE
  VISITWEBSITE
  APPLYNOW
  BOOKNOW
  REQUESTDEMO
  REGISTERNOW
  FINDADEALER
  ADDTOCART
  WATCHNOW
  READMORE
  Null

type AdCreateRequest* = object
  ## 
  adGroupId*: string ## ID of the ad group that contains the ad.
  androidDeepLink*: string ## Deep link URL for Android devices. Not currently available. Using this field will generate an error.
  carouselAndroidDeepLinks*: seq[string] ## Comma-separated deep links for the carousel pin on Android.
  carouselDestinationUrls*: seq[string] ## Comma-separated destination URLs for the carousel pin to promote.
  carouselIosDeepLinks*: seq[string] ## Comma-separated deep links for the carousel pin on iOS.
  clickTrackingUrl*: string ## Tracking url for the ad clicks.
  creativeType*: CreativeType
  destinationUrl*: string ## Destination URL.
  iosDeepLink*: string ## Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
  isPinDeleted*: bool ## Is original pin deleted?
  isRemovable*: bool ## Is pin repinnable?
  name*: string ## Name of the ad - 255 chars max.
  status*: EntityStatus
  trackingUrls*: AdCommon_tracking_urls
  viewTrackingUrl*: string ## Tracking URL for ad impressions.
  leadFormId*: string ## Lead form ID for lead ad generation.
  gridClickType*: GridClickType
  customizableCtaType*: CustomizableCtaType ## Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only)
  quizPinData*: AdCommon_quiz_pin_data
  pinId*: string ## Pin ID.

func `%`*(v: CustomizableCtaType): JsonNode =
  let str = case v:
    of CustomizableCtaType.GETOFFER: "GET_OFFER"
    of CustomizableCtaType.LEARNMORE: "LEARN_MORE"
    of CustomizableCtaType.ORDERNOW: "ORDER_NOW"
    of CustomizableCtaType.SHOPNOW: "SHOP_NOW"
    of CustomizableCtaType.SIGNUP: "SIGN_UP"
    of CustomizableCtaType.SUBSCRIBE: "SUBSCRIBE"
    of CustomizableCtaType.BUYNOW: "BUY_NOW"
    of CustomizableCtaType.CONTACTUS: "CONTACT_US"
    of CustomizableCtaType.GETQUOTE: "GET_QUOTE"
    of CustomizableCtaType.VISITWEBSITE: "VISIT_WEBSITE"
    of CustomizableCtaType.APPLYNOW: "APPLY_NOW"
    of CustomizableCtaType.BOOKNOW: "BOOK_NOW"
    of CustomizableCtaType.REQUESTDEMO: "REQUEST_DEMO"
    of CustomizableCtaType.REGISTERNOW: "REGISTER_NOW"
    of CustomizableCtaType.FINDADEALER: "FIND_A_DEALER"
    of CustomizableCtaType.ADDTOCART: "ADD_TO_CART"
    of CustomizableCtaType.WATCHNOW: "WATCH_NOW"
    of CustomizableCtaType.READMORE: "READ_MORE"
    of CustomizableCtaType.Null: "null"

  JsonNode(kind: JString, str: str)

func `$`*(v: CustomizableCtaType): string =
  result = case v:
    of CustomizableCtaType.GETOFFER: "GET_OFFER"
    of CustomizableCtaType.LEARNMORE: "LEARN_MORE"
    of CustomizableCtaType.ORDERNOW: "ORDER_NOW"
    of CustomizableCtaType.SHOPNOW: "SHOP_NOW"
    of CustomizableCtaType.SIGNUP: "SIGN_UP"
    of CustomizableCtaType.SUBSCRIBE: "SUBSCRIBE"
    of CustomizableCtaType.BUYNOW: "BUY_NOW"
    of CustomizableCtaType.CONTACTUS: "CONTACT_US"
    of CustomizableCtaType.GETQUOTE: "GET_QUOTE"
    of CustomizableCtaType.VISITWEBSITE: "VISIT_WEBSITE"
    of CustomizableCtaType.APPLYNOW: "APPLY_NOW"
    of CustomizableCtaType.BOOKNOW: "BOOK_NOW"
    of CustomizableCtaType.REQUESTDEMO: "REQUEST_DEMO"
    of CustomizableCtaType.REGISTERNOW: "REGISTER_NOW"
    of CustomizableCtaType.FINDADEALER: "FIND_A_DEALER"
    of CustomizableCtaType.ADDTOCART: "ADD_TO_CART"
    of CustomizableCtaType.WATCHNOW: "WATCH_NOW"
    of CustomizableCtaType.READMORE: "READ_MORE"
    of CustomizableCtaType.Null: "null"
