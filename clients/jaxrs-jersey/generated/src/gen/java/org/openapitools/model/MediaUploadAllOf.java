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
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.MediaUploadAllOfUploadParameters;
import org.openapitools.model.MediaUploadType;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * MediaUploadAllOf
 */
@JsonPropertyOrder({
  MediaUploadAllOf.JSON_PROPERTY_MEDIA_ID,
  MediaUploadAllOf.JSON_PROPERTY_MEDIA_TYPE,
  MediaUploadAllOf.JSON_PROPERTY_UPLOAD_URL,
  MediaUploadAllOf.JSON_PROPERTY_UPLOAD_PARAMETERS
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2022-07-01T12:00:52.037403Z[Etc/UTC]")
public class MediaUploadAllOf   {
  public static final String JSON_PROPERTY_MEDIA_ID = "media_id";
  @JsonProperty(JSON_PROPERTY_MEDIA_ID)
  private String mediaId;

  public static final String JSON_PROPERTY_MEDIA_TYPE = "media_type";
  @JsonProperty(JSON_PROPERTY_MEDIA_TYPE)
  private MediaUploadType mediaType;

  public static final String JSON_PROPERTY_UPLOAD_URL = "upload_url";
  @JsonProperty(JSON_PROPERTY_UPLOAD_URL)
  private String uploadUrl;

  public static final String JSON_PROPERTY_UPLOAD_PARAMETERS = "upload_parameters";
  @JsonProperty(JSON_PROPERTY_UPLOAD_PARAMETERS)
  private MediaUploadAllOfUploadParameters uploadParameters;

  public MediaUploadAllOf mediaId(String mediaId) {
    this.mediaId = mediaId;
    return this;
  }

  /**
   * Unique identifier for this media upload. Used to track status and for attaching during Pin creation.
   * @return mediaId
   **/
  @JsonProperty(value = "media_id")
  @ApiModelProperty(value = "Unique identifier for this media upload. Used to track status and for attaching during Pin creation.")
  
  public String getMediaId() {
    return mediaId;
  }

  public void setMediaId(String mediaId) {
    this.mediaId = mediaId;
  }

  public MediaUploadAllOf mediaType(MediaUploadType mediaType) {
    this.mediaType = mediaType;
    return this;
  }

  /**
   * Get mediaType
   * @return mediaType
   **/
  @JsonProperty(value = "media_type")
  @ApiModelProperty(example = "video", value = "")
  
  public MediaUploadType getMediaType() {
    return mediaType;
  }

  public void setMediaType(MediaUploadType mediaType) {
    this.mediaType = mediaType;
  }

  public MediaUploadAllOf uploadUrl(String uploadUrl) {
    this.uploadUrl = uploadUrl;
    return this;
  }

  /**
   * The URL where you will POST your media file.
   * @return uploadUrl
   **/
  @JsonProperty(value = "upload_url")
  @ApiModelProperty(example = "https://pinterest-media-upload.s3-accelerate.amazonaws.com/", value = "The URL where you will POST your media file.")
  
  public String getUploadUrl() {
    return uploadUrl;
  }

  public void setUploadUrl(String uploadUrl) {
    this.uploadUrl = uploadUrl;
  }

  public MediaUploadAllOf uploadParameters(MediaUploadAllOfUploadParameters uploadParameters) {
    this.uploadParameters = uploadParameters;
    return this;
  }

  /**
   * Get uploadParameters
   * @return uploadParameters
   **/
  @JsonProperty(value = "upload_parameters")
  @ApiModelProperty(value = "")
  @Valid 
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

