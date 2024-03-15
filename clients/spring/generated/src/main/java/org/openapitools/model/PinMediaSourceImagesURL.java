package org.openapitools.model;

import java.net.URI;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.PinMediaSourceImagesURLItemsInner;
import com.fasterxml.jackson.annotation.JsonIgnoreProperties;
import com.fasterxml.jackson.annotation.JsonSubTypes;
import com.fasterxml.jackson.annotation.JsonTypeInfo;
import org.openapitools.jackson.nullable.JsonNullable;
import java.time.OffsetDateTime;
import javax.validation.Valid;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;


import java.util.*;
import javax.annotation.Generated;

/**
 * Multiple images urls-based media source
 */

@Schema(name = "PinMediaSourceImagesURL", description = "Multiple images urls-based media source")
@Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2024-03-14T23:15:39.458648915Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class PinMediaSourceImagesURL implements PinMediaSource {

  /**
   * Gets or Sets sourceType
   */
  public enum SourceTypeEnum {
    MULTIPLE_IMAGE_URLS("multiple_image_urls");

    private String value;

    SourceTypeEnum(String value) {
      this.value = value;
    }

    @JsonValue
    public String getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }

    @JsonCreator
    public static SourceTypeEnum fromValue(String value) {
      for (SourceTypeEnum b : SourceTypeEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }
  }

  private SourceTypeEnum sourceType;

  @Valid
  private List<@Valid PinMediaSourceImagesURLItemsInner> items = new ArrayList<>();

  private Integer index;

  public PinMediaSourceImagesURL() {
    super();
  }

  /**
   * Constructor with only required parameters
   */
  public PinMediaSourceImagesURL(List<@Valid PinMediaSourceImagesURLItemsInner> items) {
    this.items = items;
  }

  public PinMediaSourceImagesURL sourceType(SourceTypeEnum sourceType) {
    this.sourceType = sourceType;
    return this;
  }

  /**
   * Get sourceType
   * @return sourceType
  */
  
  @Schema(name = "source_type", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("source_type")
  public SourceTypeEnum getSourceType() {
    return sourceType;
  }

  public void setSourceType(SourceTypeEnum sourceType) {
    this.sourceType = sourceType;
  }

  public PinMediaSourceImagesURL items(List<@Valid PinMediaSourceImagesURLItemsInner> items) {
    this.items = items;
    return this;
  }

  public PinMediaSourceImagesURL addItemsItem(PinMediaSourceImagesURLItemsInner itemsItem) {
    if (this.items == null) {
      this.items = new ArrayList<>();
    }
    this.items.add(itemsItem);
    return this;
  }

  /**
   * Array with image objects.
   * @return items
  */
  @NotNull @Valid @Size(min = 2, max = 5) 
  @Schema(name = "items", description = "Array with image objects.", requiredMode = Schema.RequiredMode.REQUIRED)
  @JsonProperty("items")
  public List<@Valid PinMediaSourceImagesURLItemsInner> getItems() {
    return items;
  }

  public void setItems(List<@Valid PinMediaSourceImagesURLItemsInner> items) {
    this.items = items;
  }

  public PinMediaSourceImagesURL index(Integer index) {
    this.index = index;
    return this;
  }

  /**
   * Get index
   * minimum: 0
   * @return index
  */
  @Min(0) 
  @Schema(name = "index", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
  @JsonProperty("index")
  public Integer getIndex() {
    return index;
  }

  public void setIndex(Integer index) {
    this.index = index;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PinMediaSourceImagesURL pinMediaSourceImagesURL = (PinMediaSourceImagesURL) o;
    return Objects.equals(this.sourceType, pinMediaSourceImagesURL.sourceType) &&
        Objects.equals(this.items, pinMediaSourceImagesURL.items) &&
        Objects.equals(this.index, pinMediaSourceImagesURL.index);
  }

  @Override
  public int hashCode() {
    return Objects.hash(sourceType, items, index);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PinMediaSourceImagesURL {\n");
    sb.append("    sourceType: ").append(toIndentedString(sourceType)).append("\n");
    sb.append("    items: ").append(toIndentedString(items)).append("\n");
    sb.append("    index: ").append(toIndentedString(index)).append("\n");
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

