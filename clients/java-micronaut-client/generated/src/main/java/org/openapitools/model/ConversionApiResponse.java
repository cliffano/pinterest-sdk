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
import org.openapitools.model.ConversionApiResponseEventsInner;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

/**
 * Schema describing the object in the response, which contains information about the events that were received and processed.
 */
@JsonPropertyOrder({
  ConversionApiResponse.JSON_PROPERTY_NUM_EVENTS_RECEIVED,
  ConversionApiResponse.JSON_PROPERTY_NUM_EVENTS_PROCESSED,
  ConversionApiResponse.JSON_PROPERTY_EVENTS
})
@JsonTypeName("ConversionApiResponse")
@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-14T23:01:49.950286870Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Introspected
public class ConversionApiResponse {
    public static final String JSON_PROPERTY_NUM_EVENTS_RECEIVED = "num_events_received";
    private Integer numEventsReceived;

    public static final String JSON_PROPERTY_NUM_EVENTS_PROCESSED = "num_events_processed";
    private Integer numEventsProcessed;

    public static final String JSON_PROPERTY_EVENTS = "events";
    private List<@Valid ConversionApiResponseEventsInner> events = new ArrayList<>();

    public ConversionApiResponse(Integer numEventsReceived, Integer numEventsProcessed, List<@Valid ConversionApiResponseEventsInner> events) {
        this.numEventsReceived = numEventsReceived;
        this.numEventsProcessed = numEventsProcessed;
        this.events = events;
    }

    public ConversionApiResponse numEventsReceived(Integer numEventsReceived) {
        this.numEventsReceived = numEventsReceived;
        return this;
    }

    /**
     * Total number of events received in the request.
     * @return numEventsReceived
     **/
    @NotNull
    @JsonProperty(JSON_PROPERTY_NUM_EVENTS_RECEIVED)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public Integer getNumEventsReceived() {
        return numEventsReceived;
    }

    @JsonProperty(JSON_PROPERTY_NUM_EVENTS_RECEIVED)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setNumEventsReceived(Integer numEventsReceived) {
        this.numEventsReceived = numEventsReceived;
    }

    public ConversionApiResponse numEventsProcessed(Integer numEventsProcessed) {
        this.numEventsProcessed = numEventsProcessed;
        return this;
    }

    /**
     * Number of events that were successfully processed from the events.
     * @return numEventsProcessed
     **/
    @NotNull
    @JsonProperty(JSON_PROPERTY_NUM_EVENTS_PROCESSED)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public Integer getNumEventsProcessed() {
        return numEventsProcessed;
    }

    @JsonProperty(JSON_PROPERTY_NUM_EVENTS_PROCESSED)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setNumEventsProcessed(Integer numEventsProcessed) {
        this.numEventsProcessed = numEventsProcessed;
    }

    public ConversionApiResponse events(List<@Valid ConversionApiResponseEventsInner> events) {
        this.events = events;
        return this;
    }

    public ConversionApiResponse addEventsItem(ConversionApiResponseEventsInner eventsItem) {
        this.events.add(eventsItem);
        return this;
    }

    /**
     * Specific messages for each event received. The order will match the order in which the events were received in the request.
     * @return events
     **/
    @NotNull
    @JsonProperty(JSON_PROPERTY_EVENTS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public List<@Valid ConversionApiResponseEventsInner> getEvents() {
        return events;
    }

    @JsonProperty(JSON_PROPERTY_EVENTS)
    @JsonInclude(value = JsonInclude.Include.ALWAYS)
    public void setEvents(List<@Valid ConversionApiResponseEventsInner> events) {
        this.events = events;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
        ConversionApiResponse conversionApiResponse = (ConversionApiResponse) o;
        return Objects.equals(this.numEventsReceived, conversionApiResponse.numEventsReceived) &&
            Objects.equals(this.numEventsProcessed, conversionApiResponse.numEventsProcessed) &&
            Objects.equals(this.events, conversionApiResponse.events);
    }

    @Override
    public int hashCode() {
        return Objects.hash(numEventsReceived, numEventsProcessed, events);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("class ConversionApiResponse {\n");
        sb.append("    numEventsReceived: ").append(toIndentedString(numEventsReceived)).append("\n");
        sb.append("    numEventsProcessed: ").append(toIndentedString(numEventsProcessed)).append("\n");
        sb.append("    events: ").append(toIndentedString(events)).append("\n");
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

