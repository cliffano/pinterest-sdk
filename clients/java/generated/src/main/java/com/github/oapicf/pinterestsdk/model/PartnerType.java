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
 * Gets or Sets PartnerType
 */
@JsonAdapter(PartnerType.Adapter.class)
public enum PartnerType {
  
  INTERNAL("INTERNAL"),
  
  EXTERNAL("EXTERNAL");

  private String value;

  PartnerType(String value) {
    this.value = value;
  }

  public String getValue() {
    return value;
  }

  @Override
  public String toString() {
    return String.valueOf(value);
  }

  public static PartnerType fromValue(String value) {
    for (PartnerType b : PartnerType.values()) {
      if (b.value.equals(value)) {
        return b;
      }
    }
    throw new IllegalArgumentException("Unexpected value '" + value + "'");
  }

  public static class Adapter extends TypeAdapter<PartnerType> {
    @Override
    public void write(final JsonWriter jsonWriter, final PartnerType enumeration) throws IOException {
      jsonWriter.value(enumeration.getValue());
    }

    @Override
    public PartnerType read(final JsonReader jsonReader) throws IOException {
      String value = jsonReader.nextString();
      return PartnerType.fromValue(value);
    }
  }

  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
    String value = jsonElement.getAsString();
    PartnerType.fromValue(value);
  }
}

