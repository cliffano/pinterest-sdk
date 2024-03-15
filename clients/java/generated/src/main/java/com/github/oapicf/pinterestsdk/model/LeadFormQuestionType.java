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
 * Lead form question type
 */
@JsonAdapter(LeadFormQuestionType.Adapter.class)
public enum LeadFormQuestionType {
  
  CUSTOM("CUSTOM"),
  
  FULL_NAME("FULL_NAME"),
  
  FIRST_NAME("FIRST_NAME"),
  
  LAST_NAME("LAST_NAME"),
  
  EMAIL("EMAIL"),
  
  PHONE_NUMBER("PHONE_NUMBER"),
  
  ZIP_CODE("ZIP_CODE"),
  
  AGE("AGE"),
  
  GENDER("GENDER"),
  
  CITY("CITY"),
  
  COUNTRY("COUNTRY"),
  
  PREFERRED_CONTACT_METHOD("PREFERRED_CONTACT_METHOD"),
  
  STATE_PROVINCE("STATE_PROVINCE"),
  
  ADDRESS("ADDRESS"),
  
  DATE_OF_BIRTH("DATE_OF_BIRTH");

  private String value;

  LeadFormQuestionType(String value) {
    this.value = value;
  }

  public String getValue() {
    return value;
  }

  @Override
  public String toString() {
    return String.valueOf(value);
  }

  public static LeadFormQuestionType fromValue(String value) {
    for (LeadFormQuestionType b : LeadFormQuestionType.values()) {
      if (b.value.equals(value)) {
        return b;
      }
    }
    throw new IllegalArgumentException("Unexpected value '" + value + "'");
  }

  public static class Adapter extends TypeAdapter<LeadFormQuestionType> {
    @Override
    public void write(final JsonWriter jsonWriter, final LeadFormQuestionType enumeration) throws IOException {
      jsonWriter.value(enumeration.getValue());
    }

    @Override
    public LeadFormQuestionType read(final JsonReader jsonReader) throws IOException {
      String value = jsonReader.nextString();
      return LeadFormQuestionType.fromValue(value);
    }
  }

  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
    String value = jsonElement.getAsString();
    LeadFormQuestionType.fromValue(value);
  }
}
