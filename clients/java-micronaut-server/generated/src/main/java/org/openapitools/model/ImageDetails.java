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
import java.util.Arrays;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * ImageDetails
 */
@JsonPropertyOrder({
  ImageDetails.JSON_PROPERTY_WIDTH,
  ImageDetails.JSON_PROPERTY_HEIGHT,
  ImageDetails.JSON_PROPERTY_URL
})
@JsonTypeName("ImageDetails")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class ImageDetails {
    public static final String JSON_PROPERTY_WIDTH = "width";
    private Integer width;

    public static final String JSON_PROPERTY_HEIGHT = "height";
    private Integer height;

    public static final String JSON_PROPERTY_URL = "url";
    private String url;

    public ImageDetails(Integer width, Integer height, String url) {
        this.width = width;
        this.height = height;
        this.url = url;
    }

    public ImageDetails width(Integer width) {
        this.width = width;
        return this;
    }

    /**
     * Get width
     * minimum: 100
     * @return width
     **/
    @NotNull
    @Min(100)
    @Schema(name = "width", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_WIDTH)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public Integer getWidth() {
        return width;
    }

    @JsonProperty(JSON_PROPERTY_WIDTH)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setWidth(Integer width) {
        this.width = width;
    }

    public ImageDetails height(Integer height) {
        this.height = height;
        return this;
    }

    /**
     * Get height
     * minimum: 100
     * @return height
     **/
    @Nullable
    @Min(100)
    @Schema(name = "height", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_HEIGHT)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public Integer getHeight() {
        return height;
    }

    @JsonProperty(JSON_PROPERTY_HEIGHT)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setHeight(Integer height) {
        this.height = height;
    }

    public ImageDetails url(String url) {
        this.url = url;
        return this;
    }

    /**
     * Get url
     * @return url
     **/
    @NotNull
    @Schema(name = "url", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_URL)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public String getUrl() {
        return url;
    }

    @JsonProperty(JSON_PROPERTY_URL)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setUrl(String url) {
        this.url = url;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        ImageDetails imageDetails = (ImageDetails) o;
        return Objects.equals(this.width, imageDetails.width) &&
            Objects.equals(this.height, imageDetails.height) &&
            Objects.equals(this.url, imageDetails.url);
    }

    @Override
    public int hashCode() {
        return Objects.hash(width, height, url);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class ImageDetails {\n");
        sb.append("    width: ").append(toIndentedString(width)).append("\n");
        sb.append("    height: ").append(toIndentedString(height)).append("\n");
        sb.append("    url: ").append(toIndentedString(url)).append("\n");
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

