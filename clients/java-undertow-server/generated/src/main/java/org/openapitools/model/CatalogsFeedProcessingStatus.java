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
import com.fasterxml.jackson.annotation.JsonValue;




/**
 * Gets or Sets CatalogsFeedProcessingStatus
 */
public enum CatalogsFeedProcessingStatus {
    
        COMPLETED("COMPLETED"),
        
        COMPLETED_EARLY("COMPLETED_EARLY"),
        
        DISAPPROVED("DISAPPROVED"),
        
        FAILED("FAILED"),
        
        PROCESSING("PROCESSING"),
        
        QUEUED_FOR_PROCESSING("QUEUED_FOR_PROCESSING"),
        
        UNDER_APPEAL("UNDER_APPEAL"),
        
        UNDER_REVIEW("UNDER_REVIEW");

private String value;

CatalogsFeedProcessingStatus(String value) {
this.value = value;
}

@Override
@JsonValue
public String toString() {
return String.valueOf(value);
}

@JsonCreator
public static CatalogsFeedProcessingStatus fromValue(String text) {
for (CatalogsFeedProcessingStatus b : CatalogsFeedProcessingStatus.values()) {
if (String.valueOf(b.value).equals(text)) {
return b;
}
}
throw new IllegalArgumentException("Unexpected value '" + text + "'");
}
}


