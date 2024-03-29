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
 * A request to exchange an authorization code for an access token.
 */
@ApiModel(description = "A request to exchange an authorization code for an access token.")
@JsonPropertyOrder({
  OauthAccessTokenRequestCode.JSON_PROPERTY_CODE,
  OauthAccessTokenRequestCode.JSON_PROPERTY_REDIRECT_URI
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class OauthAccessTokenRequestCode extends OauthAccessTokenRequest  {
  public static final String JSON_PROPERTY_CODE = "code";
  @JsonProperty(JSON_PROPERTY_CODE)
  private String code;

  public static final String JSON_PROPERTY_REDIRECT_URI = "redirect_uri";
  @JsonProperty(JSON_PROPERTY_REDIRECT_URI)
  private String redirectUri;

  public OauthAccessTokenRequestCode code(String code) {
    this.code = code;
    return this;
  }

  /**
   * Get code
   * @return code
   **/
  @JsonProperty(value = "code")
  @ApiModelProperty(required = true, value = "")
  @NotNull 
  public String getCode() {
    return code;
  }

  public void setCode(String code) {
    this.code = code;
  }

  public OauthAccessTokenRequestCode redirectUri(String redirectUri) {
    this.redirectUri = redirectUri;
    return this;
  }

  /**
   * Get redirectUri
   * @return redirectUri
   **/
  @JsonProperty(value = "redirect_uri")
  @ApiModelProperty(required = true, value = "")
  @NotNull 
  public String getRedirectUri() {
    return redirectUri;
  }

  public void setRedirectUri(String redirectUri) {
    this.redirectUri = redirectUri;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OauthAccessTokenRequestCode oauthAccessTokenRequestCode = (OauthAccessTokenRequestCode) o;
    return super.equals(o) && Objects.equals(this.code, oauthAccessTokenRequestCode.code) &&
        Objects.equals(this.redirectUri, oauthAccessTokenRequestCode.redirectUri);
  }

  @Override
  public int hashCode() {
    return Objects.hash(super.hashCode(), code, super.hashCode(), redirectUri);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OauthAccessTokenRequestCode {\n");
    sb.append("    ").append(toIndentedString(super.toString())).append("\n");
    sb.append("    code: ").append(toIndentedString(code)).append("\n");
    sb.append("    redirectUri: ").append(toIndentedString(redirectUri)).append("\n");
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

