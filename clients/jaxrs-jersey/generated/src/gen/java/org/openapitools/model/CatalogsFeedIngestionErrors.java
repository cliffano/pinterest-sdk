/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * CatalogsFeedIngestionErrors
 */
@JsonPropertyOrder({
  CatalogsFeedIngestionErrors.JSON_PROPERTY_IMAGE_DOWNLOAD_ERROR,
  CatalogsFeedIngestionErrors.JSON_PROPERTY_IMAGE_DOWNLOAD_CONNECTION_TIMEOUT,
  CatalogsFeedIngestionErrors.JSON_PROPERTY_IMAGE_FORMAT_UNRECOGNIZE,
  CatalogsFeedIngestionErrors.JSON_PROPERTY_LINE_LEVEL_INTERNAL_ERROR,
  CatalogsFeedIngestionErrors.JSON_PROPERTY_LARGE_PRODUCT_COUNT_DECREASE
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2022-05-07T06:42:01.683468Z[Etc/UTC]")
public class CatalogsFeedIngestionErrors   {
  public static final String JSON_PROPERTY_IMAGE_DOWNLOAD_ERROR = "image_download_error";
  @JsonProperty(JSON_PROPERTY_IMAGE_DOWNLOAD_ERROR)
  private Integer imageDownloadError;

  public static final String JSON_PROPERTY_IMAGE_DOWNLOAD_CONNECTION_TIMEOUT = "image_download_connection_timeout";
  @JsonProperty(JSON_PROPERTY_IMAGE_DOWNLOAD_CONNECTION_TIMEOUT)
  private Integer imageDownloadConnectionTimeout;

  public static final String JSON_PROPERTY_IMAGE_FORMAT_UNRECOGNIZE = "image_format_unrecognize";
  @JsonProperty(JSON_PROPERTY_IMAGE_FORMAT_UNRECOGNIZE)
  private Integer imageFormatUnrecognize;

  public static final String JSON_PROPERTY_LINE_LEVEL_INTERNAL_ERROR = "line_level_internal_error";
  @JsonProperty(JSON_PROPERTY_LINE_LEVEL_INTERNAL_ERROR)
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

    @Override
    @JsonValue
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

  public static final String JSON_PROPERTY_LARGE_PRODUCT_COUNT_DECREASE = "large_product_count_decrease";
  @JsonProperty(JSON_PROPERTY_LARGE_PRODUCT_COUNT_DECREASE)
  private LargeProductCountDecreaseEnum largeProductCountDecrease;

  public CatalogsFeedIngestionErrors imageDownloadError(Integer imageDownloadError) {
    this.imageDownloadError = imageDownloadError;
    return this;
  }

  /**
   * Get imageDownloadError
   * @return imageDownloadError
   **/
  @JsonProperty(value = "image_download_error")
  @ApiModelProperty(value = "")
  
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
   **/
  @JsonProperty(value = "image_download_connection_timeout")
  @ApiModelProperty(value = "")
  
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
   **/
  @JsonProperty(value = "image_format_unrecognize")
  @ApiModelProperty(value = "")
  
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
   **/
  @JsonProperty(value = "line_level_internal_error")
  @ApiModelProperty(value = "")
  
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
   **/
  @JsonProperty(value = "large_product_count_decrease")
  @ApiModelProperty(value = "")
  
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

