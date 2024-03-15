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

import org.openapitools.client.model.MatchTypeResponse;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class AdGroupAudienceSizingRequestKeywordsInner {
  
  @SerializedName("match_type")
  private MatchTypeResponse matchType = null;
  @SerializedName("value")
  private String value = null;

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public MatchTypeResponse getMatchType() {
    return matchType;
  }
  public void setMatchType(MatchTypeResponse matchType) {
    this.matchType = matchType;
  }

  /**
   * Keyword value (120 chars max).
   **/
  @ApiModelProperty(required = true, value = "Keyword value (120 chars max).")
  public String getValue() {
    return value;
  }
  public void setValue(String value) {
    this.value = value;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdGroupAudienceSizingRequestKeywordsInner adGroupAudienceSizingRequestKeywordsInner = (AdGroupAudienceSizingRequestKeywordsInner) o;
    return (this.matchType == null ? adGroupAudienceSizingRequestKeywordsInner.matchType == null : this.matchType.equals(adGroupAudienceSizingRequestKeywordsInner.matchType)) &&
        (this.value == null ? adGroupAudienceSizingRequestKeywordsInner.value == null : this.value.equals(adGroupAudienceSizingRequestKeywordsInner.value));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.matchType == null ? 0: this.matchType.hashCode());
    result = 31 * result + (this.value == null ? 0: this.value.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdGroupAudienceSizingRequestKeywordsInner {\n");
    
    sb.append("  matchType: ").append(matchType).append("\n");
    sb.append("  value: ").append(value).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
