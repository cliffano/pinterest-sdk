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

case class IntegrationLogClientError(
  /* Original cause of the error. */
  cause: Option[String],

  /* Column number in the line of the file that raised the error. */
  columnNumber: Option[Int],

  /* Filename where the error happened. */
  fileName: Option[String],

  /* Line number where the error happened. */
  lineNumber: Option[Int],

  /* Human-readable description of the error. */
  message: Option[String],

  /* More detail about the message. */
  messageDetail: Option[String],

  /* Filename where the error happened. */
  name: Option[String],

  /* Integer that specifies the error code. */
  number: Option[Int],

  /* Stack trace of where the error happened. */
  stackTrace: Option[String]

 )
