package com.prokarma.pkmst.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonTypeName;
import com.fasterxml.jackson.annotation.JsonValue;
import com.prokarma.pkmst.model.MatchTypeResponse;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
/**
 * Response class to be returned by Api
 * @author pkmst
 *
 */
/**
 * AdGroupAudienceSizingRequestKeywordsInner
 */

@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaPKMSTServerCodegen", date = "2024-03-14T23:02:40.880156196Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class AdGroupAudienceSizingRequestKeywordsInner   {
  @JsonProperty("match_type")
  private MatchTypeResponse matchType;

  @JsonProperty("value")
  private String value;

  public AdGroupAudienceSizingRequestKeywordsInner matchType(MatchTypeResponse matchType) {
    this.matchType = matchType;
    return this;
  }

   /**
   * Get matchType
   * @return matchType
  **/
  @ApiModelProperty(required = true, value = "")
  public MatchTypeResponse getMatchType() {
    return matchType;
  }

  public void setMatchType(MatchTypeResponse matchType) {
    this.matchType = matchType;
  }

  public AdGroupAudienceSizingRequestKeywordsInner value(String value) {
    this.value = value;
    return this;
  }

   /**
   * Keyword value (120 chars max).
   * @return value
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
    return Objects.equals(this.matchType, adGroupAudienceSizingRequestKeywordsInner.matchType) &&
        Objects.equals(this.value, adGroupAudienceSizingRequestKeywordsInner.value);
  }

  @Override
  public int hashCode() {
    return Objects.hash(matchType, value);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdGroupAudienceSizingRequestKeywordsInner {\n");
    
    sb.append("    matchType: ").append(toIndentedString(matchType)).append("\n");
    sb.append("    value: ").append(toIndentedString(value)).append("\n");
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

