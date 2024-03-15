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

package org.openapitools.model;

import java.util.Objects;
import java.util.Arrays;
import com.fasterxml.jackson.annotation.*;

import javax.validation.constraints.*;
import javax.validation.Valid;
import io.micronaut.core.annotation.*;
import javax.annotation.Generated;

import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;

/**
 * Level of the reporting request
 */
@Introspected
public enum MetricsReportingLevel {
    ADVERTISER("ADVERTISER"),
    ADVERTISER_TARGETING("ADVERTISER_TARGETING"),
    CAMPAIGN("CAMPAIGN"),
    CAMPAIGN_TARGETING("CAMPAIGN_TARGETING"),
    AD_GROUP("AD_GROUP"),
    AD_GROUP_TARGETING("AD_GROUP_TARGETING"),
    PIN_PROMOTION("PIN_PROMOTION"),
    PIN_PROMOTION_TARGETING("PIN_PROMOTION_TARGETING"),
    KEYWORD("KEYWORD"),
    PRODUCT_GROUP("PRODUCT_GROUP"),
    PRODUCT_GROUP_TARGETING("PRODUCT_GROUP_TARGETING"),
    PRODUCT_ITEM("PRODUCT_ITEM");

    private String value;

    MetricsReportingLevel(String value) {
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
    public static MetricsReportingLevel fromValue(String value) {
        for (MetricsReportingLevel b : MetricsReportingLevel.values()) {
            if (b.value.equals(value)) {
                return b;
            }
        }
        throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }
}

