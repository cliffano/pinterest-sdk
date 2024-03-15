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

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class OptimizationGoalMetadataScrollupGoalMetadata {
  
  @SerializedName("scrollup_goal_value_in_micro_currency")
  private String scrollupGoalValueInMicroCurrency = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public String getScrollupGoalValueInMicroCurrency() {
    return scrollupGoalValueInMicroCurrency;
  }
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
    return (this.scrollupGoalValueInMicroCurrency == null ? optimizationGoalMetadataScrollupGoalMetadata.scrollupGoalValueInMicroCurrency == null : this.scrollupGoalValueInMicroCurrency.equals(optimizationGoalMetadataScrollupGoalMetadata.scrollupGoalValueInMicroCurrency));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.scrollupGoalValueInMicroCurrency == null ? 0: this.scrollupGoalValueInMicroCurrency.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OptimizationGoalMetadataScrollupGoalMetadata {\n");
    
    sb.append("  scrollupGoalValueInMicroCurrency: ").append(scrollupGoalValueInMicroCurrency).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
