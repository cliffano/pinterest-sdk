/*
 * ad_account_analytics_response_inner.h
 *
 * 
 */

#ifndef _ad_account_analytics_response_inner_H_
#define _ad_account_analytics_response_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ad_account_analytics_response_inner_t ad_account_analytics_response_inner_t;

#include "any_type.h"



typedef struct ad_account_analytics_response_inner_t {
    char *ad_account_id; // string
    char *date; //date

} ad_account_analytics_response_inner_t;

ad_account_analytics_response_inner_t *ad_account_analytics_response_inner_create(
    char *ad_account_id,
    char *date
);

void ad_account_analytics_response_inner_free(ad_account_analytics_response_inner_t *ad_account_analytics_response_inner);

ad_account_analytics_response_inner_t *ad_account_analytics_response_inner_parseFromJSON(cJSON *ad_account_analytics_response_innerJSON);

cJSON *ad_account_analytics_response_inner_convertToJSON(ad_account_analytics_response_inner_t *ad_account_analytics_response_inner);

#endif /* _ad_account_analytics_response_inner_H_ */

