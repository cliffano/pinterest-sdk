package org.openapitools.model;

import java.util.Objects;
import io.swagger.annotations.ApiModel;
import com.fasterxml.jackson.annotation.JsonValue;



/**
 * Ad targeting types for MMM report
 **/
import com.fasterxml.jackson.annotation.JsonCreator;

/**
 * Ad targeting types for MMM report
 */
public enum MMMReportingTargetingType {
  
  APPTYPE("APPTYPE"),
  
  COUNTRY("COUNTRY"),
  
  CREATIVE_TYPE("CREATIVE_TYPE"),
  
  GENDER("GENDER"),
  
  LOCATION("LOCATION");

  private String value;

  MMMReportingTargetingType(String value) {
    this.value = value;
  }

  @Override
  @JsonValue
  public String toString() {
    return String.valueOf(value);
  }

  @JsonCreator
  public static MMMReportingTargetingType fromValue(String text) {
    for (MMMReportingTargetingType b : MMMReportingTargetingType.values()) {
      if (String.valueOf(b.value).equals(text)) {
        return b;
      }
    }
    throw new IllegalArgumentException("Unexpected value '" + text + "'");
  }
}


