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


package com.github.oapicf.pinterestsdk.model;

import java.util.Objects;
import com.google.gson.annotations.SerializedName;

import java.io.IOException;
import com.google.gson.TypeAdapter;
import com.google.gson.JsonElement;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;

/**
 * Refers ads entity type
 */
@JsonAdapter(BulkEntityType.Adapter.class)
public enum BulkEntityType {
  
  CAMPAIGN("CAMPAIGN"),
  
  AD_GROUP("AD_GROUP"),
  
  PRODUCT_GROUP("PRODUCT_GROUP"),
  
  AD("AD"),
  
  KEYWORD("KEYWORD");

  private String value;

  BulkEntityType(String value) {
    this.value = value;
  }

  public String getValue() {
    return value;
  }

  @Override
  public String toString() {
    return String.valueOf(value);
  }

  public static BulkEntityType fromValue(String value) {
    for (BulkEntityType b : BulkEntityType.values()) {
      if (b.value.equals(value)) {
        return b;
      }
    }
    throw new IllegalArgumentException("Unexpected value '" + value + "'");
  }

  public static class Adapter extends TypeAdapter<BulkEntityType> {
    @Override
    public void write(final JsonWriter jsonWriter, final BulkEntityType enumeration) throws IOException {
      jsonWriter.value(enumeration.getValue());
    }

    @Override
    public BulkEntityType read(final JsonReader jsonReader) throws IOException {
      String value = jsonReader.nextString();
      return BulkEntityType.fromValue(value);
    }
  }

  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
    String value = jsonElement.getAsString();
    BulkEntityType.fromValue(value);
  }
}

