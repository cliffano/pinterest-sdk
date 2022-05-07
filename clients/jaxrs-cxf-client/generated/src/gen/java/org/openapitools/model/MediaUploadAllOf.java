package org.openapitools.model;

import org.openapitools.model.MediaUploadAllOfUploadParameters;
import org.openapitools.model.MediaUploadType;

import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.JsonProperty;

public class MediaUploadAllOf  {
  
  @ApiModelProperty(value = "Unique identifier for this media upload. Used to track status and for attaching during Pin creation.")
 /**
   * Unique identifier for this media upload. Used to track status and for attaching during Pin creation.
  **/
  private String mediaId;

  @ApiModelProperty(example = "video", value = "")
  private MediaUploadType mediaType;

  @ApiModelProperty(example = "https://pinterest-media-upload.s3-accelerate.amazonaws.com/", value = "The URL where you will POST your media file.")
 /**
   * The URL where you will POST your media file.
  **/
  private String uploadUrl;

  @ApiModelProperty(value = "")
  private MediaUploadAllOfUploadParameters uploadParameters;
 /**
   * Unique identifier for this media upload. Used to track status and for attaching during Pin creation.
   * @return mediaId
  **/
  @JsonProperty("media_id")
  public String getMediaId() {
    return mediaId;
  }

  public void setMediaId(String mediaId) {
    this.mediaId = mediaId;
  }

  public MediaUploadAllOf mediaId(String mediaId) {
    this.mediaId = mediaId;
    return this;
  }

 /**
   * Get mediaType
   * @return mediaType
  **/
  @JsonProperty("media_type")
  public MediaUploadType getMediaType() {
    return mediaType;
  }

  public void setMediaType(MediaUploadType mediaType) {
    this.mediaType = mediaType;
  }

  public MediaUploadAllOf mediaType(MediaUploadType mediaType) {
    this.mediaType = mediaType;
    return this;
  }

 /**
   * The URL where you will POST your media file.
   * @return uploadUrl
  **/
  @JsonProperty("upload_url")
  public String getUploadUrl() {
    return uploadUrl;
  }

  public void setUploadUrl(String uploadUrl) {
    this.uploadUrl = uploadUrl;
  }

  public MediaUploadAllOf uploadUrl(String uploadUrl) {
    this.uploadUrl = uploadUrl;
    return this;
  }

 /**
   * Get uploadParameters
   * @return uploadParameters
  **/
  @JsonProperty("upload_parameters")
  public MediaUploadAllOfUploadParameters getUploadParameters() {
    return uploadParameters;
  }

  public void setUploadParameters(MediaUploadAllOfUploadParameters uploadParameters) {
    this.uploadParameters = uploadParameters;
  }

  public MediaUploadAllOf uploadParameters(MediaUploadAllOfUploadParameters uploadParameters) {
    this.uploadParameters = uploadParameters;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MediaUploadAllOf {\n");
    
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

