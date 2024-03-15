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

case class VideoMetadata(
  itemType: Option[String],

  coverImageUrl: Option[String],

  /* Video url (720p). </p><strong>Note:</strong> This field is limited and not available to all apps. */
  videoUrl: Option[String],

  /* Duration (in milliseconds) */
  duration: Option[Double],

  /* Height (in pixels) */
  height: Option[Int],

  /* Width (in pixels) */
  width: Option[Int]

 )
