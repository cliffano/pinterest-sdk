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

import org.openapitools.client.core.ApiModel

case class AdAccount (
  id: Option[String] = None,
  name: Option[String] = None,
  owner: Option[AdAccountOwner] = None,
  country: Option[Country] = None,
  currency: Option[Currency] = None
) extends ApiModel
