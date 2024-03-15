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
import java.util.Arrays;
import org.openapitools.model.OauthAccessTokenResponse;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * A successful OAuth access token response for the authorization code flow.
 */
@JsonPropertyOrder({
  OauthAccessTokenResponseCode.JSON_PROPERTY_REFRESH_TOKEN,
  OauthAccessTokenResponseCode.JSON_PROPERTY_REFRESH_TOKEN_EXPIRES_IN
})
@JsonTypeName("OauthAccessTokenResponseCode")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class OauthAccessTokenResponseCode extends OauthAccessTokenResponse {
    public static final String JSON_PROPERTY_REFRESH_TOKEN = "refresh_token";
    private String refreshToken;

    public static final String JSON_PROPERTY_REFRESH_TOKEN_EXPIRES_IN = "refresh_token_expires_in";
    private Integer refreshTokenExpiresIn;

    public OauthAccessTokenResponseCode(String refreshToken, Integer refreshTokenExpiresIn, String accessToken, String tokenType, Integer expiresIn, String scope) {
        super(accessToken, tokenType, expiresIn, scope);
        this.refreshToken = refreshToken;
        this.refreshTokenExpiresIn = refreshTokenExpiresIn;
    }

    public OauthAccessTokenResponseCode refreshToken(String refreshToken) {
        this.refreshToken = refreshToken;
        return this;
    }

    /**
     * Get refreshToken
     * @return refreshToken
     **/
    @NotNull
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

    public OauthAccessTokenResponseCode refreshTokenExpiresIn(Integer refreshTokenExpiresIn) {
        this.refreshTokenExpiresIn = refreshTokenExpiresIn;
        return this;
    }

    /**
     * Get refreshTokenExpiresIn
     * @return refreshTokenExpiresIn
     **/
    @NotNull
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
        OauthAccessTokenResponseCode oauthAccessTokenResponseCode = (OauthAccessTokenResponseCode) o;
        return Objects.equals(this.refreshToken, oauthAccessTokenResponseCode.refreshToken) &&
            Objects.equals(this.refreshTokenExpiresIn, oauthAccessTokenResponseCode.refreshTokenExpiresIn) &&
            super.equals(o);
    }

    @Override
    public int hashCode() {
        return Objects.hash(refreshToken, refreshTokenExpiresIn, super.hashCode());
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class OauthAccessTokenResponseCode {\n");
        sb.append("    ").append(toIndentedString(super.toString())).append("\n");
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

