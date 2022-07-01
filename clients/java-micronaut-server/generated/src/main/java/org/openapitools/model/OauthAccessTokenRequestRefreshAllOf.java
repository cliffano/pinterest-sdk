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
 * OauthAccessTokenRequestRefreshAllOf
 */
@JsonPropertyOrder({
  OauthAccessTokenRequestRefreshAllOf.JSON_PROPERTY_REFRESH_TOKEN,
  OauthAccessTokenRequestRefreshAllOf.JSON_PROPERTY_SCOPE
})
@JsonTypeName("OauthAccessTokenRequestRefresh_allOf")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-07-01T11:59:34.708172Z[Etc/UTC]")
@Introspected
public class OauthAccessTokenRequestRefreshAllOf {
    public static final String JSON_PROPERTY_REFRESH_TOKEN = "refresh_token";
    private String refreshToken;

    public static final String JSON_PROPERTY_SCOPE = "scope";
    private String scope;

    public OauthAccessTokenRequestRefreshAllOf(String refreshToken) {
        this.refreshToken = refreshToken;
    }

    public OauthAccessTokenRequestRefreshAllOf refreshToken(String refreshToken) {
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

    public OauthAccessTokenRequestRefreshAllOf scope(String scope) {
        this.scope = scope;
        return this;
    }

    /**
     * Get scope
     * @return scope
     **/
    @Nullable
    @ApiModelProperty(value = "")
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

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        OauthAccessTokenRequestRefreshAllOf oauthAccessTokenRequestRefreshAllOf = (OauthAccessTokenRequestRefreshAllOf) o;
        return Objects.equals(this.refreshToken, oauthAccessTokenRequestRefreshAllOf.refreshToken) &&
            Objects.equals(this.scope, oauthAccessTokenRequestRefreshAllOf.scope);
    }

    @Override
    public int hashCode() {
        return Objects.hash(refreshToken, scope);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class OauthAccessTokenRequestRefreshAllOf {\n");
        sb.append("    refreshToken: ").append(toIndentedString(refreshToken)).append("\n");
        sb.append("    scope: ").append(toIndentedString(scope)).append("\n");
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
