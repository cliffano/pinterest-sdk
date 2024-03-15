package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.ConversionApiResponseEventsInner;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.JsonFormat;
import com.fasterxml.jackson.annotation.JsonProperty;


/**
 * Schema describing the object in the response, which contains information about the events that were received and processed.
 */
@ApiModel(description="Schema describing the object in the response, which contains information about the events that were received and processed.")

public class ConversionApiResponse  {
  
 /**
  * Total number of events received in the request.
  */
  @ApiModelProperty(required = true, value = "Total number of events received in the request.")
  private Integer numEventsReceived;

 /**
  * Number of events that were successfully processed from the events.
  */
  @ApiModelProperty(required = true, value = "Number of events that were successfully processed from the events.")
  private Integer numEventsProcessed;

 /**
  * Specific messages for each event received. The order will match the order in which the events were received in the request.
  */
  @ApiModelProperty(required = true, value = "Specific messages for each event received. The order will match the order in which the events were received in the request.")
  @Valid
  private List<@Valid ConversionApiResponseEventsInner> events = new ArrayList<>();
 /**
  * Total number of events received in the request.
  * @return numEventsReceived
  */
  @JsonProperty("num_events_received")
  @NotNull
  public Integer getNumEventsReceived() {
    return numEventsReceived;
  }

  /**
   * Sets the <code>numEventsReceived</code> property.
   */
 public void setNumEventsReceived(Integer numEventsReceived) {
    this.numEventsReceived = numEventsReceived;
  }

  /**
   * Sets the <code>numEventsReceived</code> property.
   */
  public ConversionApiResponse numEventsReceived(Integer numEventsReceived) {
    this.numEventsReceived = numEventsReceived;
    return this;
  }

 /**
  * Number of events that were successfully processed from the events.
  * @return numEventsProcessed
  */
  @JsonProperty("num_events_processed")
  @NotNull
  public Integer getNumEventsProcessed() {
    return numEventsProcessed;
  }

  /**
   * Sets the <code>numEventsProcessed</code> property.
   */
 public void setNumEventsProcessed(Integer numEventsProcessed) {
    this.numEventsProcessed = numEventsProcessed;
  }

  /**
   * Sets the <code>numEventsProcessed</code> property.
   */
  public ConversionApiResponse numEventsProcessed(Integer numEventsProcessed) {
    this.numEventsProcessed = numEventsProcessed;
    return this;
  }

 /**
  * Specific messages for each event received. The order will match the order in which the events were received in the request.
  * @return events
  */
  @JsonProperty("events")
  @NotNull
  public List<@Valid ConversionApiResponseEventsInner> getEvents() {
    return events;
  }

  /**
   * Sets the <code>events</code> property.
   */
 public void setEvents(List<@Valid ConversionApiResponseEventsInner> events) {
    this.events = events;
  }

  /**
   * Sets the <code>events</code> property.
   */
  public ConversionApiResponse events(List<@Valid ConversionApiResponseEventsInner> events) {
    this.events = events;
    return this;
  }

  /**
   * Adds a new item to the <code>events</code> list.
   */
  public ConversionApiResponse addEventsItem(ConversionApiResponseEventsInner eventsItem) {
    this.events.add(eventsItem);
    return this;
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

