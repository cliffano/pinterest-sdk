/*
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


package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.PinMedia;
import org.openapitools.model.PinMediaMetadata;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Pin with a mix of images and videos.
 */
@ApiModel(description = "Pin with a mix of images and videos.")
@JsonPropertyOrder({
  PinMediaWithImageAndVideo.JSON_PROPERTY_ITEMS
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class PinMediaWithImageAndVideo extends PinMedia  {
  public static final String JSON_PROPERTY_ITEMS = "items";
  @JsonProperty(JSON_PROPERTY_ITEMS)
  private List<@Valid PinMediaMetadata> items;

  public PinMediaWithImageAndVideo items(List<@Valid PinMediaMetadata> items) {
    this.items = items;
    return this;
  }

  public PinMediaWithImageAndVideo addItemsItem(PinMediaMetadata itemsItem) {
    if (this.items == null) {
      this.items = new ArrayList<>();
    }
    this.items.add(itemsItem);
    return this;
  }

  /**
   * Get items
   * @return items
   **/
  @JsonProperty(value = "items")
  @ApiModelProperty(value = "")
  @Valid 
  public List<@Valid PinMediaMetadata> getItems() {
    return items;
  }

  public void setItems(List<@Valid PinMediaMetadata> items) {
    this.items = items;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PinMediaWithImageAndVideo pinMediaWithImageAndVideo = (PinMediaWithImageAndVideo) o;
    return super.equals(o) && Objects.equals(this.items, pinMediaWithImageAndVideo.items);
  }

  @Override
  public int hashCode() {
    return Objects.hash(super.hashCode(), items);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PinMediaWithImageAndVideo {\n");
    sb.append("    ").append(toIndentedString(super.toString())).append("\n");
    sb.append("    items: ").append(toIndentedString(items)).append("\n");
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

