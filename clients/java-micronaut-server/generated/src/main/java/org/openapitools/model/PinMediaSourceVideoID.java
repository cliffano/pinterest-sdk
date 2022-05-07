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
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * Video ID-based media source
 */
@ApiModel(description = "Video ID-based media source")
@JsonPropertyOrder({
  PinMediaSourceVideoID.JSON_PROPERTY_SOURCE_TYPE,
  PinMediaSourceVideoID.JSON_PROPERTY_COVER_IMAGE_URL,
  PinMediaSourceVideoID.JSON_PROPERTY_MEDIA_ID
})
@JsonTypeName("PinMediaSourceVideoID")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-05-07T06:38:54.481854Z[Etc/UTC]")
@Introspected
public class PinMediaSourceVideoID {
    /**
     * Gets or Sets sourceType
     */
    public enum SourceTypeEnum {
        VIDEO_ID("video_id");

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

    public static final String JSON_PROPERTY_COVER_IMAGE_URL = "cover_image_url";
    private String coverImageUrl;

    public static final String JSON_PROPERTY_MEDIA_ID = "media_id";
    private String mediaId;

    public PinMediaSourceVideoID(SourceTypeEnum sourceType, String coverImageUrl, String mediaId) {
        this.sourceType = sourceType;
        this.coverImageUrl = coverImageUrl;
        this.mediaId = mediaId;
    }

    public PinMediaSourceVideoID sourceType(SourceTypeEnum sourceType) {
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

    public PinMediaSourceVideoID coverImageUrl(String coverImageUrl) {
        this.coverImageUrl = coverImageUrl;
        return this;
    }

    /**
     * Get coverImageUrl
     * @return coverImageUrl
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_COVER_IMAGE_URL)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public String getCoverImageUrl() {
        return coverImageUrl;
    }

    @JsonProperty(JSON_PROPERTY_COVER_IMAGE_URL)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setCoverImageUrl(String coverImageUrl) {
        this.coverImageUrl = coverImageUrl;
    }

    public PinMediaSourceVideoID mediaId(String mediaId) {
        this.mediaId = mediaId;
        return this;
    }

    /**
     * Get mediaId
     * @return mediaId
     **/
    @NotNull
    @Pattern(regexp="^\\d+$")
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_MEDIA_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public String getMediaId() {
        return mediaId;
    }

    @JsonProperty(JSON_PROPERTY_MEDIA_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setMediaId(String mediaId) {
        this.mediaId = mediaId;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        PinMediaSourceVideoID pinMediaSourceVideoID = (PinMediaSourceVideoID) o;
        return Objects.equals(this.sourceType, pinMediaSourceVideoID.sourceType) &&
            Objects.equals(this.coverImageUrl, pinMediaSourceVideoID.coverImageUrl) &&
            Objects.equals(this.mediaId, pinMediaSourceVideoID.mediaId);
    }

    @Override
    public int hashCode() {
        return Objects.hash(sourceType, coverImageUrl, mediaId);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class PinMediaSourceVideoID {\n");
        sb.append("    sourceType: ").append(toIndentedString(sourceType)).append("\n");
        sb.append("    coverImageUrl: ").append(toIndentedString(coverImageUrl)).append("\n");
        sb.append("    mediaId: ").append(toIndentedString(mediaId)).append("\n");
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
