package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.CatalogsProduct;

@Canonical
class CatalogsProductGroupPinsList200Response {
    /* Pins */
    List<CatalogsProduct> items = new ArrayList<>()
    
    String bookmark
}
