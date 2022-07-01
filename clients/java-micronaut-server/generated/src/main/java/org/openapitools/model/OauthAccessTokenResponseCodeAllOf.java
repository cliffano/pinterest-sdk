/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.model;

import java.util.Objects;
import java.util.Arrays;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * OauthAccessTokenResponseCodeAllOf
 */
@JsonPropertyOrder({
  OauthAccessTokenResponseCodeAllOf.JSON_PROPERTY_REFRESH_TOKEN,
  OauthAccessTokenResponseCodeAllOf.JSON_PROPERTY_REFRESH_TOKEN_EXPIRES_IN
})
@JsonTypeName("OauthAccessTokenResponseCode_allOf")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-07-01T11:59:34.708172Z[Etc/UTC]")
@Introspected
public class OauthAccessTokenResponseCodeAllOf {
    public static final String JSON_PROPERTY_REFRESH_TOKEN = "refresh_token";
    private String refreshToken;

    public static final String JSON_PROPERTY_REFRESH_TOKEN_EXPIRES_IN = "refresh_token_expires_in";
    private Integer refreshTokenExpiresIn;

    public OauthAccessTokenResponseCodeAllOf(String refreshToken, Integer refreshTokenExpiresIn) {
        this.refreshToken = refreshToken;
        this.refreshTokenExpiresIn = refreshTokenExpiresIn;
    }

    public OauthAccessTokenResponseCodeAllOf refreshToken(String refreshToken) {
        this.refreshToken = refreshToken;
        return this;
    }

    /**
     * Get refreshToken
     * @return refreshToken
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_REFRESH_TOKEN)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public String getRefreshToken() {
        return refreshToken;
    }

    @JsonProperty(JSON_PROPERTY_REFRESH_TOKEN)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setRefreshToken(String refreshToken) {
        this.refreshToken = refreshToken;
    }

    public OauthAccessTokenResponseCodeAllOf refreshTokenExpiresIn(Integer refreshTokenExpiresIn) {
        this.refreshTokenExpiresIn = refreshTokenExpiresIn;
        return this;
    }

    /**
     * Get refreshTokenExpiresIn
     * @return refreshTokenExpiresIn
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_REFRESH_TOKEN_EXPIRES_IN)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public Integer getRefreshTokenExpiresIn() {
        return refreshTokenExpiresIn;
    }

    @JsonProperty(JSON_PROPERTY_REFRESH_TOKEN_EXPIRES_IN)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setRefreshTokenExpiresIn(Integer refreshTokenExpiresIn) {
        this.refreshTokenExpiresIn = refreshTokenExpiresIn;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        OauthAccessTokenResponseCodeAllOf oauthAccessTokenResponseCodeAllOf = (OauthAccessTokenResponseCodeAllOf) o;
        return Objects.equals(this.refreshToken, oauthAccessTokenResponseCodeAllOf.refreshToken) &&
            Objects.equals(this.refreshTokenExpiresIn, oauthAccessTokenResponseCodeAllOf.refreshTokenExpiresIn);
    }

    @Override
    public int hashCode() {
        return Objects.hash(refreshToken, refreshTokenExpiresIn);
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
    private String toIndentedString(Object o) {
        if (o == null) {
            return "null";
        }
        return o.toString().replace("\n", "\n    ");
    }

}
