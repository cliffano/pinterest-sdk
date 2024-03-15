/*
 * item_update_batch_record.h
 *
 * Object describing an item batch record to update items
 */

#ifndef _item_update_batch_record_H_
#define _item_update_batch_record_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_update_batch_record_t item_update_batch_record_t;

#include "updatable_item_attributes.h"
#include "update_mask_field_type.h"

// Enum  for item_update_batch_record

typedef enum  { pinterest_rest_api_item_update_batch_record__NULL = 0, pinterest_rest_api_item_update_batch_record__ad_link, pinterest_rest_api_item_update_batch_record__adult, pinterest_rest_api_item_update_batch_record__age_group, pinterest_rest_api_item_update_batch_record__availability, pinterest_rest_api_item_update_batch_record__average_review_rating, pinterest_rest_api_item_update_batch_record__brand, pinterest_rest_api_item_update_batch_record__checkout_enabled, pinterest_rest_api_item_update_batch_record__color, pinterest_rest_api_item_update_batch_record__condition, pinterest_rest_api_item_update_batch_record__custom_label_0, pinterest_rest_api_item_update_batch_record__custom_label_1, pinterest_rest_api_item_update_batch_record__custom_label_2, pinterest_rest_api_item_update_batch_record__custom_label_3, pinterest_rest_api_item_update_batch_record__custom_label_4, pinterest_rest_api_item_update_batch_record__description, pinterest_rest_api_item_update_batch_record__free_shipping_label, pinterest_rest_api_item_update_batch_record__free_shipping_limit, pinterest_rest_api_item_update_batch_record__gender, pinterest_rest_api_item_update_batch_record__google_product_category, pinterest_rest_api_item_update_batch_record__gtin, pinterest_rest_api_item_update_batch_record__item_group_id, pinterest_rest_api_item_update_batch_record__last_updated_time, pinterest_rest_api_item_update_batch_record__link, pinterest_rest_api_item_update_batch_record__material, pinterest_rest_api_item_update_batch_record__min_ad_price, pinterest_rest_api_item_update_batch_record__mpn, pinterest_rest_api_item_update_batch_record__number_of_ratings, pinterest_rest_api_item_update_batch_record__number_of_reviews, pinterest_rest_api_item_update_batch_record__pattern, pinterest_rest_api_item_update_batch_record__price, pinterest_rest_api_item_update_batch_record__product_type, pinterest_rest_api_item_update_batch_record__sale_price, pinterest_rest_api_item_update_batch_record__shipping, pinterest_rest_api_item_update_batch_record__shipping_height, pinterest_rest_api_item_update_batch_record__shipping_weight, pinterest_rest_api_item_update_batch_record__shipping_width, pinterest_rest_api_item_update_batch_record__size, pinterest_rest_api_item_update_batch_record__size_system, pinterest_rest_api_item_update_batch_record__size_type, pinterest_rest_api_item_update_batch_record__tax, pinterest_rest_api_item_update_batch_record__title, pinterest_rest_api_item_update_batch_record__variant_names, pinterest_rest_api_item_update_batch_record__variant_values } pinterest_rest_api_item_update_batch_record__e;

char* item_update_batch_record_update_mask_ToString(pinterest_rest_api_item_update_batch_record__e update_mask);

pinterest_rest_api_item_update_batch_record__e item_update_batch_record_update_mask_FromString(char* update_mask);



typedef struct item_update_batch_record_t {
    char *item_id; // string
    struct updatable_item_attributes_t *attributes; //model
    list_t *update_mask; //nonprimitive container

} item_update_batch_record_t;

item_update_batch_record_t *item_update_batch_record_create(
    char *item_id,
    updatable_item_attributes_t *attributes,
    list_t *update_mask
);

void item_update_batch_record_free(item_update_batch_record_t *item_update_batch_record);

item_update_batch_record_t *item_update_batch_record_parseFromJSON(cJSON *item_update_batch_recordJSON);

cJSON *item_update_batch_record_convertToJSON(item_update_batch_record_t *item_update_batch_record);

#endif /* _item_update_batch_record_H_ */

