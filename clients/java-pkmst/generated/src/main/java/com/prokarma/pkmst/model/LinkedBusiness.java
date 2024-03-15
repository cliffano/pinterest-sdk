package com.prokarma.pkmst.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
/**
 * Response class to be returned by Api
 * @author pkmst
 *
 */
/**
 * LinkedBusiness
 */

@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaPKMSTServerCodegen", date = "2024-03-14T23:02:40.880156196Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class LinkedBusiness   {
  @JsonProperty("username")
  private String username;

  @JsonProperty("image_small_url")
  private String imageSmallUrl;

  @JsonProperty("image_medium_url")
  private String imageMediumUrl;

  @JsonProperty("image_large_url")
  private String imageLargeUrl;

  @JsonProperty("image_xlarge_url")
  private String imageXlargeUrl;

  public LinkedBusiness username(String username) {
    this.username = username;
    return this;
  }

   /**
   * Username
   * @return username
  **/
  @ApiModelProperty(example = "username", value = "Username")
  public String getUsername() {
    return username;
  }

  public void setUsername(String username) {
    this.username = username;
  }

  public LinkedBusiness imageSmallUrl(String imageSmallUrl) {
    this.imageSmallUrl = imageSmallUrl;
    return this;
  }

   /**
   * image_small_url
   * @return imageSmallUrl
  **/
  @ApiModelProperty(example = "https://www.example.com/dj23454f53dfk2324.jpg", value = "image_small_url")
  public String getImageSmallUrl() {
    return imageSmallUrl;
  }

  public void setImageSmallUrl(String imageSmallUrl) {
    this.imageSmallUrl = imageSmallUrl;
  }

  public LinkedBusiness imageMediumUrl(String imageMediumUrl) {
    this.imageMediumUrl = imageMediumUrl;
    return this;
  }

   /**
   * image_medium_url
   * @return imageMediumUrl
  **/
  @ApiModelProperty(example = "https://www.example.com/dj23454f53dfk2324.jpg", value = "image_medium_url")
  public String getImageMediumUrl() {
    return imageMediumUrl;
  }

  public void setImageMediumUrl(String imageMediumUrl) {
    this.imageMediumUrl = imageMediumUrl;
  }

  public LinkedBusiness imageLargeUrl(String imageLargeUrl) {
    this.imageLargeUrl = imageLargeUrl;
    return this;
  }

   /**
   * image_large_url
   * @return imageLargeUrl
  **/
  @ApiModelProperty(example = "https://www.example.com/dj23454f53dfk2324.jpg", value = "image_large_url")
  public String getImageLargeUrl() {
    return imageLargeUrl;
  }

  public void setImageLargeUrl(String imageLargeUrl) {
    this.imageLargeUrl = imageLargeUrl;
  }

  public LinkedBusiness imageXlargeUrl(String imageXlargeUrl) {
    this.imageXlargeUrl = imageXlargeUrl;
    return this;
  }

   /**
   * image_xlarge_url
   * @return imageXlargeUrl
  **/
  @ApiModelProperty(example = "https://www.example.com/dj23454f53dfk2324.jpg", value = "image_xlarge_url")
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

