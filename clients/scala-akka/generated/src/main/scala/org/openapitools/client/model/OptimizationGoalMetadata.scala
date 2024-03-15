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

case class OptimizationGoalMetadata (
  conversionTagV3GoalMetadata: Option[OptimizationGoalMetadataConversionTagV3GoalMetadata] = None,
  frequencyGoalMetadata: Option[OptimizationGoalMetadataFrequencyGoalMetadata] = None,
  scrollupGoalMetadata: Option[OptimizationGoalMetadataScrollupGoalMetadata] = None
) extends ApiModel

