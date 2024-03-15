/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package io.swagger.client.api

import akka.{Done, NotUsed}
import com.lightbend.lagom.scaladsl.api.transport.Method
import com.lightbend.lagom.scaladsl.api.{Service, ServiceCall}
import play.api.libs.json._
import com.lightbend.lagom.scaladsl.api.deser.PathParamSerializer

import io.swagger.client.model.Error
import io.swagger.client.model.OauthAccessTokenResponse

trait OauthApi extends Service {


  final override def descriptor = {
    import Service._
    named("OauthApi").withCalls(
      restCall(Method.POST, "/oauth/token", oauthToken _)
    ).withAutoAcl(true)
  }


  // grantType:String  -- not yet supported x-www-form-urlencoded
  /**
    * Generate OAuth access token
    * Generate an OAuth access token by using an authorization code or a refresh token.  IMPORTANT: You need to start the OAuth flow via www.pinterest.com/oauth before calling this endpoint (or have an existing refresh token).  See &lt;a href&#x3D;&#39;/docs/getting-started/authentication/&#39;&gt;Authentication&lt;/a&gt; for more.  &lt;strong&gt;Parameter &lt;i&gt;refresh_on&lt;/i&gt; and its corresponding response type &lt;i&gt;everlasting_refresh&lt;/i&gt; are now available to all apps! Later this year, continuous refresh will become the default behavior (ie you will no longer need to send this parameter). &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
    *  
    * @param grantType  
    * @return OauthAccessTokenResponse
    */
  def oauthToken(): ServiceCall[NotUsed ,OauthAccessTokenResponse]
  

        object OauthApiGrantTypeEnum extends Enumeration {
        val   authorization_code, refresh_token = Value     
        type OauthApiGrantTypeEnum = Value
        implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[OauthApiGrantTypeEnum.type])
        implicit val pathParamSerializer: PathParamSerializer[OauthApiGrantTypeEnum] = PathParamSerializer.required("OauthApiGrantTypeEnum")(withName)(_.toString)
        }
  }
