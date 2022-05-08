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
import org.openapitools.model.CatalogsProductGroupFilterKeys;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * CatalogsProductGroupFiltersAnyOf
 */
@JsonPropertyOrder({
  CatalogsProductGroupFiltersAnyOf.JSON_PROPERTY_ANY_OF
})
@JsonTypeName("CatalogsProductGroupFiltersAnyOf")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-05-08T00:31:24.314778Z[Etc/UTC]")
@Introspected
public class CatalogsProductGroupFiltersAnyOf {
    public static final String JSON_PROPERTY_ANY_OF = "any_of";
    private List<CatalogsProductGroupFilterKeys> anyOf = null;

    public CatalogsProductGroupFiltersAnyOf() {
    }

    public CatalogsProductGroupFiltersAnyOf anyOf(List<CatalogsProductGroupFilterKeys> anyOf) {
        this.anyOf = anyOf;
        return this;
    }

    public CatalogsProductGroupFiltersAnyOf addAnyOfItem(CatalogsProductGroupFilterKeys anyOfItem) {
        if (this.anyOf == null) {
            this.anyOf = new ArrayList<CatalogsProductGroupFilterKeys>();
        }
        this.anyOf.add(anyOfItem);
        return this;
    }

    /**
     * Get anyOf
     * @return anyOf
     **/
    @Nullable
    @ApiModelProperty(value = "")
    @JsonProperty(JSON_PROPERTY_ANY_OF)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public List<CatalogsProductGroupFilterKeys> getAnyOf() {
        return anyOf;
    }

    @JsonProperty(JSON_PROPERTY_ANY_OF)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setAnyOf(List<CatalogsProductGroupFilterKeys> anyOf) {
        this.anyOf = anyOf;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CatalogsProductGroupFiltersAnyOf catalogsProductGroupFiltersAnyOf = (CatalogsProductGroupFiltersAnyOf) o;
        return Objects.equals(this.anyOf, catalogsProductGroupFiltersAnyOf.anyOf);
    }

    @Override
    public int hashCode() {
        return Objects.hash(anyOf);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CatalogsProductGroupFiltersAnyOf {\n");
        sb.append("    anyOf: ").append(toIndentedString(anyOf)).append("\n");
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
