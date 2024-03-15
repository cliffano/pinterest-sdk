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
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.math.BigDecimal;
import org.openapitools.model.ImageMetadataImages;
import org.openapitools.model.PinMedia;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Pin with video.
 */
@ApiModel(description = "Pin with video.")
@JsonPropertyOrder({
  PinMediaWithVideo.JSON_PROPERTY_IMAGES,
  PinMediaWithVideo.JSON_PROPERTY_COVER_IMAGE_URL,
  PinMediaWithVideo.JSON_PROPERTY_VIDEO_URL,
  PinMediaWithVideo.JSON_PROPERTY_DURATION,
  PinMediaWithVideo.JSON_PROPERTY_HEIGHT,
  PinMediaWithVideo.JSON_PROPERTY_WIDTH
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class PinMediaWithVideo extends PinMedia  {
  public static final String JSON_PROPERTY_IMAGES = "images";
  @JsonProperty(JSON_PROPERTY_IMAGES)
  private ImageMetadataImages images;

  public static final String JSON_PROPERTY_COVER_IMAGE_URL = "cover_image_url";
  @JsonProperty(JSON_PROPERTY_COVER_IMAGE_URL)
  private String coverImageUrl;

  public static final String JSON_PROPERTY_VIDEO_URL = "video_url";
  @JsonProperty(JSON_PROPERTY_VIDEO_URL)
  private String videoUrl;

  public static final String JSON_PROPERTY_DURATION = "duration";
  @JsonProperty(JSON_PROPERTY_DURATION)
  private BigDecimal duration;

  public static final String JSON_PROPERTY_HEIGHT = "height";
  @JsonProperty(JSON_PROPERTY_HEIGHT)
  private Integer height;

  public static final String JSON_PROPERTY_WIDTH = "width";
  @JsonProperty(JSON_PROPERTY_WIDTH)
  private Integer width;

  public PinMediaWithVideo images(ImageMetadataImages images) {
    this.images = images;
    return this;
  }

  /**
   * Get images
   * @return images
   **/
  @JsonProperty(value = "images")
  @ApiModelProperty(value = "")
  @Valid 
  public ImageMetadataImages getImages() {
    return images;
  }

  public void setImages(ImageMetadataImages images) {
    this.images = images;
  }

  public PinMediaWithVideo coverImageUrl(String coverImageUrl) {
    this.coverImageUrl = coverImageUrl;
    return this;
  }

  /**
   * Get coverImageUrl
   * @return coverImageUrl
   **/
  @JsonProperty(value = "cover_image_url")
  @ApiModelProperty(value = "")
  
  public String getCoverImageUrl() {
    return coverImageUrl;
  }

  public void setCoverImageUrl(String coverImageUrl) {
    this.coverImageUrl = coverImageUrl;
  }

  public PinMediaWithVideo videoUrl(String videoUrl) {
    this.videoUrl = videoUrl;
    return this;
  }

  /**
   * Video url (720p). &lt;/p&gt;&lt;strong&gt;Note:&lt;/strong&gt; This field is limited and not available to all apps.
   * @return videoUrl
   **/
  @JsonProperty(value = "video_url")
  @ApiModelProperty(value = "Video url (720p). </p><strong>Note:</strong> This field is limited and not available to all apps.")
  
  public String getVideoUrl() {
    return videoUrl;
  }

  public void setVideoUrl(String videoUrl) {
    this.videoUrl = videoUrl;
  }

  public PinMediaWithVideo duration(BigDecimal duration) {
    this.duration = duration;
    return this;
  }

  /**
   * Duration (in milliseconds)
   * @return duration
   **/
  @JsonProperty(value = "duration")
  @ApiModelProperty(value = "Duration (in milliseconds)")
  @Valid 
  public BigDecimal getDuration() {
    return duration;
  }

  public void setDuration(BigDecimal duration) {
    this.duration = duration;
  }

  public PinMediaWithVideo height(Integer height) {
    this.height = height;
    return this;
  }

  /**
   * Height (in pixels)
   * @return height
   **/
  @JsonProperty(value = "height")
  @ApiModelProperty(value = "Height (in pixels)")
  
  public Integer getHeight() {
    return height;
  }

  public void setHeight(Integer height) {
    this.height = height;
  }

  public PinMediaWithVideo width(Integer width) {
    this.width = width;
    return this;
  }

  /**
   * Width (in pixels)
   * @return width
   **/
  @JsonProperty(value = "width")
  @ApiModelProperty(value = "Width (in pixels)")
  
  public Integer getWidth() {
    return width;
  }

  public void setWidth(Integer width) {
    this.width = width;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PinMediaWithVideo pinMediaWithVideo = (PinMediaWithVideo) o;
    return super.equals(o) && Objects.equals(this.images, pinMediaWithVideo.images) &&
        Objects.equals(this.coverImageUrl, pinMediaWithVideo.coverImageUrl) &&
        Objects.equals(this.videoUrl, pinMediaWithVideo.videoUrl) &&
        Objects.equals(this.duration, pinMediaWithVideo.duration) &&
        Objects.equals(this.height, pinMediaWithVideo.height) &&
        Objects.equals(this.width, pinMediaWithVideo.width);
  }

  @Override
  public int hashCode() {
    return Objects.hash(super.hashCode(), images, super.hashCode(), coverImageUrl, super.hashCode(), videoUrl, super.hashCode(), duration, super.hashCode(), height, super.hashCode(), width);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PinMediaWithVideo {\n");
    sb.append("    ").append(toIndentedString(super.toString())).append("\n");
    sb.append("    images: ").append(toIndentedString(images)).append("\n");
    sb.append("    coverImageUrl: ").append(toIndentedString(coverImageUrl)).append("\n");
    sb.append("    videoUrl: ").append(toIndentedString(videoUrl)).append("\n");
    sb.append("    duration: ").append(toIndentedString(duration)).append("\n");
    sb.append("    height: ").append(toIndentedString(height)).append("\n");
    sb.append("    width: ").append(toIndentedString(width)).append("\n");
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
