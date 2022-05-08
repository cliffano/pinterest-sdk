/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
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
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.ConversionAttributionWindowDays;
import org.openapitools.model.ConversionReportAttributionType;
import org.openapitools.model.ConversionReportTimeType;
import org.openapitools.model.Granularity;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * AdsAnalyticsCreateAsyncRequestAllOf
 */
@JsonPropertyOrder({
  AdsAnalyticsCreateAsyncRequestAllOf.JSON_PROPERTY_START_DATE,
  AdsAnalyticsCreateAsyncRequestAllOf.JSON_PROPERTY_END_DATE,
  AdsAnalyticsCreateAsyncRequestAllOf.JSON_PROPERTY_GRANULARITY,
  AdsAnalyticsCreateAsyncRequestAllOf.JSON_PROPERTY_CLICK_WINDOW_DAYS,
  AdsAnalyticsCreateAsyncRequestAllOf.JSON_PROPERTY_ENGAGEMENT_WINDOW_DAYS,
  AdsAnalyticsCreateAsyncRequestAllOf.JSON_PROPERTY_VIEW_WINDOW_DAYS,
  AdsAnalyticsCreateAsyncRequestAllOf.JSON_PROPERTY_CONVERSION_REPORT_TIME,
  AdsAnalyticsCreateAsyncRequestAllOf.JSON_PROPERTY_ATTRIBUTION_TYPES
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2022-05-08T00:33:19.615491Z[Etc/UTC]")
public class AdsAnalyticsCreateAsyncRequestAllOf   {
  public static final String JSON_PROPERTY_START_DATE = "start_date";
  @JsonProperty(JSON_PROPERTY_START_DATE)
  private String startDate;

  public static final String JSON_PROPERTY_END_DATE = "end_date";
  @JsonProperty(JSON_PROPERTY_END_DATE)
  private String endDate;

  public static final String JSON_PROPERTY_GRANULARITY = "granularity";
  @JsonProperty(JSON_PROPERTY_GRANULARITY)
  private Granularity granularity;

  public static final String JSON_PROPERTY_CLICK_WINDOW_DAYS = "click_window_days";
  @JsonProperty(JSON_PROPERTY_CLICK_WINDOW_DAYS)
  private ConversionAttributionWindowDays clickWindowDays = 30;

  public static final String JSON_PROPERTY_ENGAGEMENT_WINDOW_DAYS = "engagement_window_days";
  @JsonProperty(JSON_PROPERTY_ENGAGEMENT_WINDOW_DAYS)
  private ConversionAttributionWindowDays engagementWindowDays = 30;

  public static final String JSON_PROPERTY_VIEW_WINDOW_DAYS = "view_window_days";
  @JsonProperty(JSON_PROPERTY_VIEW_WINDOW_DAYS)
  private ConversionAttributionWindowDays viewWindowDays = 1;

  public static final String JSON_PROPERTY_CONVERSION_REPORT_TIME = "conversion_report_time";
  @JsonProperty(JSON_PROPERTY_CONVERSION_REPORT_TIME)
  private ConversionReportTimeType conversionReportTime = "TIME_OF_AD_ACTION";

  public static final String JSON_PROPERTY_ATTRIBUTION_TYPES = "attribution_types";
  @JsonProperty(JSON_PROPERTY_ATTRIBUTION_TYPES)
  private List<ConversionReportAttributionType> attributionTypes = null;

  public AdsAnalyticsCreateAsyncRequestAllOf startDate(String startDate) {
    this.startDate = startDate;
    return this;
  }

  /**
   * Metric report start date (UTC). Format: YYYY-MM-DD
   * @return startDate
   **/
  @JsonProperty(value = "start_date")
  @ApiModelProperty(example = "2020-12-20", required = true, value = "Metric report start date (UTC). Format: YYYY-MM-DD")
  @NotNull  @Pattern(regexp="^(\\d{4})-(\\d{2})-(\\d{2})$")
  public String getStartDate() {
    return startDate;
  }

  public void setStartDate(String startDate) {
    this.startDate = startDate;
  }

  public AdsAnalyticsCreateAsyncRequestAllOf endDate(String endDate) {
    this.endDate = endDate;
    return this;
  }

  /**
   * Metric report end date (UTC). Format: YYYY-MM-DD
   * @return endDate
   **/
  @JsonProperty(value = "end_date")
  @ApiModelProperty(example = "2020-12-20", required = true, value = "Metric report end date (UTC). Format: YYYY-MM-DD")
  @NotNull  @Pattern(regexp="^(\\d{4})-(\\d{2})-(\\d{2})$")
  public String getEndDate() {
    return endDate;
  }

  public void setEndDate(String endDate) {
    this.endDate = endDate;
  }

  public AdsAnalyticsCreateAsyncRequestAllOf granularity(Granularity granularity) {
    this.granularity = granularity;
    return this;
  }

  /**
   * TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly
   * @return granularity
   **/
  @JsonProperty(value = "granularity")
  @ApiModelProperty(required = true, value = "TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly")
  @NotNull 
  public Granularity getGranularity() {
    return granularity;
  }

  public void setGranularity(Granularity granularity) {
    this.granularity = granularity;
  }

  public AdsAnalyticsCreateAsyncRequestAllOf clickWindowDays(ConversionAttributionWindowDays clickWindowDays) {
    this.clickWindowDays = clickWindowDays;
    return this;
  }

  /**
   * Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.
   * @return clickWindowDays
   **/
  @JsonProperty(value = "click_window_days")
  @ApiModelProperty(value = "Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.")
  @Valid 
  public ConversionAttributionWindowDays getClickWindowDays() {
    return clickWindowDays;
  }

  public void setClickWindowDays(ConversionAttributionWindowDays clickWindowDays) {
    this.clickWindowDays = clickWindowDays;
  }

  public AdsAnalyticsCreateAsyncRequestAllOf engagementWindowDays(ConversionAttributionWindowDays engagementWindowDays) {
    this.engagementWindowDays = engagementWindowDays;
    return this;
  }

  /**
   * Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.
   * @return engagementWindowDays
   **/
  @JsonProperty(value = "engagement_window_days")
  @ApiModelProperty(value = "Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.")
  @Valid 
  public ConversionAttributionWindowDays getEngagementWindowDays() {
    return engagementWindowDays;
  }

  public void setEngagementWindowDays(ConversionAttributionWindowDays engagementWindowDays) {
    this.engagementWindowDays = engagementWindowDays;
  }

  public AdsAnalyticsCreateAsyncRequestAllOf viewWindowDays(ConversionAttributionWindowDays viewWindowDays) {
    this.viewWindowDays = viewWindowDays;
    return this;
  }

  /**
   * Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day.
   * @return viewWindowDays
   **/
  @JsonProperty(value = "view_window_days")
  @ApiModelProperty(value = "Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day.")
  @Valid 
  public ConversionAttributionWindowDays getViewWindowDays() {
    return viewWindowDays;
  }

  public void setViewWindowDays(ConversionAttributionWindowDays viewWindowDays) {
    this.viewWindowDays = viewWindowDays;
  }

  public AdsAnalyticsCreateAsyncRequestAllOf conversionReportTime(ConversionReportTimeType conversionReportTime) {
    this.conversionReportTime = conversionReportTime;
    return this;
  }

  /**
   * The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.
   * @return conversionReportTime
   **/
  @JsonProperty(value = "conversion_report_time")
  @ApiModelProperty(value = "The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.")
  
  public ConversionReportTimeType getConversionReportTime() {
    return conversionReportTime;
  }

  public void setConversionReportTime(ConversionReportTimeType conversionReportTime) {
    this.conversionReportTime = conversionReportTime;
  }

  public AdsAnalyticsCreateAsyncRequestAllOf attributionTypes(List<ConversionReportAttributionType> attributionTypes) {
    this.attributionTypes = attributionTypes;
    return this;
  }

  public AdsAnalyticsCreateAsyncRequestAllOf addAttributionTypesItem(ConversionReportAttributionType attributionTypesItem) {
    if (this.attributionTypes == null) {
      this.attributionTypes = new ArrayList<ConversionReportAttributionType>();
    }
    this.attributionTypes.add(attributionTypesItem);
    return this;
  }

  /**
   * List of types of attribution for the conversion report
   * @return attributionTypes
   **/
  @JsonProperty(value = "attribution_types")
  @ApiModelProperty(value = "List of types of attribution for the conversion report")
  @Valid 
  public List<ConversionReportAttributionType> getAttributionTypes() {
    return attributionTypes;
  }

  public void setAttributionTypes(List<ConversionReportAttributionType> attributionTypes) {
    this.attributionTypes = attributionTypes;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AdsAnalyticsCreateAsyncRequestAllOf adsAnalyticsCreateAsyncRequestAllOf = (AdsAnalyticsCreateAsyncRequestAllOf) o;
    return Objects.equals(this.startDate, adsAnalyticsCreateAsyncRequestAllOf.startDate) &&
        Objects.equals(this.endDate, adsAnalyticsCreateAsyncRequestAllOf.endDate) &&
        Objects.equals(this.granularity, adsAnalyticsCreateAsyncRequestAllOf.granularity) &&
        Objects.equals(this.clickWindowDays, adsAnalyticsCreateAsyncRequestAllOf.clickWindowDays) &&
        Objects.equals(this.engagementWindowDays, adsAnalyticsCreateAsyncRequestAllOf.engagementWindowDays) &&
        Objects.equals(this.viewWindowDays, adsAnalyticsCreateAsyncRequestAllOf.viewWindowDays) &&
        Objects.equals(this.conversionReportTime, adsAnalyticsCreateAsyncRequestAllOf.conversionReportTime) &&
        Objects.equals(this.attributionTypes, adsAnalyticsCreateAsyncRequestAllOf.attributionTypes);
  }

  @Override
  public int hashCode() {
    return Objects.hash(startDate, endDate, granularity, clickWindowDays, engagementWindowDays, viewWindowDays, conversionReportTime, attributionTypes);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AdsAnalyticsCreateAsyncRequestAllOf {\n");
    
    sb.append("    startDate: ").append(toIndentedString(startDate)).append("\n");
    sb.append("    endDate: ").append(toIndentedString(endDate)).append("\n");
    sb.append("    granularity: ").append(toIndentedString(granularity)).append("\n");
    sb.append("    clickWindowDays: ").append(toIndentedString(clickWindowDays)).append("\n");
    sb.append("    engagementWindowDays: ").append(toIndentedString(engagementWindowDays)).append("\n");
    sb.append("    viewWindowDays: ").append(toIndentedString(viewWindowDays)).append("\n");
    sb.append("    conversionReportTime: ").append(toIndentedString(conversionReportTime)).append("\n");
    sb.append("    attributionTypes: ").append(toIndentedString(attributionTypes)).append("\n");
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

