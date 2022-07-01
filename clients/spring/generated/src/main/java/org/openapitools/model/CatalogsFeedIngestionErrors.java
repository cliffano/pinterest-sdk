package org.openapitools.model;

import java.net.URI;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import org.openapitools.jackson.nullable.JsonNullable;
import java.time.OffsetDateTime;
import javax.validation.Valid;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;


import java.util.*;
import javax.annotation.Generated;

/**
 * CatalogsFeedIngestionErrors
 */

@Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2022-07-01T12:06:55.503075Z[Etc/UTC]")
public class CatalogsFeedIngestionErrors   {

  @JsonProperty("image_download_error")
  private Integer imageDownloadError;

  @JsonProperty("image_download_connection_timeout")
  private Integer imageDownloadConnectionTimeout;

  @JsonProperty("image_format_unrecognize")
  private Integer imageFormatUnrecognize;

  @JsonProperty("line_level_internal_error")
  private Integer lineLevelInternalError;

  /**
   * Gets or Sets largeProductCountDecrease
   */
  public enum LargeProductCountDecreaseEnum {
    NUMBER_1(1);

    private Integer value;

    LargeProductCountDecreaseEnum(Integer value) {
      this.value = value;
    }

    @JsonValue
    public Integer getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }

    @JsonCreator
    public static LargeProductCountDecreaseEnum fromValue(Integer value) {
      for (LargeProductCountDecreaseEnum b : LargeProductCountDecreaseEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }
  }

  @JsonProperty("large_product_count_decrease")
  private LargeProductCountDecreaseEnum largeProductCountDecrease;

  public CatalogsFeedIngestionErrors imageDownloadError(Integer imageDownloadError) {
    this.imageDownloadError = imageDownloadError;
    return this;
  }

  /**
   * Get imageDownloadError
   * @return imageDownloadError
  */
  
  @Schema(name = "image_download_error", required = false)
  public Integer getImageDownloadError() {
    return imageDownloadError;
  }

  public void setImageDownloadError(Integer imageDownloadError) {
    this.imageDownloadError = imageDownloadError;
  }

  public CatalogsFeedIngestionErrors imageDownloadConnectionTimeout(Integer imageDownloadConnectionTimeout) {
    this.imageDownloadConnectionTimeout = imageDownloadConnectionTimeout;
    return this;
  }

  /**
   * Get imageDownloadConnectionTimeout
   * @return imageDownloadConnectionTimeout
  */
  
  @Schema(name = "image_download_connection_timeout", required = false)
  public Integer getImageDownloadConnectionTimeout() {
    return imageDownloadConnectionTimeout;
  }

  public void setImageDownloadConnectionTimeout(Integer imageDownloadConnectionTimeout) {
    this.imageDownloadConnectionTimeout = imageDownloadConnectionTimeout;
  }

  public CatalogsFeedIngestionErrors imageFormatUnrecognize(Integer imageFormatUnrecognize) {
    this.imageFormatUnrecognize = imageFormatUnrecognize;
    return this;
  }

  /**
   * Get imageFormatUnrecognize
   * @return imageFormatUnrecognize
  */
  
  @Schema(name = "image_format_unrecognize", required = false)
  public Integer getImageFormatUnrecognize() {
    return imageFormatUnrecognize;
  }

  public void setImageFormatUnrecognize(Integer imageFormatUnrecognize) {
    this.imageFormatUnrecognize = imageFormatUnrecognize;
  }

  public CatalogsFeedIngestionErrors lineLevelInternalError(Integer lineLevelInternalError) {
    this.lineLevelInternalError = lineLevelInternalError;
    return this;
  }

  /**
   * Get lineLevelInternalError
   * @return lineLevelInternalError
  */
  
  @Schema(name = "line_level_internal_error", required = false)
  public Integer getLineLevelInternalError() {
    return lineLevelInternalError;
  }

  public void setLineLevelInternalError(Integer lineLevelInternalError) {
    this.lineLevelInternalError = lineLevelInternalError;
  }

  public CatalogsFeedIngestionErrors largeProductCountDecrease(LargeProductCountDecreaseEnum largeProductCountDecrease) {
    this.largeProductCountDecrease = largeProductCountDecrease;
    return this;
  }

  /**
   * Get largeProductCountDecrease
   * @return largeProductCountDecrease
  */
  
  @Schema(name = "large_product_count_decrease", required = false)
  public LargeProductCountDecreaseEnum getLargeProductCountDecrease() {
    return largeProductCountDecrease;
  }

  public void setLargeProductCountDecrease(LargeProductCountDecreaseEnum largeProductCountDecrease) {
    this.largeProductCountDecrease = largeProductCountDecrease;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CatalogsFeedIngestionErrors catalogsFeedIngestionErrors = (CatalogsFeedIngestionErrors) o;
    return Objects.equals(this.imageDownloadError, catalogsFeedIngestionErrors.imageDownloadError) &&
        Objects.equals(this.imageDownloadConnectionTimeout, catalogsFeedIngestionErrors.imageDownloadConnectionTimeout) &&
        Objects.equals(this.imageFormatUnrecognize, catalogsFeedIngestionErrors.imageFormatUnrecognize) &&
        Objects.equals(this.lineLevelInternalError, catalogsFeedIngestionErrors.lineLevelInternalError) &&
        Objects.equals(this.largeProductCountDecrease, catalogsFeedIngestionErrors.largeProductCountDecrease);
  }

  @Override
  public int hashCode() {
    return Objects.hash(imageDownloadError, imageDownloadConnectionTimeout, imageFormatUnrecognize, lineLevelInternalError, largeProductCountDecrease);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CatalogsFeedIngestionErrors {\n");
    sb.append("    imageDownloadError: ").append(toIndentedString(imageDownloadError)).append("\n");
    sb.append("    imageDownloadConnectionTimeout: ").append(toIndentedString(imageDownloadConnectionTimeout)).append("\n");
    sb.append("    imageFormatUnrecognize: ").append(toIndentedString(imageFormatUnrecognize)).append("\n");
    sb.append("    lineLevelInternalError: ").append(toIndentedString(lineLevelInternalError)).append("\n");
    sb.append("    largeProductCountDecrease: ").append(toIndentedString(largeProductCountDecrease)).append("\n");
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

