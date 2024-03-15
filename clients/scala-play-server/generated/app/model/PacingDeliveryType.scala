package model

import play.api.libs.json._

/**
  * Ad group pacing delivery type. With ACCELERATED, an ad group budget is spent as fast as possible. With STANDARD, an ad group budget is spent smoothly over a day. When using CBO, only the STANDARD pacing delivery type is allowed.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2024-03-14T23:15:00.394859410Z[Etc/UTC]", comments = "Generator version: 7.4.0")
case class PacingDeliveryType(
)

object PacingDeliveryType {
  implicit lazy val pacingDeliveryTypeJsonFormat: Format[PacingDeliveryType] = Json.format[PacingDeliveryType]
}

