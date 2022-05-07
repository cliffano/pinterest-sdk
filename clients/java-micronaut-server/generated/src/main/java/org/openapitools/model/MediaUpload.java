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
import org.openapitools.model.MediaUploadAllOf;
import org.openapitools.model.MediaUploadAllOfUploadParameters;
import org.openapitools.model.MediaUploadType;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * Media upload that has been registered but not uploaded/processed yet.
 */
@ApiModel(description = "Media upload that has been registered but not uploaded/processed yet.")
@JsonPropertyOrder({
  MediaUpload.JSON_PROPERTY_MEDIA_ID,
  MediaUpload.JSON_PROPERTY_MEDIA_TYPE,
  MediaUpload.JSON_PROPERTY_UPLOAD_URL,
  MediaUpload.JSON_PROPERTY_UPLOAD_PARAMETERS
})
@JsonTypeName("MediaUpload")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-05-07T06:38:54.481854Z[Etc/UTC]")
@Introspected
public class MediaUpload {
    public static final String JSON_PROPERTY_MEDIA_ID = "media_id";
    private String mediaId;

    public static final String JSON_PROPERTY_MEDIA_TYPE = "media_type";
    private MediaUploadType mediaType;

    public static final String JSON_PROPERTY_UPLOAD_URL = "upload_url";
    private String uploadUrl;

    public static final String JSON_PROPERTY_UPLOAD_PARAMETERS = "upload_parameters";
    private MediaUploadAllOfUploadParameters uploadParameters;

    public MediaUpload() {
    }

    public MediaUpload mediaId(String mediaId) {
        this.mediaId = mediaId;
        return this;
    }

    /**
     * Unique identifier for this media upload. Used to track status and for attaching during Pin creation.
     * @return mediaId
     **/
    @Nullable
    @ApiModelProperty(value = "Unique identifier for this media upload. Used to track status and for attaching during Pin creation.")
    @JsonProperty(JSON_PROPERTY_MEDIA_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getMediaId() {
        return mediaId;
    }

    @JsonProperty(JSON_PROPERTY_MEDIA_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setMediaId(String mediaId) {
        this.mediaId = mediaId;
    }

    public MediaUpload mediaType(MediaUploadType mediaType) {
        this.mediaType = mediaType;
        return this;
    }

    /**
     * Get mediaType
     * @return mediaType
     **/
    @Valid
    @Nullable
    @ApiModelProperty(example = "video", value = "")
    @JsonProperty(JSON_PROPERTY_MEDIA_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public MediaUploadType getMediaType() {
        return mediaType;
    }

    @JsonProperty(JSON_PROPERTY_MEDIA_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setMediaType(MediaUploadType mediaType) {
        this.mediaType = mediaType;
    }

    public MediaUpload uploadUrl(String uploadUrl) {
        this.uploadUrl = uploadUrl;
        return this;
    }

    /**
     * The URL where you will POST your media file.
     * @return uploadUrl
     **/
    @Nullable
    @ApiModelProperty(example = "https://pinterest-media-upload.s3-accelerate.amazonaws.com/", value = "The URL where you will POST your media file.")
    @JsonProperty(JSON_PROPERTY_UPLOAD_URL)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getUploadUrl() {
        return uploadUrl;
    }

    @JsonProperty(JSON_PROPERTY_UPLOAD_URL)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setUploadUrl(String uploadUrl) {
        this.uploadUrl = uploadUrl;
    }

    public MediaUpload uploadParameters(MediaUploadAllOfUploadParameters uploadParameters) {
        this.uploadParameters = uploadParameters;
        return this;
    }

    /**
     * Get uploadParameters
     * @return uploadParameters
     **/
    @Valid
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_UPLOAD_PARAMETERS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public MediaUploadAllOfUploadParameters getUploadParameters() {
        return uploadParameters;
    }

    @JsonProperty(JSON_PROPERTY_UPLOAD_PARAMETERS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setUploadParameters(MediaUploadAllOfUploadParameters uploadParameters) {
        this.uploadParameters = uploadParameters;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        MediaUpload mediaUpload = (MediaUpload) o;
        return Objects.equals(this.mediaId, mediaUpload.mediaId) &&
            Objects.equals(this.mediaType, mediaUpload.mediaType) &&
            Objects.equals(this.uploadUrl, mediaUpload.uploadUrl) &&
            Objects.equals(this.uploadParameters, mediaUpload.uploadParameters);
    }

    @Override
    public int hashCode() {
        return Objects.hash(mediaId, mediaType, uploadUrl, uploadParameters);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class MediaUpload {\n");
        sb.append("    mediaId: ").append(toIndentedString(mediaId)).append("\n");
        sb.append("    mediaType: ").append(toIndentedString(mediaType)).append("\n");
        sb.append("    uploadUrl: ").append(toIndentedString(uploadUrl)).append("\n");
        sb.append("    uploadParameters: ").append(toIndentedString(uploadParameters)).append("\n");
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
