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
import com.fasterxml.jackson.annotation.JsonTypeName;
import java.math.BigDecimal;
import java.util.HashMap;
import java.util.Map;
import org.openapitools.model.DataStatus;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * Array with metrics, status, and pin id for the requested metric
 */
@Schema(name = "TopVideoPinsAnalyticsResponse_pins_inner", description = "Array with metrics, status, and pin id for the requested metric")
@JsonPropertyOrder({
  TopVideoPinsAnalyticsResponsePinsInner.JSON_PROPERTY_METRICS,
  TopVideoPinsAnalyticsResponsePinsInner.JSON_PROPERTY_DATA_STATUS,
  TopVideoPinsAnalyticsResponsePinsInner.JSON_PROPERTY_PIN_ID
})
@JsonTypeName("TopVideoPinsAnalyticsResponse_pins_inner")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class TopVideoPinsAnalyticsResponsePinsInner {
    public static final String JSON_PROPERTY_METRICS = "metrics";
    private Map<String, BigDecimal> metrics = null;

    public static final String JSON_PROPERTY_DATA_STATUS = "data_status";
    private Map<String, DataStatus> dataStatus = null;

    public static final String JSON_PROPERTY_PIN_ID = "pin_id";
    private String pinId;

    public TopVideoPinsAnalyticsResponsePinsInner() {
    }

    public TopVideoPinsAnalyticsResponsePinsInner metrics(Map<String, BigDecimal> metrics) {
        this.metrics = metrics;
        return this;
    }

    public TopVideoPinsAnalyticsResponsePinsInner putMetricsItem(String key, BigDecimal metricsItem) {
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
    @Schema(name = "metrics", example = "{\"IMPRESSION\":7,\"QUARTILE_95_PERCENT_VIEW\":2,\"SAVE\":1,\"VIDEO_10S_VIEW\":5,\"VIDEO_AVG_WATCH_TIME\":86989,\"VIDEO_MRC_VIEW\":2,\"VIDEO_START\":2,\"VIDEO_V50_WATCH_TIME\":173979,\"OUTBOUND_CLICK\":2}", description = "The metric name and daily value for each requested metric", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
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

    public TopVideoPinsAnalyticsResponsePinsInner dataStatus(Map<String, DataStatus> dataStatus) {
        this.dataStatus = dataStatus;
        return this;
    }

    public TopVideoPinsAnalyticsResponsePinsInner putDataStatusItem(String key, DataStatus dataStatusItem) {
        if (this.dataStatus == null) {
            this.dataStatus = new HashMap<>();
        }
        this.dataStatus.put(key, dataStatusItem);
        return this;
  }

    /**
     * Get dataStatus
     * @return dataStatus
     **/
    @Nullable
    @Schema(name = "data_status", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_DATA_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public Map<String, DataStatus> getDataStatus() {
        return dataStatus;
    }

    @JsonProperty(JSON_PROPERTY_DATA_STATUS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setDataStatus(Map<String, DataStatus> dataStatus) {
        this.dataStatus = dataStatus;
    }

    public TopVideoPinsAnalyticsResponsePinsInner pinId(String pinId) {
        this.pinId = pinId;
        return this;
    }

    /**
     * The pin id
     * @return pinId
     **/
    @Nullable
    @Schema(name = "pin_id", example = "642396334344813594", description = "The pin id", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_PIN_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getPinId() {
        return pinId;
    }

    @JsonProperty(JSON_PROPERTY_PIN_ID)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setPinId(String pinId) {
        this.pinId = pinId;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        TopVideoPinsAnalyticsResponsePinsInner topVideoPinsAnalyticsResponsePinsInner = (TopVideoPinsAnalyticsResponsePinsInner) o;
        return Objects.equals(this.metrics, topVideoPinsAnalyticsResponsePinsInner.metrics) &&
            Objects.equals(this.dataStatus, topVideoPinsAnalyticsResponsePinsInner.dataStatus) &&
            Objects.equals(this.pinId, topVideoPinsAnalyticsResponsePinsInner.pinId);
    }

    @Override
    public int hashCode() {
        return Objects.hash(metrics, dataStatus, pinId);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class TopVideoPinsAnalyticsResponsePinsInner {\n");
        sb.append("    metrics: ").append(toIndentedString(metrics)).append("\n");
        sb.append("    dataStatus: ").append(toIndentedString(dataStatus)).append("\n");
        sb.append("    pinId: ").append(toIndentedString(pinId)).append("\n");
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

