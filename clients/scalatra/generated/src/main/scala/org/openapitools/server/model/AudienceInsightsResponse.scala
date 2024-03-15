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

case class AudienceInsightsResponse(
  /* Category interest distribution */
  categories: Option[List[AudienceCategory]],

  demographics: Option[AudienceDemographics],

  `type`: Option[AudienceInsightType],

  /* Generation date */
  date: Option[String],

  /* Population count. */
  size: Option[Int],

  /* Indicates whether the audience size has been rounded up to the next highest upper boundary. */
  sizeIsUpperBound: Option[Boolean]

 )
