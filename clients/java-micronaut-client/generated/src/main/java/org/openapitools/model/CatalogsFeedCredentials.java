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
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * This field is **OPTIONAL**. Use this if your feed file requires username and password.
 */
@JsonPropertyOrder({
  CatalogsFeedCredentials.JSON_PROPERTY_PASSWORD,
  CatalogsFeedCredentials.JSON_PROPERTY_USERNAME
})
@JsonTypeName("CatalogsFeedCredentials")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class CatalogsFeedCredentials {
    public static final String JSON_PROPERTY_PASSWORD = "password";
    private String password;

    public static final String JSON_PROPERTY_USERNAME = "username";
    private String username;

    public CatalogsFeedCredentials(String password, String username) {
        this.password = password;
        this.username = username;
    }

    public CatalogsFeedCredentials password(String password) {
        this.password = password;
        return this;
    }

    /**
     * The required password for downloading a feed.
     * @return password
     **/
    @NotNull
    @JsonProperty(JSON_PROPERTY_PASSWORD)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getPassword() {
        return password;
    }

    @JsonProperty(JSON_PROPERTY_PASSWORD)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setPassword(String password) {
        this.password = password;
    }

    public CatalogsFeedCredentials username(String username) {
        this.username = username;
        return this;
    }

    /**
     * The required username for downloading a feed.
     * @return username
     **/
    @NotNull
    @JsonProperty(JSON_PROPERTY_USERNAME)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getUsername() {
        return username;
    }

    @JsonProperty(JSON_PROPERTY_USERNAME)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setUsername(String username) {
        this.username = username;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CatalogsFeedCredentials catalogsFeedCredentials = (CatalogsFeedCredentials) o;
        return Objects.equals(this.password, catalogsFeedCredentials.password) &&
            Objects.equals(this.username, catalogsFeedCredentials.username);
    }

    @Override
    public int hashCode() {
        return Objects.hash(password, username);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CatalogsFeedCredentials {\n");
        sb.append("    password: ").append("*").append("\n");
        sb.append("    username: ").append(toIndentedString(username)).append("\n");
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

