/*
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
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
 * Language code, which is among the offical ISO 639-1 language list.
 */
@JsonAdapter(Language.Adapter.class)
public enum Language {
  
  AM("AM"),
  
  AR("AR"),
  
  AZ("AZ"),
  
  BG("BG"),
  
  BN("BN"),
  
  BS("BS"),
  
  CA("CA"),
  
  CS("CS"),
  
  DA("DA"),
  
  DV("DV"),
  
  DZ("DZ"),
  
  DE("DE"),
  
  EL("EL"),
  
  EN("EN"),
  
  ES("ES"),
  
  ET("ET"),
  
  FA("FA"),
  
  FI("FI"),
  
  FR("FR"),
  
  HE("HE"),
  
  HI("HI"),
  
  HR("HR"),
  
  HU("HU"),
  
  HY("HY"),
  
  ID("ID"),
  
  IN("IN"),
  
  IS("IS"),
  
  IT("IT"),
  
  IW("IW"),
  
  JA("JA"),
  
  KA("KA"),
  
  KM("KM"),
  
  KO("KO"),
  
  LO("LO"),
  
  LT("LT"),
  
  LV("LV"),
  
  MK("MK"),
  
  MN("MN"),
  
  MS("MS"),
  
  MY("MY"),
  
  NB("NB"),
  
  NE("NE"),
  
  NL("NL"),
  
  NO("NO"),
  
  PL("PL"),
  
  PT("PT"),
  
  RO("RO"),
  
  RU("RU"),
  
  SK("SK"),
  
  SL("SL"),
  
  SQ("SQ"),
  
  SR("SR"),
  
  SV("SV"),
  
  TL("TL"),
  
  UK("UK"),
  
  VI("VI"),
  
  TE("TE"),
  
  TH("TH"),
  
  TR("TR"),
  
  XX("XX"),
  
  ZH("ZH");

  private String value;

  Language(String value) {
    this.value = value;
  }

  public String getValue() {
    return value;
  }

  @Override
  public String toString() {
    return String.valueOf(value);
  }

  public static Language fromValue(String value) {
    for (Language b : Language.values()) {
      if (b.value.equals(value)) {
        return b;
      }
    }
    throw new IllegalArgumentException("Unexpected value '" + value + "'");
  }

  public static class Adapter extends TypeAdapter<Language> {
    @Override
    public void write(final JsonWriter jsonWriter, final Language enumeration) throws IOException {
      jsonWriter.value(enumeration.getValue());
    }

    @Override
    public Language read(final JsonReader jsonReader) throws IOException {
      String value = jsonReader.nextString();
      return Language.fromValue(value);
    }
  }
}

