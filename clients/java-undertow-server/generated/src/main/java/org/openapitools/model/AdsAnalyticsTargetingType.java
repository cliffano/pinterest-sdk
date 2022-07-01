/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * OpenAPI document version: 5.3.0
 * Maintained by: blah@cliffano.com
 *
 * AUTO-GENERATED FILE, DO NOT MODIFY!
 */
package org.openapitools.model;

import java.util.Objects;
import io.swagger.annotations.ApiModel;
import com.fasterxml.jackson.annotation.JsonValue;



/**
 * Reporting targeting type
 */

/**
 * Reporting targeting type
 */
public enum AdsAnalyticsTargetingType {
    
        KEYWORD("KEYWORD"),
        
        APPTYPE("APPTYPE"),
        
        GENDER("GENDER"),
        
        LOCATION("LOCATION"),
        
        PLACEMENT("PLACEMENT"),
        
        COUNTRY("COUNTRY"),
        
        TARGETED_INTEREST("TARGETED_INTEREST"),
        
        PINNER_INTEREST("PINNER_INTEREST"),
        
        AUDIENCE_INCLUDE("AUDIENCE_INCLUDE"),
        
        AUDIENCE_EXCLUDE("AUDIENCE_EXCLUDE"),
        
        GEO("GEO"),
        
        AGE_BUCKET("AGE_BUCKET"),
        
        REGION("REGION");

private String value;

AdsAnalyticsTargetingType(String value) {
this.value = value;
}

@Override
@JsonValue
public String toString() {
return String.valueOf(value);
}

@JsonCreator
public static AdsAnalyticsTargetingType fromValue(String text) {
for (AdsAnalyticsTargetingType b : AdsAnalyticsTargetingType.values()) {
if (String.valueOf(b.value).equals(text)) {
return b;
}
}
throw new IllegalArgumentException("Unexpected value '" + text + "'");
}
}


