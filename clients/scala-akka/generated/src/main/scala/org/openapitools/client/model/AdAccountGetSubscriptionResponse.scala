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

case class AdAccountGetSubscriptionResponse (
  /* Lead form ID. */
  leadFormId: Option[String] = None,
  /* Standard HTTPS webhook URL. */
  webhookUrl: Option[String] = None,
  /* Subscription ID. */
  id: Option[String] = None,
  /* User account used to subscribe lead data. */
  userAccountId: Option[String] = None,
  /* The Ad Account ID that this lead form belongs to. */
  adAccountId: Option[String] = None,
  /* API version. */
  apiVersion: Option[String] = None,
  /* Base64 encoded key for client to decrypt lead data. */
  cryptographicKey: Option[String] = None,
  /* Lead data encryption algorithm. */
  cryptographicAlgorithm: Option[String] = None,
  /* Lead form creation time. Unix timestamp in milliseconds. */
  createdTime: Option[Int] = None
) extends ApiModel

