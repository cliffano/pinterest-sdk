package model

import play.api.libs.json._

/**
  * Represents the Swagger definition for CustomLabel1Filter.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2024-03-14T23:15:00.394859410Z[Etc/UTC]", comments = "Generator version: 7.4.0")
case class CustomLabel1Filter(
  CUSTOM_LABEL_1: CatalogsProductGroupMultipleStringCriteria
)

object CustomLabel1Filter {
  implicit lazy val customLabel1FilterJsonFormat: Format[CustomLabel1Filter] = Json.format[CustomLabel1Filter]
}

