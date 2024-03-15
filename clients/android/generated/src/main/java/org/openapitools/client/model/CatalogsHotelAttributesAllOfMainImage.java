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
 * The main hotel image
 **/
@ApiModel(description = "The main hotel image")
public class CatalogsHotelAttributesAllOfMainImage {
  
  @SerializedName("link")
  private String link = null;
  @SerializedName("tag")
  private List<String> tag = null;

  /**
   * <p><= 2000 characters</p> <p>The link to the main hotel image. Image should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your hotel. The URL of your main_image.link must be accessible by the Pinterest user-agent, and send the accurate image. Please make sure there is no template or placeholder image at the link. Must start with http:// or https://.</p>
   **/
  @ApiModelProperty(value = "<p><= 2000 characters</p> <p>The link to the main hotel image. Image should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your hotel. The URL of your main_image.link must be accessible by the Pinterest user-agent, and send the accurate image. Please make sure there is no template or placeholder image at the link. Must start with http:// or https://.</p>")
  public String getLink() {
    return link;
  }
  public void setLink(String link) {
    this.link = link;
  }

  /**
   * Tag appended to the image that identifies image category or details. There can be multiple tags associated with an image
   **/
  @ApiModelProperty(value = "Tag appended to the image that identifies image category or details. There can be multiple tags associated with an image")
  public List<String> getTag() {
    return tag;
  }
  public void setTag(List<String> tag) {
    this.tag = tag;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsHotelAttributesAllOfMainImage catalogsHotelAttributesAllOfMainImage = (CatalogsHotelAttributesAllOfMainImage) o;
    return (this.link == null ? catalogsHotelAttributesAllOfMainImage.link == null : this.link.equals(catalogsHotelAttributesAllOfMainImage.link)) &&
        (this.tag == null ? catalogsHotelAttributesAllOfMainImage.tag == null : this.tag.equals(catalogsHotelAttributesAllOfMainImage.tag));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.link == null ? 0: this.link.hashCode());
    result = 31 * result + (this.tag == null ? 0: this.tag.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsHotelAttributesAllOfMainImage {\n");
    
    sb.append("  link: ").append(link).append("\n");
    sb.append("  tag: ").append(tag).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
