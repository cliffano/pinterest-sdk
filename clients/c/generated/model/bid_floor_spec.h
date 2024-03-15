/*
 * bid_floor_spec.h
 *
 * 
 */

#ifndef _bid_floor_spec_H_
#define _bid_floor_spec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bid_floor_spec_t bid_floor_spec_t;

#include "action_type.h"
#include "country.h"
#include "creative_type.h"
#include "currency.h"
#include "objective_type.h"
#include "optimization_goal_metadata.h"

// Enum  for bid_floor_spec

typedef enum  { pinterest_rest_api_bid_floor_spec__NULL = 0, pinterest_rest_api_bid_floor_spec__AD, pinterest_rest_api_bid_floor_spec__AE, pinterest_rest_api_bid_floor_spec__AF, pinterest_rest_api_bid_floor_spec__AG, pinterest_rest_api_bid_floor_spec__AI, pinterest_rest_api_bid_floor_spec__AL, pinterest_rest_api_bid_floor_spec__AM, pinterest_rest_api_bid_floor_spec__AO, pinterest_rest_api_bid_floor_spec__AQ, pinterest_rest_api_bid_floor_spec__AR, pinterest_rest_api_bid_floor_spec__AS, pinterest_rest_api_bid_floor_spec__AT, pinterest_rest_api_bid_floor_spec__AU, pinterest_rest_api_bid_floor_spec__AW, pinterest_rest_api_bid_floor_spec__AX, pinterest_rest_api_bid_floor_spec__AZ, pinterest_rest_api_bid_floor_spec__BA, pinterest_rest_api_bid_floor_spec__BB, pinterest_rest_api_bid_floor_spec__BD, pinterest_rest_api_bid_floor_spec__BE, pinterest_rest_api_bid_floor_spec__BF, pinterest_rest_api_bid_floor_spec__BG, pinterest_rest_api_bid_floor_spec__BH, pinterest_rest_api_bid_floor_spec__BI, pinterest_rest_api_bid_floor_spec__BJ, pinterest_rest_api_bid_floor_spec__BL, pinterest_rest_api_bid_floor_spec__BM, pinterest_rest_api_bid_floor_spec__BN, pinterest_rest_api_bid_floor_spec__BO, pinterest_rest_api_bid_floor_spec__BQ, pinterest_rest_api_bid_floor_spec__BR, pinterest_rest_api_bid_floor_spec__BS, pinterest_rest_api_bid_floor_spec__BT, pinterest_rest_api_bid_floor_spec__BV, pinterest_rest_api_bid_floor_spec__BW, pinterest_rest_api_bid_floor_spec__BY, pinterest_rest_api_bid_floor_spec__BZ, pinterest_rest_api_bid_floor_spec__CA, pinterest_rest_api_bid_floor_spec__CC, pinterest_rest_api_bid_floor_spec__CD, pinterest_rest_api_bid_floor_spec__CF, pinterest_rest_api_bid_floor_spec__CG, pinterest_rest_api_bid_floor_spec__CH, pinterest_rest_api_bid_floor_spec__CI, pinterest_rest_api_bid_floor_spec__CK, pinterest_rest_api_bid_floor_spec__CL, pinterest_rest_api_bid_floor_spec__CM, pinterest_rest_api_bid_floor_spec__CN, pinterest_rest_api_bid_floor_spec__CO, pinterest_rest_api_bid_floor_spec__CR, pinterest_rest_api_bid_floor_spec__CU, pinterest_rest_api_bid_floor_spec__CV, pinterest_rest_api_bid_floor_spec__CW, pinterest_rest_api_bid_floor_spec__CX, pinterest_rest_api_bid_floor_spec__CY, pinterest_rest_api_bid_floor_spec__CZ, pinterest_rest_api_bid_floor_spec__DE, pinterest_rest_api_bid_floor_spec__DJ, pinterest_rest_api_bid_floor_spec__DK, pinterest_rest_api_bid_floor_spec__DM, pinterest_rest_api_bid_floor_spec___DO, pinterest_rest_api_bid_floor_spec__DZ, pinterest_rest_api_bid_floor_spec__EC, pinterest_rest_api_bid_floor_spec__EE, pinterest_rest_api_bid_floor_spec__EG, pinterest_rest_api_bid_floor_spec__EH, pinterest_rest_api_bid_floor_spec__ER, pinterest_rest_api_bid_floor_spec__ES, pinterest_rest_api_bid_floor_spec__ET, pinterest_rest_api_bid_floor_spec__FI, pinterest_rest_api_bid_floor_spec__FJ, pinterest_rest_api_bid_floor_spec__FK, pinterest_rest_api_bid_floor_spec__FM, pinterest_rest_api_bid_floor_spec__FO, pinterest_rest_api_bid_floor_spec__FR, pinterest_rest_api_bid_floor_spec__GA, pinterest_rest_api_bid_floor_spec__GB, pinterest_rest_api_bid_floor_spec__GD, pinterest_rest_api_bid_floor_spec__GE, pinterest_rest_api_bid_floor_spec__GF, pinterest_rest_api_bid_floor_spec__GG, pinterest_rest_api_bid_floor_spec__GH, pinterest_rest_api_bid_floor_spec__GI, pinterest_rest_api_bid_floor_spec__GL, pinterest_rest_api_bid_floor_spec__GM, pinterest_rest_api_bid_floor_spec__GN, pinterest_rest_api_bid_floor_spec__GP, pinterest_rest_api_bid_floor_spec__GQ, pinterest_rest_api_bid_floor_spec__GR, pinterest_rest_api_bid_floor_spec__GS, pinterest_rest_api_bid_floor_spec__GT, pinterest_rest_api_bid_floor_spec__GU, pinterest_rest_api_bid_floor_spec__GW, pinterest_rest_api_bid_floor_spec__GY, pinterest_rest_api_bid_floor_spec__HK, pinterest_rest_api_bid_floor_spec__HM, pinterest_rest_api_bid_floor_spec__HN, pinterest_rest_api_bid_floor_spec__HR, pinterest_rest_api_bid_floor_spec__HT, pinterest_rest_api_bid_floor_spec__HU, pinterest_rest_api_bid_floor_spec__ID, pinterest_rest_api_bid_floor_spec__IE, pinterest_rest_api_bid_floor_spec__IL, pinterest_rest_api_bid_floor_spec__IM, pinterest_rest_api_bid_floor_spec__IN, pinterest_rest_api_bid_floor_spec__IO, pinterest_rest_api_bid_floor_spec__IQ, pinterest_rest_api_bid_floor_spec__IR, pinterest_rest_api_bid_floor_spec__IS, pinterest_rest_api_bid_floor_spec__IT, pinterest_rest_api_bid_floor_spec__JE, pinterest_rest_api_bid_floor_spec__JM, pinterest_rest_api_bid_floor_spec__JO, pinterest_rest_api_bid_floor_spec__JP, pinterest_rest_api_bid_floor_spec__KE, pinterest_rest_api_bid_floor_spec__KG, pinterest_rest_api_bid_floor_spec__KH, pinterest_rest_api_bid_floor_spec__KI, pinterest_rest_api_bid_floor_spec__KM, pinterest_rest_api_bid_floor_spec__KN, pinterest_rest_api_bid_floor_spec__KR, pinterest_rest_api_bid_floor_spec__KW, pinterest_rest_api_bid_floor_spec__KY, pinterest_rest_api_bid_floor_spec__KZ, pinterest_rest_api_bid_floor_spec__LA, pinterest_rest_api_bid_floor_spec__LB, pinterest_rest_api_bid_floor_spec__LC, pinterest_rest_api_bid_floor_spec__LI, pinterest_rest_api_bid_floor_spec__LK, pinterest_rest_api_bid_floor_spec__LR, pinterest_rest_api_bid_floor_spec__LS, pinterest_rest_api_bid_floor_spec__LT, pinterest_rest_api_bid_floor_spec__LU, pinterest_rest_api_bid_floor_spec__LV, pinterest_rest_api_bid_floor_spec__LY, pinterest_rest_api_bid_floor_spec__MA, pinterest_rest_api_bid_floor_spec__MC, pinterest_rest_api_bid_floor_spec__MD, pinterest_rest_api_bid_floor_spec__ME, pinterest_rest_api_bid_floor_spec__MF, pinterest_rest_api_bid_floor_spec__MG, pinterest_rest_api_bid_floor_spec__MH, pinterest_rest_api_bid_floor_spec__MK, pinterest_rest_api_bid_floor_spec__ML, pinterest_rest_api_bid_floor_spec__MM, pinterest_rest_api_bid_floor_spec__MN, pinterest_rest_api_bid_floor_spec__MO, pinterest_rest_api_bid_floor_spec__MP, pinterest_rest_api_bid_floor_spec__MQ, pinterest_rest_api_bid_floor_spec__MR, pinterest_rest_api_bid_floor_spec__MS, pinterest_rest_api_bid_floor_spec__MT, pinterest_rest_api_bid_floor_spec__MU, pinterest_rest_api_bid_floor_spec__MV, pinterest_rest_api_bid_floor_spec__MW, pinterest_rest_api_bid_floor_spec__MX, pinterest_rest_api_bid_floor_spec__MY, pinterest_rest_api_bid_floor_spec__MZ, pinterest_rest_api_bid_floor_spec__NA, pinterest_rest_api_bid_floor_spec__NC, pinterest_rest_api_bid_floor_spec__NE, pinterest_rest_api_bid_floor_spec__NF, pinterest_rest_api_bid_floor_spec__NG, pinterest_rest_api_bid_floor_spec__NI, pinterest_rest_api_bid_floor_spec__NL, pinterest_rest_api_bid_floor_spec__NO, pinterest_rest_api_bid_floor_spec__NP, pinterest_rest_api_bid_floor_spec__NR, pinterest_rest_api_bid_floor_spec__NU, pinterest_rest_api_bid_floor_spec__NZ, pinterest_rest_api_bid_floor_spec__OM, pinterest_rest_api_bid_floor_spec__PA, pinterest_rest_api_bid_floor_spec__PE, pinterest_rest_api_bid_floor_spec__PF, pinterest_rest_api_bid_floor_spec__PG, pinterest_rest_api_bid_floor_spec__PH, pinterest_rest_api_bid_floor_spec__PK, pinterest_rest_api_bid_floor_spec__PL, pinterest_rest_api_bid_floor_spec__PM, pinterest_rest_api_bid_floor_spec__PN, pinterest_rest_api_bid_floor_spec__PR, pinterest_rest_api_bid_floor_spec__PS, pinterest_rest_api_bid_floor_spec__PT, pinterest_rest_api_bid_floor_spec__PW, pinterest_rest_api_bid_floor_spec__PY, pinterest_rest_api_bid_floor_spec__QA, pinterest_rest_api_bid_floor_spec__RE, pinterest_rest_api_bid_floor_spec__RO, pinterest_rest_api_bid_floor_spec__RS, pinterest_rest_api_bid_floor_spec__RU, pinterest_rest_api_bid_floor_spec__RW, pinterest_rest_api_bid_floor_spec__SA, pinterest_rest_api_bid_floor_spec__SB, pinterest_rest_api_bid_floor_spec__SC, pinterest_rest_api_bid_floor_spec__SD, pinterest_rest_api_bid_floor_spec__SE, pinterest_rest_api_bid_floor_spec__SG, pinterest_rest_api_bid_floor_spec__SH, pinterest_rest_api_bid_floor_spec__SI, pinterest_rest_api_bid_floor_spec__SJ, pinterest_rest_api_bid_floor_spec__SK, pinterest_rest_api_bid_floor_spec__SL, pinterest_rest_api_bid_floor_spec__SM, pinterest_rest_api_bid_floor_spec__SN, pinterest_rest_api_bid_floor_spec__SO, pinterest_rest_api_bid_floor_spec__SR, pinterest_rest_api_bid_floor_spec__SS, pinterest_rest_api_bid_floor_spec__ST, pinterest_rest_api_bid_floor_spec__SV, pinterest_rest_api_bid_floor_spec__SX, pinterest_rest_api_bid_floor_spec__SY, pinterest_rest_api_bid_floor_spec__SZ, pinterest_rest_api_bid_floor_spec__TC, pinterest_rest_api_bid_floor_spec__TD, pinterest_rest_api_bid_floor_spec__TF, pinterest_rest_api_bid_floor_spec__TG, pinterest_rest_api_bid_floor_spec__TH, pinterest_rest_api_bid_floor_spec__TJ, pinterest_rest_api_bid_floor_spec__TK, pinterest_rest_api_bid_floor_spec__TL, pinterest_rest_api_bid_floor_spec__TM, pinterest_rest_api_bid_floor_spec__TN, pinterest_rest_api_bid_floor_spec__TO, pinterest_rest_api_bid_floor_spec__TR, pinterest_rest_api_bid_floor_spec__TT, pinterest_rest_api_bid_floor_spec__TV, pinterest_rest_api_bid_floor_spec__TW, pinterest_rest_api_bid_floor_spec__TZ, pinterest_rest_api_bid_floor_spec__UA, pinterest_rest_api_bid_floor_spec__UG, pinterest_rest_api_bid_floor_spec__UM, pinterest_rest_api_bid_floor_spec__US, pinterest_rest_api_bid_floor_spec__UY, pinterest_rest_api_bid_floor_spec__UZ, pinterest_rest_api_bid_floor_spec__VA, pinterest_rest_api_bid_floor_spec__VC, pinterest_rest_api_bid_floor_spec__VE, pinterest_rest_api_bid_floor_spec__VG, pinterest_rest_api_bid_floor_spec__VI, pinterest_rest_api_bid_floor_spec__VN, pinterest_rest_api_bid_floor_spec__VU, pinterest_rest_api_bid_floor_spec__WF, pinterest_rest_api_bid_floor_spec__WS, pinterest_rest_api_bid_floor_spec__YE, pinterest_rest_api_bid_floor_spec__YT, pinterest_rest_api_bid_floor_spec__ZA, pinterest_rest_api_bid_floor_spec__ZM, pinterest_rest_api_bid_floor_spec__ZW } pinterest_rest_api_bid_floor_spec__e;

char* bid_floor_spec_countries_ToString(pinterest_rest_api_bid_floor_spec__e countries);

pinterest_rest_api_bid_floor_spec__e bid_floor_spec_countries_FromString(char* countries);

// Enum  for bid_floor_spec

typedef enum  { pinterest_rest_api_bid_floor_spec__NULL = 0, pinterest_rest_api_bid_floor_spec__UNK, pinterest_rest_api_bid_floor_spec__USD, pinterest_rest_api_bid_floor_spec__GBP, pinterest_rest_api_bid_floor_spec__CAD, pinterest_rest_api_bid_floor_spec__EUR, pinterest_rest_api_bid_floor_spec__AUD, pinterest_rest_api_bid_floor_spec__NZD, pinterest_rest_api_bid_floor_spec__SEK, pinterest_rest_api_bid_floor_spec__ILS, pinterest_rest_api_bid_floor_spec__CHF, pinterest_rest_api_bid_floor_spec__HKD, pinterest_rest_api_bid_floor_spec__JPY, pinterest_rest_api_bid_floor_spec__SGD, pinterest_rest_api_bid_floor_spec__KRW, pinterest_rest_api_bid_floor_spec__NOK, pinterest_rest_api_bid_floor_spec__DKK, pinterest_rest_api_bid_floor_spec__PLN, pinterest_rest_api_bid_floor_spec__RON, pinterest_rest_api_bid_floor_spec__HUF, pinterest_rest_api_bid_floor_spec__CZK, pinterest_rest_api_bid_floor_spec__BRL, pinterest_rest_api_bid_floor_spec__MXN, pinterest_rest_api_bid_floor_spec__ARS, pinterest_rest_api_bid_floor_spec__CLP, pinterest_rest_api_bid_floor_spec__COP } pinterest_rest_api_bid_floor_spec__e;

char* bid_floor_spec_currency_ToString(pinterest_rest_api_bid_floor_spec__e currency);

pinterest_rest_api_bid_floor_spec__e bid_floor_spec_currency_FromString(char* currency);

// Enum  for bid_floor_spec

typedef enum  { pinterest_rest_api_bid_floor_spec__NULL = 0, pinterest_rest_api_bid_floor_spec__AWARENESS, pinterest_rest_api_bid_floor_spec__CONSIDERATION, pinterest_rest_api_bid_floor_spec__VIDEO_VIEW, pinterest_rest_api_bid_floor_spec__WEB_CONVERSION, pinterest_rest_api_bid_floor_spec__CATALOG_SALES, pinterest_rest_api_bid_floor_spec__WEB_SESSIONS } pinterest_rest_api_bid_floor_spec__e;

char* bid_floor_spec_objective_type_ToString(pinterest_rest_api_bid_floor_spec__e objective_type);

pinterest_rest_api_bid_floor_spec__e bid_floor_spec_objective_type_FromString(char* objective_type);

// Enum  for bid_floor_spec

typedef enum  { pinterest_rest_api_bid_floor_spec__NULL = 0, pinterest_rest_api_bid_floor_spec__CLICKTHROUGH, pinterest_rest_api_bid_floor_spec__IMPRESSION, pinterest_rest_api_bid_floor_spec__VIDEO_V_50_MRC } pinterest_rest_api_bid_floor_spec__e;

char* bid_floor_spec_billable_event_ToString(pinterest_rest_api_bid_floor_spec__e billable_event);

pinterest_rest_api_bid_floor_spec__e bid_floor_spec_billable_event_FromString(char* billable_event);

// Enum  for bid_floor_spec

typedef enum  { pinterest_rest_api_bid_floor_spec__NULL = 0, pinterest_rest_api_bid_floor_spec__REGULAR, pinterest_rest_api_bid_floor_spec__VIDEO, pinterest_rest_api_bid_floor_spec__SHOPPING, pinterest_rest_api_bid_floor_spec__CAROUSEL, pinterest_rest_api_bid_floor_spec__MAX_VIDEO, pinterest_rest_api_bid_floor_spec__SHOP_THE_PIN, pinterest_rest_api_bid_floor_spec__COLLECTION, pinterest_rest_api_bid_floor_spec__IDEA, pinterest_rest_api_bid_floor_spec__SHOWCASE, pinterest_rest_api_bid_floor_spec__QUIZ } pinterest_rest_api_bid_floor_spec__e;

char* bid_floor_spec_creative_type_ToString(pinterest_rest_api_bid_floor_spec__e creative_type);

pinterest_rest_api_bid_floor_spec__e bid_floor_spec_creative_type_FromString(char* creative_type);



typedef struct bid_floor_spec_t {
    list_t *countries; //nonprimitive container
    currency_t *currency; // custom
    objective_type_t *objective_type; // custom
    action_type_t *billable_event; // custom
    struct optimization_goal_metadata_t *optimization_goal_metadata; //model
    creative_type_t *creative_type; // custom

} bid_floor_spec_t;

bid_floor_spec_t *bid_floor_spec_create(
    list_t *countries,
    currency_t *currency,
    objective_type_t *objective_type,
    action_type_t *billable_event,
    optimization_goal_metadata_t *optimization_goal_metadata,
    creative_type_t *creative_type
);

void bid_floor_spec_free(bid_floor_spec_t *bid_floor_spec);

bid_floor_spec_t *bid_floor_spec_parseFromJSON(cJSON *bid_floor_specJSON);

cJSON *bid_floor_spec_convertToJSON(bid_floor_spec_t *bid_floor_spec);

#endif /* _bid_floor_spec_H_ */
