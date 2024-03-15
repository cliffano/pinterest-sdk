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
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.math.BigDecimal;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Keyword metrics JSON
 */
@ApiModel(description = "Keyword metrics JSON")
@JsonPropertyOrder({
  KeywordMetrics.JSON_PROPERTY_AVG_CPC_IN_MICRO_CURRENCY,
  KeywordMetrics.JSON_PROPERTY_KEYWORD_QUERY_VOLUME
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2024-03-14T23:04:30.273794609Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class KeywordMetrics   {
  public static final String JSON_PROPERTY_AVG_CPC_IN_MICRO_CURRENCY = "avg_cpc_in_micro_currency";
  @JsonProperty(JSON_PROPERTY_AVG_CPC_IN_MICRO_CURRENCY)
  private BigDecimal avgCpcInMicroCurrency;

  public static final String JSON_PROPERTY_KEYWORD_QUERY_VOLUME = "keyword_query_volume";
  @JsonProperty(JSON_PROPERTY_KEYWORD_QUERY_VOLUME)
  private String keywordQueryVolume;

  public KeywordMetrics avgCpcInMicroCurrency(BigDecimal avgCpcInMicroCurrency) {
    this.avgCpcInMicroCurrency = avgCpcInMicroCurrency;
    return this;
  }

  /**
   * Average cost per click
   * @return avgCpcInMicroCurrency
   **/
  @JsonProperty(value = "avg_cpc_in_micro_currency")
  @ApiModelProperty(example = "100000", value = "Average cost per click")
  @Valid 
  public BigDecimal getAvgCpcInMicroCurrency() {
    return avgCpcInMicroCurrency;
  }

  public void setAvgCpcInMicroCurrency(BigDecimal avgCpcInMicroCurrency) {
    this.avgCpcInMicroCurrency = avgCpcInMicroCurrency;
  }

  public KeywordMetrics keywordQueryVolume(String keywordQueryVolume) {
    this.keywordQueryVolume = keywordQueryVolume;
    return this;
  }

  /**
   * Keyword&#39;s search frequency. This value is based on keyword frequency in pepsi client response
   * @return keywordQueryVolume
   **/
  @JsonProperty(value = "keyword_query_volume")
  @ApiModelProperty(example = "5M+", value = "Keyword's search frequency. This value is based on keyword frequency in pepsi client response")
  
  public String getKeywordQueryVolume() {
    return keywordQueryVolume;
  }

  public void setKeywordQueryVolume(String keywordQueryVolume) {
    this.keywordQueryVolume = keywordQueryVolume;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    KeywordMetrics keywordMetrics = (KeywordMetrics) o;
    return Objects.equals(this.avgCpcInMicroCurrency, keywordMetrics.avgCpcInMicroCurrency) &&
        Objects.equals(this.keywordQueryVolume, keywordMetrics.keywordQueryVolume);
  }

  @Override
  public int hashCode() {
    return Objects.hash(avgCpcInMicroCurrency, keywordQueryVolume);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class KeywordMetrics {\n");
    
    sb.append("    avgCpcInMicroCurrency: ").append(toIndentedString(avgCpcInMicroCurrency)).append("\n");
    sb.append("    keywordQueryVolume: ").append(toIndentedString(keywordQueryVolume)).append("\n");
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
