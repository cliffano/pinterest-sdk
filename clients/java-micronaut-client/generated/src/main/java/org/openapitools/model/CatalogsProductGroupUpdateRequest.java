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
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.CatalogsProductGroupFilters;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * Request object for updating a product group.
 */
@ApiModel(description = "Request object for updating a product group.")
@JsonPropertyOrder({
  CatalogsProductGroupUpdateRequest.JSON_PROPERTY_FEED_ID,
  CatalogsProductGroupUpdateRequest.JSON_PROPERTY_NAME,
  CatalogsProductGroupUpdateRequest.JSON_PROPERTY_DESCRIPTION,
  CatalogsProductGroupUpdateRequest.JSON_PROPERTY_FILTERS
})
@JsonTypeName("CatalogsProductGroupUpdateRequest")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2022-05-07T06:38:30.955411Z[Etc/UTC]")
@Introspected
public class CatalogsProductGroupUpdateRequest {
    public static final String JSON_PROPERTY_FEED_ID = "feed_id";
    private String feedId;

    public static final String JSON_PROPERTY_NAME = "name";
    private String name;

    public static final String JSON_PROPERTY_DESCRIPTION = "description";
    private String description;

    public static final String JSON_PROPERTY_FILTERS = "filters";
    private CatalogsProductGroupFilters filters;

    public CatalogsProductGroupUpdateRequest(String feedId, String name, CatalogsProductGroupFilters filters) {
        this.feedId = feedId;
        this.name = name;
        this.filters = filters;
    }

    public CatalogsProductGroupUpdateRequest feedId(String feedId) {
        this.feedId = feedId;
        return this;
    }

    /**
     * Catalog Feed id pertaining to the catalog product group.
     * @return feedId
     **/
    @NotNull
    @Pattern(regexp="^\\d+$")
    @ApiModelProperty(example = "2680059592705", required = true, value = "Catalog Feed id pertaining to the catalog product group.")
    @JsonProperty(JSON_PROPERTY_FEED_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public String getFeedId() {
        return feedId;
    }

    @JsonProperty(JSON_PROPERTY_FEED_ID)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setFeedId(String feedId) {
        this.feedId = feedId;
    }

    public CatalogsProductGroupUpdateRequest name(String name) {
        this.name = name;
        return this;
    }

    /**
     * Get name
     * @return name
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_NAME)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public String getName() {
        return name;
    }

    @JsonProperty(JSON_PROPERTY_NAME)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setName(String name) {
        this.name = name;
    }

    public CatalogsProductGroupUpdateRequest description(String description) {
        this.description = description;
        return this;
    }

    /**
     * Get description
     * @return description
     **/
    @Nullable
    @ApiModelProperty(value = "")
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

    public CatalogsProductGroupUpdateRequest filters(CatalogsProductGroupFilters filters) {
        this.filters = filters;
        return this;
    }

    /**
     * Get filters
     * @return filters
     **/
    @Valid
    @NotNull
    @ApiModelProperty(required = true, value = "")
    @JsonProperty(JSON_PROPERTY_FILTERS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public CatalogsProductGroupFilters getFilters() {
        return filters;
    }

    @JsonProperty(JSON_PROPERTY_FILTERS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setFilters(CatalogsProductGroupFilters filters) {
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
        CatalogsProductGroupUpdateRequest catalogsProductGroupUpdateRequest = (CatalogsProductGroupUpdateRequest) o;
        return Objects.equals(this.feedId, catalogsProductGroupUpdateRequest.feedId) &&
            Objects.equals(this.name, catalogsProductGroupUpdateRequest.name) &&
            Objects.equals(this.description, catalogsProductGroupUpdateRequest.description) &&
            Objects.equals(this.filters, catalogsProductGroupUpdateRequest.filters);
    }

    @Override
    public int hashCode() {
        return Objects.hash(feedId, name, description, filters);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CatalogsProductGroupUpdateRequest {\n");
        sb.append("    feedId: ").append(toIndentedString(feedId)).append("\n");
        sb.append("    name: ").append(toIndentedString(name)).append("\n");
        sb.append("    description: ").append(toIndentedString(description)).append("\n");
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
