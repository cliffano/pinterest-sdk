/*
 * catalogs_item_validation_details.h
 *
 * 
 */

#ifndef _catalogs_item_validation_details_H_
#define _catalogs_item_validation_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct catalogs_item_validation_details_t catalogs_item_validation_details_t;

#include "nullable_catalogs_item_field_type.h"

// Enum  for catalogs_item_validation_details

typedef enum  { pinterest_rest_api_catalogs_item_validation_details__NULL = 0, pinterest_rest_api_catalogs_item_validation_details__ITEM_ID, pinterest_rest_api_catalogs_item_validation_details__ITEM_GROUP_ID, pinterest_rest_api_catalogs_item_validation_details__TITLE, pinterest_rest_api_catalogs_item_validation_details__DESCRIPTION, pinterest_rest_api_catalogs_item_validation_details__ITEM_LINK, pinterest_rest_api_catalogs_item_validation_details__ORGANIC_LINK, pinterest_rest_api_catalogs_item_validation_details__IMAGE_LINK, pinterest_rest_api_catalogs_item_validation_details__ADWORDS_REDIRECT_LINK, pinterest_rest_api_catalogs_item_validation_details__AD_LINK, pinterest_rest_api_catalogs_item_validation_details__SIZE, pinterest_rest_api_catalogs_item_validation_details__GOOGLE_PRODUCT_CATEGORY, pinterest_rest_api_catalogs_item_validation_details__PRODUCT_CATEGORY, pinterest_rest_api_catalogs_item_validation_details__CONDITION, pinterest_rest_api_catalogs_item_validation_details__AVAILABILITY, pinterest_rest_api_catalogs_item_validation_details__GENDER, pinterest_rest_api_catalogs_item_validation_details__AGE_GROUP, pinterest_rest_api_catalogs_item_validation_details__SIZE_TYPE, pinterest_rest_api_catalogs_item_validation_details__SIZE_SYSTEM, pinterest_rest_api_catalogs_item_validation_details__ADULT, pinterest_rest_api_catalogs_item_validation_details__SHIPPING, pinterest_rest_api_catalogs_item_validation_details__SHIPPING_WEIGHT, pinterest_rest_api_catalogs_item_validation_details__TAX, pinterest_rest_api_catalogs_item_validation_details__MULTIPACK, pinterest_rest_api_catalogs_item_validation_details__ADDITIONAL_IMAGE_LINK, pinterest_rest_api_catalogs_item_validation_details__PRICE, pinterest_rest_api_catalogs_item_validation_details__SALE_PRICE, pinterest_rest_api_catalogs_item_validation_details__IS_BUNDLE, pinterest_rest_api_catalogs_item_validation_details__EXPIRATION_DATE, pinterest_rest_api_catalogs_item_validation_details__SALE_PRICE_EFFECTIVE_DATE, pinterest_rest_api_catalogs_item_validation_details__AVAILABILITY_DATE, pinterest_rest_api_catalogs_item_validation_details__WEIGHT_UNIT, pinterest_rest_api_catalogs_item_validation_details__PRODUCT_TYPE, pinterest_rest_api_catalogs_item_validation_details__CUSTOM_LABEL_0, pinterest_rest_api_catalogs_item_validation_details__CUSTOM_LABEL_1, pinterest_rest_api_catalogs_item_validation_details__CUSTOM_LABEL_2, pinterest_rest_api_catalogs_item_validation_details__CUSTOM_LABEL_3, pinterest_rest_api_catalogs_item_validation_details__CUSTOM_LABEL_4, pinterest_rest_api_catalogs_item_validation_details__MATERIAL, pinterest_rest_api_catalogs_item_validation_details__PATTERN, pinterest_rest_api_catalogs_item_validation_details__COLOR, pinterest_rest_api_catalogs_item_validation_details__BRAND, pinterest_rest_api_catalogs_item_validation_details__GTIN, pinterest_rest_api_catalogs_item_validation_details__MPN, pinterest_rest_api_catalogs_item_validation_details__IOS_DEEP_LINK, pinterest_rest_api_catalogs_item_validation_details__ANDROID_DEEP_LINK, pinterest_rest_api_catalogs_item_validation_details__FREE_SHIPPING_LABEL, pinterest_rest_api_catalogs_item_validation_details__FREE_SHIPPING_LIMIT, pinterest_rest_api_catalogs_item_validation_details__AVG_REVIEW_RATING, pinterest_rest_api_catalogs_item_validation_details__NUM_RATINGS, pinterest_rest_api_catalogs_item_validation_details__NUM_REVIEWS, pinterest_rest_api_catalogs_item_validation_details__ALT_TEXT, pinterest_rest_api_catalogs_item_validation_details__VARIANT_NAMES, pinterest_rest_api_catalogs_item_validation_details__VARIANT_VALUES, pinterest_rest_api_catalogs_item_validation_details__MIN_AD_PRICE, pinterest_rest_api_catalogs_item_validation_details__SHIPPING_WIDTH, pinterest_rest_api_catalogs_item_validation_details__SHIPPING_HEIGHT, pinterest_rest_api_catalogs_item_validation_details__null } pinterest_rest_api_catalogs_item_validation_details__e;

char* catalogs_item_validation_details_attribute_name_ToString(pinterest_rest_api_catalogs_item_validation_details__e attribute_name);

pinterest_rest_api_catalogs_item_validation_details__e catalogs_item_validation_details_attribute_name_FromString(char* attribute_name);



typedef struct catalogs_item_validation_details_t {
    nullable_catalogs_item_field_type_t *attribute_name; // custom
    char *provided_value; // string

} catalogs_item_validation_details_t;

catalogs_item_validation_details_t *catalogs_item_validation_details_create(
    nullable_catalogs_item_field_type_t *attribute_name,
    char *provided_value
);

void catalogs_item_validation_details_free(catalogs_item_validation_details_t *catalogs_item_validation_details);

catalogs_item_validation_details_t *catalogs_item_validation_details_parseFromJSON(cJSON *catalogs_item_validation_detailsJSON);

cJSON *catalogs_item_validation_details_convertToJSON(catalogs_item_validation_details_t *catalogs_item_validation_details);

#endif /* _catalogs_item_validation_details_H_ */

