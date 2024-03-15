package org.openapitools.server.api.model;

import java.util.Objects;

/**
 * Metrics availablity, e.g., \&quot;READY\&quot;.
 **/
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;

/**
 * Metrics availablity, e.g., \&quot;READY\&quot;.
 */
public enum DataStatus {
  
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

  DataStatus(String value) {
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

  public static DataStatus fromValue(String value) {
    for (DataStatus b : DataStatus.values()) {
      if (b.value.equals(value)) {
        return b;
      }
    }
    throw new IllegalArgumentException("Unexpected value '" + value + "'");
  }
}