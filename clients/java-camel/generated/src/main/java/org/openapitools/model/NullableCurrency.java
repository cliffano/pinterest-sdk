package org.openapitools.model;

import java.net.URI;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonValue;
import org.openapitools.jackson.nullable.JsonNullable;
import java.time.OffsetDateTime;
import javax.validation.Valid;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;


import java.util.*;
import javax.annotation.Generated;

import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;

/**
 * Currency Codes from ISO 4217.
 */

@Generated(value = "org.openapitools.codegen.languages.JavaCamelServerCodegen", date = "2022-05-08T00:32:37.756477Z[Etc/UTC]")
public enum NullableCurrency {
  
  AED("AED"),
  
  AFN("AFN"),
  
  ALL("ALL"),
  
  AMD("AMD"),
  
  ANG("ANG"),
  
  AOA("AOA"),
  
  ARS("ARS"),
  
  AUD("AUD"),
  
  AWG("AWG"),
  
  AZN("AZN"),
  
  BAM("BAM"),
  
  BBD("BBD"),
  
  BDT("BDT"),
  
  BGN("BGN"),
  
  BHD("BHD"),
  
  BIF("BIF"),
  
  BMD("BMD"),
  
  BND("BND"),
  
  BOB("BOB"),
  
  BRL("BRL"),
  
  BSD("BSD"),
  
  BTN("BTN"),
  
  BWP("BWP"),
  
  BYN("BYN"),
  
  BYR("BYR"),
  
  BZD("BZD"),
  
  CAD("CAD"),
  
  CDF("CDF"),
  
  CHF("CHF"),
  
  CLP("CLP"),
  
  CNY("CNY"),
  
  COP("COP"),
  
  CRC("CRC"),
  
  CUC("CUC"),
  
  CUP("CUP"),
  
  CVE("CVE"),
  
  CZK("CZK"),
  
  DJF("DJF"),
  
  DKK("DKK"),
  
  DOP("DOP"),
  
  DZD("DZD"),
  
  EGP("EGP"),
  
  ERN("ERN"),
  
  ETB("ETB"),
  
  EUR("EUR"),
  
  FJD("FJD"),
  
  FKP("FKP"),
  
  GBP("GBP"),
  
  GEL("GEL"),
  
  GGP("GGP"),
  
  GHS("GHS"),
  
  GIP("GIP"),
  
  GMD("GMD"),
  
  GNF("GNF"),
  
  GTQ("GTQ"),
  
  GYD("GYD"),
  
  HKD("HKD"),
  
  HNL("HNL"),
  
  HRK("HRK"),
  
  HTG("HTG"),
  
  HUF("HUF"),
  
  IDR("IDR"),
  
  ILS("ILS"),
  
  IMP("IMP"),
  
  INR("INR"),
  
  IQD("IQD"),
  
  IRR("IRR"),
  
  ISK("ISK"),
  
  JEP("JEP"),
  
  JMD("JMD"),
  
  JOD("JOD"),
  
  JPY("JPY"),
  
  KES("KES"),
  
  KGS("KGS"),
  
  KHR("KHR"),
  
  KMF("KMF"),
  
  KPW("KPW"),
  
  KRW("KRW"),
  
  KWD("KWD"),
  
  KYD("KYD"),
  
  KZT("KZT"),
  
  LAK("LAK"),
  
  LBP("LBP"),
  
  LKR("LKR"),
  
  LRD("LRD"),
  
  LSL("LSL"),
  
  LYD("LYD"),
  
  MAD("MAD"),
  
  MDL("MDL"),
  
  MGA("MGA"),
  
  MKD("MKD"),
  
  MMK("MMK"),
  
  MNT("MNT"),
  
  MOP("MOP"),
  
  MRO("MRO"),
  
  MUR("MUR"),
  
  MVR("MVR"),
  
  MWK("MWK"),
  
  MXN("MXN"),
  
  MYR("MYR"),
  
  MZN("MZN"),
  
  NAD("NAD"),
  
  NGN("NGN"),
  
  NIO("NIO"),
  
  NOK("NOK"),
  
  NPR("NPR"),
  
  NZD("NZD"),
  
  OMR("OMR"),
  
  PAB("PAB"),
  
  PEN("PEN"),
  
  PGK("PGK"),
  
  PHP("PHP"),
  
  PKR("PKR"),
  
  PLN("PLN"),
  
  PYG("PYG"),
  
  QAR("QAR"),
  
  RON("RON"),
  
  RSD("RSD"),
  
  RUB("RUB"),
  
  RWF("RWF"),
  
  SAR("SAR"),
  
  SBD("SBD"),
  
  SCR("SCR"),
  
  SDG("SDG"),
  
  SEK("SEK"),
  
  SGD("SGD"),
  
  SHP("SHP"),
  
  SLL("SLL"),
  
  SOS("SOS"),
  
  SPL("SPL"),
  
  SRD("SRD"),
  
  STD("STD"),
  
  SVC("SVC"),
  
  SYP("SYP"),
  
  SZL("SZL"),
  
  THB("THB"),
  
  TJS("TJS"),
  
  TMT("TMT"),
  
  TND("TND"),
  
  TOP("TOP"),
  
  TRY("TRY"),
  
  TTD("TTD"),
  
  TVD("TVD"),
  
  TWD("TWD"),
  
  TZS("TZS"),
  
  UAH("UAH"),
  
  UGX("UGX"),
  
  USD("USD"),
  
  UYU("UYU"),
  
  UZS("UZS"),
  
  VEF("VEF"),
  
  VND("VND"),
  
  VUV("VUV"),
  
  WST("WST"),
  
  XAF("XAF"),
  
  XCD("XCD"),
  
  XDR("XDR"),
  
  XOF("XOF"),
  
  XPF("XPF"),
  
  YER("YER"),
  
  ZAR("ZAR"),
  
  ZMW("ZMW"),
  
  ZWD("ZWD"),
  
  NULL("null");

  private String value;

  NullableCurrency(String value) {
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

  @JsonCreator
  public static NullableCurrency fromValue(String value) {
    for (NullableCurrency b : NullableCurrency.values()) {
      if (b.value.equals(value)) {
        return b;
      }
    }
    return null;
  }
}

