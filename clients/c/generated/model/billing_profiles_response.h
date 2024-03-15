/*
 * billing_profiles_response.h
 *
 * 
 */

#ifndef _billing_profiles_response_H_
#define _billing_profiles_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billing_profiles_response_t billing_profiles_response_t;


// Enum CARDTYPE for billing_profiles_response

typedef enum  { pinterest_rest_api_billing_profiles_response_CARDTYPE_NULL = 0, pinterest_rest_api_billing_profiles_response_CARDTYPE_UNKNOWN, pinterest_rest_api_billing_profiles_response_CARDTYPE_VISA, pinterest_rest_api_billing_profiles_response_CARDTYPE_MASTERCARD, pinterest_rest_api_billing_profiles_response_CARDTYPE_AMERICAN_EXPRESS, pinterest_rest_api_billing_profiles_response_CARDTYPE_DISCOVER, pinterest_rest_api_billing_profiles_response_CARDTYPE_ELO } pinterest_rest_api_billing_profiles_response_CARDTYPE_e;

char* billing_profiles_response_card_type_ToString(pinterest_rest_api_billing_profiles_response_CARDTYPE_e card_type);

pinterest_rest_api_billing_profiles_response_CARDTYPE_e billing_profiles_response_card_type_FromString(char* card_type);

// Enum STATUS for billing_profiles_response

typedef enum  { pinterest_rest_api_billing_profiles_response_STATUS_NULL = 0, pinterest_rest_api_billing_profiles_response_STATUS_UNSPECIFIED, pinterest_rest_api_billing_profiles_response_STATUS_VALID, pinterest_rest_api_billing_profiles_response_STATUS_INVALID, pinterest_rest_api_billing_profiles_response_STATUS_PENDING, pinterest_rest_api_billing_profiles_response_STATUS_DELETED, pinterest_rest_api_billing_profiles_response_STATUS_SECONDARY, pinterest_rest_api_billing_profiles_response_STATUS_PENDING_SECONDARY } pinterest_rest_api_billing_profiles_response_STATUS_e;

char* billing_profiles_response_status_ToString(pinterest_rest_api_billing_profiles_response_STATUS_e status);

pinterest_rest_api_billing_profiles_response_STATUS_e billing_profiles_response_status_FromString(char* status);

// Enum PAYMENTMETHODBRAND for billing_profiles_response

typedef enum  { pinterest_rest_api_billing_profiles_response_PAYMENTMETHODBRAND_NULL = 0, pinterest_rest_api_billing_profiles_response_PAYMENTMETHODBRAND_UNKNOWN, pinterest_rest_api_billing_profiles_response_PAYMENTMETHODBRAND_VISA, pinterest_rest_api_billing_profiles_response_PAYMENTMETHODBRAND_MASTERCARD, pinterest_rest_api_billing_profiles_response_PAYMENTMETHODBRAND_AMERICAN_EXPRESS, pinterest_rest_api_billing_profiles_response_PAYMENTMETHODBRAND_DISCOVER, pinterest_rest_api_billing_profiles_response_PAYMENTMETHODBRAND_SOFORT, pinterest_rest_api_billing_profiles_response_PAYMENTMETHODBRAND_DINERS_CLUB, pinterest_rest_api_billing_profiles_response_PAYMENTMETHODBRAND_ELO, pinterest_rest_api_billing_profiles_response_PAYMENTMETHODBRAND_CARTE_BANCAIRE } pinterest_rest_api_billing_profiles_response_PAYMENTMETHODBRAND_e;

char* billing_profiles_response_payment_method_brand_ToString(pinterest_rest_api_billing_profiles_response_PAYMENTMETHODBRAND_e payment_method_brand);

pinterest_rest_api_billing_profiles_response_PAYMENTMETHODBRAND_e billing_profiles_response_payment_method_brand_FromString(char* payment_method_brand);



typedef struct billing_profiles_response_t {
    char *id; // string
    pinterest_rest_api_billing_profiles_response_CARDTYPE_e card_type; //enum
    pinterest_rest_api_billing_profiles_response_STATUS_e status; //enum
    char *advertiser_id; // string
    pinterest_rest_api_billing_profiles_response_PAYMENTMETHODBRAND_e payment_method_brand; //enum

} billing_profiles_response_t;

billing_profiles_response_t *billing_profiles_response_create(
    char *id,
    pinterest_rest_api_billing_profiles_response_CARDTYPE_e card_type,
    pinterest_rest_api_billing_profiles_response_STATUS_e status,
    char *advertiser_id,
    pinterest_rest_api_billing_profiles_response_PAYMENTMETHODBRAND_e payment_method_brand
);

void billing_profiles_response_free(billing_profiles_response_t *billing_profiles_response);

billing_profiles_response_t *billing_profiles_response_parseFromJSON(cJSON *billing_profiles_responseJSON);

cJSON *billing_profiles_response_convertToJSON(billing_profiles_response_t *billing_profiles_response);

#endif /* _billing_profiles_response_H_ */

