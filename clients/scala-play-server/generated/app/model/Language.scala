package model

import play.api.libs.json._

/**
  * Language code, which is among the offical ISO 639-1 language list.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2022-05-08T00:41:34.847921Z[Etc/UTC]")
case class Language(
)

object Language {
  implicit lazy val languageJsonFormat: Format[Language] = Json.format[Language]
}

