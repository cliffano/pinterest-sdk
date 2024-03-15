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
 * Lead form question field type
 */
@Introspected
public enum LeadFormQuestionFieldType {
    TEXT_FIELD("TEXT_FIELD"),
    TEXT_AREA("TEXT_AREA"),
    RADIO_LIST("RADIO_LIST"),
    CHECKBOX("CHECKBOX"),
    NULL("null");

    private String value;

    LeadFormQuestionFieldType(String value) {
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
    public static LeadFormQuestionFieldType fromValue(String value) {
        for (LeadFormQuestionFieldType b : LeadFormQuestionFieldType.values()) {
            if (b.value.equals(value)) {
                return b;
            }
        }
        return null;
    }
}

