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
 * Image URL-based media source
 */
@ApiModel(description = "Image URL-based media source")
@JsonPropertyOrder({
  PinMediaSourceImageURL.JSON_PROPERTY_SOURCE_TYPE,
  PinMediaSourceImageURL.JSON_PROPERTY_URL
})
@JsonTypeName("PinMediaSourceImageURL")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-07-01T11:59:34.708172Z[Etc/UTC]")
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
    @ApiModelProperty(required = true, value = "")
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
    @ApiModelProperty(required = true, value = "")
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
            Objects.equals(this.url, pinMediaSourceImageURL.url);
    }

    @Override
    public int hashCode() {
        return Objects.hash(sourceType, url);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class PinMediaSourceImageURL {\n");
        sb.append("    sourceType: ").append(toIndentedString(sourceType)).append("\n");
        sb.append("    url: ").append(toIndentedString(url)).append("\n");
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
