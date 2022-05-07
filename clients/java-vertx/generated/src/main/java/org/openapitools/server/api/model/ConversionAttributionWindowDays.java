package org.openapitools.server.api.model;

import java.util.Objects;

import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;

/**
 * Gets or Sets ConversionAttributionWindowDays
 */
public enum ConversionAttributionWindowDays {
  
  NUMBER_1(1),
  
  NUMBER_7(7),
  
  NUMBER_30(30),
  
  NUMBER_60(60);

  private Integer value;

  ConversionAttributionWindowDays(Integer value) {
    this.value = value;
  }

  @JsonValue
  public Integer getValue() {
    return value;
  }

  @Override
  public String toString() {
    return String.valueOf(value);
  }

  public static ConversionAttributionWindowDays fromValue(Integer value) {
    for (ConversionAttributionWindowDays b : ConversionAttributionWindowDays.values()) {
      if (b.value.equals(value)) {
        return b;
      }
    }
    throw new IllegalArgumentException("Unexpected value '" + value + "'");
  }
}