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
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.TopPinsAnalyticsResponseDateAvailability;
import org.openapitools.model.TopVideoPinsAnalyticsResponsePinsInner;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * TopVideoPinsAnalyticsResponse
 */
@JsonPropertyOrder({
  TopVideoPinsAnalyticsResponse.JSON_PROPERTY_DATE_AVAILABILITY,
  TopVideoPinsAnalyticsResponse.JSON_PROPERTY_PINS,
  TopVideoPinsAnalyticsResponse.JSON_PROPERTY_SORT_BY
})
@JsonTypeName("TopVideoPinsAnalyticsResponse")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class TopVideoPinsAnalyticsResponse {
    public static final String JSON_PROPERTY_DATE_AVAILABILITY = "date_availability";
    private TopPinsAnalyticsResponseDateAvailability dateAvailability;

    public static final String JSON_PROPERTY_PINS = "pins";
    private List<@Valid TopVideoPinsAnalyticsResponsePinsInner> pins = null;

    /**
     * Gets or Sets sortBy
     */
    public enum SortByEnum {
        SAVE("SAVE"),
        IMPRESSION("IMPRESSION"),
        OUTBOUND_CLICK("OUTBOUND_CLICK"),
        VIDEO_MRC_VIEW("VIDEO_MRC_VIEW"),
        VIDEO_AVG_WATCH_TIME("VIDEO_AVG_WATCH_TIME"),
        VIDEO_V50_WATCH_TIME("VIDEO_V50_WATCH_TIME"),
        QUARTILE_95_PERCENT_VIEW("QUARTILE_95_PERCENT_VIEW"),
        VIDEO_10S_VIEW("VIDEO_10S_VIEW"),
        VIDEO_START("VIDEO_START");

        private String value;

        SortByEnum(String value) {
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
        public static SortByEnum fromValue(String value) {
            for (SortByEnum b : SortByEnum.values()) {
                if (b.value.equals(value)) {
                    return b;
                }
            }
            throw new IllegalArgumentException("Unexpected value '" + value + "'");
        }
    }
    public static final String JSON_PROPERTY_SORT_BY = "sort_by";
    private SortByEnum sortBy;

    public TopVideoPinsAnalyticsResponse() {
    }

    public TopVideoPinsAnalyticsResponse dateAvailability(TopPinsAnalyticsResponseDateAvailability dateAvailability) {
        this.dateAvailability = dateAvailability;
        return this;
    }

    /**
     * Get dateAvailability
     * @return dateAvailability
     **/
    @Valid
    @Nullable
    @JsonProperty(JSON_PROPERTY_DATE_AVAILABILITY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public TopPinsAnalyticsResponseDateAvailability getDateAvailability() {
        return dateAvailability;
    }

    @JsonProperty(JSON_PROPERTY_DATE_AVAILABILITY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setDateAvailability(TopPinsAnalyticsResponseDateAvailability dateAvailability) {
        this.dateAvailability = dateAvailability;
    }

    public TopVideoPinsAnalyticsResponse pins(List<@Valid TopVideoPinsAnalyticsResponsePinsInner> pins) {
        this.pins = pins;
        return this;
    }

    public TopVideoPinsAnalyticsResponse addPinsItem(TopVideoPinsAnalyticsResponsePinsInner pinsItem) {
        if (this.pins == null) {
            this.pins = new ArrayList<>();
        }
        this.pins.add(pinsItem);
        return this;
    }

    /**
     * Get pins
     * @return pins
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_PINS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public List<@Valid TopVideoPinsAnalyticsResponsePinsInner> getPins() {
        return pins;
    }

    @JsonProperty(JSON_PROPERTY_PINS)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setPins(List<@Valid TopVideoPinsAnalyticsResponsePinsInner> pins) {
        this.pins = pins;
    }

    public TopVideoPinsAnalyticsResponse sortBy(SortByEnum sortBy) {
        this.sortBy = sortBy;
        return this;
    }

    /**
     * Get sortBy
     * @return sortBy
     **/
    @Nullable
    @JsonProperty(JSON_PROPERTY_SORT_BY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public SortByEnum getSortBy() {
        return sortBy;
    }

    @JsonProperty(JSON_PROPERTY_SORT_BY)
    @JsonInclude(value = JsonInclude.Include.USE_DEFAULTS)
    public void setSortBy(SortByEnum sortBy) {
        this.sortBy = sortBy;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        TopVideoPinsAnalyticsResponse topVideoPinsAnalyticsResponse = (TopVideoPinsAnalyticsResponse) o;
        return Objects.equals(this.dateAvailability, topVideoPinsAnalyticsResponse.dateAvailability) &&
            Objects.equals(this.pins, topVideoPinsAnalyticsResponse.pins) &&
            Objects.equals(this.sortBy, topVideoPinsAnalyticsResponse.sortBy);
    }

    @Override
    public int hashCode() {
        return Objects.hash(dateAvailability, pins, sortBy);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class TopVideoPinsAnalyticsResponse {\n");
        sb.append("    dateAvailability: ").append(toIndentedString(dateAvailability)).append("\n");
        sb.append("    pins: ").append(toIndentedString(pins)).append("\n");
        sb.append("    sortBy: ").append(toIndentedString(sortBy)).append("\n");
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

