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
import org.openapitools.model.OauthAccessTokenRequest;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * A request to exchange a refresh token for a new access token.
 */
@JsonPropertyOrder({
  OauthAccessTokenRequestRefresh.JSON_PROPERTY_REFRESH_TOKEN,
  OauthAccessTokenRequestRefresh.JSON_PROPERTY_SCOPE,
  OauthAccessTokenRequestRefresh.JSON_PROPERTY_REFRESH_ON
})
@JsonTypeName("OauthAccessTokenRequestRefresh")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class OauthAccessTokenRequestRefresh extends OauthAccessTokenRequest {
    public static final String JSON_PROPERTY_REFRESH_TOKEN = "refresh_token";
    private String refreshToken;

    public static final String JSON_PROPERTY_SCOPE = "scope";
    private String scope;

    public static final String JSON_PROPERTY_REFRESH_ON = "refresh_on";
    private Boolean refreshOn;

    public OauthAccessTokenRequestRefresh(String refreshToken, GrantTypeEnum grantType) {
        super();
        this.refreshToken = refreshToken;
    }

    public OauthAccessTokenRequestRefresh refreshToken(String refreshToken) {
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

    public OauthAccessTokenRequestRefresh scope(String scope) {
        this.scope = scope;
        return this;
    }

    /**
     * Get scope
     * @return scope
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_SCOPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getScope() {
        return scope;
    }

    @JsonProperty(JSON_PROPERTY_SCOPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
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
    @Nullable
    @JsonProperty(JSON_PROPERTY_REFRESH_ON)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Boolean getRefreshOn() {
        return refreshOn;
    }

    @JsonProperty(JSON_PROPERTY_REFRESH_ON)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
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
        return Objects.equals(this.refreshToken, oauthAccessTokenRequestRefresh.refreshToken) &&
            Objects.equals(this.scope, oauthAccessTokenRequestRefresh.scope) &&
            Objects.equals(this.refreshOn, oauthAccessTokenRequestRefresh.refreshOn) &&
            super.equals(o);
    }

    @Override
    public int hashCode() {
        return Objects.hash(refreshToken, scope, refreshOn, super.hashCode());
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

