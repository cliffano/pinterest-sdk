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
import org.openapitools.model.CatalogsHotelProductGroupFilterKeys;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * CatalogsHotelProductGroupFiltersAllOf
 */
@JsonPropertyOrder({
  CatalogsHotelProductGroupFiltersAllOf.JSON_PROPERTY_ALL_OF
})
@JsonTypeName("CatalogsHotelProductGroupFiltersAllOf")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class CatalogsHotelProductGroupFiltersAllOf {
    public static final String JSON_PROPERTY_ALL_OF = "all_of";
    private List<CatalogsHotelProductGroupFilterKeys> allOf = new ArrayList<>();

    public CatalogsHotelProductGroupFiltersAllOf(List<CatalogsHotelProductGroupFilterKeys> allOf) {
        this.allOf = allOf;
    }

    public CatalogsHotelProductGroupFiltersAllOf allOf(List<CatalogsHotelProductGroupFilterKeys> allOf) {
        this.allOf = allOf;
        return this;
    }

    public CatalogsHotelProductGroupFiltersAllOf addAllOfItem(CatalogsHotelProductGroupFilterKeys allOfItem) {
        this.allOf.add(allOfItem);
        return this;
    }

    /**
     * Get allOf
     * @return allOf
     **/
    @NotNull
    @JsonProperty(JSON_PROPERTY_ALL_OF)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public List<CatalogsHotelProductGroupFilterKeys> getAllOf() {
        return allOf;
    }

    @JsonProperty(JSON_PROPERTY_ALL_OF)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setAllOf(List<CatalogsHotelProductGroupFilterKeys> allOf) {
        this.allOf = allOf;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CatalogsHotelProductGroupFiltersAllOf catalogsHotelProductGroupFiltersAllOf = (CatalogsHotelProductGroupFiltersAllOf) o;
        return Objects.equals(this.allOf, catalogsHotelProductGroupFiltersAllOf.allOf);
    }

    @Override
    public int hashCode() {
        return Objects.hash(allOf);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CatalogsHotelProductGroupFiltersAllOf {\n");
        sb.append("    allOf: ").append(toIndentedString(allOf)).append("\n");
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

