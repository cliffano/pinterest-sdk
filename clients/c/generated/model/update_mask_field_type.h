/*
 * update_mask_field_type.h
 *
 * The field types supported by the update mask
 */

#ifndef _update_mask_field_type_H_
#define _update_mask_field_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct update_mask_field_type_t update_mask_field_type_t;


// Enum  for update_mask_field_type

typedef enum { pinterest_rest_api_update_mask_field_type__NULL = 0, pinterest_rest_api_update_mask_field_type__ad_link, pinterest_rest_api_update_mask_field_type__adult, pinterest_rest_api_update_mask_field_type__age_group, pinterest_rest_api_update_mask_field_type__availability, pinterest_rest_api_update_mask_field_type__average_review_rating, pinterest_rest_api_update_mask_field_type__brand, pinterest_rest_api_update_mask_field_type__checkout_enabled, pinterest_rest_api_update_mask_field_type__color, pinterest_rest_api_update_mask_field_type__condition, pinterest_rest_api_update_mask_field_type__custom_label_0, pinterest_rest_api_update_mask_field_type__custom_label_1, pinterest_rest_api_update_mask_field_type__custom_label_2, pinterest_rest_api_update_mask_field_type__custom_label_3, pinterest_rest_api_update_mask_field_type__custom_label_4, pinterest_rest_api_update_mask_field_type__description, pinterest_rest_api_update_mask_field_type__free_shipping_label, pinterest_rest_api_update_mask_field_type__free_shipping_limit, pinterest_rest_api_update_mask_field_type__gender, pinterest_rest_api_update_mask_field_type__google_product_category, pinterest_rest_api_update_mask_field_type__gtin, pinterest_rest_api_update_mask_field_type__item_group_id, pinterest_rest_api_update_mask_field_type__last_updated_time, pinterest_rest_api_update_mask_field_type__link, pinterest_rest_api_update_mask_field_type__material, pinterest_rest_api_update_mask_field_type__min_ad_price, pinterest_rest_api_update_mask_field_type__mpn, pinterest_rest_api_update_mask_field_type__number_of_ratings, pinterest_rest_api_update_mask_field_type__number_of_reviews, pinterest_rest_api_update_mask_field_type__pattern, pinterest_rest_api_update_mask_field_type__price, pinterest_rest_api_update_mask_field_type__product_type, pinterest_rest_api_update_mask_field_type__sale_price, pinterest_rest_api_update_mask_field_type__shipping, pinterest_rest_api_update_mask_field_type__shipping_height, pinterest_rest_api_update_mask_field_type__shipping_weight, pinterest_rest_api_update_mask_field_type__shipping_width, pinterest_rest_api_update_mask_field_type__size, pinterest_rest_api_update_mask_field_type__size_system, pinterest_rest_api_update_mask_field_type__size_type, pinterest_rest_api_update_mask_field_type__tax, pinterest_rest_api_update_mask_field_type__title, pinterest_rest_api_update_mask_field_type__variant_names, pinterest_rest_api_update_mask_field_type__variant_values } pinterest_rest_api_update_mask_field_type__e;

char* update_mask_field_type_update_mask_field_type_ToString(pinterest_rest_api_update_mask_field_type__e update_mask_field_type);

pinterest_rest_api_update_mask_field_type__e update_mask_field_type_update_mask_field_type_FromString(char* update_mask_field_type);

//cJSON *update_mask_field_type_update_mask_field_type_convertToJSON(pinterest_rest_api_update_mask_field_type__e update_mask_field_type);

//pinterest_rest_api_update_mask_field_type__e update_mask_field_type_update_mask_field_type_parseFromJSON(cJSON *update_mask_field_typeJSON);

#endif /* _update_mask_field_type_H_ */

