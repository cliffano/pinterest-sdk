package model

import play.api.libs.json._

/**
  * A successful OAuth access token response for the authorization code flow.
  * @param additionalProperties Any additional properties this model may have.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2022-05-07T10:47:31.836531Z[Etc/UTC]")
case class OauthAccessTokenResponseCode(
  responseType: Option[OauthAccessTokenResponseCode.ResponseType.Value],
  accessToken: String,
  tokenType: String,
  expiresIn: Int,
  scope: String,
  refreshToken: String,
  refreshTokenExpiresIn: Int
  additionalProperties: OauthAccessTokenResponse
)

object OauthAccessTokenResponseCode {
  implicit lazy val oauthAccessTokenResponseCodeJsonFormat: Format[OauthAccessTokenResponseCode] = {
    val realJsonFormat = Json.format[OauthAccessTokenResponseCode]
    val declaredPropNames = Set("responseType", "accessToken", "tokenType", "expiresIn", "scope", "refreshToken", "refreshTokenExpiresIn")
    
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
      Writes { oauthAccessTokenResponseCode =>
        val jsObj = realJsonFormat.writes(oauthAccessTokenResponseCode)
        val additionalProps = jsObj.value("additionalProperties").as[JsObject]
        val declaredProps = jsObj - "additionalProperties"
        val newObj = declaredProps ++ additionalProps
        newObj
      }
    )
  }

  // noinspection TypeAnnotation
  object ResponseType extends Enumeration {
    val AuthorizationCode = Value("authorization_code")
    val RefreshToken = Value("refresh_token")

    type ResponseType = Value
    implicit lazy val ResponseTypeJsonFormat: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[this.type])
  }
}

