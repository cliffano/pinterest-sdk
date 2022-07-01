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
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.openapitools.model.ImageDetails;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * PinMediaWithImageAllOf
 */
@JsonPropertyOrder({
  PinMediaWithImageAllOf.JSON_PROPERTY_IMAGES
})
@JsonTypeName("PinMediaWithImage_allOf")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-07-01T11:59:34.708172Z[Etc/UTC]")
@Introspected
public class PinMediaWithImageAllOf {
    public static final String JSON_PROPERTY_IMAGES = "images";
    private Map<String, ImageDetails> images = null;

    public PinMediaWithImageAllOf() {
    }

    public PinMediaWithImageAllOf images(Map<String, ImageDetails> images) {
        this.images = images;
        return this;
    }

    public PinMediaWithImageAllOf putImagesItem(String key, ImageDetails imagesItem) {
        if (this.images == null) {
            this.images = new HashMap<String, ImageDetails>();
        }
        this.images.put(key, imagesItem);
        return this;
  }

    /**
     * Get images
     * @return images
     **/
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_IMAGES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public Map<String, ImageDetails> getImages() {
        return images;
    }

    @JsonProperty(JSON_PROPERTY_IMAGES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
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
