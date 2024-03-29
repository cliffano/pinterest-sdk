/*
 * create_mmm_report_request.h
 *
 * 
 */

#ifndef _create_mmm_report_request_H_
#define _create_mmm_report_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct create_mmm_report_request_t create_mmm_report_request_t;

#include "mmm_reporting_column.h"
#include "mmm_reporting_targeting_type.h"
#include "targeting_advertiser_country.h"

// Enum GRANULARITY for create_mmm_report_request

typedef enum  { pinterest_rest_api_create_mmm_report_request_GRANULARITY_NULL = 0, pinterest_rest_api_create_mmm_report_request_GRANULARITY_DAY, pinterest_rest_api_create_mmm_report_request_GRANULARITY_WEEK } pinterest_rest_api_create_mmm_report_request_GRANULARITY_e;

char* create_mmm_report_request_granularity_ToString(pinterest_rest_api_create_mmm_report_request_GRANULARITY_e granularity);

pinterest_rest_api_create_mmm_report_request_GRANULARITY_e create_mmm_report_request_granularity_FromString(char* granularity);

// Enum LEVEL for create_mmm_report_request

typedef enum  { pinterest_rest_api_create_mmm_report_request_LEVEL_NULL = 0, pinterest_rest_api_create_mmm_report_request_LEVEL_CAMPAIGN_TARGETING, pinterest_rest_api_create_mmm_report_request_LEVEL_AD_GROUP_TARGETING } pinterest_rest_api_create_mmm_report_request_LEVEL_e;

char* create_mmm_report_request_level_ToString(pinterest_rest_api_create_mmm_report_request_LEVEL_e level);

pinterest_rest_api_create_mmm_report_request_LEVEL_e create_mmm_report_request_level_FromString(char* level);

// Enum  for create_mmm_report_request

typedef enum  { pinterest_rest_api_create_mmm_report_request__NULL = 0, pinterest_rest_api_create_mmm_report_request__APPTYPE, pinterest_rest_api_create_mmm_report_request__COUNTRY, pinterest_rest_api_create_mmm_report_request__CREATIVE_TYPE, pinterest_rest_api_create_mmm_report_request__GENDER, pinterest_rest_api_create_mmm_report_request__LOCATION } pinterest_rest_api_create_mmm_report_request__e;

char* create_mmm_report_request_targeting_types_ToString(pinterest_rest_api_create_mmm_report_request__e targeting_types);

pinterest_rest_api_create_mmm_report_request__e create_mmm_report_request_targeting_types_FromString(char* targeting_types);

// Enum  for create_mmm_report_request

typedef enum  { pinterest_rest_api_create_mmm_report_request__NULL = 0, pinterest_rest_api_create_mmm_report_request__SPEND_IN_DOLLAR, pinterest_rest_api_create_mmm_report_request__SPEND_IN_MICRO_DOLLAR, pinterest_rest_api_create_mmm_report_request__ECPC_IN_DOLLAR, pinterest_rest_api_create_mmm_report_request__ECTR, pinterest_rest_api_create_mmm_report_request__CAMPAIGN_NAME, pinterest_rest_api_create_mmm_report_request__TOTAL_ENGAGEMENT, pinterest_rest_api_create_mmm_report_request__EENGAGEMENT_RATE, pinterest_rest_api_create_mmm_report_request__ECPM_IN_DOLLAR, pinterest_rest_api_create_mmm_report_request__CAMPAIGN_ID, pinterest_rest_api_create_mmm_report_request__ADVERTISER_ID, pinterest_rest_api_create_mmm_report_request__AD_GROUP_ID, pinterest_rest_api_create_mmm_report_request__AD_GROUP_NAME, pinterest_rest_api_create_mmm_report_request__CLICKTHROUGH_1, pinterest_rest_api_create_mmm_report_request__IMPRESSION_1, pinterest_rest_api_create_mmm_report_request__CLICKTHROUGH_2, pinterest_rest_api_create_mmm_report_request__IMPRESSION_2, pinterest_rest_api_create_mmm_report_request__TOTAL_CLICKTHROUGH, pinterest_rest_api_create_mmm_report_request__TOTAL_IMPRESSION, pinterest_rest_api_create_mmm_report_request__ADVERTISER_NAME, pinterest_rest_api_create_mmm_report_request__SPEND_ORDER_LINE_PAID_TYPE } pinterest_rest_api_create_mmm_report_request__e;

char* create_mmm_report_request_columns_ToString(pinterest_rest_api_create_mmm_report_request__e columns);

pinterest_rest_api_create_mmm_report_request__e create_mmm_report_request_columns_FromString(char* columns);

// Enum  for create_mmm_report_request

typedef enum  { pinterest_rest_api_create_mmm_report_request__NULL = 0, pinterest_rest_api_create_mmm_report_request__US, pinterest_rest_api_create_mmm_report_request__GB, pinterest_rest_api_create_mmm_report_request__CA, pinterest_rest_api_create_mmm_report_request__IE, pinterest_rest_api_create_mmm_report_request__AU, pinterest_rest_api_create_mmm_report_request__NZ, pinterest_rest_api_create_mmm_report_request__FR, pinterest_rest_api_create_mmm_report_request__SE, pinterest_rest_api_create_mmm_report_request__IL, pinterest_rest_api_create_mmm_report_request__DE, pinterest_rest_api_create_mmm_report_request__AT, pinterest_rest_api_create_mmm_report_request__IT, pinterest_rest_api_create_mmm_report_request__ES, pinterest_rest_api_create_mmm_report_request__NL, pinterest_rest_api_create_mmm_report_request__BE, pinterest_rest_api_create_mmm_report_request__PT, pinterest_rest_api_create_mmm_report_request__CH, pinterest_rest_api_create_mmm_report_request__HK, pinterest_rest_api_create_mmm_report_request__JP, pinterest_rest_api_create_mmm_report_request__KR, pinterest_rest_api_create_mmm_report_request__SG, pinterest_rest_api_create_mmm_report_request__NO, pinterest_rest_api_create_mmm_report_request__DK, pinterest_rest_api_create_mmm_report_request__FI, pinterest_rest_api_create_mmm_report_request__CY, pinterest_rest_api_create_mmm_report_request__LU, pinterest_rest_api_create_mmm_report_request__MT, pinterest_rest_api_create_mmm_report_request__PL, pinterest_rest_api_create_mmm_report_request__RO, pinterest_rest_api_create_mmm_report_request__HU, pinterest_rest_api_create_mmm_report_request__CZ, pinterest_rest_api_create_mmm_report_request__GR, pinterest_rest_api_create_mmm_report_request__SK, pinterest_rest_api_create_mmm_report_request__BR, pinterest_rest_api_create_mmm_report_request__MX, pinterest_rest_api_create_mmm_report_request__AR, pinterest_rest_api_create_mmm_report_request__CL, pinterest_rest_api_create_mmm_report_request__CO } pinterest_rest_api_create_mmm_report_request__e;

char* create_mmm_report_request_countries_ToString(pinterest_rest_api_create_mmm_report_request__e countries);

pinterest_rest_api_create_mmm_report_request__e create_mmm_report_request_countries_FromString(char* countries);



typedef struct create_mmm_report_request_t {
    char *report_name; // string
    char *start_date; // string
    char *end_date; // string
    pinterest_rest_api_create_mmm_report_request_GRANULARITY_e granularity; //enum
    pinterest_rest_api_create_mmm_report_request_LEVEL_e level; //enum
    list_t *targeting_types; //nonprimitive container
    list_t *columns; //nonprimitive container
    list_t *countries; //nonprimitive container

} create_mmm_report_request_t;

create_mmm_report_request_t *create_mmm_report_request_create(
    char *report_name,
    char *start_date,
    char *end_date,
    pinterest_rest_api_create_mmm_report_request_GRANULARITY_e granularity,
    pinterest_rest_api_create_mmm_report_request_LEVEL_e level,
    list_t *targeting_types,
    list_t *columns,
    list_t *countries
);

void create_mmm_report_request_free(create_mmm_report_request_t *create_mmm_report_request);

create_mmm_report_request_t *create_mmm_report_request_parseFromJSON(cJSON *create_mmm_report_requestJSON);

cJSON *create_mmm_report_request_convertToJSON(create_mmm_report_request_t *create_mmm_report_request);

#endif /* _create_mmm_report_request_H_ */

