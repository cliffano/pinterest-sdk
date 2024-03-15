/**
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

package org.openapitools.client.model;

import org.openapitools.client.model.OptimizationGoalMetadataConversionTagV3GoalMetadata;
import org.openapitools.client.model.OptimizationGoalMetadataFrequencyGoalMetadata;
import org.openapitools.client.model.OptimizationGoalMetadataScrollupGoalMetadata;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * Optimization goals for objective-based performance campaigns. **REQUIRED** when campaign&#39;s &#x60;objective_type&#x60; is set to &#x60;\&quot;WEB_CONVERSION\&quot;&#x60;.
 **/
@ApiModel(description = "Optimization goals for objective-based performance campaigns. **REQUIRED** when campaign's `objective_type` is set to `\"WEB_CONVERSION\"`.")
public class AdGroupCommonOptimizationGoalMetadata {
  
  @SerializedName("conversion_tag_v3_goal_metadata")
  private OptimizationGoalMetadataConversionTagV3GoalMetadata conversionTagV3GoalMetadata = null;
  @SerializedName("frequency_goal_metadata")
  private OptimizationGoalMetadataFrequencyGoalMetadata frequencyGoalMetadata = null;
  @SerializedName("scrollup_goal_metadata")
  private OptimizationGoalMetadataScrollupGoalMetadata scrollupGoalMetadata = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public OptimizationGoalMetadataConversionTagV3GoalMetadata getConversionTagV3GoalMetadata() {
    return conversionTagV3GoalMetadata;
  }
  public void setConversionTagV3GoalMetadata(OptimizationGoalMetadataConversionTagV3GoalMetadata conversionTagV3GoalMetadata) {
    this.conversionTagV3GoalMetadata = conversionTagV3GoalMetadata;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public OptimizationGoalMetadataFrequencyGoalMetadata getFrequencyGoalMetadata() {
    return frequencyGoalMetadata;
  }
  public void setFrequencyGoalMetadata(OptimizationGoalMetadataFrequencyGoalMetadata frequencyGoalMetadata) {
    this.frequencyGoalMetadata = frequencyGoalMetadata;
  }

  /**
   **/
  @ApiModelProperty(value = "")
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
    return (this.conversionTagV3GoalMetadata == null ? adGroupCommonOptimizationGoalMetadata.conversionTagV3GoalMetadata == null : this.conversionTagV3GoalMetadata.equals(adGroupCommonOptimizationGoalMetadata.conversionTagV3GoalMetadata)) &&
        (this.frequencyGoalMetadata == null ? adGroupCommonOptimizationGoalMetadata.frequencyGoalMetadata == null : this.frequencyGoalMetadata.equals(adGroupCommonOptimizationGoalMetadata.frequencyGoalMetadata)) &&
        (this.scrollupGoalMetadata == null ? adGroupCommonOptimizationGoalMetadata.scrollupGoalMetadata == null : this.scrollupGoalMetadata.equals(adGroupCommonOptimizationGoalMetadata.scrollupGoalMetadata));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.conversionTagV3GoalMetadata == null ? 0: this.conversionTagV3GoalMetadata.hashCode());
    result = 31 * result + (this.frequencyGoalMetadata == null ? 0: this.frequencyGoalMetadata.hashCode());
    result = 31 * result + (this.scrollupGoalMetadata == null ? 0: this.scrollupGoalMetadata.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdGroupCommonOptimizationGoalMetadata {\n");
    
    sb.append("  conversionTagV3GoalMetadata: ").append(conversionTagV3GoalMetadata).append("\n");
    sb.append("  frequencyGoalMetadata: ").append(frequencyGoalMetadata).append("\n");
    sb.append("  scrollupGoalMetadata: ").append(scrollupGoalMetadata).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}