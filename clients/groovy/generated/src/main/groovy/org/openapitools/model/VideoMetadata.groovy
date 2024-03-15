package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.math.BigDecimal;
import org.openapitools.jackson.nullable.JsonNullable;

@Canonical
class VideoMetadata {
    
    String itemType
    
    String coverImageUrl
    /* Video url (720p). </p><strong>Note:</strong> This field is limited and not available to all apps. */
    String videoUrl
    /* Duration (in milliseconds) */
    BigDecimal duration
    /* Height (in pixels) */
    Integer height
    /* Width (in pixels) */
    Integer width
}
