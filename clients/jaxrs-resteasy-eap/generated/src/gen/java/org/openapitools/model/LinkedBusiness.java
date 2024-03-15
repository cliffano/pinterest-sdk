package org.openapitools.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import javax.validation.constraints.*;
import javax.validation.Valid;
import io.swagger.annotations.*;

@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaResteasyEapServerCodegen", date = "2024-03-14T23:04:54.712028318Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class LinkedBusiness   {
  
  private String username;
  private String imageSmallUrl;
  private String imageMediumUrl;
  private String imageLargeUrl;
  private String imageXlargeUrl;

  /**
   * Username
   **/
  
  @ApiModelProperty(example = "username", value = "Username")
  @JsonProperty("username")
  public String getUsername() {
    return username;
  }
  public void setUsername(String username) {
    this.username = username;
  }

  /**
   * image_small_url
   **/
  
  @ApiModelProperty(example = "https://www.example.com/dj23454f53dfk2324.jpg", value = "image_small_url")
  @JsonProperty("image_small_url")
  public String getImageSmallUrl() {
    return imageSmallUrl;
  }
  public void setImageSmallUrl(String imageSmallUrl) {
    this.imageSmallUrl = imageSmallUrl;
  }

  /**
   * image_medium_url
   **/
  
  @ApiModelProperty(example = "https://www.example.com/dj23454f53dfk2324.jpg", value = "image_medium_url")
  @JsonProperty("image_medium_url")
  public String getImageMediumUrl() {
    return imageMediumUrl;
  }
  public void setImageMediumUrl(String imageMediumUrl) {
    this.imageMediumUrl = imageMediumUrl;
  }

  /**
   * image_large_url
   **/
  
  @ApiModelProperty(example = "https://www.example.com/dj23454f53dfk2324.jpg", value = "image_large_url")
  @JsonProperty("image_large_url")
  public String getImageLargeUrl() {
    return imageLargeUrl;
  }
  public void setImageLargeUrl(String imageLargeUrl) {
    this.imageLargeUrl = imageLargeUrl;
  }

  /**
   * image_xlarge_url
   **/
  
  @ApiModelProperty(example = "https://www.example.com/dj23454f53dfk2324.jpg", value = "image_xlarge_url")
  @JsonProperty("image_xlarge_url")
  public String getImageXlargeUrl() {
    return imageXlargeUrl;
  }
  public void setImageXlargeUrl(String imageXlargeUrl) {
    this.imageXlargeUrl = imageXlargeUrl;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LinkedBusiness linkedBusiness = (LinkedBusiness) o;
    return Objects.equals(this.username, linkedBusiness.username) &&
        Objects.equals(this.imageSmallUrl, linkedBusiness.imageSmallUrl) &&
        Objects.equals(this.imageMediumUrl, linkedBusiness.imageMediumUrl) &&
        Objects.equals(this.imageLargeUrl, linkedBusiness.imageLargeUrl) &&
        Objects.equals(this.imageXlargeUrl, linkedBusiness.imageXlargeUrl);
  }

  @Override
  public int hashCode() {
    return Objects.hash(username, imageSmallUrl, imageMediumUrl, imageLargeUrl, imageXlargeUrl);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LinkedBusiness {\n");
    
    sb.append("    username: ").append(toIndentedString(username)).append("\n");
    sb.append("    imageSmallUrl: ").append(toIndentedString(imageSmallUrl)).append("\n");
    sb.append("    imageMediumUrl: ").append(toIndentedString(imageMediumUrl)).append("\n");
    sb.append("    imageLargeUrl: ").append(toIndentedString(imageLargeUrl)).append("\n");
    sb.append("    imageXlargeUrl: ").append(toIndentedString(imageXlargeUrl)).append("\n");
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
