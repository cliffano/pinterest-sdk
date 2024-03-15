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
import com.fasterxml.jackson.annotation.JsonTypeName;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.CatalogProductGroup;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * AdAccountsCatalogsProductGroupsList200Response
 */
@JsonPropertyOrder({
  AdAccountsCatalogsProductGroupsList200Response.JSON_PROPERTY_ITEMS,
  AdAccountsCatalogsProductGroupsList200Response.JSON_PROPERTY_BOOKMARK
})
@JsonTypeName("ad_accounts_catalogs_product_groups_list_200_response")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class AdAccountsCatalogsProductGroupsList200Response {
    public static final String JSON_PROPERTY_ITEMS = "items";
    private List<@Valid CatalogProductGroup> items = new ArrayList<>();

    public static final String JSON_PROPERTY_BOOKMARK = "bookmark";
    private String bookmark;

    public AdAccountsCatalogsProductGroupsList200Response(List<@Valid CatalogProductGroup> items) {
        this.items = items;
    }

    public AdAccountsCatalogsProductGroupsList200Response items(List<@Valid CatalogProductGroup> items) {
        this.items = items;
        return this;
    }

    public AdAccountsCatalogsProductGroupsList200Response addItemsItem(CatalogProductGroup itemsItem) {
        this.items.add(itemsItem);
        return this;
    }

    /**
     * Get items
     * @return items
     **/
    @NotNull
    @Schema(name = "items", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_ITEMS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public List<@Valid CatalogProductGroup> getItems() {
        return items;
    }

    @JsonProperty(JSON_PROPERTY_ITEMS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setItems(List<@Valid CatalogProductGroup> items) {
        this.items = items;
    }

    public AdAccountsCatalogsProductGroupsList200Response bookmark(String bookmark) {
        this.bookmark = bookmark;
        return this;
    }

    /**
     * Get bookmark
     * @return bookmark
     **/
    @Nullable
    @Schema(name = "bookmark", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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
        AdAccountsCatalogsProductGroupsList200Response adAccountsCatalogsProductGroupsList200Response = (AdAccountsCatalogsProductGroupsList200Response) o;
        return Objects.equals(this.items, adAccountsCatalogsProductGroupsList200Response.items) &&
            Objects.equals(this.bookmark, adAccountsCatalogsProductGroupsList200Response.bookmark);
    }

    @Override
    public int hashCode() {
        return Objects.hash(items, bookmark);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class AdAccountsCatalogsProductGroupsList200Response {\n");
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

