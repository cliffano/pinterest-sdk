package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.AdPreviewCreateFromImage;
import org.openapitools.model.AdPreviewCreateFromPin;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;



public class AdPreviewRequest   {
  
  private String imageUrl;

  private String title;

  private String pinId;

  /**
   * Image URL.
   **/
  public AdPreviewRequest imageUrl(String imageUrl) {
    this.imageUrl = imageUrl;
    return this;
  }

  
  @ApiModelProperty(example = "https://somewebsite.com/someimage.jpg", required = true, value = "Image URL.")
  @JsonProperty("image_url")
  @NotNull
  public String getImageUrl() {
    return imageUrl;
  }
  public void setImageUrl(String imageUrl) {
    this.imageUrl = imageUrl;
  }


  /**
   * Title displayed below ad.
   **/
  public AdPreviewRequest title(String title) {
    this.title = title;
    return this;
  }

  
  @ApiModelProperty(example = "My Preview Image", required = true, value = "Title displayed below ad.")
  @JsonProperty("title")
  @NotNull
  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }


  /**
   * Pin ID.
   **/
  public AdPreviewRequest pinId(String pinId) {
    this.pinId = pinId;
    return this;
  }

  
  @ApiModelProperty(example = "7389479023", required = true, value = "Pin ID.")
  @JsonProperty("pin_id")
  @NotNull
  public String getPinId() {
    return pinId;
  }
  public void setPinId(String pinId) {
    this.pinId = pinId;
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

