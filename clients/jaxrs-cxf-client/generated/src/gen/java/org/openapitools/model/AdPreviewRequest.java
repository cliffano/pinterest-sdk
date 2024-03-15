package org.openapitools.model;

import org.openapitools.model.AdPreviewCreateFromImage;
import org.openapitools.model.AdPreviewCreateFromPin;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class AdPreviewRequest  {
  
  @ApiModelProperty(example = "https://somewebsite.com/someimage.jpg", required = true, value = "Image URL.")
 /**
   * Image URL.
  **/
  private String imageUrl;

  @ApiModelProperty(example = "My Preview Image", required = true, value = "Title displayed below ad.")
 /**
   * Title displayed below ad.
  **/
  private String title;

  @ApiModelProperty(example = "7389479023", required = true, value = "Pin ID.")
 /**
   * Pin ID.
  **/
  private String pinId;
 /**
   * Image URL.
   * @return imageUrl
  **/
  @JsonProperty("image_url")
  public String getImageUrl() {
    return imageUrl;
  }

  public void setImageUrl(String imageUrl) {
    this.imageUrl = imageUrl;
  }

  public AdPreviewRequest imageUrl(String imageUrl) {
    this.imageUrl = imageUrl;
    return this;
  }

 /**
   * Title displayed below ad.
   * @return title
  **/
  @JsonProperty("title")
  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public AdPreviewRequest title(String title) {
    this.title = title;
    return this;
  }

 /**
   * Pin ID.
   * @return pinId
  **/
  @JsonProperty("pin_id")
  public String getPinId() {
    return pinId;
  }

  public void setPinId(String pinId) {
    this.pinId = pinId;
  }

  public AdPreviewRequest pinId(String pinId) {
    this.pinId = pinId;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdPreviewRequest adPreviewRequest = (AdPreviewRequest) o;
    return Objects.equals(this.imageUrl, adPreviewRequest.imageUrl) &&
        Objects.equals(this.title, adPreviewRequest.title) &&
        Objects.equals(this.pinId, adPreviewRequest.pinId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(imageUrl, title, pinId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdPreviewRequest {\n");
    
    sb.append("    imageUrl: ").append(toIndentedString(imageUrl)).append("\n");
    sb.append("    title: ").append(toIndentedString(title)).append("\n");
    sb.append("    pinId: ").append(toIndentedString(pinId)).append("\n");
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

