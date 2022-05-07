package api

import model.Error
import model.OauthAccessTokenResponse

/**
  * Provides a default implementation for [[OauthApi]].
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2022-05-07T10:47:31.836531Z[Etc/UTC]")
class OauthApiImpl extends OauthApi {
  /**
    * @inheritdoc
    */
  override def oauthToken(grantType: String): OauthAccessTokenResponse = {
    // TODO: Implement better logic

    OauthAccessTokenResponse(None, "", bearer, 0, "", Map.empty)
  }
}
