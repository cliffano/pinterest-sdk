package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonTypeName;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.JsonFormat;
import com.fasterxml.jackson.annotation.JsonProperty;


public class PinMediaSourceImagesURLItemsInner  {
  
  @ApiModelProperty(value = "")
  private String title;

  @ApiModelProperty(value = "")
  private String description;

 /**
  * Destination link for the image.
  */
  @ApiModelProperty(value = "Destination link for the image.")
  private String link;

 /**
  * URL of image to upload.
  */
  @ApiModelProperty(required = true, value = "URL of image to upload.")
  private String url;
 /**
  * Get title
  * @return title
  */
  @JsonProperty("title")
  public String getTitle() {
    return title;
  }

  /**
   * Sets the <code>title</code> property.
   */
 public void setTitle(String title) {
    this.title = title;
  }

  /**
   * Sets the <code>title</code> property.
   */
  public PinMediaSourceImagesURLItemsInner title(String title) {
    this.title = title;
    return this;
  }

 /**
  * Get description
  * @return description
  */
  @JsonProperty("description")
  public String getDescription() {
    return description;
  }

  /**
   * Sets the <code>description</code> property.
   */
 public void setDescription(String description) {
    this.description = description;
  }

  /**
   * Sets the <code>description</code> property.
   */
  public PinMediaSourceImagesURLItemsInner description(String description) {
    this.description = description;
    return this;
  }

 /**
  * Destination link for the image.
  * @return link
  */
  @JsonProperty("link")
  public String getLink() {
    return link;
  }

  /**
   * Sets the <code>link</code> property.
   */
 public void setLink(String link) {
    this.link = link;
  }

  /**
   * Sets the <code>link</code> property.
   */
  public PinMediaSourceImagesURLItemsInner link(String link) {
    this.link = link;
    return this;
  }

 /**
  * URL of image to upload.
  * @return url
  */
  @JsonProperty("url")
  @NotNull
  public String getUrl() {
    return url;
  }

  /**
   * Sets the <code>url</code> property.
   */
 public void setUrl(String url) {
    this.url = url;
  }

  /**
   * Sets the <code>url</code> property.
   */
  public PinMediaSourceImagesURLItemsInner url(String url) {
    this.url = url;
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
    PinMediaSourceImagesURLItemsInner pinMediaSourceImagesURLItemsInner = (PinMediaSourceImagesURLItemsInner) o;
    return Objects.equals(this.title, pinMediaSourceImagesURLItemsInner.title) &&
        Objects.equals(this.description, pinMediaSourceImagesURLItemsInner.description) &&
        Objects.equals(this.link, pinMediaSourceImagesURLItemsInner.link) &&
        Objects.equals(this.url, pinMediaSourceImagesURLItemsInner.url);
  }

  @Override
  public int hashCode() {
    return Objects.hash(title, description, link, url);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PinMediaSourceImagesURLItemsInner {\n");
    
    sb.append("    title: ").append(toIndentedString(title)).append("\n");
    sb.append("    description: ").append(toIndentedString(description)).append("\n");
    sb.append("    link: ").append(toIndentedString(link)).append("\n");
    sb.append("    url: ").append(toIndentedString(url)).append("\n");
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

