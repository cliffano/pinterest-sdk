
package org.openapitools.client.model


case class OauthAccessTokenResponseIntegrationRefresh (
    _responseType: Option[String],
    _accessToken: String,
    _tokenType: String,
    _expiresIn: Integer,
    _scope: String,
    _refreshToken: String,
    _refreshTokenExpiresIn: Integer
)
object OauthAccessTokenResponseIntegrationRefresh {
    def toStringBody(var_responseType: Object, var_accessToken: Object, var_tokenType: Object, var_expiresIn: Object, var_scope: Object, var_refreshToken: Object, var_refreshTokenExpiresIn: Object) =
        s"""
        | {
        | "responseType":$var_responseType,"accessToken":$var_accessToken,"tokenType":$var_tokenType,"expiresIn":$var_expiresIn,"scope":$var_scope,"refreshToken":$var_refreshToken,"refreshTokenExpiresIn":$var_refreshTokenExpiresIn
        | }
        """.stripMargin
}
