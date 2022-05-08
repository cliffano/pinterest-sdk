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
import java.util.Arrays;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * Paginated
 */
@JsonPropertyOrder({
  Paginated.JSON_PROPERTY_ITEMS,
  Paginated.JSON_PROPERTY_BOOKMARK
})
@JsonTypeName("Paginated")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2022-05-08T00:31:09.924165Z[Etc/UTC]")
@Introspected
public class Paginated {
    public static final String JSON_PROPERTY_ITEMS = "items";
    private List<Object> items = new ArrayList<Object>();

    public static final String JSON_PROPERTY_BOOKMARK = "bookmark";
    private String bookmark;

    public Paginated(List<Object> items) {
        this.items = items;
    }

    public Paginated items(List<Object> items) {
        this.items = items;
        return this;
    }

    public Paginated addItemsItem(Object itemsItem) {
        this.items.add(itemsItem);
        return this;
    }

    /**
     * Get items
     * @return items
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_ITEMS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public List<Object> getItems() {
        return items;
    }

    @JsonProperty(JSON_PROPERTY_ITEMS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setItems(List<Object> items) {
        this.items = items;
    }

    public Paginated bookmark(String bookmark) {
        this.bookmark = bookmark;
        return this;
    }

    /**
     * Get bookmark
     * @return bookmark
     **/
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_BOOKMARK)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public String getBookmark() {
        return bookmark;
    }

    @JsonProperty(JSON_PROPERTY_BOOKMARK)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setBookmark(String bookmark) {
        this.bookmark = bookmark;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        Paginated paginated = (Paginated) o;
        return Objects.equals(this.items, paginated.items) &&
            Objects.equals(this.bookmark, paginated.bookmark);
    }

    @Override
    public int hashCode() {
        return Objects.hash(items, bookmark);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class Paginated {\n");
        sb.append("    items: ").append(toIndentedString(items)).append("\n");
        sb.append("    bookmark: ").append(toIndentedString(bookmark)).append("\n");
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
