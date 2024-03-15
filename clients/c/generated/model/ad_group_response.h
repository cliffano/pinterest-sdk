/*
 * ad_group_response.h
 *
 * 
 */

#ifndef _ad_group_response_H_
#define _ad_group_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ad_group_response_t ad_group_response_t;

#include "action_type.h"
#include "ad_group_common_optimization_goal_metadata.h"
#include "ad_group_common_tracking_urls.h"
#include "ad_group_summary_status.h"
#include "any_type.h"
#include "budget_type.h"
#include "entity_status.h"
#include "pacing_delivery_type.h"
#include "placement_group_type.h"
#include "targeting_spec.h"

// Enum  for ad_group_response

typedef enum  { pinterest_rest_api_ad_group_response__NULL = 0, pinterest_rest_api_ad_group_response__CLICKTHROUGH, pinterest_rest_api_ad_group_response__IMPRESSION, pinterest_rest_api_ad_group_response__VIDEO_V_50_MRC } pinterest_rest_api_ad_group_response__e;

char* ad_group_response_billable_event_ToString(pinterest_rest_api_ad_group_response__e billable_event);

pinterest_rest_api_ad_group_response__e ad_group_response_billable_event_FromString(char* billable_event);

// Enum BIDSTRATEGYTYPE for ad_group_response

typedef enum  { pinterest_rest_api_ad_group_response_BIDSTRATEGYTYPE_NULL = 0, pinterest_rest_api_ad_group_response_BIDSTRATEGYTYPE_AUTOMATIC_BID, pinterest_rest_api_ad_group_response_BIDSTRATEGYTYPE_MAX_BID, pinterest_rest_api_ad_group_response_BIDSTRATEGYTYPE_TARGET_AVG, pinterest_rest_api_ad_group_response_BIDSTRATEGYTYPE_null } pinterest_rest_api_ad_group_response_BIDSTRATEGYTYPE_e;

char* ad_group_response_bid_strategy_type_ToString(pinterest_rest_api_ad_group_response_BIDSTRATEGYTYPE_e bid_strategy_type);

pinterest_rest_api_ad_group_response_BIDSTRATEGYTYPE_e ad_group_response_bid_strategy_type_FromString(char* bid_strategy_type);

// Enum CONVERSIONLEARNINGMODETYPE for ad_group_response

typedef enum  { pinterest_rest_api_ad_group_response_CONVERSIONLEARNINGMODETYPE_NULL = 0, pinterest_rest_api_ad_group_response_CONVERSIONLEARNINGMODETYPE_NOT_ACTIVE, pinterest_rest_api_ad_group_response_CONVERSIONLEARNINGMODETYPE_ACTIVE, pinterest_rest_api_ad_group_response_CONVERSIONLEARNINGMODETYPE_null } pinterest_rest_api_ad_group_response_CONVERSIONLEARNINGMODETYPE_e;

char* ad_group_response_conversion_learning_mode_type_ToString(pinterest_rest_api_ad_group_response_CONVERSIONLEARNINGMODETYPE_e conversion_learning_mode_type);

pinterest_rest_api_ad_group_response_CONVERSIONLEARNINGMODETYPE_e ad_group_response_conversion_learning_mode_type_FromString(char* conversion_learning_mode_type);



typedef struct ad_group_response_t {
    char *name; // string
    entity_status_t *status; // custom
    int budget_in_micro_currency; //numeric
    int bid_in_micro_currency; //numeric
    struct ad_group_common_optimization_goal_metadata_t *optimization_goal_metadata; //model
    budget_type_t *budget_type; // custom
    int start_time; //numeric
    int end_time; //numeric
    struct targeting_spec_t *targeting_spec; //model
    int lifetime_frequency_cap; //numeric
    struct ad_group_common_tracking_urls_t *tracking_urls; //model
    int auto_targeting_enabled; //boolean
    placement_group_type_t *placement_group; // custom
    pacing_delivery_type_t *pacing_delivery_type; // custom
    char *campaign_id; // string
    action_type_t *billable_event; // custom
    pinterest_rest_api_ad_group_response_BIDSTRATEGYTYPE_e bid_strategy_type; //enum
    char *id; // string
    char *ad_account_id; // string
    int created_time; //numeric
    int updated_time; //numeric
    char *type; // string
    pinterest_rest_api_ad_group_response_CONVERSIONLEARNINGMODETYPE_e conversion_learning_mode_type; //enum
    ad_group_summary_status_t *summary_status; // custom
    char *feed_profile_id; // string
    any_type_t *dca_assets; // custom

} ad_group_response_t;

ad_group_response_t *ad_group_response_create(
    char *name,
    entity_status_t *status,
    int budget_in_micro_currency,
    int bid_in_micro_currency,
    ad_group_common_optimization_goal_metadata_t *optimization_goal_metadata,
    budget_type_t *budget_type,
    int start_time,
    int end_time,
    targeting_spec_t *targeting_spec,
    int lifetime_frequency_cap,
    ad_group_common_tracking_urls_t *tracking_urls,
    int auto_targeting_enabled,
    placement_group_type_t *placement_group,
    pacing_delivery_type_t *pacing_delivery_type,
    char *campaign_id,
    action_type_t *billable_event,
    pinterest_rest_api_ad_group_response_BIDSTRATEGYTYPE_e bid_strategy_type,
    char *id,
    char *ad_account_id,
    int created_time,
    int updated_time,
    char *type,
    pinterest_rest_api_ad_group_response_CONVERSIONLEARNINGMODETYPE_e conversion_learning_mode_type,
    ad_group_summary_status_t *summary_status,
    char *feed_profile_id,
    any_type_t *dca_assets
);

void ad_group_response_free(ad_group_response_t *ad_group_response);

ad_group_response_t *ad_group_response_parseFromJSON(cJSON *ad_group_responseJSON);

cJSON *ad_group_response_convertToJSON(ad_group_response_t *ad_group_response);

#endif /* _ad_group_response_H_ */

