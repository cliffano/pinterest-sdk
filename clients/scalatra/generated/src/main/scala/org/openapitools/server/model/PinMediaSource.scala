/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */

package org.openapitools.server.model

case class PinMediaSource(
  sourceType: String,

  contentType: String,

  data: String,

  /* Set the parameter to false to create the new simplified Pin instead of the standard pin. Currently the field is only available to a list of beta users. */
  isStandard: Option[Boolean],

  url: String,

  /* Cover image url. */
  coverImageUrl: Option[String],

  /* Content type for cover image Base64. */
  coverImageContentType: Option[String],

  /* Cover image Base64. */
  coverImageData: Option[String],

  mediaId: String,

  /* Array with image objects. */
  items: List[PinMediaSourceImagesURLItemsInner],

  index: Option[Int],

  /* This is an affiliate link or sponsored product. The FTC requires disclosure for paid partnerships and affiliate products. */
  isAffiliateLink: Option[Boolean]

 )
