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
 * Base64-encoded image media source
 */
@ApiModel(description = "Base64-encoded image media source")
@JsonPropertyOrder({
  PinMediaSourceImageBase64.JSON_PROPERTY_SOURCE_TYPE,
  PinMediaSourceImageBase64.JSON_PROPERTY_CONTENT_TYPE,
  PinMediaSourceImageBase64.JSON_PROPERTY_DATA
})
@JsonTypeName("PinMediaSourceImageBase64")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-07-01T11:59:34.708172Z[Etc/UTC]")
@Introspected
public class PinMediaSourceImageBase64 {
    /**
     * Gets or Sets sourceType
     */
    public enum SourceTypeEnum {
        IMAGE_BASE64("image_base64");

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

    /**
     * Gets or Sets contentType
     */
    public enum ContentTypeEnum {
        JPEG("image/jpeg"),
        PNG("image/png");

        private String value;

        ContentTypeEnum(String value) {
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
        public static ContentTypeEnum fromValue(String value) {
            for (ContentTypeEnum b : ContentTypeEnum.values()) {
                if (b.value.equals(value)) {
                    return b;
                }
            }
            throw new IllegalArgumentException("Unexpected value '" + value + "'");
        }
    }
    public static final String JSON_PROPERTY_CONTENT_TYPE = "content_type";
    private ContentTypeEnum contentType;

    public static final String JSON_PROPERTY_DATA = "data";
    private String data;

    public PinMediaSourceImageBase64(SourceTypeEnum sourceType, ContentTypeEnum contentType, String data) {
        this.sourceType = sourceType;
        this.contentType = contentType;
        this.data = data;
    }

    public PinMediaSourceImageBase64 sourceType(SourceTypeEnum sourceType) {
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

    public PinMediaSourceImageBase64 contentType(ContentTypeEnum contentType) {
        this.contentType = contentType;
        return this;
    }

    /**
     * Get contentType
     * @return contentType
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_CONTENT_TYPE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public ContentTypeEnum getContentType() {
        return contentType;
    }

    @JsonProperty(JSON_PROPERTY_CONTENT_TYPE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setContentType(ContentTypeEnum contentType) {
        this.contentType = contentType;
    }

    public PinMediaSourceImageBase64 data(String data) {
        this.data = data;
        return this;
    }

    /**
     * Get data
     * @return data
     **/
    @NotNull
    @Pattern(regexp="[a-zA-Z0-9+/=]+")
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_DATA)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public String getData() {
        return data;
    }

    @JsonProperty(JSON_PROPERTY_DATA)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setData(String data) {
        this.data = data;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        PinMediaSourceImageBase64 pinMediaSourceImageBase64 = (PinMediaSourceImageBase64) o;
        return Objects.equals(this.sourceType, pinMediaSourceImageBase64.sourceType) &&
            Objects.equals(this.contentType, pinMediaSourceImageBase64.contentType) &&
            Objects.equals(this.data, pinMediaSourceImageBase64.data);
    }

    @Override
    public int hashCode() {
        return Objects.hash(sourceType, contentType, data);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class PinMediaSourceImageBase64 {\n");
        sb.append("    sourceType: ").append(toIndentedString(sourceType)).append("\n");
        sb.append("    contentType: ").append(toIndentedString(contentType)).append("\n");
        sb.append("    data: ").append(toIndentedString(data)).append("\n");
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
