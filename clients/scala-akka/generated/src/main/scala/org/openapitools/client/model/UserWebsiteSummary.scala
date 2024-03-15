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

case class UserWebsiteSummary (
  /* Website with path or domain only */
  website: Option[String] = None,
  /* Status of the verification process */
  status: Option[String] = None,
  /* UTC timestamp when the verification happened - sometimes missing */
  verifiedAt: Option[String] = None
) extends ApiModel

