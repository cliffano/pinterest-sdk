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
 * Interest
 */
@JsonPropertyOrder({
  Interest.JSON_PROPERTY_CANONICAL_URL,
  Interest.JSON_PROPERTY_ID,
  Interest.JSON_PROPERTY_KEY,
  Interest.JSON_PROPERTY_NAME
})
@JsonTypeName("Interest")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class Interest {
    public static final String JSON_PROPERTY_CANONICAL_URL = "canonical_url";
    private String canonicalUrl;

    public static final String JSON_PROPERTY_ID = "id";
    private String id;

    public static final String JSON_PROPERTY_KEY = "key";
    private String key;

    public static final String JSON_PROPERTY_NAME = "name";
    private String name;

    public Interest() {
    }

    public Interest canonicalUrl(String canonicalUrl) {
        this.canonicalUrl = canonicalUrl;
        return this;
    }

    /**
     * Get canonicalUrl
     * @return canonicalUrl
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_CANONICAL_URL)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getCanonicalUrl() {
        return canonicalUrl;
    }

    @JsonProperty(JSON_PROPERTY_CANONICAL_URL)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCanonicalUrl(String canonicalUrl) {
        this.canonicalUrl = canonicalUrl;
    }

    public Interest id(String id) {
        this.id = id;
        return this;
    }

    /**
     * Get id
     * @return id
     **/
    @Nullable
    @Pattern(regexp="^\\d+$")
    @JsonProperty(JSON_PROPERTY_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getId() {
        return id;
    }

    @JsonProperty(JSON_PROPERTY_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setId(String id) {
        this.id = id;
    }

    public Interest key(String key) {
        this.key = key;
        return this;
    }

    /**
     * Get key
     * @return key
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_KEY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getKey() {
        return key;
    }

    @JsonProperty(JSON_PROPERTY_KEY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setKey(String key) {
        this.key = key;
    }

    public Interest name(String name) {
        this.name = name;
        return this;
    }

    /**
     * Get name
     * @return name
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_NAME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getName() {
        return name;
    }

    @JsonProperty(JSON_PROPERTY_NAME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setName(String name) {
        this.name = name;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        Interest interest = (Interest) o;
        return Objects.equals(this.canonicalUrl, interest.canonicalUrl) &&
            Objects.equals(this.id, interest.id) &&
            Objects.equals(this.key, interest.key) &&
            Objects.equals(this.name, interest.name);
    }

    @Override
    public int hashCode() {
        return Objects.hash(canonicalUrl, id, key, name);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class Interest {\n");
        sb.append("    canonicalUrl: ").append(toIndentedString(canonicalUrl)).append("\n");
        sb.append("    id: ").append(toIndentedString(id)).append("\n");
        sb.append("    key: ").append(toIndentedString(key)).append("\n");
        sb.append("    name: ").append(toIndentedString(name)).append("\n");
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

