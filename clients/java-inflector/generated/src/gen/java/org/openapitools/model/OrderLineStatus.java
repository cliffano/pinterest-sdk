package org.openapitools.model;

import java.util.Objects;
import io.swagger.annotations.ApiModel;
import com.fasterxml.jackson.annotation.JsonValue;



/**
 * Order Line Status
 **/
import com.fasterxml.jackson.annotation.JsonCreator;

/**
 * Order Line Status
 */
public enum OrderLineStatus {
  
  ACTIVE("ACTIVE"),
  
  PAUSED("PAUSED"),
  
  DELETED("DELETED");

  private String value;

  OrderLineStatus(String value) {
    this.value = value;
  }

  @Override
  @JsonValue
  public String toString() {
    return String.valueOf(value);
  }

  @JsonCreator
  public static OrderLineStatus fromValue(String text) {
    for (OrderLineStatus b : OrderLineStatus.values()) {
      if (String.valueOf(b.value).equals(text)) {
        return b;
      }
    }
    throw new IllegalArgumentException("Unexpected value '" + text + "'");
  }
}


