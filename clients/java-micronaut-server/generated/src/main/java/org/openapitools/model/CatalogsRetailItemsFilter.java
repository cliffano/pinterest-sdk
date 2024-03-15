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
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * CatalogsRetailItemsFilter
 */
@JsonPropertyOrder({
  CatalogsRetailItemsFilter.JSON_PROPERTY_CATALOG_TYPE,
  CatalogsRetailItemsFilter.JSON_PROPERTY_ITEM_IDS,
  CatalogsRetailItemsFilter.JSON_PROPERTY_CATALOG_ID
})
@JsonTypeName("CatalogsRetailItemsFilter")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class CatalogsRetailItemsFilter {
    /**
     * Gets or Sets catalogType
     */
    public enum CatalogTypeEnum {
        RETAIL("RETAIL");

        private String value;

        CatalogTypeEnum(String value) {
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
        public static CatalogTypeEnum fromValue(String value) {
            for (CatalogTypeEnum b : CatalogTypeEnum.values()) {
                if (b.value.equals(value)) {
                    return b;
                }
            }
            throw new IllegalArgumentException("Unexpected value '" + value + "'");
        }
    }
    public static final String JSON_PROPERTY_CATALOG_TYPE = "catalog_type";
    private CatalogTypeEnum catalogType;

    public static final String JSON_PROPERTY_ITEM_IDS = "item_ids";
    private List<String> itemIds = new ArrayList<>();

    public static final String JSON_PROPERTY_CATALOG_ID = "catalog_id";
    private String catalogId;

    public CatalogsRetailItemsFilter(CatalogTypeEnum catalogType, List<String> itemIds) {
        this.catalogType = catalogType;
        this.itemIds = itemIds;
    }

    public CatalogsRetailItemsFilter catalogType(CatalogTypeEnum catalogType) {
        this.catalogType = catalogType;
        return this;
    }

    /**
     * Get catalogType
     * @return catalogType
     **/
    @NotNull
    @Schema(name = "catalog_type", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_CATALOG_TYPE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public CatalogTypeEnum getCatalogType() {
        return catalogType;
    }

    @JsonProperty(JSON_PROPERTY_CATALOG_TYPE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setCatalogType(CatalogTypeEnum catalogType) {
        this.catalogType = catalogType;
    }

    public CatalogsRetailItemsFilter itemIds(List<String> itemIds) {
        this.itemIds = itemIds;
        return this;
    }

    public CatalogsRetailItemsFilter addItemIdsItem(String itemIdsItem) {
        this.itemIds.add(itemIdsItem);
        return this;
    }

    /**
     * Get itemIds
     * @return itemIds
     **/
    @NotNull
    @Size(min=1, max=100)
    @Schema(name = "item_ids", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_ITEM_IDS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public List<String> getItemIds() {
        return itemIds;
    }

    @JsonProperty(JSON_PROPERTY_ITEM_IDS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setItemIds(List<String> itemIds) {
        this.itemIds = itemIds;
    }

    public CatalogsRetailItemsFilter catalogId(String catalogId) {
        this.catalogId = catalogId;
        return this;
    }

    /**
     * Catalog id pertaining to the retail item. If not provided, default to oldest retail catalog
     * @return catalogId
     **/
    @Nullable
    @Pattern(regexp="^\\d+$")
    @Schema(name = "catalog_id", description = "Catalog id pertaining to the retail item. If not provided, default to oldest retail catalog", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_CATALOG_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getCatalogId() {
        return catalogId;
    }

    @JsonProperty(JSON_PROPERTY_CATALOG_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setCatalogId(String catalogId) {
        this.catalogId = catalogId;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CatalogsRetailItemsFilter catalogsRetailItemsFilter = (CatalogsRetailItemsFilter) o;
        return Objects.equals(this.catalogType, catalogsRetailItemsFilter.catalogType) &&
            Objects.equals(this.itemIds, catalogsRetailItemsFilter.itemIds) &&
            Objects.equals(this.catalogId, catalogsRetailItemsFilter.catalogId);
    }

    @Override
    public int hashCode() {
        return Objects.hash(catalogType, itemIds, catalogId);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CatalogsRetailItemsFilter {\n");
        sb.append("    catalogType: ").append(toIndentedString(catalogType)).append("\n");
        sb.append("    itemIds: ").append(toIndentedString(itemIds)).append("\n");
        sb.append("    catalogId: ").append(toIndentedString(catalogId)).append("\n");
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

