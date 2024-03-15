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

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class AdPreviewCreateFromImage {
  
  @SerializedName("image_url")
  private String imageUrl = null;
  @SerializedName("title")
  private String title = null;

  /**
   * Image URL.
   **/
  @ApiModelProperty(required = true, value = "Image URL.")
  public String getImageUrl() {
    return imageUrl;
  }
  public void setImageUrl(String imageUrl) {
    this.imageUrl = imageUrl;
  }

  /**
   * Title displayed below ad.
   **/
  @ApiModelProperty(required = true, value = "Title displayed below ad.")
  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdPreviewCreateFromImage adPreviewCreateFromImage = (AdPreviewCreateFromImage) o;
    return (this.imageUrl == null ? adPreviewCreateFromImage.imageUrl == null : this.imageUrl.equals(adPreviewCreateFromImage.imageUrl)) &&
        (this.title == null ? adPreviewCreateFromImage.title == null : this.title.equals(adPreviewCreateFromImage.title));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.imageUrl == null ? 0: this.imageUrl.hashCode());
    result = 31 * result + (this.title == null ? 0: this.title.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdPreviewCreateFromImage {\n");
    
    sb.append("  imageUrl: ").append(imageUrl).append("\n");
    sb.append("  title: ").append(title).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
