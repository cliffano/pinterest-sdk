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
import org.openapitools.model.BatchOperation;
import org.openapitools.model.Country;
import org.openapitools.model.ItemDeleteDiscontinuedBatchRecord;
import org.openapitools.model.Language;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * Request object to discontinue catalogs items
 */
@Schema(name = "CatalogsItemsDeleteDiscontinuedBatchRequest", description = "Request object to discontinue catalogs items")
@JsonPropertyOrder({
  CatalogsItemsDeleteDiscontinuedBatchRequest.JSON_PROPERTY_COUNTRY,
  CatalogsItemsDeleteDiscontinuedBatchRequest.JSON_PROPERTY_LANGUAGE,
  CatalogsItemsDeleteDiscontinuedBatchRequest.JSON_PROPERTY_OPERATION,
  CatalogsItemsDeleteDiscontinuedBatchRequest.JSON_PROPERTY_ITEMS
})
@JsonTypeName("CatalogsItemsDeleteDiscontinuedBatchRequest")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class CatalogsItemsDeleteDiscontinuedBatchRequest {
    public static final String JSON_PROPERTY_COUNTRY = "country";
    private Country country;

    public static final String JSON_PROPERTY_LANGUAGE = "language";
    private Language language;

    public static final String JSON_PROPERTY_OPERATION = "operation";
    private BatchOperation operation;

    public static final String JSON_PROPERTY_ITEMS = "items";
    private List<@Valid ItemDeleteDiscontinuedBatchRecord> items = new ArrayList<>();

    public CatalogsItemsDeleteDiscontinuedBatchRequest(Country country, Language language, BatchOperation operation, List<@Valid ItemDeleteDiscontinuedBatchRecord> items) {
        this.country = country;
        this.language = language;
        this.operation = operation;
        this.items = items;
    }

    public CatalogsItemsDeleteDiscontinuedBatchRequest country(Country country) {
        this.country = country;
        return this;
    }

    /**
     * Get country
     * @return country
     **/
    @NotNull
    @Schema(name = "country", requiredMode = Schema.RequiredMode.REQUIRED)
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

    public CatalogsItemsDeleteDiscontinuedBatchRequest language(Language language) {
        this.language = language;
        return this;
    }

    /**
     * Get language
     * @return language
     **/
    @NotNull
    @Schema(name = "language", requiredMode = Schema.RequiredMode.REQUIRED)
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

    public CatalogsItemsDeleteDiscontinuedBatchRequest operation(BatchOperation operation) {
        this.operation = operation;
        return this;
    }

    /**
     * Get operation
     * @return operation
     **/
    @NotNull
    @Schema(name = "operation", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_OPERATION)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public BatchOperation getOperation() {
        return operation;
    }

    @JsonProperty(JSON_PROPERTY_OPERATION)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setOperation(BatchOperation operation) {
        this.operation = operation;
    }

    public CatalogsItemsDeleteDiscontinuedBatchRequest items(List<@Valid ItemDeleteDiscontinuedBatchRecord> items) {
        this.items = items;
        return this;
    }

    public CatalogsItemsDeleteDiscontinuedBatchRequest addItemsItem(ItemDeleteDiscontinuedBatchRecord itemsItem) {
        this.items.add(itemsItem);
        return this;
    }

    /**
     * Array with catalogs items
     * @return items
     **/
    @NotNull
    @Schema(name = "items", description = "Array with catalogs items", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_ITEMS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public List<@Valid ItemDeleteDiscontinuedBatchRecord> getItems() {
        return items;
    }

    @JsonProperty(JSON_PROPERTY_ITEMS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setItems(List<@Valid ItemDeleteDiscontinuedBatchRecord> items) {
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
        CatalogsItemsDeleteDiscontinuedBatchRequest catalogsItemsDeleteDiscontinuedBatchRequest = (CatalogsItemsDeleteDiscontinuedBatchRequest) o;
        return Objects.equals(this.country, catalogsItemsDeleteDiscontinuedBatchRequest.country) &&
            Objects.equals(this.language, catalogsItemsDeleteDiscontinuedBatchRequest.language) &&
            Objects.equals(this.operation, catalogsItemsDeleteDiscontinuedBatchRequest.operation) &&
            Objects.equals(this.items, catalogsItemsDeleteDiscontinuedBatchRequest.items);
    }

    @Override
    public int hashCode() {
        return Objects.hash(country, language, operation, items);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CatalogsItemsDeleteDiscontinuedBatchRequest {\n");
        sb.append("    country: ").append(toIndentedString(country)).append("\n");
        sb.append("    language: ").append(toIndentedString(language)).append("\n");
        sb.append("    operation: ").append(toIndentedString(operation)).append("\n");
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

