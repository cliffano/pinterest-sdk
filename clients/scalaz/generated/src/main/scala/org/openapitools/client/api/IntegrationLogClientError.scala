package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import IntegrationLogClientError._

case class IntegrationLogClientError (
  /* Original cause of the error. */
  cause: Option[String],
/* Column number in the line of the file that raised the error. */
  columnNumber: Option[Integer],
/* Filename where the error happened. */
  fileName: Option[String],
/* Line number where the error happened. */
  lineNumber: Option[Integer],
/* Human-readable description of the error. */
  message: Option[String],
/* More detail about the message. */
  messageDetail: Option[String],
/* Filename where the error happened. */
  name: Option[String],
/* Integer that specifies the error code. */
  number: Option[Integer],
/* Stack trace of where the error happened. */
  stackTrace: Option[String])

object IntegrationLogClientError {
  import DateTimeCodecs._

  implicit val IntegrationLogClientErrorCodecJson: CodecJson[IntegrationLogClientError] = CodecJson.derive[IntegrationLogClientError]
  implicit val IntegrationLogClientErrorDecoder: EntityDecoder[IntegrationLogClientError] = jsonOf[IntegrationLogClientError]
  implicit val IntegrationLogClientErrorEncoder: EntityEncoder[IntegrationLogClientError] = jsonEncoderOf[IntegrationLogClientError]
}