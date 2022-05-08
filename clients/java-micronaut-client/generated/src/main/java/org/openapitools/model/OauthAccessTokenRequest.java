/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.model;

import java.util.Objects;
import java.util.Arrays;
import com.fasterxml.jackson.annotation.JsonSubTypes;
import com.fasterxml.jackson.annotation.JsonTypeInfo;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * Describes the valid schema for possible OAuth access token requests.
 */
@ApiModel(description = "Describes the valid schema for possible OAuth access token requests.")
@JsonPropertyOrder({
  OauthAccessTokenRequest.JSON_PROPERTY_GRANT_TYPE
})
@JsonTypeName("OauthAccessTokenRequest")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2022-05-08T00:31:09.924165Z[Etc/UTC]")
@JsonTypeInfo(use = JsonTypeInfo.Id.NAME, include = JsonTypeInfo.As.EXISTING_PROPERTY, property = "grant_type", visible = true)
@JsonSubTypes({
  @JsonSubTypes.Type(value = OauthAccessTokenRequestCode.class, name = "authorization_code"),
  @JsonSubTypes.Type(value = OauthAccessTokenRequestRefresh.class, name = "refresh_token"),
})

@Introspected
public class OauthAccessTokenRequest {
    /**
     * Gets or Sets grantType
     */
    public enum GrantTypeEnum {
        AUTHORIZATION_CODE("authorization_code"),
        REFRESH_TOKEN("refresh_token");

        private String value;

        GrantTypeEnum(String value) {
            this.value = value;
        }

        @JsonValue
        public String getValue() {
            return value;
        }

        @Override
        public String toString() {
            return String.valueOf(value);
        }

        @JsonCreator
        public static GrantTypeEnum fromValue(String value) {
            for (GrantTypeEnum b : GrantTypeEnum.values()) {
                if (b.value.equals(value)) {
                    return b;
                }
            }
            throw new IllegalArgumentException("Unexpected value '" + value + "'");
        }
    }
    public static final String JSON_PROPERTY_GRANT_TYPE = "grant_type";
    protected GrantTypeEnum grantType;

    public OauthAccessTokenRequest(GrantTypeEnum grantType) {
        this.grantType = grantType;
    }

    public OauthAccessTokenRequest grantType(GrantTypeEnum grantType) {
        this.grantType = grantType;
        return this;
    }

    /**
     * Get grantType
     * @return grantType
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_GRANT_TYPE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public GrantTypeEnum getGrantType() {
        return grantType;
    }

    @JsonProperty(JSON_PROPERTY_GRANT_TYPE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setGrantType(GrantTypeEnum grantType) {
        this.grantType = grantType;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        OauthAccessTokenRequest oauthAccessTokenRequest = (OauthAccessTokenRequest) o;
        return Objects.equals(this.grantType, oauthAccessTokenRequest.grantType);
    }

    @Override
    public int hashCode() {
        return Objects.hash(grantType);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class OauthAccessTokenRequest {\n");
        sb.append("    grantType: ").append(toIndentedString(grantType)).append("\n");
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
