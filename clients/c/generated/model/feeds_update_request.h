/*
 * feeds_update_request.h
 *
 * 
 */

#ifndef _feeds_update_request_H_
#define _feeds_update_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct feeds_update_request_t feeds_update_request_t;

#include "catalogs_feed_credentials.h"
#include "catalogs_feed_processing_schedule.h"
#include "catalogs_feeds_update_request.h"
#include "catalogs_format.h"
#include "catalogs_status.h"
#include "catalogs_type.h"
#include "catalogs_vertical_feeds_update_request.h"
#include "nullable_currency.h"
#include "product_availability_type.h"

// Enum  for feeds_update_request

typedef enum  { pinterest_rest_api_feeds_update_request__NULL = 0, pinterest_rest_api_feeds_update_request__AED, pinterest_rest_api_feeds_update_request__AFN, pinterest_rest_api_feeds_update_request__ALL, pinterest_rest_api_feeds_update_request__AMD, pinterest_rest_api_feeds_update_request__ANG, pinterest_rest_api_feeds_update_request__AOA, pinterest_rest_api_feeds_update_request__ARS, pinterest_rest_api_feeds_update_request__AUD, pinterest_rest_api_feeds_update_request__AWG, pinterest_rest_api_feeds_update_request__AZN, pinterest_rest_api_feeds_update_request__BAM, pinterest_rest_api_feeds_update_request__BBD, pinterest_rest_api_feeds_update_request__BDT, pinterest_rest_api_feeds_update_request__BGN, pinterest_rest_api_feeds_update_request__BHD, pinterest_rest_api_feeds_update_request__BIF, pinterest_rest_api_feeds_update_request__BMD, pinterest_rest_api_feeds_update_request__BND, pinterest_rest_api_feeds_update_request__BOB, pinterest_rest_api_feeds_update_request__BRL, pinterest_rest_api_feeds_update_request__BSD, pinterest_rest_api_feeds_update_request__BTN, pinterest_rest_api_feeds_update_request__BWP, pinterest_rest_api_feeds_update_request__BYN, pinterest_rest_api_feeds_update_request__BYR, pinterest_rest_api_feeds_update_request__BZD, pinterest_rest_api_feeds_update_request__CAD, pinterest_rest_api_feeds_update_request__CDF, pinterest_rest_api_feeds_update_request__CHF, pinterest_rest_api_feeds_update_request__CLP, pinterest_rest_api_feeds_update_request__CNY, pinterest_rest_api_feeds_update_request__COP, pinterest_rest_api_feeds_update_request__CRC, pinterest_rest_api_feeds_update_request__CUC, pinterest_rest_api_feeds_update_request__CUP, pinterest_rest_api_feeds_update_request__CVE, pinterest_rest_api_feeds_update_request__CZK, pinterest_rest_api_feeds_update_request__DJF, pinterest_rest_api_feeds_update_request__DKK, pinterest_rest_api_feeds_update_request__DOP, pinterest_rest_api_feeds_update_request__DZD, pinterest_rest_api_feeds_update_request__EGP, pinterest_rest_api_feeds_update_request__ERN, pinterest_rest_api_feeds_update_request__ETB, pinterest_rest_api_feeds_update_request__EUR, pinterest_rest_api_feeds_update_request__FJD, pinterest_rest_api_feeds_update_request__FKP, pinterest_rest_api_feeds_update_request__GBP, pinterest_rest_api_feeds_update_request__GEL, pinterest_rest_api_feeds_update_request__GGP, pinterest_rest_api_feeds_update_request__GHS, pinterest_rest_api_feeds_update_request__GIP, pinterest_rest_api_feeds_update_request__GMD, pinterest_rest_api_feeds_update_request__GNF, pinterest_rest_api_feeds_update_request__GTQ, pinterest_rest_api_feeds_update_request__GYD, pinterest_rest_api_feeds_update_request__HKD, pinterest_rest_api_feeds_update_request__HNL, pinterest_rest_api_feeds_update_request__HRK, pinterest_rest_api_feeds_update_request__HTG, pinterest_rest_api_feeds_update_request__HUF, pinterest_rest_api_feeds_update_request__IDR, pinterest_rest_api_feeds_update_request__ILS, pinterest_rest_api_feeds_update_request__IMP, pinterest_rest_api_feeds_update_request__INR, pinterest_rest_api_feeds_update_request__IQD, pinterest_rest_api_feeds_update_request__IRR, pinterest_rest_api_feeds_update_request__ISK, pinterest_rest_api_feeds_update_request__JEP, pinterest_rest_api_feeds_update_request__JMD, pinterest_rest_api_feeds_update_request__JOD, pinterest_rest_api_feeds_update_request__JPY, pinterest_rest_api_feeds_update_request__KES, pinterest_rest_api_feeds_update_request__KGS, pinterest_rest_api_feeds_update_request__KHR, pinterest_rest_api_feeds_update_request__KMF, pinterest_rest_api_feeds_update_request__KPW, pinterest_rest_api_feeds_update_request__KRW, pinterest_rest_api_feeds_update_request__KWD, pinterest_rest_api_feeds_update_request__KYD, pinterest_rest_api_feeds_update_request__KZT, pinterest_rest_api_feeds_update_request__LAK, pinterest_rest_api_feeds_update_request__LBP, pinterest_rest_api_feeds_update_request__LKR, pinterest_rest_api_feeds_update_request__LRD, pinterest_rest_api_feeds_update_request__LSL, pinterest_rest_api_feeds_update_request__LYD, pinterest_rest_api_feeds_update_request__MAD, pinterest_rest_api_feeds_update_request__MDL, pinterest_rest_api_feeds_update_request__MGA, pinterest_rest_api_feeds_update_request__MKD, pinterest_rest_api_feeds_update_request__MMK, pinterest_rest_api_feeds_update_request__MNT, pinterest_rest_api_feeds_update_request__MOP, pinterest_rest_api_feeds_update_request__MRO, pinterest_rest_api_feeds_update_request__MUR, pinterest_rest_api_feeds_update_request__MVR, pinterest_rest_api_feeds_update_request__MWK, pinterest_rest_api_feeds_update_request__MXN, pinterest_rest_api_feeds_update_request__MYR, pinterest_rest_api_feeds_update_request__MZN, pinterest_rest_api_feeds_update_request__NAD, pinterest_rest_api_feeds_update_request__NGN, pinterest_rest_api_feeds_update_request__NIO, pinterest_rest_api_feeds_update_request__NOK, pinterest_rest_api_feeds_update_request__NPR, pinterest_rest_api_feeds_update_request__NZD, pinterest_rest_api_feeds_update_request__OMR, pinterest_rest_api_feeds_update_request__PAB, pinterest_rest_api_feeds_update_request__PEN, pinterest_rest_api_feeds_update_request__PGK, pinterest_rest_api_feeds_update_request__PHP, pinterest_rest_api_feeds_update_request__PKR, pinterest_rest_api_feeds_update_request__PLN, pinterest_rest_api_feeds_update_request__PYG, pinterest_rest_api_feeds_update_request__QAR, pinterest_rest_api_feeds_update_request__RON, pinterest_rest_api_feeds_update_request__RSD, pinterest_rest_api_feeds_update_request__RUB, pinterest_rest_api_feeds_update_request__RWF, pinterest_rest_api_feeds_update_request__SAR, pinterest_rest_api_feeds_update_request__SBD, pinterest_rest_api_feeds_update_request__SCR, pinterest_rest_api_feeds_update_request__SDG, pinterest_rest_api_feeds_update_request__SEK, pinterest_rest_api_feeds_update_request__SGD, pinterest_rest_api_feeds_update_request__SHP, pinterest_rest_api_feeds_update_request__SLL, pinterest_rest_api_feeds_update_request__SOS, pinterest_rest_api_feeds_update_request__SPL, pinterest_rest_api_feeds_update_request__SRD, pinterest_rest_api_feeds_update_request__STD, pinterest_rest_api_feeds_update_request__SVC, pinterest_rest_api_feeds_update_request__SYP, pinterest_rest_api_feeds_update_request__SZL, pinterest_rest_api_feeds_update_request__THB, pinterest_rest_api_feeds_update_request__TJS, pinterest_rest_api_feeds_update_request__TMT, pinterest_rest_api_feeds_update_request__TND, pinterest_rest_api_feeds_update_request__TOP, pinterest_rest_api_feeds_update_request___TRY, pinterest_rest_api_feeds_update_request__TTD, pinterest_rest_api_feeds_update_request__TVD, pinterest_rest_api_feeds_update_request__TWD, pinterest_rest_api_feeds_update_request__TZS, pinterest_rest_api_feeds_update_request__UAH, pinterest_rest_api_feeds_update_request__UGX, pinterest_rest_api_feeds_update_request__USD, pinterest_rest_api_feeds_update_request__UYU, pinterest_rest_api_feeds_update_request__UZS, pinterest_rest_api_feeds_update_request__VEF, pinterest_rest_api_feeds_update_request__VND, pinterest_rest_api_feeds_update_request__VUV, pinterest_rest_api_feeds_update_request__WST, pinterest_rest_api_feeds_update_request__XAF, pinterest_rest_api_feeds_update_request__XCD, pinterest_rest_api_feeds_update_request__XDR, pinterest_rest_api_feeds_update_request__XOF, pinterest_rest_api_feeds_update_request__XPF, pinterest_rest_api_feeds_update_request__YER, pinterest_rest_api_feeds_update_request__ZAR, pinterest_rest_api_feeds_update_request__ZMW, pinterest_rest_api_feeds_update_request__ZWD, pinterest_rest_api_feeds_update_request__null } pinterest_rest_api_feeds_update_request__e;

char* feeds_update_request_default_currency_ToString(pinterest_rest_api_feeds_update_request__e default_currency);

pinterest_rest_api_feeds_update_request__e feeds_update_request_default_currency_FromString(char* default_currency);

// Enum  for feeds_update_request

typedef enum  { pinterest_rest_api_feeds_update_request__NULL = 0, pinterest_rest_api_feeds_update_request__TSV, pinterest_rest_api_feeds_update_request__CSV, pinterest_rest_api_feeds_update_request__XML } pinterest_rest_api_feeds_update_request__e;

char* feeds_update_request_format_ToString(pinterest_rest_api_feeds_update_request__e format);

pinterest_rest_api_feeds_update_request__e feeds_update_request_format_FromString(char* format);

// Enum  for feeds_update_request

typedef enum  { pinterest_rest_api_feeds_update_request__NULL = 0, pinterest_rest_api_feeds_update_request__ACTIVE, pinterest_rest_api_feeds_update_request__INACTIVE } pinterest_rest_api_feeds_update_request__e;

char* feeds_update_request_status_ToString(pinterest_rest_api_feeds_update_request__e status);

pinterest_rest_api_feeds_update_request__e feeds_update_request_status_FromString(char* status);

// Enum  for feeds_update_request

typedef enum  { pinterest_rest_api_feeds_update_request__NULL = 0, pinterest_rest_api_feeds_update_request__RETAIL, pinterest_rest_api_feeds_update_request__HOTEL } pinterest_rest_api_feeds_update_request__e;

char* feeds_update_request_catalog_type_ToString(pinterest_rest_api_feeds_update_request__e catalog_type);

pinterest_rest_api_feeds_update_request__e feeds_update_request_catalog_type_FromString(char* catalog_type);

// Enum  for feeds_update_request

typedef enum  { pinterest_rest_api_feeds_update_request__NULL = 0, pinterest_rest_api_feeds_update_request__IN_STOCK, pinterest_rest_api_feeds_update_request__OUT_OF_STOCK, pinterest_rest_api_feeds_update_request__PREORDER, pinterest_rest_api_feeds_update_request__null } pinterest_rest_api_feeds_update_request__e;

char* feeds_update_request_default_availability_ToString(pinterest_rest_api_feeds_update_request__e default_availability);

pinterest_rest_api_feeds_update_request__e feeds_update_request_default_availability_FromString(char* default_availability);



typedef struct feeds_update_request_t {
    nullable_currency_t *default_currency; // custom
    char *name; // string
    catalogs_format_t *format; // custom
    struct catalogs_feed_credentials_t *credentials; //model
    char *location; // string
    struct catalogs_feed_processing_schedule_t *preferred_processing_schedule; //model
    catalogs_status_t *status; // custom
    catalogs_type_t *catalog_type; // custom
    product_availability_type_t *default_availability; // custom

} feeds_update_request_t;

feeds_update_request_t *feeds_update_request_create(
    nullable_currency_t *default_currency,
    char *name,
    catalogs_format_t *format,
    catalogs_feed_credentials_t *credentials,
    char *location,
    catalogs_feed_processing_schedule_t *preferred_processing_schedule,
    catalogs_status_t *status,
    catalogs_type_t *catalog_type,
    product_availability_type_t *default_availability
);

void feeds_update_request_free(feeds_update_request_t *feeds_update_request);

feeds_update_request_t *feeds_update_request_parseFromJSON(cJSON *feeds_update_requestJSON);

cJSON *feeds_update_request_convertToJSON(feeds_update_request_t *feeds_update_request);

#endif /* _feeds_update_request_H_ */

