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
import com.google.gson.annotations.SerializedName;

import java.io.IOException;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;

/**
 * Gets or Sets CatalogsFeedProcessingStatus
 */
@JsonAdapter(CatalogsFeedProcessingStatus.Adapter.class)
public enum CatalogsFeedProcessingStatus {
  
  COMPLETED("COMPLETED"),
  
  COMPLETED_EARLY("COMPLETED_EARLY"),
  
  DISAPPROVED("DISAPPROVED"),
  
  FAILED("FAILED"),
  
  PROCESSING("PROCESSING"),
  
  QUEUED_FOR_PROCESSING("QUEUED_FOR_PROCESSING"),
  
  UNDER_APPEAL("UNDER_APPEAL"),
  
  UNDER_REVIEW("UNDER_REVIEW");

  private String value;

  CatalogsFeedProcessingStatus(String value) {
    this.value = value;
  }

  public String getValue() {
    return value;
  }

  @Override
  public String toString() {
    return String.valueOf(value);
  }

  public static CatalogsFeedProcessingStatus fromValue(String value) {
    for (CatalogsFeedProcessingStatus b : CatalogsFeedProcessingStatus.values()) {
      if (b.value.equals(value)) {
        return b;
      }
    }
    throw new IllegalArgumentException("Unexpected value '" + value + "'");
  }

  public static class Adapter extends TypeAdapter<CatalogsFeedProcessingStatus> {
    @Override
    public void write(final JsonWriter jsonWriter, final CatalogsFeedProcessingStatus enumeration) throws IOException {
      jsonWriter.value(enumeration.getValue());
    }

    @Override
    public CatalogsFeedProcessingStatus read(final JsonReader jsonReader) throws IOException {
      String value = jsonReader.nextString();
      return CatalogsFeedProcessingStatus.fromValue(value);
    }
  }
}

