/*
 * items_batch_post_request.h
 *
 * 
 */

#ifndef _items_batch_post_request_H_
#define _items_batch_post_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct items_batch_post_request_t items_batch_post_request_t;

#include "batch_operation.h"
#include "catalogs_items_batch_request.h"
#include "catalogs_type.h"
#include "catalogs_vertical_batch_request.h"
#include "country.h"
#include "item_delete_batch_record.h"
#include "language.h"

// Enum  for items_batch_post_request

typedef enum  { pinterest_rest_api_items_batch_post_request__NULL = 0, pinterest_rest_api_items_batch_post_request__RETAIL, pinterest_rest_api_items_batch_post_request__HOTEL } pinterest_rest_api_items_batch_post_request__e;

char* items_batch_post_request_catalog_type_ToString(pinterest_rest_api_items_batch_post_request__e catalog_type);

pinterest_rest_api_items_batch_post_request__e items_batch_post_request_catalog_type_FromString(char* catalog_type);

// Enum  for items_batch_post_request

typedef enum  { pinterest_rest_api_items_batch_post_request__NULL = 0, pinterest_rest_api_items_batch_post_request__AD, pinterest_rest_api_items_batch_post_request__AE, pinterest_rest_api_items_batch_post_request__AF, pinterest_rest_api_items_batch_post_request__AG, pinterest_rest_api_items_batch_post_request__AI, pinterest_rest_api_items_batch_post_request__AL, pinterest_rest_api_items_batch_post_request__AM, pinterest_rest_api_items_batch_post_request__AO, pinterest_rest_api_items_batch_post_request__AQ, pinterest_rest_api_items_batch_post_request__AR, pinterest_rest_api_items_batch_post_request__AS, pinterest_rest_api_items_batch_post_request__AT, pinterest_rest_api_items_batch_post_request__AU, pinterest_rest_api_items_batch_post_request__AW, pinterest_rest_api_items_batch_post_request__AX, pinterest_rest_api_items_batch_post_request__AZ, pinterest_rest_api_items_batch_post_request__BA, pinterest_rest_api_items_batch_post_request__BB, pinterest_rest_api_items_batch_post_request__BD, pinterest_rest_api_items_batch_post_request__BE, pinterest_rest_api_items_batch_post_request__BF, pinterest_rest_api_items_batch_post_request__BG, pinterest_rest_api_items_batch_post_request__BH, pinterest_rest_api_items_batch_post_request__BI, pinterest_rest_api_items_batch_post_request__BJ, pinterest_rest_api_items_batch_post_request__BL, pinterest_rest_api_items_batch_post_request__BM, pinterest_rest_api_items_batch_post_request__BN, pinterest_rest_api_items_batch_post_request__BO, pinterest_rest_api_items_batch_post_request__BQ, pinterest_rest_api_items_batch_post_request__BR, pinterest_rest_api_items_batch_post_request__BS, pinterest_rest_api_items_batch_post_request__BT, pinterest_rest_api_items_batch_post_request__BV, pinterest_rest_api_items_batch_post_request__BW, pinterest_rest_api_items_batch_post_request__BY, pinterest_rest_api_items_batch_post_request__BZ, pinterest_rest_api_items_batch_post_request__CA, pinterest_rest_api_items_batch_post_request__CC, pinterest_rest_api_items_batch_post_request__CD, pinterest_rest_api_items_batch_post_request__CF, pinterest_rest_api_items_batch_post_request__CG, pinterest_rest_api_items_batch_post_request__CH, pinterest_rest_api_items_batch_post_request__CI, pinterest_rest_api_items_batch_post_request__CK, pinterest_rest_api_items_batch_post_request__CL, pinterest_rest_api_items_batch_post_request__CM, pinterest_rest_api_items_batch_post_request__CN, pinterest_rest_api_items_batch_post_request__CO, pinterest_rest_api_items_batch_post_request__CR, pinterest_rest_api_items_batch_post_request__CU, pinterest_rest_api_items_batch_post_request__CV, pinterest_rest_api_items_batch_post_request__CW, pinterest_rest_api_items_batch_post_request__CX, pinterest_rest_api_items_batch_post_request__CY, pinterest_rest_api_items_batch_post_request__CZ, pinterest_rest_api_items_batch_post_request__DE, pinterest_rest_api_items_batch_post_request__DJ, pinterest_rest_api_items_batch_post_request__DK, pinterest_rest_api_items_batch_post_request__DM, pinterest_rest_api_items_batch_post_request___DO, pinterest_rest_api_items_batch_post_request__DZ, pinterest_rest_api_items_batch_post_request__EC, pinterest_rest_api_items_batch_post_request__EE, pinterest_rest_api_items_batch_post_request__EG, pinterest_rest_api_items_batch_post_request__EH, pinterest_rest_api_items_batch_post_request__ER, pinterest_rest_api_items_batch_post_request__ES, pinterest_rest_api_items_batch_post_request__ET, pinterest_rest_api_items_batch_post_request__FI, pinterest_rest_api_items_batch_post_request__FJ, pinterest_rest_api_items_batch_post_request__FK, pinterest_rest_api_items_batch_post_request__FM, pinterest_rest_api_items_batch_post_request__FO, pinterest_rest_api_items_batch_post_request__FR, pinterest_rest_api_items_batch_post_request__GA, pinterest_rest_api_items_batch_post_request__GB, pinterest_rest_api_items_batch_post_request__GD, pinterest_rest_api_items_batch_post_request__GE, pinterest_rest_api_items_batch_post_request__GF, pinterest_rest_api_items_batch_post_request__GG, pinterest_rest_api_items_batch_post_request__GH, pinterest_rest_api_items_batch_post_request__GI, pinterest_rest_api_items_batch_post_request__GL, pinterest_rest_api_items_batch_post_request__GM, pinterest_rest_api_items_batch_post_request__GN, pinterest_rest_api_items_batch_post_request__GP, pinterest_rest_api_items_batch_post_request__GQ, pinterest_rest_api_items_batch_post_request__GR, pinterest_rest_api_items_batch_post_request__GS, pinterest_rest_api_items_batch_post_request__GT, pinterest_rest_api_items_batch_post_request__GU, pinterest_rest_api_items_batch_post_request__GW, pinterest_rest_api_items_batch_post_request__GY, pinterest_rest_api_items_batch_post_request__HK, pinterest_rest_api_items_batch_post_request__HM, pinterest_rest_api_items_batch_post_request__HN, pinterest_rest_api_items_batch_post_request__HR, pinterest_rest_api_items_batch_post_request__HT, pinterest_rest_api_items_batch_post_request__HU, pinterest_rest_api_items_batch_post_request__ID, pinterest_rest_api_items_batch_post_request__IE, pinterest_rest_api_items_batch_post_request__IL, pinterest_rest_api_items_batch_post_request__IM, pinterest_rest_api_items_batch_post_request__IN, pinterest_rest_api_items_batch_post_request__IO, pinterest_rest_api_items_batch_post_request__IQ, pinterest_rest_api_items_batch_post_request__IR, pinterest_rest_api_items_batch_post_request__IS, pinterest_rest_api_items_batch_post_request__IT, pinterest_rest_api_items_batch_post_request__JE, pinterest_rest_api_items_batch_post_request__JM, pinterest_rest_api_items_batch_post_request__JO, pinterest_rest_api_items_batch_post_request__JP, pinterest_rest_api_items_batch_post_request__KE, pinterest_rest_api_items_batch_post_request__KG, pinterest_rest_api_items_batch_post_request__KH, pinterest_rest_api_items_batch_post_request__KI, pinterest_rest_api_items_batch_post_request__KM, pinterest_rest_api_items_batch_post_request__KN, pinterest_rest_api_items_batch_post_request__KR, pinterest_rest_api_items_batch_post_request__KW, pinterest_rest_api_items_batch_post_request__KY, pinterest_rest_api_items_batch_post_request__KZ, pinterest_rest_api_items_batch_post_request__LA, pinterest_rest_api_items_batch_post_request__LB, pinterest_rest_api_items_batch_post_request__LC, pinterest_rest_api_items_batch_post_request__LI, pinterest_rest_api_items_batch_post_request__LK, pinterest_rest_api_items_batch_post_request__LR, pinterest_rest_api_items_batch_post_request__LS, pinterest_rest_api_items_batch_post_request__LT, pinterest_rest_api_items_batch_post_request__LU, pinterest_rest_api_items_batch_post_request__LV, pinterest_rest_api_items_batch_post_request__LY, pinterest_rest_api_items_batch_post_request__MA, pinterest_rest_api_items_batch_post_request__MC, pinterest_rest_api_items_batch_post_request__MD, pinterest_rest_api_items_batch_post_request__ME, pinterest_rest_api_items_batch_post_request__MF, pinterest_rest_api_items_batch_post_request__MG, pinterest_rest_api_items_batch_post_request__MH, pinterest_rest_api_items_batch_post_request__MK, pinterest_rest_api_items_batch_post_request__ML, pinterest_rest_api_items_batch_post_request__MM, pinterest_rest_api_items_batch_post_request__MN, pinterest_rest_api_items_batch_post_request__MO, pinterest_rest_api_items_batch_post_request__MP, pinterest_rest_api_items_batch_post_request__MQ, pinterest_rest_api_items_batch_post_request__MR, pinterest_rest_api_items_batch_post_request__MS, pinterest_rest_api_items_batch_post_request__MT, pinterest_rest_api_items_batch_post_request__MU, pinterest_rest_api_items_batch_post_request__MV, pinterest_rest_api_items_batch_post_request__MW, pinterest_rest_api_items_batch_post_request__MX, pinterest_rest_api_items_batch_post_request__MY, pinterest_rest_api_items_batch_post_request__MZ, pinterest_rest_api_items_batch_post_request__NA, pinterest_rest_api_items_batch_post_request__NC, pinterest_rest_api_items_batch_post_request__NE, pinterest_rest_api_items_batch_post_request__NF, pinterest_rest_api_items_batch_post_request__NG, pinterest_rest_api_items_batch_post_request__NI, pinterest_rest_api_items_batch_post_request__NL, pinterest_rest_api_items_batch_post_request__NO, pinterest_rest_api_items_batch_post_request__NP, pinterest_rest_api_items_batch_post_request__NR, pinterest_rest_api_items_batch_post_request__NU, pinterest_rest_api_items_batch_post_request__NZ, pinterest_rest_api_items_batch_post_request__OM, pinterest_rest_api_items_batch_post_request__PA, pinterest_rest_api_items_batch_post_request__PE, pinterest_rest_api_items_batch_post_request__PF, pinterest_rest_api_items_batch_post_request__PG, pinterest_rest_api_items_batch_post_request__PH, pinterest_rest_api_items_batch_post_request__PK, pinterest_rest_api_items_batch_post_request__PL, pinterest_rest_api_items_batch_post_request__PM, pinterest_rest_api_items_batch_post_request__PN, pinterest_rest_api_items_batch_post_request__PR, pinterest_rest_api_items_batch_post_request__PS, pinterest_rest_api_items_batch_post_request__PT, pinterest_rest_api_items_batch_post_request__PW, pinterest_rest_api_items_batch_post_request__PY, pinterest_rest_api_items_batch_post_request__QA, pinterest_rest_api_items_batch_post_request__RE, pinterest_rest_api_items_batch_post_request__RO, pinterest_rest_api_items_batch_post_request__RS, pinterest_rest_api_items_batch_post_request__RU, pinterest_rest_api_items_batch_post_request__RW, pinterest_rest_api_items_batch_post_request__SA, pinterest_rest_api_items_batch_post_request__SB, pinterest_rest_api_items_batch_post_request__SC, pinterest_rest_api_items_batch_post_request__SD, pinterest_rest_api_items_batch_post_request__SE, pinterest_rest_api_items_batch_post_request__SG, pinterest_rest_api_items_batch_post_request__SH, pinterest_rest_api_items_batch_post_request__SI, pinterest_rest_api_items_batch_post_request__SJ, pinterest_rest_api_items_batch_post_request__SK, pinterest_rest_api_items_batch_post_request__SL, pinterest_rest_api_items_batch_post_request__SM, pinterest_rest_api_items_batch_post_request__SN, pinterest_rest_api_items_batch_post_request__SO, pinterest_rest_api_items_batch_post_request__SR, pinterest_rest_api_items_batch_post_request__SS, pinterest_rest_api_items_batch_post_request__ST, pinterest_rest_api_items_batch_post_request__SV, pinterest_rest_api_items_batch_post_request__SX, pinterest_rest_api_items_batch_post_request__SY, pinterest_rest_api_items_batch_post_request__SZ, pinterest_rest_api_items_batch_post_request__TC, pinterest_rest_api_items_batch_post_request__TD, pinterest_rest_api_items_batch_post_request__TF, pinterest_rest_api_items_batch_post_request__TG, pinterest_rest_api_items_batch_post_request__TH, pinterest_rest_api_items_batch_post_request__TJ, pinterest_rest_api_items_batch_post_request__TK, pinterest_rest_api_items_batch_post_request__TL, pinterest_rest_api_items_batch_post_request__TM, pinterest_rest_api_items_batch_post_request__TN, pinterest_rest_api_items_batch_post_request__TO, pinterest_rest_api_items_batch_post_request__TR, pinterest_rest_api_items_batch_post_request__TT, pinterest_rest_api_items_batch_post_request__TV, pinterest_rest_api_items_batch_post_request__TW, pinterest_rest_api_items_batch_post_request__TZ, pinterest_rest_api_items_batch_post_request__UA, pinterest_rest_api_items_batch_post_request__UG, pinterest_rest_api_items_batch_post_request__UM, pinterest_rest_api_items_batch_post_request__US, pinterest_rest_api_items_batch_post_request__UY, pinterest_rest_api_items_batch_post_request__UZ, pinterest_rest_api_items_batch_post_request__VA, pinterest_rest_api_items_batch_post_request__VC, pinterest_rest_api_items_batch_post_request__VE, pinterest_rest_api_items_batch_post_request__VG, pinterest_rest_api_items_batch_post_request__VI, pinterest_rest_api_items_batch_post_request__VN, pinterest_rest_api_items_batch_post_request__VU, pinterest_rest_api_items_batch_post_request__WF, pinterest_rest_api_items_batch_post_request__WS, pinterest_rest_api_items_batch_post_request__YE, pinterest_rest_api_items_batch_post_request__YT, pinterest_rest_api_items_batch_post_request__ZA, pinterest_rest_api_items_batch_post_request__ZM, pinterest_rest_api_items_batch_post_request__ZW } pinterest_rest_api_items_batch_post_request__e;

char* items_batch_post_request_country_ToString(pinterest_rest_api_items_batch_post_request__e country);

pinterest_rest_api_items_batch_post_request__e items_batch_post_request_country_FromString(char* country);

// Enum  for items_batch_post_request

typedef enum  { pinterest_rest_api_items_batch_post_request__NULL = 0, pinterest_rest_api_items_batch_post_request__AM, pinterest_rest_api_items_batch_post_request__AR, pinterest_rest_api_items_batch_post_request__AZ, pinterest_rest_api_items_batch_post_request__BG, pinterest_rest_api_items_batch_post_request__BN, pinterest_rest_api_items_batch_post_request__BS, pinterest_rest_api_items_batch_post_request__CA, pinterest_rest_api_items_batch_post_request__CS, pinterest_rest_api_items_batch_post_request__DA, pinterest_rest_api_items_batch_post_request__DV, pinterest_rest_api_items_batch_post_request__DZ, pinterest_rest_api_items_batch_post_request__DE, pinterest_rest_api_items_batch_post_request__EL, pinterest_rest_api_items_batch_post_request__EN, pinterest_rest_api_items_batch_post_request__ES, pinterest_rest_api_items_batch_post_request__ET, pinterest_rest_api_items_batch_post_request__FA, pinterest_rest_api_items_batch_post_request__FI, pinterest_rest_api_items_batch_post_request__FR, pinterest_rest_api_items_batch_post_request__HE, pinterest_rest_api_items_batch_post_request__HI, pinterest_rest_api_items_batch_post_request__HR, pinterest_rest_api_items_batch_post_request__HU, pinterest_rest_api_items_batch_post_request__HY, pinterest_rest_api_items_batch_post_request__ID, pinterest_rest_api_items_batch_post_request__IN, pinterest_rest_api_items_batch_post_request__IS, pinterest_rest_api_items_batch_post_request__IT, pinterest_rest_api_items_batch_post_request__IW, pinterest_rest_api_items_batch_post_request__JA, pinterest_rest_api_items_batch_post_request__KA, pinterest_rest_api_items_batch_post_request__KM, pinterest_rest_api_items_batch_post_request__KO, pinterest_rest_api_items_batch_post_request__LO, pinterest_rest_api_items_batch_post_request__LT, pinterest_rest_api_items_batch_post_request__LV, pinterest_rest_api_items_batch_post_request__MK, pinterest_rest_api_items_batch_post_request__MN, pinterest_rest_api_items_batch_post_request__MS, pinterest_rest_api_items_batch_post_request__MY, pinterest_rest_api_items_batch_post_request__NB, pinterest_rest_api_items_batch_post_request__NE, pinterest_rest_api_items_batch_post_request__NL, pinterest_rest_api_items_batch_post_request__NO, pinterest_rest_api_items_batch_post_request__PL, pinterest_rest_api_items_batch_post_request__PT, pinterest_rest_api_items_batch_post_request__RO, pinterest_rest_api_items_batch_post_request__RU, pinterest_rest_api_items_batch_post_request__SK, pinterest_rest_api_items_batch_post_request__SL, pinterest_rest_api_items_batch_post_request__SQ, pinterest_rest_api_items_batch_post_request__SR, pinterest_rest_api_items_batch_post_request__SV, pinterest_rest_api_items_batch_post_request__TL, pinterest_rest_api_items_batch_post_request__UK, pinterest_rest_api_items_batch_post_request__VI, pinterest_rest_api_items_batch_post_request__TE, pinterest_rest_api_items_batch_post_request__TH, pinterest_rest_api_items_batch_post_request__TR, pinterest_rest_api_items_batch_post_request__XX, pinterest_rest_api_items_batch_post_request__ZH } pinterest_rest_api_items_batch_post_request__e;

char* items_batch_post_request_language_ToString(pinterest_rest_api_items_batch_post_request__e language);

pinterest_rest_api_items_batch_post_request__e items_batch_post_request_language_FromString(char* language);

// Enum  for items_batch_post_request

typedef enum  { pinterest_rest_api_items_batch_post_request__NULL = 0, pinterest_rest_api_items_batch_post_request__UPDATE, pinterest_rest_api_items_batch_post_request__UPSERT, pinterest_rest_api_items_batch_post_request__CREATE, pinterest_rest_api_items_batch_post_request__DELETE_DISCONTINUED, pinterest_rest_api_items_batch_post_request___DELETE } pinterest_rest_api_items_batch_post_request__e;

char* items_batch_post_request_operation_ToString(pinterest_rest_api_items_batch_post_request__e operation);

pinterest_rest_api_items_batch_post_request__e items_batch_post_request_operation_FromString(char* operation);



typedef struct items_batch_post_request_t {
    catalogs_type_t *catalog_type; // custom
    country_t *country; // custom
    language_t *language; // custom
    list_t *items; //nonprimitive container
    char *catalog_id; // string
    batch_operation_t *operation; // custom

} items_batch_post_request_t;

items_batch_post_request_t *items_batch_post_request_create(
    catalogs_type_t *catalog_type,
    country_t *country,
    language_t *language,
    list_t *items,
    char *catalog_id,
    batch_operation_t *operation
);

void items_batch_post_request_free(items_batch_post_request_t *items_batch_post_request);

items_batch_post_request_t *items_batch_post_request_parseFromJSON(cJSON *items_batch_post_requestJSON);

cJSON *items_batch_post_request_convertToJSON(items_batch_post_request_t *items_batch_post_request);

#endif /* _items_batch_post_request_H_ */

