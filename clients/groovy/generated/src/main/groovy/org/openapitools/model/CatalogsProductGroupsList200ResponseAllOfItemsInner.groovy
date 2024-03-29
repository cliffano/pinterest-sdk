package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.jackson.nullable.JsonNullable;
import org.openapitools.model.CatalogsProductGroup;
import org.openapitools.model.CatalogsProductGroupFilters;
import org.openapitools.model.CatalogsProductGroupStatus;
import org.openapitools.model.CatalogsProductGroupType;
import org.openapitools.model.CatalogsVerticalProductGroup;

@Canonical
class CatalogsProductGroupsList200ResponseAllOfItemsInner {
    /* ID of the catalog product group. */
    String id
    /* Name of catalog product group */
    String name
    
    String description
    
    CatalogsProductGroupFilters filters
    /* boolean indicator of whether the product group is being featured or not */
    Boolean isFeatured
    
    CatalogsProductGroupType type
    
    CatalogsProductGroupStatus status
    /* Unix timestamp in seconds of when catalog product group was created. */
    Integer createdAt
    /* Unix timestamp in seconds of last time catalog product group was updated. */
    Integer updatedAt
    /* id of the catalogs feed belonging to this catalog product group */
    String feedId

    enum CatalogTypeEnum {
    
        RETAIL("RETAIL")
    
        private final String value
    
        CatalogTypeEnum(String value) {
            this.value = value
        }
    
        String getValue() {
            value
        }
    
        @Override
        String toString() {
            String.valueOf(value)
        }
    }

    
    CatalogTypeEnum catalogType
}
