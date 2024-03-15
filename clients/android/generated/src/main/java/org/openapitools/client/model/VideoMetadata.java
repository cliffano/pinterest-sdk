/**
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

package org.openapitools.client.model;

import java.math.BigDecimal;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class VideoMetadata {
  
  @SerializedName("item_type")
  private String itemType = null;
  @SerializedName("cover_image_url")
  private String coverImageUrl = null;
  @SerializedName("video_url")
  private String videoUrl = null;
  @SerializedName("duration")
  private BigDecimal duration = null;
  @SerializedName("height")
  private Integer height = null;
  @SerializedName("width")
  private Integer width = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public String getItemType() {
    return itemType;
  }
  public void setItemType(String itemType) {
    this.itemType = itemType;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getCoverImageUrl() {
    return coverImageUrl;
  }
  public void setCoverImageUrl(String coverImageUrl) {
    this.coverImageUrl = coverImageUrl;
  }

  /**
   * Video url (720p). </p><strong>Note:</strong> This field is limited and not available to all apps.
   **/
  @ApiModelProperty(value = "Video url (720p). </p><strong>Note:</strong> This field is limited and not available to all apps.")
  public String getVideoUrl() {
    return videoUrl;
  }
  public void setVideoUrl(String videoUrl) {
    this.videoUrl = videoUrl;
  }

  /**
   * Duration (in milliseconds)
   **/
  @ApiModelProperty(value = "Duration (in milliseconds)")
  public BigDecimal getDuration() {
    return duration;
  }
  public void setDuration(BigDecimal duration) {
    this.duration = duration;
  }

  /**
   * Height (in pixels)
   **/
  @ApiModelProperty(value = "Height (in pixels)")
  public Integer getHeight() {
    return height;
  }
  public void setHeight(Integer height) {
    this.height = height;
  }

  /**
   * Width (in pixels)
   **/
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
    VideoMetadata videoMetadata = (VideoMetadata) o;
    return (this.itemType == null ? videoMetadata.itemType == null : this.itemType.equals(videoMetadata.itemType)) &&
        (this.coverImageUrl == null ? videoMetadata.coverImageUrl == null : this.coverImageUrl.equals(videoMetadata.coverImageUrl)) &&
        (this.videoUrl == null ? videoMetadata.videoUrl == null : this.videoUrl.equals(videoMetadata.videoUrl)) &&
        (this.duration == null ? videoMetadata.duration == null : this.duration.equals(videoMetadata.duration)) &&
        (this.height == null ? videoMetadata.height == null : this.height.equals(videoMetadata.height)) &&
        (this.width == null ? videoMetadata.width == null : this.width.equals(videoMetadata.width));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.itemType == null ? 0: this.itemType.hashCode());
    result = 31 * result + (this.coverImageUrl == null ? 0: this.coverImageUrl.hashCode());
    result = 31 * result + (this.videoUrl == null ? 0: this.videoUrl.hashCode());
    result = 31 * result + (this.duration == null ? 0: this.duration.hashCode());
    result = 31 * result + (this.height == null ? 0: this.height.hashCode());
    result = 31 * result + (this.width == null ? 0: this.width.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class VideoMetadata {\n");
    
    sb.append("  itemType: ").append(itemType).append("\n");
    sb.append("  coverImageUrl: ").append(coverImageUrl).append("\n");
    sb.append("  videoUrl: ").append(videoUrl).append("\n");
    sb.append("  duration: ").append(duration).append("\n");
    sb.append("  height: ").append(height).append("\n");
    sb.append("  width: ").append(width).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
