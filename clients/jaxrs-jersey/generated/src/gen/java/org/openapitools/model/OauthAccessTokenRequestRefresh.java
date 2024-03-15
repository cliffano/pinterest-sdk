/*
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


package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.OauthAccessTokenRequest;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A request to exchange a refresh token for a new access token.
 */
@ApiModel(description = "A request to exchange a refresh token for a new access token.")
@JsonPropertyOrder({
  OauthAccessTokenRequestRefresh.JSON_PROPERTY_REFRESH_TOKEN,
  OauthAccessTokenRequestRefresh.JSON_PROPERTY_SCOPE,
  OauthAccessTokenRequestRefresh.JSON_PROPERTY_REFRESH_ON
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class OauthAccessTokenRequestRefresh extends OauthAccessTokenRequest  {
  public static final String JSON_PROPERTY_REFRESH_TOKEN = "refresh_token";
  @JsonProperty(JSON_PROPERTY_REFRESH_TOKEN)
  private String refreshToken;

  public static final String JSON_PROPERTY_SCOPE = "scope";
  @JsonProperty(JSON_PROPERTY_SCOPE)
  private String scope;

  public static final String JSON_PROPERTY_REFRESH_ON = "refresh_on";
  @JsonProperty(JSON_PROPERTY_REFRESH_ON)
  private Boolean refreshOn;

  public OauthAccessTokenRequestRefresh refreshToken(String refreshToken) {
    this.refreshToken = refreshToken;
    return this;
  }

  /**
   * Get refreshToken
   * @return refreshToken
   **/
  @JsonProperty(value = "refresh_token")
  @ApiModelProperty(required = true, value = "")
  @NotNull 
  public String getRefreshToken() {
    return refreshToken;
  }

  public void setRefreshToken(String refreshToken) {
    this.refreshToken = refreshToken;
  }

  public OauthAccessTokenRequestRefresh scope(String scope) {
    this.scope = scope;
    return this;
  }

  /**
   * Get scope
   * @return scope
   **/
  @JsonProperty(value = "scope")
  @ApiModelProperty(value = "")
  
  public String getScope() {
    return scope;
  }

  public void setScope(String scope) {
    this.scope = scope;
  }

  public OauthAccessTokenRequestRefresh refreshOn(Boolean refreshOn) {
    this.refreshOn = refreshOn;
    return this;
  }

  /**
   * Setting this field to &lt;code&gt;true&lt;/code&gt; will add a new refresh token to your 200 response, as well as the refresh_token_expires_in and refresh_token_expires_at fields. To see the structure of this payload, set the 200 response_type to \&quot;everlasting_refresh\&quot;.
   * @return refreshOn
   **/
  @JsonProperty(value = "refresh_on")
  @ApiModelProperty(value = "Setting this field to <code>true</code> will add a new refresh token to your 200 response, as well as the refresh_token_expires_in and refresh_token_expires_at fields. To see the structure of this payload, set the 200 response_type to \"everlasting_refresh\".")
  
  public Boolean getRefreshOn() {
    return refreshOn;
  }

  public void setRefreshOn(Boolean refreshOn) {
    this.refreshOn = refreshOn;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OauthAccessTokenRequestRefresh oauthAccessTokenRequestRefresh = (OauthAccessTokenRequestRefresh) o;
    return super.equals(o) && Objects.equals(this.refreshToken, oauthAccessTokenRequestRefresh.refreshToken) &&
        Objects.equals(this.scope, oauthAccessTokenRequestRefresh.scope) &&
        Objects.equals(this.refreshOn, oauthAccessTokenRequestRefresh.refreshOn);
  }

  @Override
  public int hashCode() {
    return Objects.hash(super.hashCode(), refreshToken, super.hashCode(), scope, super.hashCode(), refreshOn);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OauthAccessTokenRequestRefresh {\n");
    sb.append("    ").append(toIndentedString(super.toString())).append("\n");
    sb.append("    refreshToken: ").append(toIndentedString(refreshToken)).append("\n");
    sb.append("    scope: ").append(toIndentedString(scope)).append("\n");
    sb.append("    refreshOn: ").append(toIndentedString(refreshOn)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

