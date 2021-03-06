/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.model;

import java.util.Objects;
import java.util.Arrays;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.openapitools.model.AnalyticsMetricsResponseDailyMetrics;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * AnalyticsMetricsResponse
 */
@JsonPropertyOrder({
  AnalyticsMetricsResponse.JSON_PROPERTY_DAILY_METRICS,
  AnalyticsMetricsResponse.JSON_PROPERTY_SUMMARY_METRICS
})
@JsonTypeName("AnalyticsMetricsResponse")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-07-01T11:59:34.708172Z[Etc/UTC]")
@Introspected
public class AnalyticsMetricsResponse {
    public static final String JSON_PROPERTY_DAILY_METRICS = "daily_metrics";
    private List<AnalyticsMetricsResponseDailyMetrics> dailyMetrics = null;

    public static final String JSON_PROPERTY_SUMMARY_METRICS = "summary_metrics";
    private Map<String, BigDecimal> summaryMetrics = null;

    public AnalyticsMetricsResponse() {
    }

    public AnalyticsMetricsResponse dailyMetrics(List<AnalyticsMetricsResponseDailyMetrics> dailyMetrics) {
        this.dailyMetrics = dailyMetrics;
        return this;
    }

    public AnalyticsMetricsResponse addDailyMetricsItem(AnalyticsMetricsResponseDailyMetrics dailyMetricsItem) {
        if (this.dailyMetrics == null) {
            this.dailyMetrics = new ArrayList<AnalyticsMetricsResponseDailyMetrics>();
        }
        this.dailyMetrics.add(dailyMetricsItem);
        return this;
    }

    /**
     * Array with the requested daily metric records
     * @return dailyMetrics
     **/
    @Nullable
    @ApiModelProperty(value = "Array with the requested daily metric records")
    @JsonProperty(JSON_PROPERTY_DAILY_METRICS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public List<AnalyticsMetricsResponseDailyMetrics> getDailyMetrics() {
        return dailyMetrics;
    }

    @JsonProperty(JSON_PROPERTY_DAILY_METRICS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setDailyMetrics(List<AnalyticsMetricsResponseDailyMetrics> dailyMetrics) {
        this.dailyMetrics = dailyMetrics;
    }

    public AnalyticsMetricsResponse summaryMetrics(Map<String, BigDecimal> summaryMetrics) {
        this.summaryMetrics = summaryMetrics;
        return this;
    }

    public AnalyticsMetricsResponse putSummaryMetricsItem(String key, BigDecimal summaryMetricsItem) {
        if (this.summaryMetrics == null) {
            this.summaryMetrics = new HashMap<String, BigDecimal>();
        }
        this.summaryMetrics.put(key, summaryMetricsItem);
        return this;
  }

    /**
     * The metric name and value over the requested period for each requested metric
     * @return summaryMetrics
     **/
    @Nullable
    @ApiModelProperty(example = "{\"ENGAGEMENT\":100,\"CLICKTHROUGH_RATE\":0.2,\"CLICKTHROUGH\":200,\"CLOSEUP\":37,\"CLOSEUP_RATE\":0.5,\"ENGAGEMENT_RATE\":0.2,\"SAVE\":20,\"SAVE_RATE\":0.18,\"IMPRESSION\":240}", value = "The metric name and value over the requested period for each requested metric")
    @JsonProperty(JSON_PROPERTY_SUMMARY_METRICS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public Map<String, BigDecimal> getSummaryMetrics() {
        return summaryMetrics;
    }

    @JsonProperty(JSON_PROPERTY_SUMMARY_METRICS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setSummaryMetrics(Map<String, BigDecimal> summaryMetrics) {
        this.summaryMetrics = summaryMetrics;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        AnalyticsMetricsResponse analyticsMetricsResponse = (AnalyticsMetricsResponse) o;
        return Objects.equals(this.dailyMetrics, analyticsMetricsResponse.dailyMetrics) &&
            Objects.equals(this.summaryMetrics, analyticsMetricsResponse.summaryMetrics);
    }

    @Override
    public int hashCode() {
        return Objects.hash(dailyMetrics, summaryMetrics);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class AnalyticsMetricsResponse {\n");
        sb.append("    dailyMetrics: ").append(toIndentedString(dailyMetrics)).append("\n");
        sb.append("    summaryMetrics: ").append(toIndentedString(summaryMetrics)).append("\n");
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
