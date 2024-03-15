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
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;
import io.swagger.v3.oas.annotations.media.Schema;

/**
 * The absolute date range of the template
 */
@Schema(name = "TemplateResponse_date_range_absolute_date_range", description = "The absolute date range of the template")
@JsonPropertyOrder({
  TemplateResponseDateRangeAbsoluteDateRange.JSON_PROPERTY_TYPE,
  TemplateResponseDateRangeAbsoluteDateRange.JSON_PROPERTY_START_DATE,
  TemplateResponseDateRangeAbsoluteDateRange.JSON_PROPERTY_END_DATE
})
@JsonTypeName("TemplateResponse_date_range_absolute_date_range")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautServerCodegen", date="2024-03-14T23:02:10.408800522Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class TemplateResponseDateRangeAbsoluteDateRange {
    public static final String JSON_PROPERTY_TYPE = "type";
    private String type;

    public static final String JSON_PROPERTY_START_DATE = "start_date";
    private BigDecimal startDate;

    public static final String JSON_PROPERTY_END_DATE = "end_date";
    private BigDecimal endDate;

    public TemplateResponseDateRangeAbsoluteDateRange() {
    }

    public TemplateResponseDateRangeAbsoluteDateRange type(String type) {
        this.type = type;
        return this;
    }

    /**
     * The date range type
     * @return type
     **/
    @Nullable
    @Schema(name = "type", example = "absolute", description = "The date range type", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public String getType() {
        return type;
    }

    @JsonProperty(JSON_PROPERTY_TYPE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setType(String type) {
        this.type = type;
    }

    public TemplateResponseDateRangeAbsoluteDateRange startDate(BigDecimal startDate) {
        this.startDate = startDate;
        return this;
    }

    /**
     * The start date of the date range
     * @return startDate
     **/
    @Nullable
    @Schema(name = "start_date", example = "0.8008281904610115", description = "The start date of the date range", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_START_DATE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public BigDecimal getStartDate() {
        return startDate;
    }

    @JsonProperty(JSON_PROPERTY_START_DATE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setStartDate(BigDecimal startDate) {
        this.startDate = startDate;
    }

    public TemplateResponseDateRangeAbsoluteDateRange endDate(BigDecimal endDate) {
        this.endDate = endDate;
        return this;
    }

    /**
     * The end date of the date range
     * @return endDate
     **/
    @Nullable
    @Schema(name = "end_date", example = "6.027456183070403", description = "The end date of the date range", requiredMode = Schema.RequiredMode.NOT_REQUIRED)
    @JsonProperty(JSON_PROPERTY_END_DATE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public BigDecimal getEndDate() {
        return endDate;
    }

    @JsonProperty(JSON_PROPERTY_END_DATE)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setEndDate(BigDecimal endDate) {
        this.endDate = endDate;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        TemplateResponseDateRangeAbsoluteDateRange templateResponseDateRangeAbsoluteDateRange = (TemplateResponseDateRangeAbsoluteDateRange) o;
        return Objects.equals(this.type, templateResponseDateRangeAbsoluteDateRange.type) &&
            Objects.equals(this.startDate, templateResponseDateRangeAbsoluteDateRange.startDate) &&
            Objects.equals(this.endDate, templateResponseDateRangeAbsoluteDateRange.endDate);
    }

    @Override
    public int hashCode() {
        return Objects.hash(type, startDate, endDate);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class TemplateResponseDateRangeAbsoluteDateRange {\n");
        sb.append("    type: ").append(toIndentedString(type)).append("\n");
        sb.append("    startDate: ").append(toIndentedString(startDate)).append("\n");
        sb.append("    endDate: ").append(toIndentedString(endDate)).append("\n");
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
