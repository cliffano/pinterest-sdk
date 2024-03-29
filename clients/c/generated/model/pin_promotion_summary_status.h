/*
 * pin_promotion_summary_status.h
 *
 * Summary status for pin promotions
 */

#ifndef _pin_promotion_summary_status_H_
#define _pin_promotion_summary_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct pin_promotion_summary_status_t pin_promotion_summary_status_t;


// Enum  for pin_promotion_summary_status

typedef enum { pinterest_rest_api_pin_promotion_summary_status__NULL = 0, pinterest_rest_api_pin_promotion_summary_status__APPROVED, pinterest_rest_api_pin_promotion_summary_status__PAUSED, pinterest_rest_api_pin_promotion_summary_status__PENDING, pinterest_rest_api_pin_promotion_summary_status__REJECTED, pinterest_rest_api_pin_promotion_summary_status__ADVERTISER_DISABLED, pinterest_rest_api_pin_promotion_summary_status__ARCHIVED, pinterest_rest_api_pin_promotion_summary_status__DRAFT, pinterest_rest_api_pin_promotion_summary_status__DELETED_DRAFT } pinterest_rest_api_pin_promotion_summary_status__e;

char* pin_promotion_summary_status_pin_promotion_summary_status_ToString(pinterest_rest_api_pin_promotion_summary_status__e pin_promotion_summary_status);

pinterest_rest_api_pin_promotion_summary_status__e pin_promotion_summary_status_pin_promotion_summary_status_FromString(char* pin_promotion_summary_status);

//cJSON *pin_promotion_summary_status_pin_promotion_summary_status_convertToJSON(pinterest_rest_api_pin_promotion_summary_status__e pin_promotion_summary_status);

//pinterest_rest_api_pin_promotion_summary_status__e pin_promotion_summary_status_pin_promotion_summary_status_parseFromJSON(cJSON *pin_promotion_summary_statusJSON);

#endif /* _pin_promotion_summary_status_H_ */

