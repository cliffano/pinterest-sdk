/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * OpenAPI document version: 5.12.0
 * Maintained by: blah+oapicf@cliffano.com
 *
 * AUTO-GENERATED FILE, DO NOT MODIFY!
 */
package org.openapitools.model;

import java.util.Objects;
import io.swagger.annotations.ApiModel;
import com.fasterxml.jackson.annotation.JsonValue;



/**
 * Lead form question field type
 */

/**
 * Lead form question field type
 */
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

@Override
@JsonValue
public String toString() {
return String.valueOf(value);
}

@JsonCreator
public static LeadFormQuestionFieldType fromValue(String text) {
for (LeadFormQuestionFieldType b : LeadFormQuestionFieldType.values()) {
if (String.valueOf(b.value).equals(text)) {
return b;
}
}
return null;
}
}


