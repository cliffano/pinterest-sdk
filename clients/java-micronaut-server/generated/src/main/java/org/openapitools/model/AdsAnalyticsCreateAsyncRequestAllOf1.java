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
import java.util.Arrays;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.DataOutputFormat;
import org.openapitools.model.MetricsReportingLevel;
import org.openapitools.model.ReportingColumnAsync;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * AdsAnalyticsCreateAsyncRequestAllOf1
 */
@JsonPropertyOrder({
  AdsAnalyticsCreateAsyncRequestAllOf1.JSON_PROPERTY_COLUMNS,
  AdsAnalyticsCreateAsyncRequestAllOf1.JSON_PROPERTY_LEVEL,
  AdsAnalyticsCreateAsyncRequestAllOf1.JSON_PROPERTY_REPORT_FORMAT
})
@JsonTypeName("AdsAnalyticsCreateAsyncRequest_allOf_1")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2022-05-08T00:31:24.314778Z[Etc/UTC]")
@Introspected
public class AdsAnalyticsCreateAsyncRequestAllOf1 {
    public static final String JSON_PROPERTY_COLUMNS = "columns";
    private List<ReportingColumnAsync> columns = new ArrayList<ReportingColumnAsync>();

    public static final String JSON_PROPERTY_LEVEL = "level";
    private MetricsReportingLevel level;

    public static final String JSON_PROPERTY_REPORT_FORMAT = "report_format";
    private DataOutputFormat reportFormat = "JSON";

    public AdsAnalyticsCreateAsyncRequestAllOf1(List<ReportingColumnAsync> columns, MetricsReportingLevel level) {
        this.columns = columns;
        this.level = level;
    }

    public AdsAnalyticsCreateAsyncRequestAllOf1 columns(List<ReportingColumnAsync> columns) {
        this.columns = columns;
        return this;
    }

    public AdsAnalyticsCreateAsyncRequestAllOf1 addColumnsItem(ReportingColumnAsync columnsItem) {
        this.columns.add(columnsItem);
        return this;
    }

    /**
     * Metric and entity columns
     * @return columns
     **/
    @NotNull
    @ApiModelProperty(required = true, value = "Metric and entity columns")
    @JsonProperty(JSON_PROPERTY_COLUMNS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public List<ReportingColumnAsync> getColumns() {
        return columns;
    }

    @JsonProperty(JSON_PROPERTY_COLUMNS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setColumns(List<ReportingColumnAsync> columns) {
        this.columns = columns;
    }

    public AdsAnalyticsCreateAsyncRequestAllOf1 level(MetricsReportingLevel level) {
        this.level = level;
        return this;
    }

    /**
     * Level of the report
     * @return level
     **/
    @Valid
    @NotNull
    @ApiModelProperty(example = "CAMPAIGN", required = true, value = "Level of the report")
    @JsonProperty(JSON_PROPERTY_LEVEL)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public MetricsReportingLevel getLevel() {
        return level;
    }

    @JsonProperty(JSON_PROPERTY_LEVEL)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
       public void setLevel(MetricsReportingLevel level) {
        this.level = level;
    }

    public AdsAnalyticsCreateAsyncRequestAllOf1 reportFormat(DataOutputFormat reportFormat) {
        this.reportFormat = reportFormat;
        return this;
    }

    /**
     * Specification for formatting report data
     * @return reportFormat
     **/
    @Valid
    @Nullable
    @ApiModelProperty(value = "Specification for formatting report data")
    @JsonProperty(JSON_PROPERTY_REPORT_FORMAT)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public DataOutputFormat getReportFormat() {
        return reportFormat;
    }

    @JsonProperty(JSON_PROPERTY_REPORT_FORMAT)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
       public void setReportFormat(DataOutputFormat reportFormat) {
        this.reportFormat = reportFormat;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        AdsAnalyticsCreateAsyncRequestAllOf1 adsAnalyticsCreateAsyncRequestAllOf1 = (AdsAnalyticsCreateAsyncRequestAllOf1) o;
        return Objects.equals(this.columns, adsAnalyticsCreateAsyncRequestAllOf1.columns) &&
            Objects.equals(this.level, adsAnalyticsCreateAsyncRequestAllOf1.level) &&
            Objects.equals(this.reportFormat, adsAnalyticsCreateAsyncRequestAllOf1.reportFormat);
    }

    @Override
    public int hashCode() {
        return Objects.hash(columns, level, reportFormat);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class AdsAnalyticsCreateAsyncRequestAllOf1 {\n");
        sb.append("    columns: ").append(toIndentedString(columns)).append("\n");
        sb.append("    level: ").append(toIndentedString(level)).append("\n");
        sb.append("    reportFormat: ").append(toIndentedString(reportFormat)).append("\n");
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
