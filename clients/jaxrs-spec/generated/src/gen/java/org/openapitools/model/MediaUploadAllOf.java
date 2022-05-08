package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.MediaUploadAllOfUploadParameters;
import org.openapitools.model.MediaUploadType;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonTypeName;



@JsonTypeName("MediaUpload_allOf")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJAXRSSpecServerCodegen", date = "2022-05-08T00:33:54.705491Z[Etc/UTC]")public class MediaUploadAllOf   {
  
  private @Valid String mediaId;
  private @Valid MediaUploadType mediaType;
  private @Valid String uploadUrl;
  private @Valid MediaUploadAllOfUploadParameters uploadParameters;

  /**
   * Unique identifier for this media upload. Used to track status and for attaching during Pin creation.
   **/
  public MediaUploadAllOf mediaId(String mediaId) {
    this.mediaId = mediaId;
    return this;
  }

  

  
  @ApiModelProperty(value = "Unique identifier for this media upload. Used to track status and for attaching during Pin creation.")
  @JsonProperty("media_id")
  public String getMediaId() {
    return mediaId;
  }

  @JsonProperty("media_id")
  public void setMediaId(String mediaId) {
    this.mediaId = mediaId;
  }

/**
   **/
  public MediaUploadAllOf mediaType(MediaUploadType mediaType) {
    this.mediaType = mediaType;
    return this;
  }

  

  
  @ApiModelProperty(example = "video", value = "")
  @JsonProperty("media_type")
  public MediaUploadType getMediaType() {
    return mediaType;
  }

  @JsonProperty("media_type")
  public void setMediaType(MediaUploadType mediaType) {
    this.mediaType = mediaType;
  }

/**
   * The URL where you will POST your media file.
   **/
  public MediaUploadAllOf uploadUrl(String uploadUrl) {
    this.uploadUrl = uploadUrl;
    return this;
  }

  

  
  @ApiModelProperty(example = "https://pinterest-media-upload.s3-accelerate.amazonaws.com/", value = "The URL where you will POST your media file.")
  @JsonProperty("upload_url")
  public String getUploadUrl() {
    return uploadUrl;
  }

  @JsonProperty("upload_url")
  public void setUploadUrl(String uploadUrl) {
    this.uploadUrl = uploadUrl;
  }

/**
   **/
  public MediaUploadAllOf uploadParameters(MediaUploadAllOfUploadParameters uploadParameters) {
    this.uploadParameters = uploadParameters;
    return this;
  }

  

  
  @ApiModelProperty(value = "")
  @JsonProperty("upload_parameters")
  public MediaUploadAllOfUploadParameters getUploadParameters() {
    return uploadParameters;
  }

  @JsonProperty("upload_parameters")
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
    MediaUploadAllOf mediaUploadAllOf = (MediaUploadAllOf) o;
    return Objects.equals(this.mediaId, mediaUploadAllOf.mediaId) &&
        Objects.equals(this.mediaType, mediaUploadAllOf.mediaType) &&
        Objects.equals(this.uploadUrl, mediaUploadAllOf.uploadUrl) &&
        Objects.equals(this.uploadParameters, mediaUploadAllOf.uploadParameters);
  }

  @Override
  public int hashCode() {
    return Objects.hash(mediaId, mediaType, uploadUrl, uploadParameters);
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }


}

