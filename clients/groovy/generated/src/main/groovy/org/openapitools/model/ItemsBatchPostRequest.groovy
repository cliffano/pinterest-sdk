package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.BatchOperation;
import org.openapitools.model.CatalogsItemsBatchRequest;
import org.openapitools.model.CatalogsType;
import org.openapitools.model.CatalogsVerticalBatchRequest;
import org.openapitools.model.Country;
import org.openapitools.model.ItemDeleteBatchRecord;
import org.openapitools.model.Language;

@Canonical
class ItemsBatchPostRequest {
    
    Country country
    
    Language language
    
    BatchOperation operation
    /* Array with catalogs items */
    List<ItemDeleteBatchRecord> items = new ArrayList<>()
}
