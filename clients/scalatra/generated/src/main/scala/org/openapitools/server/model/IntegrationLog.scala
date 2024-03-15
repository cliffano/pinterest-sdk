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

case class IntegrationLog(
  /* Timestamp in milliseconds of when the log was executed at the client. */
  clientTimestamp: Int,

  /* Log event type */
  eventType: String,

  /* Log level type */
  logLevel: String,

  externalBusinessId: Option[String],

  advertiserId: Option[String],

  merchantId: Option[String],

  tagId: Option[String],

  feedProfileId: Option[String],

  /* Explanation of the event that occured. */
  message: Option[String],

  /* Version number of the integration application. */
  appVersionNumber: Option[String],

  /* Version number of the platform the integration application is running on. */
  platformVersionNumber: Option[String],

  error: Option[IntegrationLogClientError],

  request: Option[IntegrationLogClientRequest]

 )