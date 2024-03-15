package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.CatalogsHotelAttributes;
import org.openapitools.model.CatalogsHotelItemResponse;
import org.openapitools.model.CatalogsRetailItemResponse;
import org.openapitools.model.CatalogsType;
import org.openapitools.model.Pin;

@Canonical
class ItemResponseAnyOf {
    
    CatalogsType catalogType
    /* The catalog retail item id in the merchant namespace */
    String itemId
    /* The pins mapped to the item */
    List<Pin> pins
    
    CatalogsHotelAttributes attributes
    /* The catalog hotel id in the merchant namespace */
    String hotelId
}
