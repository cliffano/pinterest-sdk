package model

import play.api.libs.json._

/**
  * Currency Codes from ISO 4217.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2022-05-08T00:41:34.847921Z[Etc/UTC]")
case class NullableCurrency(
)

object NullableCurrency {
  implicit lazy val nullableCurrencyJsonFormat: Format[NullableCurrency] = Json.format[NullableCurrency]
}

