package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ItemAttributes._

case class ItemAttributes (
  /* Allows advertisers to specify a separate URL that can be used to track traffic coming from Pinterest shopping ads. Must send full URL including tracking—do not send tracking parameters only. At this time we do not support impression tracking. Must begin with http:// or https://. */
  adLink: Option[String],
/* The links to additional images for your product. Up to five additional images can be used to show a product from different angles or to show different stages. Separate each additional image with a comma. We recommend enclosing the whole string with quotes. Must begin with http:// or https:// */
  additionalImageLink: Option[List[String]],
/* Set this attribute to TRUE if you're submitting items that are considered “adult”. These will not be shown on Pinterest. */
  adult: Option[Boolean],
/* The age group to apply a demographic range to the product. Must be one of the following values: ‘newborn’, ‘infant’, ‘toddler’, ‘kids’, ‘adult’. */
  ageGroup: Option[String],
/* The availability of the product. Must be one of the following values: ‘in stock’, ‘out of stock’, ‘preorder’. */
  availability: Option[String],
/* Average reviews for the item. Can be a number from 1-5. */
  averageReviewRating: Option[BigDecimal],
/* The brand of the product. */
  brand: Option[String],
/* The primary color of the product. */
  color: Option[String],
/* The condition of the product. Must be one of the following values: ‘new’, ‘used’, ‘refurbished’. */
  condition: Option[String],
/* Custom grouping of products. */
  customLabel0: Option[String],
/* Custom grouping of products. */
  customLabel1: Option[String],
/* Custom grouping of products. */
  customLabel2: Option[String],
/* Custom grouping of products. */
  customLabel3: Option[String],
/* Custom grouping of products. */
  customLabel4: Option[String],
/* The description of the product. */
  description: Option[String],
/* The item is free to ship. */
  freeShippingLabel: Option[Boolean],
/* The minimum order purchase necessary for the customer to get free shipping. Only relevant if free shipping is offered. */
  freeShippingLimit: Option[String],
/* The gender associated with the product. Must be one of the following values: ‘male’, ‘female’, ‘unisex’. */
  gender: Option[String],
/* The categorization of the product based on the standardized Google Product Taxonomy. This is a set taxonomy. Both the text values and numeric codes are accepted. */
  googleProductCategory: Option[String],
/* The unique universal product identifier. */
  gtin: Option[Integer],
/* The user-created unique ID that represents the product. Only Unicode characters are accepted. */
  id: Option[String],
/* The link to the main product images. Images should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your product. The URL of your image_link must be accessible by the Pinterest user-agent, and send the accurate images. Please make sure there are no template or placeholder images at the link. Must start with http:// or https:// */
  imageLink: Option[List[String]],
/* The parent ID of the product. */
  itemGroupId: Option[String],
/* The millisecond timestamp when the item was lastly modified by the merchant. */
  lastUpdatedTime: Option[Long],
/* The landing page for the product. */
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
/* The categorization of your product based on your custom product taxonomy. Subcategories must be sent separated by “ > “. The > must be wrapped by spaces. We do not recognize any other delimiters such as comma or pipe. */
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
/* Indicates the country’s sizing system in which you are submitting your product. */
  sizeSystem: Option[String],
/* Additional description for the size. Must be one of the following values: ‘regular’, ‘petite’, ‘plus’, ‘big_and_tall’, ‘maternity’. */
  sizeType: Option[String],
/* Tax consists of one group of up to four elements, country, region, rate (all required) and tax_ship (optional). All colons, even for blank values, are required. */
  tax: Option[String],
/* The name of the product. */
  title: Option[String])

object ItemAttributes {
  import DateTimeCodecs._

  implicit val ItemAttributesCodecJson: CodecJson[ItemAttributes] = CodecJson.derive[ItemAttributes]
  implicit val ItemAttributesDecoder: EntityDecoder[ItemAttributes] = jsonOf[ItemAttributes]
  implicit val ItemAttributesEncoder: EntityEncoder[ItemAttributes] = jsonEncoderOf[ItemAttributes]
}
