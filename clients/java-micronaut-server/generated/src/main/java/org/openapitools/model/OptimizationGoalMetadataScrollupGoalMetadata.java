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
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * OptimizationGoalMetadataScrollupGoalMetadata
 */
@JsonPropertyOrder({
  OptimizationGoalMetadataScrollupGoalMetadata.JSON_PROPERTY_SCROLLUP_GOAL_VALUE_IN_MICRO_CURRENCY
})
@JsonTypeName("OptimizationGoalMetadata_scrollup_goal_metadata")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class OptimizationGoalMetadataScrollupGoalMetadata {
    public static final String JSON_PROPERTY_SCROLLUP_GOAL_VALUE_IN_MICRO_CURRENCY = "scrollup_goal_value_in_micro_currency";
    private String scrollupGoalValueInMicroCurrency;

    public OptimizationGoalMetadataScrollupGoalMetadata() {
    }

    public OptimizationGoalMetadataScrollupGoalMetadata scrollupGoalValueInMicroCurrency(String scrollupGoalValueInMicroCurrency) {
        this.scrollupGoalValueInMicroCurrency = scrollupGoalValueInMicroCurrency;
        return this;
    }

    /**
     * Get scrollupGoalValueInMicroCurrency
     * @return scrollupGoalValueInMicroCurrency
     **/
    @Nullable
    @Pattern(regexp="^[0-9]+$")
    @Schema(name = "scrollup_goal_value_in_micro_currency", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_SCROLLUP_GOAL_VALUE_IN_MICRO_CURRENCY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getScrollupGoalValueInMicroCurrency() {
        return scrollupGoalValueInMicroCurrency;
    }

    @JsonProperty(JSON_PROPERTY_SCROLLUP_GOAL_VALUE_IN_MICRO_CURRENCY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setScrollupGoalValueInMicroCurrency(String scrollupGoalValueInMicroCurrency) {
        this.scrollupGoalValueInMicroCurrency = scrollupGoalValueInMicroCurrency;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        OptimizationGoalMetadataScrollupGoalMetadata optimizationGoalMetadataScrollupGoalMetadata = (OptimizationGoalMetadataScrollupGoalMetadata) o;
        return Objects.equals(this.scrollupGoalValueInMicroCurrency, optimizationGoalMetadataScrollupGoalMetadata.scrollupGoalValueInMicroCurrency);
    }

    @Override
    public int hashCode() {
        return Objects.hash(scrollupGoalValueInMicroCurrency);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class OptimizationGoalMetadataScrollupGoalMetadata {\n");
        sb.append("    scrollupGoalValueInMicroCurrency: ").append(toIndentedString(scrollupGoalValueInMicroCurrency)).append("\n");
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
