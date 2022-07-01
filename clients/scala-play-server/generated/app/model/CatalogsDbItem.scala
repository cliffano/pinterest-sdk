package model

import play.api.libs.json._
import java.time.OffsetDateTime

/**
  * Represents the Swagger definition for CatalogsDbItem.
  * @param additionalProperties Any additional properties this model may have.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2022-07-01T12:06:32.599878Z[Etc/UTC]")
case class CatalogsDbItem(
  createdAt: Option[OffsetDateTime],
  id: Option[String],
  updatedAt: Option[OffsetDateTime]
  additionalProperties: 
)

object CatalogsDbItem {
  implicit lazy val catalogsDbItemJsonFormat: Format[CatalogsDbItem] = {
    val realJsonFormat = Json.format[CatalogsDbItem]
    val declaredPropNames = Set("createdAt", "id", "updatedAt")
    
    Format(
      Reads {
        case JsObject(xs) =>
          val declaredProps = xs.filterKeys(declaredPropNames)
          val additionalProps = JsObject(xs -- declaredPropNames)
          val restructuredProps = declaredProps + ("additionalProperties" -> additionalProps)
          val newObj = JsObject(restructuredProps)
          realJsonFormat.reads(newObj)
        case _ =>
          JsError("error.expected.jsobject")
      },
      Writes { catalogsDbItem =>
        val jsObj = realJsonFormat.writes(catalogsDbItem)
        val additionalProps = jsObj.value("additionalProperties").as[JsObject]
        val declaredProps = jsObj - "additionalProperties"
        val newObj = declaredProps ++ additionalProps
        newObj
      }
    )
  }
}

