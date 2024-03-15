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
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.AdsAnalyticsFilterColumn;
import org.openapitools.model.AdsAnalyticsFilterOperator;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * AdsAnalyticsMetricsFilter
 */
@JsonPropertyOrder({
  AdsAnalyticsMetricsFilter.JSON_PROPERTY_FIELD,
  AdsAnalyticsMetricsFilter.JSON_PROPERTY_OPERATOR,
  AdsAnalyticsMetricsFilter.JSON_PROPERTY_VALUES
})
@JsonTypeName("AdsAnalyticsMetricsFilter")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class AdsAnalyticsMetricsFilter {
    public static final String JSON_PROPERTY_FIELD = "field";
    private AdsAnalyticsFilterColumn field;

    public static final String JSON_PROPERTY_OPERATOR = "operator";
    private AdsAnalyticsFilterOperator operator;

    public static final String JSON_PROPERTY_VALUES = "values";
    private List<BigDecimal> values = new ArrayList<>();

    public AdsAnalyticsMetricsFilter(AdsAnalyticsFilterColumn field, AdsAnalyticsFilterOperator operator, List<BigDecimal> values) {
        this.field = field;
        this.operator = operator;
        this.values = values;
    }

    public AdsAnalyticsMetricsFilter field(AdsAnalyticsFilterColumn field) {
        this.field = field;
        return this;
    }

    /**
     * Get field
     * @return field
     **/
    @NotNull
    @Schema(name = "field", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_FIELD)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public AdsAnalyticsFilterColumn getField() {
        return field;
    }

    @JsonProperty(JSON_PROPERTY_FIELD)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setField(AdsAnalyticsFilterColumn field) {
        this.field = field;
    }

    public AdsAnalyticsMetricsFilter operator(AdsAnalyticsFilterOperator operator) {
        this.operator = operator;
        return this;
    }

    /**
     * Get operator
     * @return operator
     **/
    @NotNull
    @Schema(name = "operator", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_OPERATOR)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public AdsAnalyticsFilterOperator getOperator() {
        return operator;
    }

    @JsonProperty(JSON_PROPERTY_OPERATOR)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setOperator(AdsAnalyticsFilterOperator operator) {
        this.operator = operator;
    }

    public AdsAnalyticsMetricsFilter values(List<BigDecimal> values) {
        this.values = values;
        return this;
    }

    public AdsAnalyticsMetricsFilter addValuesItem(BigDecimal valuesItem) {
        this.values.add(valuesItem);
        return this;
    }

    /**
     * List of values for filtering
     * @return values
     **/
    @NotNull
    @Size(min=1)
    @Schema(name = "values", description = "List of values for filtering", requiredMode = Schema.RequiredMode.REQUIRED)
    @JsonProperty(JSON_PROPERTY_VALUES)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public List<BigDecimal> getValues() {
        return values;
    }

    @JsonProperty(JSON_PROPERTY_VALUES)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setValues(List<BigDecimal> values) {
        this.values = values;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        AdsAnalyticsMetricsFilter adsAnalyticsMetricsFilter = (AdsAnalyticsMetricsFilter) o;
        return Objects.equals(this.field, adsAnalyticsMetricsFilter.field) &&
            Objects.equals(this.operator, adsAnalyticsMetricsFilter.operator) &&
            Objects.equals(this.values, adsAnalyticsMetricsFilter.values);
    }

    @Override
    public int hashCode() {
        return Objects.hash(field, operator, values);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class AdsAnalyticsMetricsFilter {\n");
        sb.append("    field: ").append(toIndentedString(field)).append("\n");
        sb.append("    operator: ").append(toIndentedString(operator)).append("\n");
        sb.append("    values: ").append(toIndentedString(values)).append("\n");
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

