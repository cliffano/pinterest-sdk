package apimodels;

import apimodels.OptimizationGoalMetadataConversionTagV3GoalMetadata;
import apimodels.OptimizationGoalMetadataFrequencyGoalMetadata;
import apimodels.OptimizationGoalMetadataScrollupGoalMetadata;
import com.fasterxml.jackson.annotation.JsonTypeName;
import com.fasterxml.jackson.annotation.*;
import java.util.Set;
import javax.validation.*;
import java.util.Objects;
import javax.validation.constraints.*;
import javax.validation.Valid;
/**
 * Optimization goals for objective-based performance campaigns. **REQUIRED** when campaign&#39;s &#x60;objective_type&#x60; is set to &#x60;\&quot;WEB_CONVERSION\&quot;&#x60;.
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaPlayFrameworkCodegen", date = "2024-03-14T23:02:53.026613321Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@SuppressWarnings({"UnusedReturnValue", "WeakerAccess"})
public class AdGroupCommonOptimizationGoalMetadata   {
  @JsonProperty("conversion_tag_v3_goal_metadata")
  @Valid

  private OptimizationGoalMetadataConversionTagV3GoalMetadata conversionTagV3GoalMetadata;

  @JsonProperty("frequency_goal_metadata")
  @Valid

  private OptimizationGoalMetadataFrequencyGoalMetadata frequencyGoalMetadata;

  @JsonProperty("scrollup_goal_metadata")
  @Valid

  private OptimizationGoalMetadataScrollupGoalMetadata scrollupGoalMetadata;

  public AdGroupCommonOptimizationGoalMetadata conversionTagV3GoalMetadata(OptimizationGoalMetadataConversionTagV3GoalMetadata conversionTagV3GoalMetadata) {
    this.conversionTagV3GoalMetadata = conversionTagV3GoalMetadata;
    return this;
  }

   /**
   * Get conversionTagV3GoalMetadata
   * @return conversionTagV3GoalMetadata
  **/
  public OptimizationGoalMetadataConversionTagV3GoalMetadata getConversionTagV3GoalMetadata() {
    return conversionTagV3GoalMetadata;
  }

  public void setConversionTagV3GoalMetadata(OptimizationGoalMetadataConversionTagV3GoalMetadata conversionTagV3GoalMetadata) {
    this.conversionTagV3GoalMetadata = conversionTagV3GoalMetadata;
  }

  public AdGroupCommonOptimizationGoalMetadata frequencyGoalMetadata(OptimizationGoalMetadataFrequencyGoalMetadata frequencyGoalMetadata) {
    this.frequencyGoalMetadata = frequencyGoalMetadata;
    return this;
  }

   /**
   * Get frequencyGoalMetadata
   * @return frequencyGoalMetadata
  **/
  public OptimizationGoalMetadataFrequencyGoalMetadata getFrequencyGoalMetadata() {
    return frequencyGoalMetadata;
  }

  public void setFrequencyGoalMetadata(OptimizationGoalMetadataFrequencyGoalMetadata frequencyGoalMetadata) {
    this.frequencyGoalMetadata = frequencyGoalMetadata;
  }

  public AdGroupCommonOptimizationGoalMetadata scrollupGoalMetadata(OptimizationGoalMetadataScrollupGoalMetadata scrollupGoalMetadata) {
    this.scrollupGoalMetadata = scrollupGoalMetadata;
    return this;
  }

   /**
   * Get scrollupGoalMetadata
   * @return scrollupGoalMetadata
  **/
  public OptimizationGoalMetadataScrollupGoalMetadata getScrollupGoalMetadata() {
    return scrollupGoalMetadata;
  }

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
    AdGroupCommonOptimizationGoalMetadata adGroupCommonOptimizationGoalMetadata = (AdGroupCommonOptimizationGoalMetadata) o;
    return Objects.equals(conversionTagV3GoalMetadata, adGroupCommonOptimizationGoalMetadata.conversionTagV3GoalMetadata) &&
        Objects.equals(frequencyGoalMetadata, adGroupCommonOptimizationGoalMetadata.frequencyGoalMetadata) &&
        Objects.equals(scrollupGoalMetadata, adGroupCommonOptimizationGoalMetadata.scrollupGoalMetadata);
  }

  @Override
  public int hashCode() {
    return Objects.hash(conversionTagV3GoalMetadata, frequencyGoalMetadata, scrollupGoalMetadata);
  }

  @SuppressWarnings("StringBufferReplaceableByString")
  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdGroupCommonOptimizationGoalMetadata {\n");
    
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

