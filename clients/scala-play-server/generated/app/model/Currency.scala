package model

import play.api.libs.json._

/**
  * Currency Codes from ISO 4217
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2024-03-14T23:15:00.394859410Z[Etc/UTC]", comments = "Generator version: 7.4.0")
case class Currency(
)

object Currency {
  implicit lazy val currencyJsonFormat: Format[Currency] = Json.format[Currency]
}

