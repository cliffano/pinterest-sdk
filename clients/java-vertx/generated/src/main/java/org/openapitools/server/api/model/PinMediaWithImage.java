package org.openapitools.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.openapitools.server.api.model.ImageDetails;
import org.openapitools.server.api.model.PinMedia;
import org.openapitools.server.api.model.PinMediaWithImageAllOf;

/**
 * Pin with image.
 **/
@JsonInclude(JsonInclude.Include.NON_NULL)
public class PinMediaWithImage extends PinMedia  {
  
  private Map<String, ImageDetails> images = new HashMap<>();

  public PinMediaWithImage () {

  }

  public PinMediaWithImage (Map<String, ImageDetails> images) {
    this.images = images;
  }

    
  @JsonProperty("images")
  public Map<String, ImageDetails> getImages() {
    return images;
  }
  public void setImages(Map<String, ImageDetails> images) {
    this.images = images;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PinMediaWithImage pinMediaWithImage = (PinMediaWithImage) o;
    return Objects.equals(images, pinMediaWithImage.images);
  }

  @Override
  public int hashCode() {
    return Objects.hash(images);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PinMediaWithImage {\n");
    sb.append("    ").append(toIndentedString(super.toString())).append("\n");
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
