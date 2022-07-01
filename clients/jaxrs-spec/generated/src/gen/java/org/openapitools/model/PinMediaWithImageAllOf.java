package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.openapitools.model.ImageDetails;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonTypeName;



@JsonTypeName("PinMediaWithImage_allOf")
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJAXRSSpecServerCodegen", date = "2022-07-01T12:01:13.464712Z[Etc/UTC]")public class PinMediaWithImageAllOf   {
  
  private @Valid Map<String, ImageDetails> images = new HashMap<String, ImageDetails>();

  /**
   **/
  public PinMediaWithImageAllOf images(Map<String, ImageDetails> images) {
    this.images = images;
    return this;
  }

  

  
  @ApiModelProperty(value = "")
  @JsonProperty("images")
  public Map<String, ImageDetails> getImages() {
    return images;
  }

  @JsonProperty("images")
  public void setImages(Map<String, ImageDetails> images) {
    this.images = images;
  }

  public PinMediaWithImageAllOf putImagesItem(String key, ImageDetails imagesItem) {
    if (this.images == null) {
      this.images = new HashMap<String, ImageDetails>();
    }

    this.images.put(key, imagesItem);
    return this;
  }

  public PinMediaWithImageAllOf removeImagesItem(ImageDetails imagesItem) {
    if (imagesItem != null && this.images != null) {
      this.images.remove(imagesItem);
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
    PinMediaWithImageAllOf pinMediaWithImageAllOf = (PinMediaWithImageAllOf) o;
    return Objects.equals(this.images, pinMediaWithImageAllOf.images);
  }

  @Override
  public int hashCode() {
    return Objects.hash(images);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PinMediaWithImageAllOf {\n");
    
    sb.append("    images: ").append(toIndentedString(images)).append("\n");
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

