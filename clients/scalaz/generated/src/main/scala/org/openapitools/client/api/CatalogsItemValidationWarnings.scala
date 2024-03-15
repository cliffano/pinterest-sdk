package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import CatalogsItemValidationWarnings._

case class CatalogsItemValidationWarnings (
  AD_LINK_FORMAT_WARNING: Option[CatalogsItemValidationDetails],
AD_LINK_SAME_AS_LINK: Option[CatalogsItemValidationDetails],
ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG: Option[CatalogsItemValidationDetails],
ADDITIONAL_IMAGE_LINK_WARNING: Option[CatalogsItemValidationDetails],
ADWORDS_FORMAT_WARNING: Option[CatalogsItemValidationDetails],
ADWORDS_SAME_AS_LINK: Option[CatalogsItemValidationDetails],
AGE_GROUP_INVALID: Option[CatalogsItemValidationDetails],
SIZE_SYSTEM_INVALID: Option[CatalogsItemValidationDetails],
ANDROID_DEEP_LINK_INVALID: Option[CatalogsItemValidationDetails],
AVAILABILITY_DATE_INVALID: Option[CatalogsItemValidationDetails],
COUNTRY_DOES_NOT_MAP_TO_CURRENCY: Option[CatalogsItemValidationDetails],
CUSTOM_LABEL_LENGTH_TOO_LONG: Option[CatalogsItemValidationDetails],
DESCRIPTION_LENGTH_TOO_LONG: Option[CatalogsItemValidationDetails],
EXPIRATION_DATE_INVALID: Option[CatalogsItemValidationDetails],
GENDER_INVALID: Option[CatalogsItemValidationDetails],
GTIN_INVALID: Option[CatalogsItemValidationDetails],
IMAGE_LINK_WARNING: Option[CatalogsItemValidationDetails],
IOS_DEEP_LINK_INVALID: Option[CatalogsItemValidationDetails],
IS_BUNDLE_INVALID: Option[CatalogsItemValidationDetails],
ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE: Option[CatalogsItemValidationDetails],
LINK_FORMAT_WARNING: Option[CatalogsItemValidationDetails],
MIN_AD_PRICE_INVALID: Option[CatalogsItemValidationDetails],
MPN_INVALID: Option[CatalogsItemValidationDetails],
MULTIPACK_INVALID: Option[CatalogsItemValidationDetails],
OPTIONAL_CONDITION_INVALID: Option[CatalogsItemValidationDetails],
OPTIONAL_CONDITION_MISSING: Option[CatalogsItemValidationDetails],
OPTIONAL_PRODUCT_CATEGORY_INVALID: Option[CatalogsItemValidationDetails],
OPTIONAL_PRODUCT_CATEGORY_MISSING: Option[CatalogsItemValidationDetails],
PRODUCT_CATEGORY_DEPTH_WARNING: Option[CatalogsItemValidationDetails],
PRODUCT_TYPE_LENGTH_TOO_LONG: Option[CatalogsItemValidationDetails],
SALES_PRICE_INVALID: Option[CatalogsItemValidationDetails],
SALES_PRICE_TOO_LOW: Option[CatalogsItemValidationDetails],
SALES_PRICE_TOO_HIGH: Option[CatalogsItemValidationDetails],
SALE_DATE_INVALID: Option[CatalogsItemValidationDetails],
SHIPPING_INVALID: Option[CatalogsItemValidationDetails],
SHIPPING_HEIGHT_INVALID: Option[CatalogsItemValidationDetails],
SHIPPING_WEIGHT_INVALID: Option[CatalogsItemValidationDetails],
SHIPPING_WIDTH_INVALID: Option[CatalogsItemValidationDetails],
SIZE_TYPE_INVALID: Option[CatalogsItemValidationDetails],
TAX_INVALID: Option[CatalogsItemValidationDetails],
TITLE_LENGTH_TOO_LONG: Option[CatalogsItemValidationDetails],
TOO_MANY_ADDITIONAL_IMAGE_LINKS: Option[CatalogsItemValidationDetails],
UTM_SOURCE_AUTO_CORRECTED: Option[CatalogsItemValidationDetails],
WEIGHT_UNIT_INVALID: Option[CatalogsItemValidationDetails])

object CatalogsItemValidationWarnings {
  import DateTimeCodecs._

  implicit val CatalogsItemValidationWarningsCodecJson: CodecJson[CatalogsItemValidationWarnings] = CodecJson.derive[CatalogsItemValidationWarnings]
  implicit val CatalogsItemValidationWarningsDecoder: EntityDecoder[CatalogsItemValidationWarnings] = jsonOf[CatalogsItemValidationWarnings]
  implicit val CatalogsItemValidationWarningsEncoder: EntityEncoder[CatalogsItemValidationWarnings] = jsonEncoderOf[CatalogsItemValidationWarnings]
}
