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
package org.openapitools.client.model

import java.math.BigDecimal
import org.openapitools.client.core.ApiModel

case class TopPinsAnalyticsResponsePinsInner (
  /* The metric name and daily value for each requested metric */
  metrics: Option[Map[String, BigDecimal]] = None,
  dataStatus: Option[Map[String, DataStatus]] = None,
  /* The pin id */
  pinId: Option[String] = None
) extends ApiModel

