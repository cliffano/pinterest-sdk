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
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * AnalyticsMetricsResponseDailyMetrics
 */
@JsonPropertyOrder({
  AnalyticsMetricsResponseDailyMetrics.JSON_PROPERTY_DATA_STATUS,
  AnalyticsMetricsResponseDailyMetrics.JSON_PROPERTY_DATE,
  AnalyticsMetricsResponseDailyMetrics.JSON_PROPERTY_METRICS
})
@JsonTypeName("AnalyticsMetricsResponse_daily_metrics")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-07-01T11:59:34.708172Z[Etc/UTC]")
@Introspected
public class AnalyticsMetricsResponseDailyMetrics {
    /**
     * Metrics availablity, e.g., \&quot;READY\&quot;.
     */
    public enum DataStatusEnum {
        PROCESSING("PROCESSING"),
        READY("READY"),
        ESTIMATE("ESTIMATE"),
        BEFORE_BUSINESS_CREATED("BEFORE_BUSINESS_CREATED"),
        BEFORE_DATA_RETENTION_PERIOD("BEFORE_DATA_RETENTION_PERIOD"),
        BEFORE_PIN_DATA_RETENTION_PERIOD("BEFORE_PIN_DATA_RETENTION_PERIOD"),
        BEFORE_METRIC_START_DATE("BEFORE_METRIC_START_DATE"),
        BEFORE_CORE_METRIC_START_DATE("BEFORE_CORE_METRIC_START_DATE"),
        BEFORE_PIN_FORMAT_METRIC_START_DATE("BEFORE_PIN_FORMAT_METRIC_START_DATE"),
        BEFORE_AUDIENCE_METRIC_START_DATE("BEFORE_AUDIENCE_METRIC_START_DATE"),
        BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE("BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE"),
        BEFORE_VIDEO_METRIC_START_DATE("BEFORE_VIDEO_METRIC_START_DATE"),
        BEFORE_CONVERSION_METRIC_START_DATE("BEFORE_CONVERSION_METRIC_START_DATE"),
        PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD("PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD"),
        IN_BAD_TAG_DATE("IN_BAD_TAG_DATE"),
        BEFORE_PUBLISHED_METRIC_START_DATE("BEFORE_PUBLISHED_METRIC_START_DATE"),
        BEFORE_ASSIST_METRIC_START_DATE("BEFORE_ASSIST_METRIC_START_DATE"),
        BEFORE_PIN_CREATED("BEFORE_PIN_CREATED"),
        BEFORE_ACCOUNT_CLAIMED("BEFORE_ACCOUNT_CLAIMED"),
        BEFORE_DEMOGRAPHIC_FILTERS_START_DATE("BEFORE_DEMOGRAPHIC_FILTERS_START_DATE"),
        AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD("AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD"),
        AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD("AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD"),
        BEFORE_PRODUCT_GROUP_FILTER_START_DATE("BEFORE_PRODUCT_GROUP_FILTER_START_DATE");

        private String value;

        DataStatusEnum(String value) {
            this.value = value;
        }

        @JsonValue
        public String getValue() {
            return value;
        }

        @Override
        public String toString() {
            return String.valueOf(value);
        }

        @JsonCreator
        public static DataStatusEnum fromValue(String value) {
            for (DataStatusEnum b : DataStatusEnum.values()) {
                if (b.value.equals(value)) {
                    return b;
                }
            }
            throw new IllegalArgumentException("Unexpected value '" + value + "'");
        }
    }
    public static final String JSON_PROPERTY_DATA_STATUS = "data_status";
    private DataStatusEnum dataStatus;

    public static final String JSON_PROPERTY_DATE = "date";
    private String date;

    public static final String JSON_PROPERTY_METRICS = "metrics";
    private Map<String, BigDecimal> metrics = null;

    public AnalyticsMetricsResponseDailyMetrics() {
    }

    public AnalyticsMetricsResponseDailyMetrics dataStatus(DataStatusEnum dataStatus) {
        this.dataStatus = dataStatus;
        return this;
    }

    /**
     * Metrics availablity, e.g., \&quot;READY\&quot;.
     * @return dataStatus
     **/
    @Nullable
    @ApiModelProperty(example = "READY", value = "Metrics availablity, e.g., \"READY\".")
    @JsonProperty(JSON_PROPERTY_DATA_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public DataStatusEnum getDataStatus() {
        return dataStatus;
    }

    @JsonProperty(JSON_PROPERTY_DATA_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setDataStatus(DataStatusEnum dataStatus) {
        this.dataStatus = dataStatus;
    }

    public AnalyticsMetricsResponseDailyMetrics date(String date) {
        this.date = date;
        return this;
    }

    /**
     * Metrics date (UTC): YYYY-MM-DD.
     * @return date
     **/
    @Nullable
    @ApiModelProperty(example = "2019-12-01", value = "Metrics date (UTC): YYYY-MM-DD.")
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

    public AnalyticsMetricsResponseDailyMetrics metrics(Map<String, BigDecimal> metrics) {
        this.metrics = metrics;
        return this;
    }

    public AnalyticsMetricsResponseDailyMetrics putMetricsItem(String key, BigDecimal metricsItem) {
        if (this.metrics == null) {
            this.metrics = new HashMap<String, BigDecimal>();
        }
        this.metrics.put(key, metricsItem);
        return this;
  }

    /**
     * The metric name and daily value for each requested metric
     * @return metrics
     **/
    @Nullable
    @ApiModelProperty(example = "{\"ENGAGEMENT\":100,\"CLICKTHROUGH_RATE\":0.2,\"CLICKTHROUGH\":200,\"CLOSEUP\":37,\"CLOSEUP_RATE\":0.5,\"ENGAGEMENT_RATE\":0.2,\"SAVE\":20,\"SAVE_RATE\":0.18,\"IMPRESSION\":240}", value = "The metric name and daily value for each requested metric")
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
        AnalyticsMetricsResponseDailyMetrics analyticsMetricsResponseDailyMetrics = (AnalyticsMetricsResponseDailyMetrics) o;
        return Objects.equals(this.dataStatus, analyticsMetricsResponseDailyMetrics.dataStatus) &&
            Objects.equals(this.date, analyticsMetricsResponseDailyMetrics.date) &&
            Objects.equals(this.metrics, analyticsMetricsResponseDailyMetrics.metrics);
    }

    @Override
    public int hashCode() {
        return Objects.hash(dataStatus, date, metrics);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class AnalyticsMetricsResponseDailyMetrics {\n");
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
