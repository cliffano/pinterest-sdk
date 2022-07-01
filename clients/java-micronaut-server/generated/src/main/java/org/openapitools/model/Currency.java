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

package org.openapitools.model;

import java.util.Objects;
import java.util.Arrays;
import io.swagger.annotations.ApiModel;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;

/**
 * Currency Codes from ISO 4217
 */
@Introspected
public enum Currency {
    UNK("UNK"),
    USD("USD"),
    GBP("GBP"),
    CAD("CAD"),
    EUR("EUR"),
    AUD("AUD"),
    NZD("NZD"),
    SEK("SEK"),
    ILS("ILS"),
    CHF("CHF"),
    HKD("HKD"),
    JPY("JPY"),
    SGD("SGD"),
    KRW("KRW"),
    NOK("NOK"),
    DKK("DKK"),
    PLN("PLN"),
    RON("RON"),
    HUF("HUF"),
    CZK("CZK"),
    BRL("BRL"),
    MXN("MXN"),
    ARS("ARS"),
    CLP("CLP"),
    COP("COP");

    private String value;

    Currency(String value) {
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
    public static Currency fromValue(String value) {
        for (Currency b : Currency.values()) {
            if (b.value.equals(value)) {
                return b;
            }
        }
        throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }
}

