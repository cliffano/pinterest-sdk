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
import org.openapitools.model.ImageMetadataImages;
import org.openapitools.model.PinMedia;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * Pin with image.
 */
@Schema(name = "PinMediaWithImage", description = "Pin with image.")
@JsonPropertyOrder({
  PinMediaWithImage.JSON_PROPERTY_IMAGES
})
@JsonTypeName("PinMediaWithImage")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class PinMediaWithImage extends PinMedia {
    public static final String JSON_PROPERTY_IMAGES = "images";
    private ImageMetadataImages images;

    public PinMediaWithImage() {
        super();
    }

    public PinMediaWithImage images(ImageMetadataImages images) {
        this.images = images;
        return this;
    }

    /**
     * Get images
     * @return images
     **/
    @Valid
    @Nullable
    @Schema(name = "images", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_IMAGES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public ImageMetadataImages getImages() {
        return images;
    }

    @JsonProperty(JSON_PROPERTY_IMAGES)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setImages(ImageMetadataImages images) {
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
        return Objects.equals(this.images, pinMediaWithImage.images) &&
            super.equals(o);
    }

    @Override
    public int hashCode() {
        return Objects.hash(images, super.hashCode());
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

