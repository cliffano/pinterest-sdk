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
import java.math.BigDecimal;
import java.util.HashMap;
import java.util.Map;
import org.openapitools.model.DataStatus;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * AnalyticsDailyMetrics
 */
@JsonPropertyOrder({
  AnalyticsDailyMetrics.JSON_PROPERTY_DATA_STATUS,
  AnalyticsDailyMetrics.JSON_PROPERTY_DATE,
  AnalyticsDailyMetrics.JSON_PROPERTY_METRICS
})
@JsonTypeName("AnalyticsDailyMetrics")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class AnalyticsDailyMetrics {
    public static final String JSON_PROPERTY_DATA_STATUS = "data_status";
    private DataStatus dataStatus;

    public static final String JSON_PROPERTY_DATE = "date";
    private String date;

    public static final String JSON_PROPERTY_METRICS = "metrics";
    private Map<String, BigDecimal> metrics = null;

    public AnalyticsDailyMetrics() {
    }

    public AnalyticsDailyMetrics dataStatus(DataStatus dataStatus) {
        this.dataStatus = dataStatus;
        return this;
    }

    /**
     * Get dataStatus
     * @return dataStatus
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_DATA_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public DataStatus getDataStatus() {
        return dataStatus;
    }

    @JsonProperty(JSON_PROPERTY_DATA_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setDataStatus(DataStatus dataStatus) {
        this.dataStatus = dataStatus;
    }

    public AnalyticsDailyMetrics date(String date) {
        this.date = date;
        return this;
    }

    /**
     * Metrics date (UTC): YYYY-MM-DD.
     * @return date
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_DATE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getDate() {
        return date;
    }

    @JsonProperty(JSON_PROPERTY_DATE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setDate(String date) {
        this.date = date;
    }

    public AnalyticsDailyMetrics metrics(Map<String, BigDecimal> metrics) {
        this.metrics = metrics;
        return this;
    }

    public AnalyticsDailyMetrics putMetricsItem(String key, BigDecimal metricsItem) {
        if (this.metrics == null) {
            this.metrics = new HashMap<>();
        }
        this.metrics.put(key, metricsItem);
        return this;
  }

    /**
     * The metric name and daily value for each requested metric
     * @return metrics
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_METRICS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Map<String, BigDecimal> getMetrics() {
        return metrics;
    }

    @JsonProperty(JSON_PROPERTY_METRICS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setMetrics(Map<String, BigDecimal> metrics) {
        this.metrics = metrics;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        AnalyticsDailyMetrics analyticsDailyMetrics = (AnalyticsDailyMetrics) o;
        return Objects.equals(this.dataStatus, analyticsDailyMetrics.dataStatus) &&
            Objects.equals(this.date, analyticsDailyMetrics.date) &&
            Objects.equals(this.metrics, analyticsDailyMetrics.metrics);
    }

    @Override
    public int hashCode() {
        return Objects.hash(dataStatus, date, metrics);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class AnalyticsDailyMetrics {\n");
        sb.append("    dataStatus: ").append(toIndentedString(dataStatus)).append("\n");
        sb.append("    date: ").append(toIndentedString(date)).append("\n");
        sb.append("    metrics: ").append(toIndentedString(metrics)).append("\n");
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

