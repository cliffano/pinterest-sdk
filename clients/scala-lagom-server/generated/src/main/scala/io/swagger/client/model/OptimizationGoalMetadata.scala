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

package io.swagger.client.model
import play.api.libs.json._

case class OptimizationGoalMetadata (
                  conversionTagV3GoalMetadata: Option[OptimizationGoalMetadataConversionTagV3GoalMetadata],
                  frequencyGoalMetadata: Option[OptimizationGoalMetadataFrequencyGoalMetadata],
                  scrollupGoalMetadata: Option[OptimizationGoalMetadataScrollupGoalMetadata]
)

object OptimizationGoalMetadata {
implicit val format: Format[OptimizationGoalMetadata] = Json.format
}

