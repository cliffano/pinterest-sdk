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

case class IntegrationLog (
  /* Timestamp in milliseconds of when the log was executed at the client. */
  clientTimestamp: Int,
  /* Log event type */
  eventType: IntegrationLogEnums.EventType,
  /* Log level type */
  logLevel: IntegrationLogEnums.LogLevel,
  externalBusinessId: Option[String] = None,
  advertiserId: Option[String] = None,
  merchantId: Option[String] = None,
  tagId: Option[String] = None,
  feedProfileId: Option[String] = None,
  /* Explanation of the event that occured. */
  message: Option[String] = None,
  /* Version number of the integration application. */
  appVersionNumber: Option[String] = None,
  /* Version number of the platform the integration application is running on. */
  platformVersionNumber: Option[String] = None,
  error: Option[IntegrationLogClientError] = None,
  request: Option[IntegrationLogClientRequest] = None
) extends ApiModel

object IntegrationLogEnums {

  type EventType = EventType.Value
  type LogLevel = LogLevel.Value
  object EventType extends Enumeration {
    val APP = Value("APP")
    val API = Value("API")
  }

  object LogLevel extends Enumeration {
    val INFO = Value("INFO")
    val WARN = Value("WARN")
    val ERROR = Value("ERROR")
  }

}