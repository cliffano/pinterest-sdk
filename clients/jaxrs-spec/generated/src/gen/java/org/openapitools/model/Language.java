package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import javax.validation.constraints.*;
import javax.validation.Valid;

import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;

/**
 * Language code, which is among the offical ISO 639-1 language list.
 */
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

    /**
     * Convert a String into String, as specified in the
     * <a href="https://download.oracle.com/otndocs/jcp/jaxrs-2_0-fr-eval-spec/index.html">See JAX RS 2.0 Specification, section 3.2, p. 12</a>
     */
    public static Language fromString(String s) {
      for (Language b : Language.values()) {
        // using Objects.toString() to be safe if value type non-object type
        // because types like 'int' etc. will be auto-boxed
        if (java.util.Objects.toString(b.value).equals(s)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected string value '" + s + "'");
    }

  @Override
  @JsonValue
  public String toString() {
    return String.valueOf(value);
  }

  @JsonCreator
  public static Language fromValue(String value) {
    for (Language b : Language.values()) {
      if (b.value.equals(value)) {
        return b;
      }
    }
    throw new IllegalArgumentException("Unexpected value '" + value + "'");
  }
}


