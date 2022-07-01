/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.model;

import java.util.Objects;
import java.util.Arrays;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

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
@JsonTypeName("CatalogsFeedIngestionErrors")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2022-07-01T11:59:24.863123Z[Etc/UTC]")
@Introspected
public class CatalogsFeedIngestionErrors {
    public static final String JSON_PROPERTY_IMAGE_DOWNLOAD_ERROR = "image_download_error";
    private Integer imageDownloadError;

    public static final String JSON_PROPERTY_IMAGE_DOWNLOAD_CONNECTION_TIMEOUT = "image_download_connection_timeout";
    private Integer imageDownloadConnectionTimeout;

    public static final String JSON_PROPERTY_IMAGE_FORMAT_UNRECOGNIZE = "image_format_unrecognize";
    private Integer imageFormatUnrecognize;

    public static final String JSON_PROPERTY_LINE_LEVEL_INTERNAL_ERROR = "line_level_internal_error";
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
    public static final String JSON_PROPERTY_LARGE_PRODUCT_COUNT_DECREASE = "large_product_count_decrease";
    private LargeProductCountDecreaseEnum largeProductCountDecrease;

    public CatalogsFeedIngestionErrors() {
    }

    public CatalogsFeedIngestionErrors imageDownloadError(Integer imageDownloadError) {
        this.imageDownloadError = imageDownloadError;
        return this;
    }

    /**
     * Get imageDownloadError
     * @return imageDownloadError
     **/
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_IMAGE_DOWNLOAD_ERROR)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public Integer getImageDownloadError() {
        return imageDownloadError;
    }

    @JsonProperty(JSON_PROPERTY_IMAGE_DOWNLOAD_ERROR)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
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
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_IMAGE_DOWNLOAD_CONNECTION_TIMEOUT)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public Integer getImageDownloadConnectionTimeout() {
        return imageDownloadConnectionTimeout;
    }

    @JsonProperty(JSON_PROPERTY_IMAGE_DOWNLOAD_CONNECTION_TIMEOUT)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
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
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_IMAGE_FORMAT_UNRECOGNIZE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public Integer getImageFormatUnrecognize() {
        return imageFormatUnrecognize;
    }

    @JsonProperty(JSON_PROPERTY_IMAGE_FORMAT_UNRECOGNIZE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
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
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_LINE_LEVEL_INTERNAL_ERROR)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public Integer getLineLevelInternalError() {
        return lineLevelInternalError;
    }

    @JsonProperty(JSON_PROPERTY_LINE_LEVEL_INTERNAL_ERROR)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
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
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_LARGE_PRODUCT_COUNT_DECREASE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public LargeProductCountDecreaseEnum getLargeProductCountDecrease() {
        return largeProductCountDecrease;
    }

    @JsonProperty(JSON_PROPERTY_LARGE_PRODUCT_COUNT_DECREASE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
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
