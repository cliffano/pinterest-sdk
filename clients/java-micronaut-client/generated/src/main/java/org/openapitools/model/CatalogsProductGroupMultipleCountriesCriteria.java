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
import org.openapitools.model.Country;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * CatalogsProductGroupMultipleCountriesCriteria
 */
@JsonPropertyOrder({
  CatalogsProductGroupMultipleCountriesCriteria.JSON_PROPERTY_VALUES,
  CatalogsProductGroupMultipleCountriesCriteria.JSON_PROPERTY_NEGATED
})
@JsonTypeName("CatalogsProductGroupMultipleCountriesCriteria")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class CatalogsProductGroupMultipleCountriesCriteria {
    public static final String JSON_PROPERTY_VALUES = "values";
    private List<Country> values = new ArrayList<>();

    public static final String JSON_PROPERTY_NEGATED = "negated";
    private Boolean negated = false;

    public CatalogsProductGroupMultipleCountriesCriteria(List<Country> values) {
        this.values = values;
    }

    public CatalogsProductGroupMultipleCountriesCriteria values(List<Country> values) {
        this.values = values;
        return this;
    }

    public CatalogsProductGroupMultipleCountriesCriteria addValuesItem(Country valuesItem) {
        this.values.add(valuesItem);
        return this;
    }

    /**
     * Get values
     * @return values
     **/
    @NotNull
    @JsonProperty(JSON_PROPERTY_VALUES)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public List<Country> getValues() {
        return values;
    }

    @JsonProperty(JSON_PROPERTY_VALUES)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setValues(List<Country> values) {
        this.values = values;
    }

    public CatalogsProductGroupMultipleCountriesCriteria negated(Boolean negated) {
        this.negated = negated;
        return this;
    }

    /**
     * Get negated
     * @return negated
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_NEGATED)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Boolean getNegated() {
        return negated;
    }

    @JsonProperty(JSON_PROPERTY_NEGATED)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setNegated(Boolean negated) {
        this.negated = negated;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        CatalogsProductGroupMultipleCountriesCriteria catalogsProductGroupMultipleCountriesCriteria = (CatalogsProductGroupMultipleCountriesCriteria) o;
        return Objects.equals(this.values, catalogsProductGroupMultipleCountriesCriteria.values) &&
            Objects.equals(this.negated, catalogsProductGroupMultipleCountriesCriteria.negated);
    }

    @Override
    public int hashCode() {
        return Objects.hash(values, negated);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class CatalogsProductGroupMultipleCountriesCriteria {\n");
        sb.append("    values: ").append(toIndentedString(values)).append("\n");
        sb.append("    negated: ").append(toIndentedString(negated)).append("\n");
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

