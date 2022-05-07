/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.client.model

import org.openapitools.client.model.ObjectiveType._

case class CampaignResponseAllOf1(
  objectiveType: Option[ObjectiveType] = None,
  /* Campaign creation time. Unix timestamp in seconds. */
  createdTime: Option[Int] = None,
  /* UTC timestamp. Last update time. */
  updatedTime: Option[Int] = None,
  /* Always \"campaign\". */
  `type`: Option[String] = None
)

