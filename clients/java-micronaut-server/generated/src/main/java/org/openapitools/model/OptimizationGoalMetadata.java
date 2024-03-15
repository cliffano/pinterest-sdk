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
import org.openapitools.model.OptimizationGoalMetadataConversionTagV3GoalMetadata;
import org.openapitools.model.OptimizationGoalMetadataFrequencyGoalMetadata;
import org.openapitools.model.OptimizationGoalMetadataScrollupGoalMetadata;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * OptimizationGoalMetadata
 */
@JsonPropertyOrder({
  OptimizationGoalMetadata.JSON_PROPERTY_CONVERSION_TAG_V3_GOAL_METADATA,
  OptimizationGoalMetadata.JSON_PROPERTY_FREQUENCY_GOAL_METADATA,
  OptimizationGoalMetadata.JSON_PROPERTY_SCROLLUP_GOAL_METADATA
})
@JsonTypeName("OptimizationGoalMetadata")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class OptimizationGoalMetadata {
    public static final String JSON_PROPERTY_CONVERSION_TAG_V3_GOAL_METADATA = "conversion_tag_v3_goal_metadata";
    private OptimizationGoalMetadataConversionTagV3GoalMetadata conversionTagV3GoalMetadata;

    public static final String JSON_PROPERTY_FREQUENCY_GOAL_METADATA = "frequency_goal_metadata";
    private OptimizationGoalMetadataFrequencyGoalMetadata frequencyGoalMetadata;

    public static final String JSON_PROPERTY_SCROLLUP_GOAL_METADATA = "scrollup_goal_metadata";
    private OptimizationGoalMetadataScrollupGoalMetadata scrollupGoalMetadata;

    public OptimizationGoalMetadata() {
    }

    public OptimizationGoalMetadata conversionTagV3GoalMetadata(OptimizationGoalMetadataConversionTagV3GoalMetadata conversionTagV3GoalMetadata) {
        this.conversionTagV3GoalMetadata = conversionTagV3GoalMetadata;
        return this;
    }

    /**
     * Get conversionTagV3GoalMetadata
     * @return conversionTagV3GoalMetadata
     **/
    @Valid
    @Nullable
    @Schema(name = "conversion_tag_v3_goal_metadata", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_CONVERSION_TAG_V3_GOAL_METADATA)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public OptimizationGoalMetadataConversionTagV3GoalMetadata getConversionTagV3GoalMetadata() {
        return conversionTagV3GoalMetadata;
    }

    @JsonProperty(JSON_PROPERTY_CONVERSION_TAG_V3_GOAL_METADATA)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setConversionTagV3GoalMetadata(OptimizationGoalMetadataConversionTagV3GoalMetadata conversionTagV3GoalMetadata) {
        this.conversionTagV3GoalMetadata = conversionTagV3GoalMetadata;
    }

    public OptimizationGoalMetadata frequencyGoalMetadata(OptimizationGoalMetadataFrequencyGoalMetadata frequencyGoalMetadata) {
        this.frequencyGoalMetadata = frequencyGoalMetadata;
        return this;
    }

    /**
     * Get frequencyGoalMetadata
     * @return frequencyGoalMetadata
     **/
    @Valid
    @Nullable
    @Schema(name = "frequency_goal_metadata", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_FREQUENCY_GOAL_METADATA)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public OptimizationGoalMetadataFrequencyGoalMetadata getFrequencyGoalMetadata() {
        return frequencyGoalMetadata;
    }

    @JsonProperty(JSON_PROPERTY_FREQUENCY_GOAL_METADATA)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setFrequencyGoalMetadata(OptimizationGoalMetadataFrequencyGoalMetadata frequencyGoalMetadata) {
        this.frequencyGoalMetadata = frequencyGoalMetadata;
    }

    public OptimizationGoalMetadata scrollupGoalMetadata(OptimizationGoalMetadataScrollupGoalMetadata scrollupGoalMetadata) {
        this.scrollupGoalMetadata = scrollupGoalMetadata;
        return this;
    }

    /**
     * Get scrollupGoalMetadata
     * @return scrollupGoalMetadata
     **/
    @Valid
    @Nullable
    @Schema(name = "scrollup_goal_metadata", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_SCROLLUP_GOAL_METADATA)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public OptimizationGoalMetadataScrollupGoalMetadata getScrollupGoalMetadata() {
        return scrollupGoalMetadata;
    }

    @JsonProperty(JSON_PROPERTY_SCROLLUP_GOAL_METADATA)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setScrollupGoalMetadata(OptimizationGoalMetadataScrollupGoalMetadata scrollupGoalMetadata) {
        this.scrollupGoalMetadata = scrollupGoalMetadata;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        OptimizationGoalMetadata optimizationGoalMetadata = (OptimizationGoalMetadata) o;
        return Objects.equals(this.conversionTagV3GoalMetadata, optimizationGoalMetadata.conversionTagV3GoalMetadata) &&
            Objects.equals(this.frequencyGoalMetadata, optimizationGoalMetadata.frequencyGoalMetadata) &&
            Objects.equals(this.scrollupGoalMetadata, optimizationGoalMetadata.scrollupGoalMetadata);
    }

    @Override
    public int hashCode() {
        return Objects.hash(conversionTagV3GoalMetadata, frequencyGoalMetadata, scrollupGoalMetadata);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class OptimizationGoalMetadata {\n");
        sb.append("    conversionTagV3GoalMetadata: ").append(toIndentedString(conversionTagV3GoalMetadata)).append("\n");
        sb.append("    frequencyGoalMetadata: ").append(toIndentedString(frequencyGoalMetadata)).append("\n");
        sb.append("    scrollupGoalMetadata: ").append(toIndentedString(scrollupGoalMetadata)).append("\n");
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

