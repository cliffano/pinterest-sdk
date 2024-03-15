package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Keyword match type
 **/
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonProperty;

public enum MatchType {

    @JsonProperty("BROAD") BROAD(String.valueOf("BROAD")), @JsonProperty("PHRASE") PHRASE(String.valueOf("PHRASE")), @JsonProperty("EXACT") EXACT(String.valueOf("EXACT")), @JsonProperty("EXACT_NEGATIVE") EXACT_NEGATIVE(String.valueOf("EXACT_NEGATIVE")), @JsonProperty("PHRASE_NEGATIVE") PHRASE_NEGATIVE(String.valueOf("PHRASE_NEGATIVE"));


    private String value;

    MatchType(String v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    public String toString() {
        return String.valueOf(value);
    }

    public static MatchType fromValue(String value) {
        for (MatchType b : MatchType.values()) {
            if (b.value.equals(value)) {
                return b;
            }
        }
        throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }
}



