package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import UpdatableItemAttributes._

case class UpdatableItemAttributes (
  /* Allows advertisers to specify a separate URL that can be used to track traffic coming from Pinterest shopping ads. Must send full URL including tracking—do not send tracking parameters only. At this time we do not support impression tracking. Must begin with http:// or https://. */
  adLink: Option[String],
/* Set this attribute to TRUE if you're submitting items that are considered “adult”. These will not be shown on Pinterest. */
  adult: Option[Boolean],
/* The age group to apply a demographic range to the product. Must be one of the following values (upper or lowercased): ‘newborn’, ‘infant’, ‘toddler’, ‘kids’, or ‘adult’. */
  ageGroup: Option[String],
/* The availability of the product. Must be one of the following values (upper or lowercased): ‘in stock’, ‘out of stock’, ‘preorder’. */
  availability: Option[String],
/* Average reviews for the item. Can be a number from 1-5. */
  averageReviewRating: Option[BigDecimal],
/* The brand of the product. */
  brand: Option[String],
/* This attribute is not supported anymore. */
  checkoutEnabled: Option[Boolean],
/* The primary color of the product. */
  color: Option[String],
/* The condition of the product. Must be one of the following values (upper or lowercased): ‘new’, ‘used’, or ‘refurbished’. */
  condition: Option[String],
/* <p><= 1000 characters</p> <p>Custom grouping of products.</p> */
  customLabel0: Option[String],
/* <p><= 1000 characters</p> <p>Custom grouping of products.</p> */
  customLabel1: Option[String],
/* <p><= 1000 characters</p> <p>Custom grouping of products.</p> */
  customLabel2: Option[String],
/* <p><= 1000 characters</p> <p>Custom grouping of products.</p> */
  customLabel3: Option[String],
/* <p><= 1000 characters</p> <p>Custom grouping of products.</p> */
  customLabel4: Option[String],
/* <p><= 10000 characters</p> <p>The description of the product.</p> */
  description: Option[String],
/* The item is free to ship. */
  freeShippingLabel: Option[Boolean],
/* The minimum order purchase necessary for the customer to get free shipping. Only relevant if free shipping is offered. */
  freeShippingLimit: Option[String],
/* The gender associated with the product. Must be one of the following values (upper or lowercased): ‘male’, ‘female’, or ‘unisex’. */
  gender: Option[String],
/* The categorization of the product based on the standardized Google Product Taxonomy. This is a set taxonomy. Both the text values and numeric codes are accepted. */
  googleProductCategory: Option[String],
/* The unique universal product identifier. */
  gtin: Option[Integer],
/* <p><= 127 characters</p> <p>The user-created unique ID that represents the product. Only Unicode characters are accepted.</p> */
  id: Option[String],
/* <p><= 127 characters</p> <p>The parent ID of the product.</p> */
  itemGroupId: Option[String],
/* The millisecond timestamp when the item was lastly modified by the merchant. */
  lastUpdatedTime: Option[Long],
/* <p><= 511 characters</p> <p>The landing page for the product.</p> */
  link: Option[String],
/* The material used to make the product. */
  material: Option[String],
/* The minimum advertised price of the product. It supports the following formats, \"19.99 USD\", \"19.99USD\" and \"19.99\". If the currency is not included, we default to US dollars. */
  minAdPrice: Option[String],
/* The mobile-optimized version of your landing page. Must begin with http:// or https://. */
  mobileLink: Option[String],
/* Manufacturer Part Number are alpha-numeric codes created by the manufacturer of a product to uniquely identify it among all products from the same manufacturer. */
  mpn: Option[String],
/* The number of ratings for the item. */
  numberOfRatings: Option[Integer],
/* The number of reviews available for the item. */
  numberOfReviews: Option[Integer],
/* The description of the pattern used for the product. */
  pattern: Option[String],
/* The price of the product. It supports the following formats, \"24.99 USD\", \"24.99USD\" and \"24.99\". If the currency is not included, we default to US dollars. */
  price: Option[String],
/* <p><= 1000 characters</p> <p>The categorization of your product based on your custom product taxonomy. Subcategories must be sent separated by “ > “. The > must be wrapped by spaces. We do not recognize any other delimiters such as comma or pipe.</p> */
  productType: Option[String],
/* The discounted price of the product. The sale_price must be lower than the price. It supports the following formats, \"14.99 USD\", \"14.99USD\" and \"14.99\". If the currency is not included, we default to US dollars. */
  salePrice: Option[String],
/* Shipping consists of one group of up to four elements, country, region, service (all optional) and price (required). All colons, even for blank values, are required. */
  shipping: Option[String],
/* The height of the package needed to ship the product. Ensure there is a space between the numeric string and the metric. */
  shippingHeight: Option[String],
/* The weight of the product. Ensure there is a space between the numeric string and the metric. */
  shippingWeight: Option[String],
/* The width of the package needed to ship the product. Ensure there is a space between the numeric string and the metric. */
  shippingWidth: Option[String],
/* The size of the product. */
  size: Option[String],
/* Indicates the country’s sizing system in which you are submitting your product. Must be one of the following values (upper or lowercased): ‘US’, ‘UK’, ‘EU’, ‘DE’, ‘FR’, ‘JP’, ‘CN’, ‘IT’, ‘BR’, ‘MEX’, or ‘AU’. */
  sizeSystem: Option[String],
/* Additional description for the size. Must be one of the following values (upper or lowercased): ‘regular’, ‘petite’, ‘plus’, ‘big_and_tall’, or ‘maternity’. */
  sizeType: Option[String],
/* Tax consists of one group of up to four elements, country, region, rate (all required) and tax_ship (optional). All colons, even for blank values, are required. */
  tax: Option[String],
/* <p><= 500 characters</p> <p>The name of the product.</p> */
  title: Option[String],
/* Options for this variant. People will see these options next to your Pin and can select the one they want. List them in the order you want them displayed. */
  variantNames: Option[List[String]],
/* Option values for this variant. People will see these options next to your Pin and can select the one they want. List them in the order you want them displayed. The order of the variant values must be consistent with the order of the variant names. */
  variantValues: Option[List[String]])

object UpdatableItemAttributes {
  import DateTimeCodecs._

  implicit val UpdatableItemAttributesCodecJson: CodecJson[UpdatableItemAttributes] = CodecJson.derive[UpdatableItemAttributes]
  implicit val UpdatableItemAttributesDecoder: EntityDecoder[UpdatableItemAttributes] = jsonOf[UpdatableItemAttributes]
  implicit val UpdatableItemAttributesEncoder: EntityEncoder[UpdatableItemAttributes] = jsonEncoderOf[UpdatableItemAttributes]
}
