package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.AdsAnalyticsTargetingType;

@Canonical
class TargetingTypeFilter {
    /* List of targeting types. Requires `level` to be a value ending in `_TARGETING`. */
    List<AdsAnalyticsTargetingType> targetingTypes
}
