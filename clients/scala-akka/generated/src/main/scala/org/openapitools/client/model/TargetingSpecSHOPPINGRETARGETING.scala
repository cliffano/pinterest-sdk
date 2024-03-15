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

import org.openapitools.client.core.ApiModel

case class TargetingSpecSHOPPINGRETARGETING (
  /* Number of days ago to start lookback timeframe for dynamic retargeting */
  lookbackWindow: Option[Int] = None,
  /* Event types to target for dynamic retargeting */
  tagTypes: Option[Seq[Int]] = None,
  /* Number of days ago to stop lookback timeframe for dynamic retargeting */
  exclusionWindow: Option[Int] = None
) extends ApiModel
