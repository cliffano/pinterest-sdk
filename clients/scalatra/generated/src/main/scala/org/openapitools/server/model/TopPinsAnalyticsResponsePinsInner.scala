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

case class TopPinsAnalyticsResponsePinsInner(
  /* The metric name and daily value for each requested metric */
  metrics: Option[Map[String, Double]],

  dataStatus: Option[Map[String, DataStatus]],

  /* The pin id */
  pinId: Option[String]

 )
