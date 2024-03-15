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

package org.openapitools.client.model;

import org.openapitools.client.model.OauthAccessTokenResponse;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * A successful OAuth access token response for the refresh token flow, with an added everlasting refresh token.
 **/
@ApiModel(description = "A successful OAuth access token response for the refresh token flow, with an added everlasting refresh token.")
public class OauthAccessTokenResponseEverlastingRefresh extends OauthAccessTokenResponse {
  
  public enum ResponseTypeEnum {
     authorization_code,  refresh_token, 
  };
  @SerializedName("response_type")
  private ResponseTypeEnum responseType = null;
  @SerializedName("access_token")
  private String accessToken = null;
  @SerializedName("token_type")
  private String tokenType = bearer;
  @SerializedName("expires_in")
  private Integer expiresIn = null;
  @SerializedName("scope")
  private String scope = null;
  @SerializedName("refresh_token")
  private String refreshToken = null;
  @SerializedName("refresh_token_expires_in")
  private Integer refreshTokenExpiresIn = null;
  @SerializedName("refresh_token_expires_at")
  private Integer refreshTokenExpiresAt = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ResponseTypeEnum getResponseType() {
    return responseType;
  }
  public void setResponseType(ResponseTypeEnum responseType) {
    this.responseType = responseType;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getAccessToken() {
    return accessToken;
  }
  public void setAccessToken(String accessToken) {
    this.accessToken = accessToken;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getTokenType() {
    return tokenType;
  }
  public void setTokenType(String tokenType) {
    this.tokenType = tokenType;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public Integer getExpiresIn() {
    return expiresIn;
  }
  public void setExpiresIn(Integer expiresIn) {
    this.expiresIn = expiresIn;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getScope() {
    return scope;
  }
  public void setScope(String scope) {
    this.scope = scope;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getRefreshToken() {
    return refreshToken;
  }
  public void setRefreshToken(String refreshToken) {
    this.refreshToken = refreshToken;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public Integer getRefreshTokenExpiresIn() {
    return refreshTokenExpiresIn;
  }
  public void setRefreshTokenExpiresIn(Integer refreshTokenExpiresIn) {
    this.refreshTokenExpiresIn = refreshTokenExpiresIn;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public Integer getRefreshTokenExpiresAt() {
    return refreshTokenExpiresAt;
  }
  public void setRefreshTokenExpiresAt(Integer refreshTokenExpiresAt) {
    this.refreshTokenExpiresAt = refreshTokenExpiresAt;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OauthAccessTokenResponseEverlastingRefresh oauthAccessTokenResponseEverlastingRefresh = (OauthAccessTokenResponseEverlastingRefresh) o;
    return (this.responseType == null ? oauthAccessTokenResponseEverlastingRefresh.responseType == null : this.responseType.equals(oauthAccessTokenResponseEverlastingRefresh.responseType)) &&
        (this.accessToken == null ? oauthAccessTokenResponseEverlastingRefresh.accessToken == null : this.accessToken.equals(oauthAccessTokenResponseEverlastingRefresh.accessToken)) &&
        (this.tokenType == null ? oauthAccessTokenResponseEverlastingRefresh.tokenType == null : this.tokenType.equals(oauthAccessTokenResponseEverlastingRefresh.tokenType)) &&
        (this.expiresIn == null ? oauthAccessTokenResponseEverlastingRefresh.expiresIn == null : this.expiresIn.equals(oauthAccessTokenResponseEverlastingRefresh.expiresIn)) &&
        (this.scope == null ? oauthAccessTokenResponseEverlastingRefresh.scope == null : this.scope.equals(oauthAccessTokenResponseEverlastingRefresh.scope)) &&
        (this.refreshToken == null ? oauthAccessTokenResponseEverlastingRefresh.refreshToken == null : this.refreshToken.equals(oauthAccessTokenResponseEverlastingRefresh.refreshToken)) &&
        (this.refreshTokenExpiresIn == null ? oauthAccessTokenResponseEverlastingRefresh.refreshTokenExpiresIn == null : this.refreshTokenExpiresIn.equals(oauthAccessTokenResponseEverlastingRefresh.refreshTokenExpiresIn)) &&
        (this.refreshTokenExpiresAt == null ? oauthAccessTokenResponseEverlastingRefresh.refreshTokenExpiresAt == null : this.refreshTokenExpiresAt.equals(oauthAccessTokenResponseEverlastingRefresh.refreshTokenExpiresAt));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.responseType == null ? 0: this.responseType.hashCode());
    result = 31 * result + (this.accessToken == null ? 0: this.accessToken.hashCode());
    result = 31 * result + (this.tokenType == null ? 0: this.tokenType.hashCode());
    result = 31 * result + (this.expiresIn == null ? 0: this.expiresIn.hashCode());
    result = 31 * result + (this.scope == null ? 0: this.scope.hashCode());
    result = 31 * result + (this.refreshToken == null ? 0: this.refreshToken.hashCode());
    result = 31 * result + (this.refreshTokenExpiresIn == null ? 0: this.refreshTokenExpiresIn.hashCode());
    result = 31 * result + (this.refreshTokenExpiresAt == null ? 0: this.refreshTokenExpiresAt.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OauthAccessTokenResponseEverlastingRefresh {\n");
    sb.append("  " + super.toString()).append("\n");
    sb.append("  responseType: ").append(responseType).append("\n");
    sb.append("  accessToken: ").append(accessToken).append("\n");
    sb.append("  tokenType: ").append(tokenType).append("\n");
    sb.append("  expiresIn: ").append(expiresIn).append("\n");
    sb.append("  scope: ").append(scope).append("\n");
    sb.append("  refreshToken: ").append(refreshToken).append("\n");
    sb.append("  refreshTokenExpiresIn: ").append(refreshTokenExpiresIn).append("\n");
    sb.append("  refreshTokenExpiresAt: ").append(refreshTokenExpiresAt).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}