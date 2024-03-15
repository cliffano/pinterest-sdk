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

import java.util.*;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * Board media.
 **/
@ApiModel(description = "Board media.")
public class BoardMedia {
  
  @SerializedName("image_cover_url")
  private String imageCoverUrl = null;
  @SerializedName("pin_thumbnail_urls")
  private List<String> pinThumbnailUrls = null;

  /**
   * Board cover image.
   **/
  @ApiModelProperty(value = "Board cover image.")
  public String getImageCoverUrl() {
    return imageCoverUrl;
  }
  public void setImageCoverUrl(String imageCoverUrl) {
    this.imageCoverUrl = imageCoverUrl;
  }

  /**
   * Board pin thumbnail urls.
   **/
  @ApiModelProperty(value = "Board pin thumbnail urls.")
  public List<String> getPinThumbnailUrls() {
    return pinThumbnailUrls;
  }
  public void setPinThumbnailUrls(List<String> pinThumbnailUrls) {
    this.pinThumbnailUrls = pinThumbnailUrls;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BoardMedia boardMedia = (BoardMedia) o;
    return (this.imageCoverUrl == null ? boardMedia.imageCoverUrl == null : this.imageCoverUrl.equals(boardMedia.imageCoverUrl)) &&
        (this.pinThumbnailUrls == null ? boardMedia.pinThumbnailUrls == null : this.pinThumbnailUrls.equals(boardMedia.pinThumbnailUrls));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.imageCoverUrl == null ? 0: this.imageCoverUrl.hashCode());
    result = 31 * result + (this.pinThumbnailUrls == null ? 0: this.pinThumbnailUrls.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class BoardMedia {\n");
    
    sb.append("  imageCoverUrl: ").append(imageCoverUrl).append("\n");
    sb.append("  pinThumbnailUrls: ").append(pinThumbnailUrls).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
