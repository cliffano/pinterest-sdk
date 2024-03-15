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
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * Image URL-based media source
 */
@Schema(name = "PinMediaSourceImageURL", description = "Image URL-based media source")
@JsonPropertyOrder({
  PinMediaSourceImageURL.JSON_PROPERTY_SOURCE_TYPE,
  PinMediaSourceImageURL.JSON_PROPERTY_URL,
  PinMediaSourceImageURL.JSON_PROPERTY_IS_STANDARD
})
@JsonTypeName("PinMediaSourceImageURL")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class PinMediaSourceImageURL {
    /**
     * Gets or Sets sourceType
     */
    public enum SourceTypeEnum {
        IMAGE_URL("image_url");

        private String value;

        SourceTypeEnum(String value) {
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
        public static SourceTypeEnum fromValue(String value) {
            for (SourceTypeEnum b : SourceTypeEnum.values()) {
                if (b.value.equals(value)) {
                    return b;
                }
            }
            throw new IllegalArgumentException("Unexpected value '" + value + "'");
        }
    }
    public static final String JSON_PROPERTY_SOURCE_TYPE = "source_type";
    private SourceTypeEnum sourceType;

    public static final String JSON_PROPERTY_URL = "url";
    private String url;

    public static final String JSON_PROPERTY_IS_STANDARD = "is_standard";
    private Boolean isStandard = true;

    public PinMediaSourceImageURL(SourceTypeEnum sourceType, String url) {
        this.sourceType = sourceType;
        this.url = url;
    }

    public PinMediaSourceImageURL sourceType(SourceTypeEnum sourceType) {
        this.sourceType = sourceType;
        return this;
    }

    /**
     * Get sourceType
     * @return sourceType
     **/
    @NotNull
    @Schema(name = "source_type", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_SOURCE_TYPE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public SourceTypeEnum getSourceType() {
        return sourceType;
    }

    @JsonProperty(JSON_PROPERTY_SOURCE_TYPE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setSourceType(SourceTypeEnum sourceType) {
        this.sourceType = sourceType;
    }

    public PinMediaSourceImageURL url(String url) {
        this.url = url;
        return this;
    }

    /**
     * Get url
     * @return url
     **/
    @NotNull
    @Schema(name = "url", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_URL)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getUrl() {
        return url;
    }

    @JsonProperty(JSON_PROPERTY_URL)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setUrl(String url) {
        this.url = url;
    }

    public PinMediaSourceImageURL isStandard(Boolean isStandard) {
        this.isStandard = isStandard;
        return this;
    }

    /**
     * Set the parameter to false to create the new simplified Pin instead of the standard pin. Currently the field is only available to a list of beta users.
     * @return isStandard
     **/
    @Nullable
    @Schema(name = "is_standard", description = "Set the parameter to false to create the new simplified Pin instead of the standard pin. Currently the field is only available to a list of beta users.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_IS_STANDARD)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Boolean getIsStandard() {
        return isStandard;
    }

    @JsonProperty(JSON_PROPERTY_IS_STANDARD)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setIsStandard(Boolean isStandard) {
        this.isStandard = isStandard;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        PinMediaSourceImageURL pinMediaSourceImageURL = (PinMediaSourceImageURL) o;
        return Objects.equals(this.sourceType, pinMediaSourceImageURL.sourceType) &&
            Objects.equals(this.url, pinMediaSourceImageURL.url) &&
            Objects.equals(this.isStandard, pinMediaSourceImageURL.isStandard);
    }

    @Override
    public int hashCode() {
        return Objects.hash(sourceType, url, isStandard);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class PinMediaSourceImageURL {\n");
        sb.append("    sourceType: ").append(toIndentedString(sourceType)).append("\n");
        sb.append("    url: ").append(toIndentedString(url)).append("\n");
        sb.append("    isStandard: ").append(toIndentedString(isStandard)).append("\n");
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

