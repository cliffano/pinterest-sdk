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
import org.openapitools.model.CatalogsRetailBatchRequestItemsInner;
import org.openapitools.model.CatalogsType;
import org.openapitools.model.Country;
import org.openapitools.model.Language;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * A request object that can have multiple operations on a single retail batch
 */
@JsonPropertyOrder({
  CatalogsRetailBatchRequest.JSON_PROPERTY_CATALOG_TYPE,
  CatalogsRetailBatchRequest.JSON_PROPERTY_COUNTRY,
  CatalogsRetailBatchRequest.JSON_PROPERTY_LANGUAGE,
  CatalogsRetailBatchRequest.JSON_PROPERTY_ITEMS
})
@JsonTypeName("CatalogsRetailBatchRequest")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class CatalogsRetailBatchRequest {
    public static final String JSON_PROPERTY_CATALOG_TYPE = "catalog_type";
    private CatalogsType catalogType;

    public static final String JSON_PROPERTY_COUNTRY = "country";
    private Country country;

    public static final String JSON_PROPERTY_LANGUAGE = "language";
    private Language language;

    public static final String JSON_PROPERTY_ITEMS = "items";
    private List<CatalogsRetailBatchRequestItemsInner> items = new ArrayList<>();

    public CatalogsRetailBatchRequest(CatalogsType catalogType, Country country, Language language, List<CatalogsRetailBatchRequestItemsInner> items) {
        this.catalogType = catalogType;
        this.country = country;
        this.language = language;
        this.items = items;
    }

    public CatalogsRetailBatchRequest catalogType(CatalogsType catalogType) {
        this.catalogType = catalogType;
        return this;
    }

    /**
     * Get catalogType
     * @return catalogType
     **/
    @NotNull
    @JsonProperty(JSON_PROPERTY_CATALOG_TYPE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public CatalogsType getCatalogType() {
        return catalogType;
    }

    @JsonProperty(JSON_PROPERTY_CATALOG_TYPE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setCatalogType(CatalogsType catalogType) {
        this.catalogType = catalogType;
    }

    public CatalogsRetailBatchRequest country(Country country) {
        this.country = country;
        return this;
    }

    /**
     * Get country
     * @return country
     **/
    @NotNull
    @JsonProperty(JSON_PROPERTY_COUNTRY)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public Country getCountry() {
        return country;
    }

    @JsonProperty(JSON_PROPERTY_COUNTRY)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setCountry(Country country) {
        this.country = country;
    }

    public CatalogsRetailBatchRequest language(Language language) {
        this.language = language;
        return this;
    }

    /**
     * Get language
     * @return language
     **/
    @NotNull
    @JsonProperty(JSON_PROPERTY_LANGUAGE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public Language getLanguage() {
        return language;
    }

    @JsonProperty(JSON_PROPERTY_LANGUAGE)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setLanguage(Language language) {
        this.language = language;
    }

    public CatalogsRetailBatchRequest items(List<CatalogsRetailBatchRequestItemsInner> items) {
        this.items = items;
        return this;
    }

    public CatalogsRetailBatchRequest addItemsItem(CatalogsRetailBatchRequestItemsInner itemsItem) {
        this.items.add(itemsItem);
        return this;
    }

    /**
     * Array with catalogs item operations
     * @return items
     **/
    @NotNull
    @Size(min=1, max=1000)
    @JsonProperty(JSON_PROPERTY_ITEMS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public List<CatalogsRetailBatchRequestItemsInner> getItems() {
        return items;
    }

    @JsonProperty(JSON_PROPERTY_ITEMS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setItems(List<CatalogsRetailBatchRequestItemsInner> items) {
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
        CatalogsRetailBatchRequest catalogsRetailBatchRequest = (CatalogsRetailBatchRequest) o;
        return Objects.equals(this.catalogType, catalogsRetailBatchRequest.catalogType) &&
            Objects.equals(this.country, catalogsRetailBatchRequest.country) &&
            Objects.equals(this.language, catalogsRetailBatchRequest.language) &&
            Objects.equals(this.items, catalogsRetailBatchRequest.items);
    }

    @Override
    public int hashCode() {
        return Objects.hash(catalogType, country, language, items);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CatalogsRetailBatchRequest {\n");
        sb.append("    catalogType: ").append(toIndentedString(catalogType)).append("\n");
        sb.append("    country: ").append(toIndentedString(country)).append("\n");
        sb.append("    language: ").append(toIndentedString(language)).append("\n");
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

