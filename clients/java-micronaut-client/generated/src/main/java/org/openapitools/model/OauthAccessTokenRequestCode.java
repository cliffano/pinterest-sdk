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
 * A request to exchange an authorization code for an access token.
 */
@JsonPropertyOrder({
  OauthAccessTokenRequestCode.JSON_PROPERTY_CODE,
  OauthAccessTokenRequestCode.JSON_PROPERTY_REDIRECT_URI
})
@JsonTypeName("OauthAccessTokenRequestCode")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class OauthAccessTokenRequestCode extends OauthAccessTokenRequest {
    public static final String JSON_PROPERTY_CODE = "code";
    private String code;

    public static final String JSON_PROPERTY_REDIRECT_URI = "redirect_uri";
    private String redirectUri;

    public OauthAccessTokenRequestCode(String code, String redirectUri, GrantTypeEnum grantType) {
        super();
        this.code = code;
        this.redirectUri = redirectUri;
    }

    public OauthAccessTokenRequestCode code(String code) {
        this.code = code;
        return this;
    }

    /**
     * Get code
     * @return code
     **/
    @NotNull
    @JsonProperty(JSON_PROPERTY_CODE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getCode() {
        return code;
    }

    @JsonProperty(JSON_PROPERTY_CODE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
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
    @NotNull
    @JsonProperty(JSON_PROPERTY_REDIRECT_URI)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getRedirectUri() {
        return redirectUri;
    }

    @JsonProperty(JSON_PROPERTY_REDIRECT_URI)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
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
        return Objects.equals(this.code, oauthAccessTokenRequestCode.code) &&
            Objects.equals(this.redirectUri, oauthAccessTokenRequestCode.redirectUri) &&
            super.equals(o);
    }

    @Override
    public int hashCode() {
        return Objects.hash(code, redirectUri, super.hashCode());
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

