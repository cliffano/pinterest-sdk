package org.openapitools.model;

import java.net.URI;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import org.openapitools.model.MediaUploadAllOfUploadParameters;
import org.openapitools.model.MediaUploadType;
import org.openapitools.jackson.nullable.JsonNullable;
import java.time.OffsetDateTime;
import javax.validation.Valid;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;


import java.util.*;
import javax.annotation.Generated;

/**
 * Media upload that has been registered but not uploaded/processed yet.
 */

@Schema(name = "MediaUpload", description = "Media upload that has been registered but not uploaded/processed yet.")
@Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2024-03-14T23:15:39.458648915Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class MediaUpload {

  private String mediaId;

  private MediaUploadType mediaType;

  private String uploadUrl;

  private MediaUploadAllOfUploadParameters uploadParameters;

  public MediaUpload mediaId(String mediaId) {
    this.mediaId = mediaId;
    return this;
  }

  /**
   * Unique identifier for this media upload. Used to track status and for attaching during Pin creation.
   * @return mediaId
  */
  
  @Schema(name = "media_id", description = "Unique identifier for this media upload. Used to track status and for attaching during Pin creation.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("media_id")
  public String getMediaId() {
    return mediaId;
  }

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
  */
  @Valid 
  @Schema(name = "media_type", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("media_type")
  public MediaUploadType getMediaType() {
    return mediaType;
  }

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
  */
  
  @Schema(name = "upload_url", example = "https://pinterest-media-upload.s3-accelerate.amazonaws.com/", description = "The URL where you will POST your media file.", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("upload_url")
  public String getUploadUrl() {
    return uploadUrl;
  }

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
  */
  @Valid 
  @Schema(name = "upload_parameters", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("upload_parameters")
  public MediaUploadAllOfUploadParameters getUploadParameters() {
    return uploadParameters;
  }

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

