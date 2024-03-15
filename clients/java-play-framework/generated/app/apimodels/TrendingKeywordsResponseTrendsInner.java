package apimodels;

import apimodels.TrendingKeywordsResponseTrendsInnerTimeSeries;
import com.fasterxml.jackson.annotation.JsonTypeName;
import com.fasterxml.jackson.annotation.*;
import java.util.Set;
import javax.validation.*;
import java.util.Objects;
import javax.validation.constraints.*;
import javax.validation.Valid;
/**
 * TrendingKeywordsResponseTrendsInner
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaPlayFrameworkCodegen", date = "2024-03-14T23:02:53.026613321Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@SuppressWarnings({"UnusedReturnValue", "WeakerAccess"})
public class TrendingKeywordsResponseTrendsInner   {
  @JsonProperty("keyword")
  @Size(min=1)

  private String keyword;

  @JsonProperty("pct_growth_wow")
  
  private Integer pctGrowthWow;

  @JsonProperty("pct_growth_mom")
  
  private Integer pctGrowthMom;

  @JsonProperty("pct_growth_yoy")
  
  private Integer pctGrowthYoy;

  @JsonProperty("time_series")
  @Valid

  private TrendingKeywordsResponseTrendsInnerTimeSeries timeSeries;

  public TrendingKeywordsResponseTrendsInner keyword(String keyword) {
    this.keyword = keyword;
    return this;
  }

   /**
   * The keyword that is trending.
   * @return keyword
  **/
  public String getKeyword() {
    return keyword;
  }

  public void setKeyword(String keyword) {
    this.keyword = keyword;
  }

  public TrendingKeywordsResponseTrendsInner pctGrowthWow(Integer pctGrowthWow) {
    this.pctGrowthWow = pctGrowthWow;
    return this;
  }

   /**
   * The week-over-week percent change in search volume for this keyword.<br /> For example, a value of \"50\" would represent a 50% increase in searches in the last seven days compared to the week prior.<br /> **Note**: growth rates are rounded, with a maximum of +/- 10000% change.  A value of 10001 indicates that this keyword experienced > 10000% week-over-week growth.
   * @return pctGrowthWow
  **/
  public Integer getPctGrowthWow() {
    return pctGrowthWow;
  }

  public void setPctGrowthWow(Integer pctGrowthWow) {
    this.pctGrowthWow = pctGrowthWow;
  }

  public TrendingKeywordsResponseTrendsInner pctGrowthMom(Integer pctGrowthMom) {
    this.pctGrowthMom = pctGrowthMom;
    return this;
  }

   /**
   * The month-over-month percent change in search volume for this keyword.<br /> For example, a value of \"400\" would represent a 400% increase in searches in the last 30 days compared to the month prior.<br /> **Note**: growth rates are rounded, with a maximum of +/- 10000% change.  A value of 10001 indicates that this keyword experienced > 10000% month-over-month growth.
   * @return pctGrowthMom
  **/
  public Integer getPctGrowthMom() {
    return pctGrowthMom;
  }

  public void setPctGrowthMom(Integer pctGrowthMom) {
    this.pctGrowthMom = pctGrowthMom;
  }

  public TrendingKeywordsResponseTrendsInner pctGrowthYoy(Integer pctGrowthYoy) {
    this.pctGrowthYoy = pctGrowthYoy;
    return this;
  }

   /**
   * The year-over-year percent change in search volume for this keyword.<br /> For example, a value of \"-5\" would represent a 5% decrease in searches in the last 365 days compared to the month prior.<br /> **Note**: growth rates are rounded, with a maximum of +/- 10000% change.  A value of 10001 indicates that this keyword experienced > 10000% year-over-year growth.
   * @return pctGrowthYoy
  **/
  public Integer getPctGrowthYoy() {
    return pctGrowthYoy;
  }

  public void setPctGrowthYoy(Integer pctGrowthYoy) {
    this.pctGrowthYoy = pctGrowthYoy;
  }

  public TrendingKeywordsResponseTrendsInner timeSeries(TrendingKeywordsResponseTrendsInnerTimeSeries timeSeries) {
    this.timeSeries = timeSeries;
    return this;
  }

   /**
   * Get timeSeries
   * @return timeSeries
  **/
  public TrendingKeywordsResponseTrendsInnerTimeSeries getTimeSeries() {
    return timeSeries;
  }

  public void setTimeSeries(TrendingKeywordsResponseTrendsInnerTimeSeries timeSeries) {
    this.timeSeries = timeSeries;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    TrendingKeywordsResponseTrendsInner trendingKeywordsResponseTrendsInner = (TrendingKeywordsResponseTrendsInner) o;
    return Objects.equals(keyword, trendingKeywordsResponseTrendsInner.keyword) &&
        Objects.equals(pctGrowthWow, trendingKeywordsResponseTrendsInner.pctGrowthWow) &&
        Objects.equals(pctGrowthMom, trendingKeywordsResponseTrendsInner.pctGrowthMom) &&
        Objects.equals(pctGrowthYoy, trendingKeywordsResponseTrendsInner.pctGrowthYoy) &&
        Objects.equals(timeSeries, trendingKeywordsResponseTrendsInner.timeSeries);
  }

  @Override
  public int hashCode() {
    return Objects.hash(keyword, pctGrowthWow, pctGrowthMom, pctGrowthYoy, timeSeries);
  }

  @SuppressWarnings("StringBufferReplaceableByString")
  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class TrendingKeywordsResponseTrendsInner {\n");
    
    sb.append("    keyword: ").append(toIndentedString(keyword)).append("\n");
    sb.append("    pctGrowthWow: ").append(toIndentedString(pctGrowthWow)).append("\n");
    sb.append("    pctGrowthMom: ").append(toIndentedString(pctGrowthMom)).append("\n");
    sb.append("    pctGrowthYoy: ").append(toIndentedString(pctGrowthYoy)).append("\n");
    sb.append("    timeSeries: ").append(toIndentedString(timeSeries)).append("\n");
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
