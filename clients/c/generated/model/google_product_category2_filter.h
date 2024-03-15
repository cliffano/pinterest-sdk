/*
 * google_product_category2_filter.h
 *
 * 
 */

#ifndef _google_product_category2_filter_H_
#define _google_product_category2_filter_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct google_product_category2_filter_t google_product_category2_filter_t;

#include "catalogs_product_group_multiple_string_list_criteria.h"



typedef struct google_product_category2_filter_t {
    catalogs_product_group_multiple_string_list_criteria_t *google_product_category_2; //object

} google_product_category2_filter_t;

google_product_category2_filter_t *google_product_category2_filter_create(
    catalogs_product_group_multiple_string_list_criteria_t *google_product_category_2
);

void google_product_category2_filter_free(google_product_category2_filter_t *google_product_category2_filter);

google_product_category2_filter_t *google_product_category2_filter_parseFromJSON(cJSON *google_product_category2_filterJSON);

cJSON *google_product_category2_filter_convertToJSON(google_product_category2_filter_t *google_product_category2_filter);

#endif /* _google_product_category2_filter_H_ */

