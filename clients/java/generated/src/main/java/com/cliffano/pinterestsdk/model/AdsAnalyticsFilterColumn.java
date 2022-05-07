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


package com.cliffano.pinterestsdk.model;

import java.util.Objects;
import java.util.Arrays;
import io.swagger.annotations.ApiModel;
import com.google.gson.annotations.SerializedName;

import java.io.IOException;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;

/**
 * Reporting columns for sync reporting data filter
 */
@JsonAdapter(AdsAnalyticsFilterColumn.Adapter.class)
public enum AdsAnalyticsFilterColumn {
  
  SPEND_IN_DOLLAR("SPEND_IN_DOLLAR"),
  
  TOTAL_IMPRESSION("TOTAL_IMPRESSION");

  private String value;

  AdsAnalyticsFilterColumn(String value) {
    this.value = value;
  }

  public String getValue() {
    return value;
  }

  @Override
  public String toString() {
    return String.valueOf(value);
  }

  public static AdsAnalyticsFilterColumn fromValue(String value) {
    for (AdsAnalyticsFilterColumn b : AdsAnalyticsFilterColumn.values()) {
      if (b.value.equals(value)) {
        return b;
      }
    }
    throw new IllegalArgumentException("Unexpected value '" + value + "'");
  }

  public static class Adapter extends TypeAdapter<AdsAnalyticsFilterColumn> {
    @Override
    public void write(final JsonWriter jsonWriter, final AdsAnalyticsFilterColumn enumeration) throws IOException {
      jsonWriter.value(enumeration.getValue());
    }

    @Override
    public AdsAnalyticsFilterColumn read(final JsonReader jsonReader) throws IOException {
      String value = jsonReader.nextString();
      return AdsAnalyticsFilterColumn.fromValue(value);
    }
  }
}

