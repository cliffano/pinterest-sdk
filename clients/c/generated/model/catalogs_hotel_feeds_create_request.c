#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "catalogs_hotel_feeds_create_request.h"


char* catalogs_hotel_feeds_create_request_default_currency_ToString(pinterest_rest_api_catalogs_hotel_feeds_create_request__e default_currency) {
    char* default_currencyArray[] =  { "NULL", "AED", "AFN", "ALL", "AMD", "ANG", "AOA", "ARS", "AUD", "AWG", "AZN", "BAM", "BBD", "BDT", "BGN", "BHD", "BIF", "BMD", "BND", "BOB", "BRL", "BSD", "BTN", "BWP", "BYN", "BYR", "BZD", "CAD", "CDF", "CHF", "CLP", "CNY", "COP", "CRC", "CUC", "CUP", "CVE", "CZK", "DJF", "DKK", "DOP", "DZD", "EGP", "ERN", "ETB", "EUR", "FJD", "FKP", "GBP", "GEL", "GGP", "GHS", "GIP", "GMD", "GNF", "GTQ", "GYD", "HKD", "HNL", "HRK", "HTG", "HUF", "IDR", "ILS", "IMP", "INR", "IQD", "IRR", "ISK", "JEP", "JMD", "JOD", "JPY", "KES", "KGS", "KHR", "KMF", "KPW", "KRW", "KWD", "KYD", "KZT", "LAK", "LBP", "LKR", "LRD", "LSL", "LYD", "MAD", "MDL", "MGA", "MKD", "MMK", "MNT", "MOP", "MRO", "MUR", "MVR", "MWK", "MXN", "MYR", "MZN", "NAD", "NGN", "NIO", "NOK", "NPR", "NZD", "OMR", "PAB", "PEN", "PGK", "PHP", "PKR", "PLN", "PYG", "QAR", "RON", "RSD", "RUB", "RWF", "SAR", "SBD", "SCR", "SDG", "SEK", "SGD", "SHP", "SLL", "SOS", "SPL", "SRD", "STD", "SVC", "SYP", "SZL", "THB", "TJS", "TMT", "TND", "TOP", "TRY", "TTD", "TVD", "TWD", "TZS", "UAH", "UGX", "USD", "UYU", "UZS", "VEF", "VND", "VUV", "WST", "XAF", "XCD", "XDR", "XOF", "XPF", "YER", "ZAR", "ZMW", "ZWD", "" };
    return default_currencyArray[default_currency];
}

pinterest_rest_api_catalogs_hotel_feeds_create_request__e catalogs_hotel_feeds_create_request_default_currency_FromString(char* default_currency){
    int stringToReturn = 0;
    char *default_currencyArray[] =  { "NULL", "AED", "AFN", "ALL", "AMD", "ANG", "AOA", "ARS", "AUD", "AWG", "AZN", "BAM", "BBD", "BDT", "BGN", "BHD", "BIF", "BMD", "BND", "BOB", "BRL", "BSD", "BTN", "BWP", "BYN", "BYR", "BZD", "CAD", "CDF", "CHF", "CLP", "CNY", "COP", "CRC", "CUC", "CUP", "CVE", "CZK", "DJF", "DKK", "DOP", "DZD", "EGP", "ERN", "ETB", "EUR", "FJD", "FKP", "GBP", "GEL", "GGP", "GHS", "GIP", "GMD", "GNF", "GTQ", "GYD", "HKD", "HNL", "HRK", "HTG", "HUF", "IDR", "ILS", "IMP", "INR", "IQD", "IRR", "ISK", "JEP", "JMD", "JOD", "JPY", "KES", "KGS", "KHR", "KMF", "KPW", "KRW", "KWD", "KYD", "KZT", "LAK", "LBP", "LKR", "LRD", "LSL", "LYD", "MAD", "MDL", "MGA", "MKD", "MMK", "MNT", "MOP", "MRO", "MUR", "MVR", "MWK", "MXN", "MYR", "MZN", "NAD", "NGN", "NIO", "NOK", "NPR", "NZD", "OMR", "PAB", "PEN", "PGK", "PHP", "PKR", "PLN", "PYG", "QAR", "RON", "RSD", "RUB", "RWF", "SAR", "SBD", "SCR", "SDG", "SEK", "SGD", "SHP", "SLL", "SOS", "SPL", "SRD", "STD", "SVC", "SYP", "SZL", "THB", "TJS", "TMT", "TND", "TOP", "TRY", "TTD", "TVD", "TWD", "TZS", "UAH", "UGX", "USD", "UYU", "UZS", "VEF", "VND", "VUV", "WST", "XAF", "XCD", "XDR", "XOF", "XPF", "YER", "ZAR", "ZMW", "ZWD", "" };
    size_t sizeofArray = sizeof(default_currencyArray) / sizeof(default_currencyArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(default_currency, default_currencyArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* catalogs_hotel_feeds_create_request_format_ToString(pinterest_rest_api_catalogs_hotel_feeds_create_request__e format) {
    char* formatArray[] =  { "NULL", "TSV", "CSV", "XML" };
    return formatArray[format];
}

pinterest_rest_api_catalogs_hotel_feeds_create_request__e catalogs_hotel_feeds_create_request_format_FromString(char* format){
    int stringToReturn = 0;
    char *formatArray[] =  { "NULL", "TSV", "CSV", "XML" };
    size_t sizeofArray = sizeof(formatArray) / sizeof(formatArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(format, formatArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* catalogs_hotel_feeds_create_request_catalog_type_ToString(pinterest_rest_api_catalogs_hotel_feeds_create_request__e catalog_type) {
    char* catalog_typeArray[] =  { "NULL", "RETAIL", "HOTEL" };
    return catalog_typeArray[catalog_type];
}

pinterest_rest_api_catalogs_hotel_feeds_create_request__e catalogs_hotel_feeds_create_request_catalog_type_FromString(char* catalog_type){
    int stringToReturn = 0;
    char *catalog_typeArray[] =  { "NULL", "RETAIL", "HOTEL" };
    size_t sizeofArray = sizeof(catalog_typeArray) / sizeof(catalog_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(catalog_type, catalog_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

catalogs_hotel_feeds_create_request_t *catalogs_hotel_feeds_create_request_create(
    nullable_currency_t *default_currency,
    char *name,
    catalogs_format_t *format,
    catalogs_feeds_create_request_default_locale_t *default_locale,
    catalogs_feed_credentials_t *credentials,
    char *location,
    catalogs_feed_processing_schedule_t *preferred_processing_schedule,
    catalogs_type_t *catalog_type,
    char *catalog_id
    ) {
    catalogs_hotel_feeds_create_request_t *catalogs_hotel_feeds_create_request_local_var = malloc(sizeof(catalogs_hotel_feeds_create_request_t));
    if (!catalogs_hotel_feeds_create_request_local_var) {
        return NULL;
    }
    catalogs_hotel_feeds_create_request_local_var->default_currency = default_currency;
    catalogs_hotel_feeds_create_request_local_var->name = name;
    catalogs_hotel_feeds_create_request_local_var->format = format;
    catalogs_hotel_feeds_create_request_local_var->default_locale = default_locale;
    catalogs_hotel_feeds_create_request_local_var->credentials = credentials;
    catalogs_hotel_feeds_create_request_local_var->location = location;
    catalogs_hotel_feeds_create_request_local_var->preferred_processing_schedule = preferred_processing_schedule;
    catalogs_hotel_feeds_create_request_local_var->catalog_type = catalog_type;
    catalogs_hotel_feeds_create_request_local_var->catalog_id = catalog_id;

    return catalogs_hotel_feeds_create_request_local_var;
}


void catalogs_hotel_feeds_create_request_free(catalogs_hotel_feeds_create_request_t *catalogs_hotel_feeds_create_request) {
    if(NULL == catalogs_hotel_feeds_create_request){
        return ;
    }
    listEntry_t *listEntry;
    if (catalogs_hotel_feeds_create_request->default_currency) {
        nullable_currency_free(catalogs_hotel_feeds_create_request->default_currency);
        catalogs_hotel_feeds_create_request->default_currency = NULL;
    }
    if (catalogs_hotel_feeds_create_request->name) {
        free(catalogs_hotel_feeds_create_request->name);
        catalogs_hotel_feeds_create_request->name = NULL;
    }
    if (catalogs_hotel_feeds_create_request->format) {
        catalogs_format_free(catalogs_hotel_feeds_create_request->format);
        catalogs_hotel_feeds_create_request->format = NULL;
    }
    if (catalogs_hotel_feeds_create_request->default_locale) {
        catalogs_feeds_create_request_default_locale_free(catalogs_hotel_feeds_create_request->default_locale);
        catalogs_hotel_feeds_create_request->default_locale = NULL;
    }
    if (catalogs_hotel_feeds_create_request->credentials) {
        catalogs_feed_credentials_free(catalogs_hotel_feeds_create_request->credentials);
        catalogs_hotel_feeds_create_request->credentials = NULL;
    }
    if (catalogs_hotel_feeds_create_request->location) {
        free(catalogs_hotel_feeds_create_request->location);
        catalogs_hotel_feeds_create_request->location = NULL;
    }
    if (catalogs_hotel_feeds_create_request->preferred_processing_schedule) {
        catalogs_feed_processing_schedule_free(catalogs_hotel_feeds_create_request->preferred_processing_schedule);
        catalogs_hotel_feeds_create_request->preferred_processing_schedule = NULL;
    }
    if (catalogs_hotel_feeds_create_request->catalog_type) {
        catalogs_type_free(catalogs_hotel_feeds_create_request->catalog_type);
        catalogs_hotel_feeds_create_request->catalog_type = NULL;
    }
    if (catalogs_hotel_feeds_create_request->catalog_id) {
        free(catalogs_hotel_feeds_create_request->catalog_id);
        catalogs_hotel_feeds_create_request->catalog_id = NULL;
    }
    free(catalogs_hotel_feeds_create_request);
}

cJSON *catalogs_hotel_feeds_create_request_convertToJSON(catalogs_hotel_feeds_create_request_t *catalogs_hotel_feeds_create_request) {
    cJSON *item = cJSON_CreateObject();

    // catalogs_hotel_feeds_create_request->default_currency
    if(catalogs_hotel_feeds_create_request->default_currency != pinterest_rest_api_catalogs_hotel_feeds_create_request__NULL) {
    cJSON *default_currency_local_JSON = nullable_currency_convertToJSON(catalogs_hotel_feeds_create_request->default_currency);
    if(default_currency_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "default_currency", default_currency_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // catalogs_hotel_feeds_create_request->name
    if (!catalogs_hotel_feeds_create_request->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", catalogs_hotel_feeds_create_request->name) == NULL) {
    goto fail; //String
    }


    // catalogs_hotel_feeds_create_request->format
    if (pinterest_rest_api_catalogs_hotel_feeds_create_request__NULL == catalogs_hotel_feeds_create_request->format) {
        goto fail;
    }
    cJSON *format_local_JSON = catalogs_format_convertToJSON(catalogs_hotel_feeds_create_request->format);
    if(format_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "format", format_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // catalogs_hotel_feeds_create_request->default_locale
    if (!catalogs_hotel_feeds_create_request->default_locale) {
        goto fail;
    }
    cJSON *default_locale_local_JSON = catalogs_feeds_create_request_default_locale_convertToJSON(catalogs_hotel_feeds_create_request->default_locale);
    if(default_locale_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "default_locale", default_locale_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // catalogs_hotel_feeds_create_request->credentials
    if(catalogs_hotel_feeds_create_request->credentials) {
    cJSON *credentials_local_JSON = catalogs_feed_credentials_convertToJSON(catalogs_hotel_feeds_create_request->credentials);
    if(credentials_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "credentials", credentials_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // catalogs_hotel_feeds_create_request->location
    if (!catalogs_hotel_feeds_create_request->location) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "location", catalogs_hotel_feeds_create_request->location) == NULL) {
    goto fail; //String
    }


    // catalogs_hotel_feeds_create_request->preferred_processing_schedule
    if(catalogs_hotel_feeds_create_request->preferred_processing_schedule) {
    cJSON *preferred_processing_schedule_local_JSON = catalogs_feed_processing_schedule_convertToJSON(catalogs_hotel_feeds_create_request->preferred_processing_schedule);
    if(preferred_processing_schedule_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "preferred_processing_schedule", preferred_processing_schedule_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // catalogs_hotel_feeds_create_request->catalog_type
    if (pinterest_rest_api_catalogs_hotel_feeds_create_request__NULL == catalogs_hotel_feeds_create_request->catalog_type) {
        goto fail;
    }
    cJSON *catalog_type_local_JSON = catalogs_type_convertToJSON(catalogs_hotel_feeds_create_request->catalog_type);
    if(catalog_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "catalog_type", catalog_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // catalogs_hotel_feeds_create_request->catalog_id
    if(catalogs_hotel_feeds_create_request->catalog_id) {
    if(cJSON_AddStringToObject(item, "catalog_id", catalogs_hotel_feeds_create_request->catalog_id) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

catalogs_hotel_feeds_create_request_t *catalogs_hotel_feeds_create_request_parseFromJSON(cJSON *catalogs_hotel_feeds_create_requestJSON){

    catalogs_hotel_feeds_create_request_t *catalogs_hotel_feeds_create_request_local_var = NULL;

    // define the local variable for catalogs_hotel_feeds_create_request->default_currency
    nullable_currency_t *default_currency_local_nonprim = NULL;

    // define the local variable for catalogs_hotel_feeds_create_request->format
    catalogs_format_t *format_local_nonprim = NULL;

    // define the local variable for catalogs_hotel_feeds_create_request->default_locale
    catalogs_feeds_create_request_default_locale_t *default_locale_local_nonprim = NULL;

    // define the local variable for catalogs_hotel_feeds_create_request->credentials
    catalogs_feed_credentials_t *credentials_local_nonprim = NULL;

    // define the local variable for catalogs_hotel_feeds_create_request->preferred_processing_schedule
    catalogs_feed_processing_schedule_t *preferred_processing_schedule_local_nonprim = NULL;

    // define the local variable for catalogs_hotel_feeds_create_request->catalog_type
    catalogs_type_t *catalog_type_local_nonprim = NULL;

    // catalogs_hotel_feeds_create_request->default_currency
    cJSON *default_currency = cJSON_GetObjectItemCaseSensitive(catalogs_hotel_feeds_create_requestJSON, "default_currency");
    if (default_currency) { 
    default_currency_local_nonprim = nullable_currency_parseFromJSON(default_currency); //custom
    }

    // catalogs_hotel_feeds_create_request->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(catalogs_hotel_feeds_create_requestJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // catalogs_hotel_feeds_create_request->format
    cJSON *format = cJSON_GetObjectItemCaseSensitive(catalogs_hotel_feeds_create_requestJSON, "format");
    if (!format) {
        goto end;
    }

    
    format_local_nonprim = catalogs_format_parseFromJSON(format); //custom

    // catalogs_hotel_feeds_create_request->default_locale
    cJSON *default_locale = cJSON_GetObjectItemCaseSensitive(catalogs_hotel_feeds_create_requestJSON, "default_locale");
    if (!default_locale) {
        goto end;
    }

    
    default_locale_local_nonprim = catalogs_feeds_create_request_default_locale_parseFromJSON(default_locale); //nonprimitive

    // catalogs_hotel_feeds_create_request->credentials
    cJSON *credentials = cJSON_GetObjectItemCaseSensitive(catalogs_hotel_feeds_create_requestJSON, "credentials");
    if (credentials) { 
    credentials_local_nonprim = catalogs_feed_credentials_parseFromJSON(credentials); //nonprimitive
    }

    // catalogs_hotel_feeds_create_request->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(catalogs_hotel_feeds_create_requestJSON, "location");
    if (!location) {
        goto end;
    }

    
    if(!cJSON_IsString(location))
    {
    goto end; //String
    }

    // catalogs_hotel_feeds_create_request->preferred_processing_schedule
    cJSON *preferred_processing_schedule = cJSON_GetObjectItemCaseSensitive(catalogs_hotel_feeds_create_requestJSON, "preferred_processing_schedule");
    if (preferred_processing_schedule) { 
    preferred_processing_schedule_local_nonprim = catalogs_feed_processing_schedule_parseFromJSON(preferred_processing_schedule); //nonprimitive
    }

    // catalogs_hotel_feeds_create_request->catalog_type
    cJSON *catalog_type = cJSON_GetObjectItemCaseSensitive(catalogs_hotel_feeds_create_requestJSON, "catalog_type");
    if (!catalog_type) {
        goto end;
    }

    
    catalog_type_local_nonprim = catalogs_type_parseFromJSON(catalog_type); //custom

    // catalogs_hotel_feeds_create_request->catalog_id
    cJSON *catalog_id = cJSON_GetObjectItemCaseSensitive(catalogs_hotel_feeds_create_requestJSON, "catalog_id");
    if (catalog_id) { 
    if(!cJSON_IsString(catalog_id) && !cJSON_IsNull(catalog_id))
    {
    goto end; //String
    }
    }


    catalogs_hotel_feeds_create_request_local_var = catalogs_hotel_feeds_create_request_create (
        default_currency ? default_currency_local_nonprim : NULL,
        strdup(name->valuestring),
        format_local_nonprim,
        default_locale_local_nonprim,
        credentials ? credentials_local_nonprim : NULL,
        strdup(location->valuestring),
        preferred_processing_schedule ? preferred_processing_schedule_local_nonprim : NULL,
        catalog_type_local_nonprim,
        catalog_id && !cJSON_IsNull(catalog_id) ? strdup(catalog_id->valuestring) : NULL
        );

    return catalogs_hotel_feeds_create_request_local_var;
end:
    if (default_currency_local_nonprim) {
        nullable_currency_free(default_currency_local_nonprim);
        default_currency_local_nonprim = NULL;
    }
    if (format_local_nonprim) {
        catalogs_format_free(format_local_nonprim);
        format_local_nonprim = NULL;
    }
    if (default_locale_local_nonprim) {
        catalogs_feeds_create_request_default_locale_free(default_locale_local_nonprim);
        default_locale_local_nonprim = NULL;
    }
    if (credentials_local_nonprim) {
        catalogs_feed_credentials_free(credentials_local_nonprim);
        credentials_local_nonprim = NULL;
    }
    if (preferred_processing_schedule_local_nonprim) {
        catalogs_feed_processing_schedule_free(preferred_processing_schedule_local_nonprim);
        preferred_processing_schedule_local_nonprim = NULL;
    }
    if (catalog_type_local_nonprim) {
        catalogs_type_free(catalog_type_local_nonprim);
        catalog_type_local_nonprim = NULL;
    }
    return NULL;

}
