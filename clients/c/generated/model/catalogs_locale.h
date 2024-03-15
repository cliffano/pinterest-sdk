/*
 * catalogs_locale.h
 *
 * 
 */

#ifndef _catalogs_locale_H_
#define _catalogs_locale_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct catalogs_locale_t catalogs_locale_t;


// Enum  for catalogs_locale

typedef enum { pinterest_rest_api_catalogs_locale__NULL = 0, pinterest_rest_api_catalogs_locale__af_ZA, pinterest_rest_api_catalogs_locale__ar_SA, pinterest_rest_api_catalogs_locale__bg_BG, pinterest_rest_api_catalogs_locale__bn_IN, pinterest_rest_api_catalogs_locale__cs_CZ, pinterest_rest_api_catalogs_locale__da_DK, pinterest_rest_api_catalogs_locale__de, pinterest_rest_api_catalogs_locale__el_GR, pinterest_rest_api_catalogs_locale__en_AU, pinterest_rest_api_catalogs_locale__en_CA, pinterest_rest_api_catalogs_locale__en_GB, pinterest_rest_api_catalogs_locale__en_IN, pinterest_rest_api_catalogs_locale__en_US, pinterest_rest_api_catalogs_locale__es_419, pinterest_rest_api_catalogs_locale__es_AR, pinterest_rest_api_catalogs_locale__es_ES, pinterest_rest_api_catalogs_locale__es_MX, pinterest_rest_api_catalogs_locale__fi_FI, pinterest_rest_api_catalogs_locale__fr, pinterest_rest_api_catalogs_locale__fr_CA, pinterest_rest_api_catalogs_locale__he_IL, pinterest_rest_api_catalogs_locale__hi_IN, pinterest_rest_api_catalogs_locale__hr_HR, pinterest_rest_api_catalogs_locale__hu_HU, pinterest_rest_api_catalogs_locale__id_ID, pinterest_rest_api_catalogs_locale__it, pinterest_rest_api_catalogs_locale__ja, pinterest_rest_api_catalogs_locale__ko_KR, pinterest_rest_api_catalogs_locale__ms_MY, pinterest_rest_api_catalogs_locale__nb_NO, pinterest_rest_api_catalogs_locale__nl, pinterest_rest_api_catalogs_locale__pl_PL, pinterest_rest_api_catalogs_locale__pt_BR, pinterest_rest_api_catalogs_locale__pt_PT, pinterest_rest_api_catalogs_locale__ro_RO, pinterest_rest_api_catalogs_locale__ru_RU, pinterest_rest_api_catalogs_locale__sk_SK, pinterest_rest_api_catalogs_locale__sv_SE, pinterest_rest_api_catalogs_locale__te_IN, pinterest_rest_api_catalogs_locale__th_TH, pinterest_rest_api_catalogs_locale__tl_PH, pinterest_rest_api_catalogs_locale__tr, pinterest_rest_api_catalogs_locale__uk_UA, pinterest_rest_api_catalogs_locale__vi_VN, pinterest_rest_api_catalogs_locale__zh_CN, pinterest_rest_api_catalogs_locale__zh_TW } pinterest_rest_api_catalogs_locale__e;

char* catalogs_locale_catalogs_locale_ToString(pinterest_rest_api_catalogs_locale__e catalogs_locale);

pinterest_rest_api_catalogs_locale__e catalogs_locale_catalogs_locale_FromString(char* catalogs_locale);

//cJSON *catalogs_locale_catalogs_locale_convertToJSON(pinterest_rest_api_catalogs_locale__e catalogs_locale);

//pinterest_rest_api_catalogs_locale__e catalogs_locale_catalogs_locale_parseFromJSON(cJSON *catalogs_localeJSON);

#endif /* _catalogs_locale_H_ */

