package org.openapitools.model;

import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.JsonFormat;
import com.fasterxml.jackson.annotation.JsonProperty;


public class OauthAccessTokenResponseCodeAllOf  {
  
  @ApiModelProperty(required = true, value = "")
  private String refreshToken;

  @ApiModelProperty(required = true, value = "")
  private Integer refreshTokenExpiresIn;
 /**
  * Get refreshToken
  * @return refreshToken
  */
  @JsonProperty("refresh_token")
  @NotNull
  public String getRefreshToken() {
    return refreshToken;
  }

  /**
   * Sets the <code>refreshToken</code> property.
   */
 public void setRefreshToken(String refreshToken) {
    this.refreshToken = refreshToken;
  }

  /**
   * Sets the <code>refreshToken</code> property.
   */
  public OauthAccessTokenResponseCodeAllOf refreshToken(String refreshToken) {
    this.refreshToken = refreshToken;
    return this;
  }

 /**
  * Get refreshTokenExpiresIn
  * @return refreshTokenExpiresIn
  */
  @JsonProperty("refresh_token_expires_in")
  @NotNull
  public Integer getRefreshTokenExpiresIn() {
    return refreshTokenExpiresIn;
  }

  /**
   * Sets the <code>refreshTokenExpiresIn</code> property.
   */
 public void setRefreshTokenExpiresIn(Integer refreshTokenExpiresIn) {
    this.refreshTokenExpiresIn = refreshTokenExpiresIn;
  }

  /**
   * Sets the <code>refreshTokenExpiresIn</code> property.
   */
  public OauthAccessTokenResponseCodeAllOf refreshTokenExpiresIn(Integer refreshTokenExpiresIn) {
    this.refreshTokenExpiresIn = refreshTokenExpiresIn;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OauthAccessTokenResponseCodeAllOf {\n");
    
    sb.append("    refreshToken: ").append(toIndentedString(refreshToken)).append("\n");
    sb.append("    refreshTokenExpiresIn: ").append(toIndentedString(refreshTokenExpiresIn)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

