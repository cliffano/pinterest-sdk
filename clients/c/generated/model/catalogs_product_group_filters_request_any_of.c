#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "catalogs_product_group_filters_request_any_of.h"



catalogs_product_group_filters_request_any_of_t *catalogs_product_group_filters_request_any_of_create(
    list_t *any_of
    ) {
    catalogs_product_group_filters_request_any_of_t *catalogs_product_group_filters_request_any_of_local_var = malloc(sizeof(catalogs_product_group_filters_request_any_of_t));
    if (!catalogs_product_group_filters_request_any_of_local_var) {
        return NULL;
    }
    catalogs_product_group_filters_request_any_of_local_var->any_of = any_of;

    return catalogs_product_group_filters_request_any_of_local_var;
}


void catalogs_product_group_filters_request_any_of_free(catalogs_product_group_filters_request_any_of_t *catalogs_product_group_filters_request_any_of) {
    if(NULL == catalogs_product_group_filters_request_any_of){
        return ;
    }
    listEntry_t *listEntry;
    if (catalogs_product_group_filters_request_any_of->any_of) {
        list_ForEach(listEntry, catalogs_product_group_filters_request_any_of->any_of) {
            catalogs_product_group_filter_keys_free(listEntry->data);
        }
        list_freeList(catalogs_product_group_filters_request_any_of->any_of);
        catalogs_product_group_filters_request_any_of->any_of = NULL;
    }
    free(catalogs_product_group_filters_request_any_of);
}

cJSON *catalogs_product_group_filters_request_any_of_convertToJSON(catalogs_product_group_filters_request_any_of_t *catalogs_product_group_filters_request_any_of) {
    cJSON *item = cJSON_CreateObject();

    // catalogs_product_group_filters_request_any_of->any_of
    if (!catalogs_product_group_filters_request_any_of->any_of) {
        goto fail;
    }
    cJSON *any_of = cJSON_AddArrayToObject(item, "any_of");
    if(any_of == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *any_ofListEntry;
    if (catalogs_product_group_filters_request_any_of->any_of) {
    list_ForEach(any_ofListEntry, catalogs_product_group_filters_request_any_of->any_of) {
    cJSON *itemLocal = catalogs_product_group_filter_keys_convertToJSON(any_ofListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(any_of, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

catalogs_product_group_filters_request_any_of_t *catalogs_product_group_filters_request_any_of_parseFromJSON(cJSON *catalogs_product_group_filters_request_any_ofJSON){

    catalogs_product_group_filters_request_any_of_t *catalogs_product_group_filters_request_any_of_local_var = NULL;

    // define the local list for catalogs_product_group_filters_request_any_of->any_of
    list_t *any_ofList = NULL;

    // catalogs_product_group_filters_request_any_of->any_of
    cJSON *any_of = cJSON_GetObjectItemCaseSensitive(catalogs_product_group_filters_request_any_ofJSON, "any_of");
    if (!any_of) {
        goto end;
    }

    
    cJSON *any_of_local_nonprimitive = NULL;
    if(!cJSON_IsArray(any_of)){
        goto end; //nonprimitive container
    }

    any_ofList = list_createList();

    cJSON_ArrayForEach(any_of_local_nonprimitive,any_of )
    {
        if(!cJSON_IsObject(any_of_local_nonprimitive)){
            goto end;
        }
        catalogs_product_group_filter_keys_t *any_ofItem = catalogs_product_group_filter_keys_parseFromJSON(any_of_local_nonprimitive);

        list_addElement(any_ofList, any_ofItem);
    }


    catalogs_product_group_filters_request_any_of_local_var = catalogs_product_group_filters_request_any_of_create (
        any_ofList
        );

    return catalogs_product_group_filters_request_any_of_local_var;
end:
    if (any_ofList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, any_ofList) {
            catalogs_product_group_filter_keys_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(any_ofList);
        any_ofList = NULL;
    }
    return NULL;

}
