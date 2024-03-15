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
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.PinMedia;
import org.openapitools.model.VideoMetadata;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * Pin with multiple videos.
 */
@Schema(name = "PinMediaWithVideos", description = "Pin with multiple videos.")
@JsonPropertyOrder({
  PinMediaWithVideos.JSON_PROPERTY_ITEMS
})
@JsonTypeName("PinMediaWithVideos")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class PinMediaWithVideos extends PinMedia {
    public static final String JSON_PROPERTY_ITEMS = "items";
    private List<@Valid VideoMetadata> items = null;

    public PinMediaWithVideos() {
        super();
    }

    public PinMediaWithVideos items(List<@Valid VideoMetadata> items) {
        this.items = items;
        return this;
    }

    public PinMediaWithVideos addItemsItem(VideoMetadata itemsItem) {
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
    @Nullable
    @Schema(name = "items", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_ITEMS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<@Valid VideoMetadata> getItems() {
        return items;
    }

    @JsonProperty(JSON_PROPERTY_ITEMS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setItems(List<@Valid VideoMetadata> items) {
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
        PinMediaWithVideos pinMediaWithVideos = (PinMediaWithVideos) o;
        return Objects.equals(this.items, pinMediaWithVideos.items) &&
            super.equals(o);
    }

    @Override
    public int hashCode() {
        return Objects.hash(items, super.hashCode());
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class PinMediaWithVideos {\n");
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

