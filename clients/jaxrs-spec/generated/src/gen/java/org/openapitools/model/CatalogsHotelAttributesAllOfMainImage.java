package org.openapitools.model;

import com.fasterxml.jackson.annotation.JsonTypeName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonTypeName;

/**
 * The main hotel image
 **/
@ApiModel(description = "The main hotel image")
@JsonTypeName("CatalogsHotelAttributes_allOf_main_image")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJAXRSSpecServerCodegen", date = "2024-03-14T23:05:05.545684373Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class CatalogsHotelAttributesAllOfMainImage   {
  private @Valid String link;
  private @Valid List<String> tag;

  /**
   * &lt;p&gt;&lt;&#x3D; 2000 characters&lt;/p&gt; &lt;p&gt;The link to the main hotel image. Image should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your hotel. The URL of your main_image.link must be accessible by the Pinterest user-agent, and send the accurate image. Please make sure there is no template or placeholder image at the link. Must start with http:// or https://.&lt;/p&gt;
   **/
  public CatalogsHotelAttributesAllOfMainImage link(String link) {
    this.link = link;
    return this;
  }

  
  @ApiModelProperty(value = "<p><= 2000 characters</p> <p>The link to the main hotel image. Image should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your hotel. The URL of your main_image.link must be accessible by the Pinterest user-agent, and send the accurate image. Please make sure there is no template or placeholder image at the link. Must start with http:// or https://.</p>")
  @JsonProperty("link")
  public String getLink() {
    return link;
  }

  @JsonProperty("link")
  public void setLink(String link) {
    this.link = link;
  }

  /**
   * Tag appended to the image that identifies image category or details. There can be multiple tags associated with an image
   **/
  public CatalogsHotelAttributesAllOfMainImage tag(List<String> tag) {
    this.tag = tag;
    return this;
  }

  
  @ApiModelProperty(value = "Tag appended to the image that identifies image category or details. There can be multiple tags associated with an image")
  @JsonProperty("tag")
  public List<String> getTag() {
    return tag;
  }

  @JsonProperty("tag")
  public void setTag(List<String> tag) {
    this.tag = tag;
  }

  public CatalogsHotelAttributesAllOfMainImage addTagItem(String tagItem) {
    if (this.tag == null) {
      this.tag = new ArrayList<>();
    }

    this.tag.add(tagItem);
    return this;
  }

  public CatalogsHotelAttributesAllOfMainImage removeTagItem(String tagItem) {
    if (tagItem != null && this.tag != null) {
      this.tag.remove(tagItem);
    }

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
    CatalogsHotelAttributesAllOfMainImage catalogsHotelAttributesAllOfMainImage = (CatalogsHotelAttributesAllOfMainImage) o;
    return Objects.equals(this.link, catalogsHotelAttributesAllOfMainImage.link) &&
        Objects.equals(this.tag, catalogsHotelAttributesAllOfMainImage.tag);
  }

  @Override
  public int hashCode() {
    return Objects.hash(link, tag);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsHotelAttributesAllOfMainImage {\n");
    
    sb.append("    link: ").append(toIndentedString(link)).append("\n");
    sb.append("    tag: ").append(toIndentedString(tag)).append("\n");
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

