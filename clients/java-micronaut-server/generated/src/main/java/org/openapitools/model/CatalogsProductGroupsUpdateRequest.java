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
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.CatalogsProductGroupFiltersRequest;
import org.openapitools.model.CatalogsProductGroupUpdateRequest;
import org.openapitools.model.CatalogsVerticalProductGroupUpdateRequest;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * CatalogsProductGroupsUpdateRequest
 */
@JsonPropertyOrder({
  CatalogsProductGroupsUpdateRequest.JSON_PROPERTY_NAME,
  CatalogsProductGroupsUpdateRequest.JSON_PROPERTY_DESCRIPTION,
  CatalogsProductGroupsUpdateRequest.JSON_PROPERTY_IS_FEATURED,
  CatalogsProductGroupsUpdateRequest.JSON_PROPERTY_FILTERS
})
@JsonTypeName("catalogs_product_groups_update_request")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class CatalogsProductGroupsUpdateRequest {
    public static final String JSON_PROPERTY_NAME = "name";
    private String name;

    public static final String JSON_PROPERTY_DESCRIPTION = "description";
    private String description;

    public static final String JSON_PROPERTY_IS_FEATURED = "is_featured";
    private Boolean isFeatured;

    public static final String JSON_PROPERTY_FILTERS = "filters";
    private CatalogsProductGroupFiltersRequest filters;

    public CatalogsProductGroupsUpdateRequest() {
    }

    public CatalogsProductGroupsUpdateRequest name(String name) {
        this.name = name;
        return this;
    }

    /**
     * Get name
     * @return name
     **/
    @Nullable
    @Schema(name = "name", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_NAME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getName() {
        return name;
    }

    @JsonProperty(JSON_PROPERTY_NAME)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setName(String name) {
        this.name = name;
    }

    public CatalogsProductGroupsUpdateRequest description(String description) {
        this.description = description;
        return this;
    }

    /**
     * Get description
     * @return description
     **/
    @Nullable
    @Schema(name = "description", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_DESCRIPTION)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getDescription() {
        return description;
    }

    @JsonProperty(JSON_PROPERTY_DESCRIPTION)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setDescription(String description) {
        this.description = description;
    }

    public CatalogsProductGroupsUpdateRequest isFeatured(Boolean isFeatured) {
        this.isFeatured = isFeatured;
        return this;
    }

    /**
     * boolean indicator of whether the product group is being featured or not
     * @return isFeatured
     **/
    @Nullable
    @Schema(name = "is_featured", description = "boolean indicator of whether the product group is being featured or not", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_IS_FEATURED)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Boolean getIsFeatured() {
        return isFeatured;
    }

    @JsonProperty(JSON_PROPERTY_IS_FEATURED)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setIsFeatured(Boolean isFeatured) {
        this.isFeatured = isFeatured;
    }

    public CatalogsProductGroupsUpdateRequest filters(CatalogsProductGroupFiltersRequest filters) {
        this.filters = filters;
        return this;
    }

    /**
     * Get filters
     * @return filters
     **/
    @Valid
    @Nullable
    @Schema(name = "filters", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_FILTERS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public CatalogsProductGroupFiltersRequest getFilters() {
        return filters;
    }

    @JsonProperty(JSON_PROPERTY_FILTERS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setFilters(CatalogsProductGroupFiltersRequest filters) {
        this.filters = filters;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CatalogsProductGroupsUpdateRequest catalogsProductGroupsUpdateRequest = (CatalogsProductGroupsUpdateRequest) o;
        return Objects.equals(this.name, catalogsProductGroupsUpdateRequest.name) &&
            Objects.equals(this.description, catalogsProductGroupsUpdateRequest.description) &&
            Objects.equals(this.isFeatured, catalogsProductGroupsUpdateRequest.isFeatured) &&
            Objects.equals(this.filters, catalogsProductGroupsUpdateRequest.filters);
    }

    @Override
    public int hashCode() {
        return Objects.hash(name, description, isFeatured, filters);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CatalogsProductGroupsUpdateRequest {\n");
        sb.append("    name: ").append(toIndentedString(name)).append("\n");
        sb.append("    description: ").append(toIndentedString(description)).append("\n");
        sb.append("    isFeatured: ").append(toIndentedString(isFeatured)).append("\n");
        sb.append("    filters: ").append(toIndentedString(filters)).append("\n");
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

