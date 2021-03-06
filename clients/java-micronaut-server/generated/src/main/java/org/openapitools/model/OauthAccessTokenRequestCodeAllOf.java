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
 * OauthAccessTokenRequestCodeAllOf
 */
@JsonPropertyOrder({
  OauthAccessTokenRequestCodeAllOf.JSON_PROPERTY_CODE,
  OauthAccessTokenRequestCodeAllOf.JSON_PROPERTY_REDIRECT_URI
})
@JsonTypeName("OauthAccessTokenRequestCode_allOf")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-07-01T11:59:34.708172Z[Etc/UTC]")
@Introspected
public class OauthAccessTokenRequestCodeAllOf {
    public static final String JSON_PROPERTY_CODE = "code";
    private String code;

    public static final String JSON_PROPERTY_REDIRECT_URI = "redirect_uri";
    private String redirectUri;

    public OauthAccessTokenRequestCodeAllOf(String code, String redirectUri) {
        this.code = code;
        this.redirectUri = redirectUri;
    }

    public OauthAccessTokenRequestCodeAllOf code(String code) {
        this.code = code;
        return this;
    }

    /**
     * Get code
     * @return code
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
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

    public OauthAccessTokenRequestCodeAllOf redirectUri(String redirectUri) {
        this.redirectUri = redirectUri;
        return this;
    }

    /**
     * Get redirectUri
     * @return redirectUri
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
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
        OauthAccessTokenRequestCodeAllOf oauthAccessTokenRequestCodeAllOf = (OauthAccessTokenRequestCodeAllOf) o;
        return Objects.equals(this.code, oauthAccessTokenRequestCodeAllOf.code) &&
            Objects.equals(this.redirectUri, oauthAccessTokenRequestCodeAllOf.redirectUri);
    }

    @Override
    public int hashCode() {
        return Objects.hash(code, redirectUri);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class OauthAccessTokenRequestCodeAllOf {\n");
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
