#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/ad_group_array_response.h"
#include "../model/ad_group_audience_sizing_request.h"
#include "../model/ad_group_audience_sizing_response.h"
#include "../model/ad_group_create_request.h"
#include "../model/ad_group_response.h"
#include "../model/ad_group_update_request.h"
#include "../model/ad_groups_analytics_response_inner.h"
#include "../model/ad_groups_list_200_response.h"
#include "../model/ads_analytics_targeting_type.h"
#include "../model/bid_floor.h"
#include "../model/bid_floor_request.h"
#include "../model/conversion_report_attribution_type.h"
#include "../model/error.h"
#include "../model/granularity.h"
#include "../model/metrics_response.h"

// Enum COLUMNS for AdGroupsAPI_adGroupsAnalytics
typedef enum  { pinterest_rest_api_adGroupsAnalytics_COLUMNS_NULL = 0, pinterest_rest_api_adGroupsAnalytics_COLUMNS_SPEND_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_PAID_IMPRESSION, pinterest_rest_api_adGroupsAnalytics_COLUMNS_SPEND_IN_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_CPC_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_ECPC_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_ECPC_IN_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_CTR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_ECTR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_CAMPAIGN_NAME, pinterest_rest_api_adGroupsAnalytics_COLUMNS_PIN_ID, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_ENGAGEMENT, pinterest_rest_api_adGroupsAnalytics_COLUMNS_ENGAGEMENT_1, pinterest_rest_api_adGroupsAnalytics_COLUMNS_ENGAGEMENT_2, pinterest_rest_api_adGroupsAnalytics_COLUMNS_ECPE_IN_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_ENGAGEMENT_RATE, pinterest_rest_api_adGroupsAnalytics_COLUMNS_EENGAGEMENT_RATE, pinterest_rest_api_adGroupsAnalytics_COLUMNS_ECPM_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_REPIN_RATE, pinterest_rest_api_adGroupsAnalytics_COLUMNS_CTR_2, pinterest_rest_api_adGroupsAnalytics_COLUMNS_CAMPAIGN_ID, pinterest_rest_api_adGroupsAnalytics_COLUMNS_ADVERTISER_ID, pinterest_rest_api_adGroupsAnalytics_COLUMNS_AD_ACCOUNT_ID, pinterest_rest_api_adGroupsAnalytics_COLUMNS_PIN_PROMOTION_ID, pinterest_rest_api_adGroupsAnalytics_COLUMNS_AD_ID, pinterest_rest_api_adGroupsAnalytics_COLUMNS_AD_GROUP_ID, pinterest_rest_api_adGroupsAnalytics_COLUMNS_CAMPAIGN_ENTITY_STATUS, pinterest_rest_api_adGroupsAnalytics_COLUMNS_CAMPAIGN_OBJECTIVE_TYPE, pinterest_rest_api_adGroupsAnalytics_COLUMNS_CPM_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_CPM_IN_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_AD_GROUP_ENTITY_STATUS, pinterest_rest_api_adGroupsAnalytics_COLUMNS_ORDER_LINE_ID, pinterest_rest_api_adGroupsAnalytics_COLUMNS_ORDER_LINE_NAME, pinterest_rest_api_adGroupsAnalytics_COLUMNS_CLICKTHROUGH_1, pinterest_rest_api_adGroupsAnalytics_COLUMNS_REPIN_1, pinterest_rest_api_adGroupsAnalytics_COLUMNS_IMPRESSION_1, pinterest_rest_api_adGroupsAnalytics_COLUMNS_IMPRESSION_1_GROSS, pinterest_rest_api_adGroupsAnalytics_COLUMNS_CLICKTHROUGH_1_GROSS, pinterest_rest_api_adGroupsAnalytics_COLUMNS_OUTBOUND_CLICK_1, pinterest_rest_api_adGroupsAnalytics_COLUMNS_CLICKTHROUGH_2, pinterest_rest_api_adGroupsAnalytics_COLUMNS_REPIN_2, pinterest_rest_api_adGroupsAnalytics_COLUMNS_IMPRESSION_2, pinterest_rest_api_adGroupsAnalytics_COLUMNS_OUTBOUND_CLICK_2, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_CLICKTHROUGH, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_IMPRESSION, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_IMPRESSION_USER, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_IMPRESSION_FREQUENCY, pinterest_rest_api_adGroupsAnalytics_COLUMNS_COST_PER_OUTBOUND_CLICK_IN_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_ENGAGEMENT_SIGNUP, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_ENGAGEMENT_CHECKOUT, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_ENGAGEMENT_LEAD, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_CLICK_SIGNUP, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_CLICK_CHECKOUT, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_CLICK_ADD_TO_CART, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_CLICK_LEAD, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_VIEW_SIGNUP, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_VIEW_CHECKOUT, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_VIEW_ADD_TO_CART, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_VIEW_LEAD, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_CONVERSIONS, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_WEB_SESSIONS, pinterest_rest_api_adGroupsAnalytics_COLUMNS_WEB_SESSIONS_1, pinterest_rest_api_adGroupsAnalytics_COLUMNS_WEB_SESSIONS_2, pinterest_rest_api_adGroupsAnalytics_COLUMNS_CAMPAIGN_LIFETIME_SPEND_CAP, pinterest_rest_api_adGroupsAnalytics_COLUMNS_CAMPAIGN_DAILY_SPEND_CAP, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_PAGE_VISIT, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_SIGNUP, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_CHECKOUT, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_CUSTOM, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_LEAD, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_SIGNUP_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_CUSTOM_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_PAGE_VISIT_COST_PER_ACTION, pinterest_rest_api_adGroupsAnalytics_COLUMNS_PAGE_VISIT_ROAS, pinterest_rest_api_adGroupsAnalytics_COLUMNS_CHECKOUT_ROAS, pinterest_rest_api_adGroupsAnalytics_COLUMNS_CUSTOM_ROAS, pinterest_rest_api_adGroupsAnalytics_COLUMNS_VIDEO_MRC_VIEWS_1, pinterest_rest_api_adGroupsAnalytics_COLUMNS_VIDEO_3SEC_VIEWS_2, pinterest_rest_api_adGroupsAnalytics_COLUMNS_VIDEO_P100_COMPLETE_2, pinterest_rest_api_adGroupsAnalytics_COLUMNS_VIDEO_P0_COMBINED_2, pinterest_rest_api_adGroupsAnalytics_COLUMNS_VIDEO_P25_COMBINED_2, pinterest_rest_api_adGroupsAnalytics_COLUMNS_VIDEO_P50_COMBINED_2, pinterest_rest_api_adGroupsAnalytics_COLUMNS_VIDEO_P75_COMBINED_2, pinterest_rest_api_adGroupsAnalytics_COLUMNS_VIDEO_P95_COMBINED_2, pinterest_rest_api_adGroupsAnalytics_COLUMNS_VIDEO_MRC_VIEWS_2, pinterest_rest_api_adGroupsAnalytics_COLUMNS_VIDEO_LENGTH, pinterest_rest_api_adGroupsAnalytics_COLUMNS_ECPV_IN_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_ECPCV_IN_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_ECPCV_P95_IN_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_VIDEO_3SEC_VIEWS, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_VIDEO_P100_COMPLETE, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_VIDEO_P0_COMBINED, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_VIDEO_P25_COMBINED, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_VIDEO_P50_COMBINED, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_VIDEO_P75_COMBINED, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_VIDEO_P95_COMBINED, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_VIDEO_MRC_VIEWS, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_VIDEO_AVG_WATCHTIME_IN_SECOND, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_REPIN_RATE, pinterest_rest_api_adGroupsAnalytics_COLUMNS_WEB_CHECKOUT_COST_PER_ACTION, pinterest_rest_api_adGroupsAnalytics_COLUMNS_WEB_CHECKOUT_ROAS, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_WEB_CHECKOUT, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_WEB_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_WEB_CLICK_CHECKOUT, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_WEB_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_WEB_ENGAGEMENT_CHECKOUT, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_WEB_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_WEB_VIEW_CHECKOUT, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_WEB_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsAnalytics_COLUMNS_INAPP_CHECKOUT_COST_PER_ACTION, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_OFFLINE_CHECKOUT, pinterest_rest_api_adGroupsAnalytics_COLUMNS_IDEA_PIN_PRODUCT_TAG_VISIT_1, pinterest_rest_api_adGroupsAnalytics_COLUMNS_IDEA_PIN_PRODUCT_TAG_VISIT_2, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_IDEA_PIN_PRODUCT_TAG_VISIT, pinterest_rest_api_adGroupsAnalytics_COLUMNS_LEADS, pinterest_rest_api_adGroupsAnalytics_COLUMNS_COST_PER_LEAD, pinterest_rest_api_adGroupsAnalytics_COLUMNS_QUIZ_COMPLETED, pinterest_rest_api_adGroupsAnalytics_COLUMNS_QUIZ_COMPLETION_RATE, pinterest_rest_api_adGroupsAnalytics_COLUMNS_SHOWCASE_PIN_CLICKTHROUGH, pinterest_rest_api_adGroupsAnalytics_COLUMNS_SHOWCASE_SUBPAGE_CLICKTHROUGH, pinterest_rest_api_adGroupsAnalytics_COLUMNS_SHOWCASE_SUBPIN_CLICKTHROUGH, pinterest_rest_api_adGroupsAnalytics_COLUMNS_SHOWCASE_SUBPAGE_IMPRESSION, pinterest_rest_api_adGroupsAnalytics_COLUMNS_SHOWCASE_SUBPIN_IMPRESSION, pinterest_rest_api_adGroupsAnalytics_COLUMNS_SHOWCASE_SUBPAGE_SWIPE_LEFT, pinterest_rest_api_adGroupsAnalytics_COLUMNS_SHOWCASE_SUBPAGE_SWIPE_RIGHT, pinterest_rest_api_adGroupsAnalytics_COLUMNS_SHOWCASE_SUBPIN_SWIPE_LEFT, pinterest_rest_api_adGroupsAnalytics_COLUMNS_SHOWCASE_SUBPIN_SWIPE_RIGHT, pinterest_rest_api_adGroupsAnalytics_COLUMNS_SHOWCASE_SUBPAGE_REPIN, pinterest_rest_api_adGroupsAnalytics_COLUMNS_SHOWCASE_SUBPIN_REPIN, pinterest_rest_api_adGroupsAnalytics_COLUMNS_SHOWCASE_SUBPAGE_CLOSEUP, pinterest_rest_api_adGroupsAnalytics_COLUMNS_SHOWCASE_CARD_THUMBNAIL_SWIPE_FORWARD, pinterest_rest_api_adGroupsAnalytics_COLUMNS_SHOWCASE_CARD_THUMBNAIL_SWIPE_BACKWARD, pinterest_rest_api_adGroupsAnalytics_COLUMNS_SHOWCASE_AVERAGE_SUBPAGE_CLOSEUP_PER_SESSION, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_CHECKOUT_CONVERSION_RATE, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_VIEW_CATEGORY_CONVERSION_RATE, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_ADD_TO_CART_CONVERSION_RATE, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_SIGNUP_CONVERSION_RATE, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_PAGE_VISIT_CONVERSION_RATE, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_LEAD_CONVERSION_RATE, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_SEARCH_CONVERSION_RATE, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_WATCH_VIDEO_CONVERSION_RATE, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_UNKNOWN_CONVERSION_RATE, pinterest_rest_api_adGroupsAnalytics_COLUMNS_TOTAL_CUSTOM_CONVERSION_RATE } pinterest_rest_api_adGroupsAnalytics_columns_e;

// Enum  for AdGroupsAPI_adGroupsAnalytics
typedef enum  { pinterest_rest_api_adGroupsAnalytics__NULL = 0, pinterest_rest_api_adGroupsAnalytics__TOTAL, pinterest_rest_api_adGroupsAnalytics__DAY, pinterest_rest_api_adGroupsAnalytics__HOUR, pinterest_rest_api_adGroupsAnalytics__WEEK, pinterest_rest_api_adGroupsAnalytics__MONTH } pinterest_rest_api_adGroupsAnalytics_granularity_e;

// Enum CLICKWINDOWDAYS for AdGroupsAPI_adGroupsAnalytics
typedef enum  { pinterest_rest_api_adGroupsAnalytics_CLICKWINDOWDAYS_NULL = 0, pinterest_rest_api_adGroupsAnalytics_CLICKWINDOWDAYS__0, pinterest_rest_api_adGroupsAnalytics_CLICKWINDOWDAYS__1, pinterest_rest_api_adGroupsAnalytics_CLICKWINDOWDAYS__7, pinterest_rest_api_adGroupsAnalytics_CLICKWINDOWDAYS__14, pinterest_rest_api_adGroupsAnalytics_CLICKWINDOWDAYS__30, pinterest_rest_api_adGroupsAnalytics_CLICKWINDOWDAYS__60 } pinterest_rest_api_adGroupsAnalytics_click_window_days_e;

// Enum ENGAGEMENTWINDOWDAYS for AdGroupsAPI_adGroupsAnalytics
typedef enum  { pinterest_rest_api_adGroupsAnalytics_ENGAGEMENTWINDOWDAYS_NULL = 0, pinterest_rest_api_adGroupsAnalytics_ENGAGEMENTWINDOWDAYS__0, pinterest_rest_api_adGroupsAnalytics_ENGAGEMENTWINDOWDAYS__1, pinterest_rest_api_adGroupsAnalytics_ENGAGEMENTWINDOWDAYS__7, pinterest_rest_api_adGroupsAnalytics_ENGAGEMENTWINDOWDAYS__14, pinterest_rest_api_adGroupsAnalytics_ENGAGEMENTWINDOWDAYS__30, pinterest_rest_api_adGroupsAnalytics_ENGAGEMENTWINDOWDAYS__60 } pinterest_rest_api_adGroupsAnalytics_engagement_window_days_e;

// Enum VIEWWINDOWDAYS for AdGroupsAPI_adGroupsAnalytics
typedef enum  { pinterest_rest_api_adGroupsAnalytics_VIEWWINDOWDAYS_NULL = 0, pinterest_rest_api_adGroupsAnalytics_VIEWWINDOWDAYS__0, pinterest_rest_api_adGroupsAnalytics_VIEWWINDOWDAYS__1, pinterest_rest_api_adGroupsAnalytics_VIEWWINDOWDAYS__7, pinterest_rest_api_adGroupsAnalytics_VIEWWINDOWDAYS__14, pinterest_rest_api_adGroupsAnalytics_VIEWWINDOWDAYS__30, pinterest_rest_api_adGroupsAnalytics_VIEWWINDOWDAYS__60 } pinterest_rest_api_adGroupsAnalytics_view_window_days_e;

// Enum CONVERSIONREPORTTIME for AdGroupsAPI_adGroupsAnalytics
typedef enum  { pinterest_rest_api_adGroupsAnalytics_CONVERSIONREPORTTIME_NULL = 0, pinterest_rest_api_adGroupsAnalytics_CONVERSIONREPORTTIME_TIME_OF_AD_ACTION, pinterest_rest_api_adGroupsAnalytics_CONVERSIONREPORTTIME_TIME_OF_CONVERSION } pinterest_rest_api_adGroupsAnalytics_conversion_report_time_e;

// Enum ENTITYSTATUSES for AdGroupsAPI_adGroupsList
typedef enum  { pinterest_rest_api_adGroupsList_ENTITYSTATUSES_NULL = 0, pinterest_rest_api_adGroupsList_ENTITYSTATUSES_ACTIVE, pinterest_rest_api_adGroupsList_ENTITYSTATUSES_PAUSED, pinterest_rest_api_adGroupsList_ENTITYSTATUSES_ARCHIVED, pinterest_rest_api_adGroupsList_ENTITYSTATUSES_DRAFT, pinterest_rest_api_adGroupsList_ENTITYSTATUSES_DELETED_DRAFT } pinterest_rest_api_adGroupsList_entity_statuses_e;

// Enum ORDER for AdGroupsAPI_adGroupsList
typedef enum  { pinterest_rest_api_adGroupsList_ORDER_NULL = 0, pinterest_rest_api_adGroupsList_ORDER_ASCENDING, pinterest_rest_api_adGroupsList_ORDER_DESCENDING } pinterest_rest_api_adGroupsList_order_e;

// Enum TARGETINGTYPES for AdGroupsAPI_adGroupsTargetingAnalyticsGet
typedef enum  { pinterest_rest_api_adGroupsTargetingAnalyticsGet_TARGETINGTYPES_NULL = 0, pinterest_rest_api_adGroupsTargetingAnalyticsGet_TARGETINGTYPES_KEYWORD, pinterest_rest_api_adGroupsTargetingAnalyticsGet_TARGETINGTYPES_APPTYPE, pinterest_rest_api_adGroupsTargetingAnalyticsGet_TARGETINGTYPES_GENDER, pinterest_rest_api_adGroupsTargetingAnalyticsGet_TARGETINGTYPES_LOCATION, pinterest_rest_api_adGroupsTargetingAnalyticsGet_TARGETINGTYPES_PLACEMENT, pinterest_rest_api_adGroupsTargetingAnalyticsGet_TARGETINGTYPES_COUNTRY, pinterest_rest_api_adGroupsTargetingAnalyticsGet_TARGETINGTYPES_TARGETED_INTEREST, pinterest_rest_api_adGroupsTargetingAnalyticsGet_TARGETINGTYPES_PINNER_INTEREST, pinterest_rest_api_adGroupsTargetingAnalyticsGet_TARGETINGTYPES_AUDIENCE_INCLUDE, pinterest_rest_api_adGroupsTargetingAnalyticsGet_TARGETINGTYPES_GEO, pinterest_rest_api_adGroupsTargetingAnalyticsGet_TARGETINGTYPES_AGE_BUCKET, pinterest_rest_api_adGroupsTargetingAnalyticsGet_TARGETINGTYPES_REGION } pinterest_rest_api_adGroupsTargetingAnalyticsGet_targeting_types_e;

// Enum COLUMNS for AdGroupsAPI_adGroupsTargetingAnalyticsGet
typedef enum  { pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_NULL = 0, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_SPEND_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_PAID_IMPRESSION, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_SPEND_IN_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_CPC_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_ECPC_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_ECPC_IN_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_CTR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_ECTR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_CAMPAIGN_NAME, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_PIN_ID, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_ENGAGEMENT, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_ENGAGEMENT_1, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_ENGAGEMENT_2, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_ECPE_IN_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_ENGAGEMENT_RATE, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_EENGAGEMENT_RATE, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_ECPM_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_REPIN_RATE, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_CTR_2, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_CAMPAIGN_ID, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_ADVERTISER_ID, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_AD_ACCOUNT_ID, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_PIN_PROMOTION_ID, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_AD_ID, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_AD_GROUP_ID, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_CAMPAIGN_ENTITY_STATUS, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_CAMPAIGN_OBJECTIVE_TYPE, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_CPM_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_CPM_IN_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_AD_GROUP_ENTITY_STATUS, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_ORDER_LINE_ID, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_ORDER_LINE_NAME, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_CLICKTHROUGH_1, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_REPIN_1, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_IMPRESSION_1, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_IMPRESSION_1_GROSS, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_CLICKTHROUGH_1_GROSS, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_OUTBOUND_CLICK_1, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_CLICKTHROUGH_2, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_REPIN_2, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_IMPRESSION_2, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_OUTBOUND_CLICK_2, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_CLICKTHROUGH, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_IMPRESSION, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_IMPRESSION_USER, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_IMPRESSION_FREQUENCY, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_COST_PER_OUTBOUND_CLICK_IN_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_ENGAGEMENT_SIGNUP, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_ENGAGEMENT_CHECKOUT, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_ENGAGEMENT_LEAD, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_CLICK_SIGNUP, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_CLICK_CHECKOUT, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_CLICK_ADD_TO_CART, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_CLICK_LEAD, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_VIEW_SIGNUP, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_VIEW_CHECKOUT, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_VIEW_ADD_TO_CART, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_VIEW_LEAD, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_CONVERSIONS, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_WEB_SESSIONS, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_WEB_SESSIONS_1, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_WEB_SESSIONS_2, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_CAMPAIGN_LIFETIME_SPEND_CAP, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_CAMPAIGN_DAILY_SPEND_CAP, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_PAGE_VISIT, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_SIGNUP, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_CHECKOUT, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_CUSTOM, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_LEAD, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_SIGNUP_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_CUSTOM_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_PAGE_VISIT_COST_PER_ACTION, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_PAGE_VISIT_ROAS, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_CHECKOUT_ROAS, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_CUSTOM_ROAS, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_VIDEO_MRC_VIEWS_1, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_VIDEO_3SEC_VIEWS_2, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_VIDEO_P100_COMPLETE_2, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_VIDEO_P0_COMBINED_2, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_VIDEO_P25_COMBINED_2, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_VIDEO_P50_COMBINED_2, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_VIDEO_P75_COMBINED_2, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_VIDEO_P95_COMBINED_2, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_VIDEO_MRC_VIEWS_2, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_VIDEO_LENGTH, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_ECPV_IN_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_ECPCV_IN_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_ECPCV_P95_IN_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_VIDEO_3SEC_VIEWS, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_VIDEO_P100_COMPLETE, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_VIDEO_P0_COMBINED, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_VIDEO_P25_COMBINED, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_VIDEO_P50_COMBINED, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_VIDEO_P75_COMBINED, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_VIDEO_P95_COMBINED, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_VIDEO_MRC_VIEWS, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_VIDEO_AVG_WATCHTIME_IN_SECOND, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_REPIN_RATE, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_WEB_CHECKOUT_COST_PER_ACTION, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_WEB_CHECKOUT_ROAS, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_WEB_CHECKOUT, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_WEB_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_WEB_CLICK_CHECKOUT, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_WEB_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_WEB_ENGAGEMENT_CHECKOUT, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_WEB_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_WEB_VIEW_CHECKOUT, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_WEB_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_INAPP_CHECKOUT_COST_PER_ACTION, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_OFFLINE_CHECKOUT, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_IDEA_PIN_PRODUCT_TAG_VISIT_1, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_IDEA_PIN_PRODUCT_TAG_VISIT_2, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_IDEA_PIN_PRODUCT_TAG_VISIT, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_LEADS, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_COST_PER_LEAD, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_QUIZ_COMPLETED, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_QUIZ_COMPLETION_RATE, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_SHOWCASE_PIN_CLICKTHROUGH, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_SHOWCASE_SUBPAGE_CLICKTHROUGH, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_SHOWCASE_SUBPIN_CLICKTHROUGH, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_SHOWCASE_SUBPAGE_IMPRESSION, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_SHOWCASE_SUBPIN_IMPRESSION, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_SHOWCASE_SUBPAGE_SWIPE_LEFT, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_SHOWCASE_SUBPAGE_SWIPE_RIGHT, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_SHOWCASE_SUBPIN_SWIPE_LEFT, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_SHOWCASE_SUBPIN_SWIPE_RIGHT, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_SHOWCASE_SUBPAGE_REPIN, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_SHOWCASE_SUBPIN_REPIN, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_SHOWCASE_SUBPAGE_CLOSEUP, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_SHOWCASE_CARD_THUMBNAIL_SWIPE_FORWARD, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_SHOWCASE_CARD_THUMBNAIL_SWIPE_BACKWARD, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_SHOWCASE_AVERAGE_SUBPAGE_CLOSEUP_PER_SESSION, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_CHECKOUT_CONVERSION_RATE, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_VIEW_CATEGORY_CONVERSION_RATE, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_ADD_TO_CART_CONVERSION_RATE, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_SIGNUP_CONVERSION_RATE, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_PAGE_VISIT_CONVERSION_RATE, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_LEAD_CONVERSION_RATE, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_SEARCH_CONVERSION_RATE, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_WATCH_VIDEO_CONVERSION_RATE, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_UNKNOWN_CONVERSION_RATE, pinterest_rest_api_adGroupsTargetingAnalyticsGet_COLUMNS_TOTAL_CUSTOM_CONVERSION_RATE } pinterest_rest_api_adGroupsTargetingAnalyticsGet_columns_e;

// Enum  for AdGroupsAPI_adGroupsTargetingAnalyticsGet
typedef enum  { pinterest_rest_api_adGroupsTargetingAnalyticsGet__NULL = 0, pinterest_rest_api_adGroupsTargetingAnalyticsGet__TOTAL, pinterest_rest_api_adGroupsTargetingAnalyticsGet__DAY, pinterest_rest_api_adGroupsTargetingAnalyticsGet__HOUR, pinterest_rest_api_adGroupsTargetingAnalyticsGet__WEEK, pinterest_rest_api_adGroupsTargetingAnalyticsGet__MONTH } pinterest_rest_api_adGroupsTargetingAnalyticsGet_granularity_e;

// Enum CLICKWINDOWDAYS for AdGroupsAPI_adGroupsTargetingAnalyticsGet
typedef enum  { pinterest_rest_api_adGroupsTargetingAnalyticsGet_CLICKWINDOWDAYS_NULL = 0, pinterest_rest_api_adGroupsTargetingAnalyticsGet_CLICKWINDOWDAYS__0, pinterest_rest_api_adGroupsTargetingAnalyticsGet_CLICKWINDOWDAYS__1, pinterest_rest_api_adGroupsTargetingAnalyticsGet_CLICKWINDOWDAYS__7, pinterest_rest_api_adGroupsTargetingAnalyticsGet_CLICKWINDOWDAYS__14, pinterest_rest_api_adGroupsTargetingAnalyticsGet_CLICKWINDOWDAYS__30, pinterest_rest_api_adGroupsTargetingAnalyticsGet_CLICKWINDOWDAYS__60 } pinterest_rest_api_adGroupsTargetingAnalyticsGet_click_window_days_e;

// Enum ENGAGEMENTWINDOWDAYS for AdGroupsAPI_adGroupsTargetingAnalyticsGet
typedef enum  { pinterest_rest_api_adGroupsTargetingAnalyticsGet_ENGAGEMENTWINDOWDAYS_NULL = 0, pinterest_rest_api_adGroupsTargetingAnalyticsGet_ENGAGEMENTWINDOWDAYS__0, pinterest_rest_api_adGroupsTargetingAnalyticsGet_ENGAGEMENTWINDOWDAYS__1, pinterest_rest_api_adGroupsTargetingAnalyticsGet_ENGAGEMENTWINDOWDAYS__7, pinterest_rest_api_adGroupsTargetingAnalyticsGet_ENGAGEMENTWINDOWDAYS__14, pinterest_rest_api_adGroupsTargetingAnalyticsGet_ENGAGEMENTWINDOWDAYS__30, pinterest_rest_api_adGroupsTargetingAnalyticsGet_ENGAGEMENTWINDOWDAYS__60 } pinterest_rest_api_adGroupsTargetingAnalyticsGet_engagement_window_days_e;

// Enum VIEWWINDOWDAYS for AdGroupsAPI_adGroupsTargetingAnalyticsGet
typedef enum  { pinterest_rest_api_adGroupsTargetingAnalyticsGet_VIEWWINDOWDAYS_NULL = 0, pinterest_rest_api_adGroupsTargetingAnalyticsGet_VIEWWINDOWDAYS__0, pinterest_rest_api_adGroupsTargetingAnalyticsGet_VIEWWINDOWDAYS__1, pinterest_rest_api_adGroupsTargetingAnalyticsGet_VIEWWINDOWDAYS__7, pinterest_rest_api_adGroupsTargetingAnalyticsGet_VIEWWINDOWDAYS__14, pinterest_rest_api_adGroupsTargetingAnalyticsGet_VIEWWINDOWDAYS__30, pinterest_rest_api_adGroupsTargetingAnalyticsGet_VIEWWINDOWDAYS__60 } pinterest_rest_api_adGroupsTargetingAnalyticsGet_view_window_days_e;

// Enum CONVERSIONREPORTTIME for AdGroupsAPI_adGroupsTargetingAnalyticsGet
typedef enum  { pinterest_rest_api_adGroupsTargetingAnalyticsGet_CONVERSIONREPORTTIME_NULL = 0, pinterest_rest_api_adGroupsTargetingAnalyticsGet_CONVERSIONREPORTTIME_TIME_OF_AD_ACTION, pinterest_rest_api_adGroupsTargetingAnalyticsGet_CONVERSIONREPORTTIME_TIME_OF_CONVERSION } pinterest_rest_api_adGroupsTargetingAnalyticsGet_conversion_report_time_e;

// Enum  for AdGroupsAPI_adGroupsTargetingAnalyticsGet
typedef enum  { pinterest_rest_api_adGroupsTargetingAnalyticsGet__NULL = 0, pinterest_rest_api_adGroupsTargetingAnalyticsGet__INDIVIDUAL, pinterest_rest_api_adGroupsTargetingAnalyticsGet__HOUSEHOLD } pinterest_rest_api_adGroupsTargetingAnalyticsGet_attribution_types_e;


// Get ad group analytics
//
// Get analytics for the specified ad groups in the specified <code>ad_account_id</code>, filtered by the specified options. - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
//
list_t*
AdGroupsAPI_adGroupsAnalytics(apiClient_t *apiClient, char *ad_account_id, char start_date, char end_date, list_t *ad_group_ids, list_t *columns, granularity_e granularity, int *click_window_days, int *engagement_window_days, int *view_window_days, pinterest_rest_api_adGroupsAnalytics_conversion_report_time_e conversion_report_time);


// Get audience sizing
//
// Get potential audience size for an ad group with given targeting criteria.  Potential audience size estimates the number of people you may be able to reach per month with your campaign.  It is based on historical advertising data and the targeting criteria you select. It does not guarantee results or take into account factors such as bid, budget, schedule, seasonality or product experiments.
//
ad_group_audience_sizing_response_t*
AdGroupsAPI_adGroupsAudienceSizing(apiClient_t *apiClient, char *ad_account_id, ad_group_audience_sizing_request_t *ad_group_audience_sizing_request);


// Get bid floors
//
// List bid floors for your campaign configuration. Bid floors are given in microcurrency values based on the currency in the bid floor specification. <p/> <p>Microcurrency is used to track very small transactions, based on the currency set in the advertiser’s profile.</p> <p>A microcurrency unit is 10^(-6) of the standard unit of currency selected in the advertiser’s profile.</p> <p><strong>Equivalency equations</strong>, using dollars as an example currency:</p> <ul>   <li>$1 = 1,000,000 microdollars</li>   <li>1 microdollar = $0.000001 </li> </ul> <p><strong>To convert between currency and microcurrency</strong>, using dollars as an example currency:</p> <ul>   <li>To convert dollars to microdollars, mutiply dollars by 1,000,000</li>   <li>To convert microdollars to dollars, divide microdollars by 1,000,000</li> </ul> For more on bid floors see <a class=\"reference external\" href=\"https://help.pinterest.com/en/business/article/set-your-bid\"> Set your bid</a>.
//
bid_floor_t*
AdGroupsAPI_adGroupsBidFloorGet(apiClient_t *apiClient, char *ad_account_id, bid_floor_request_t *bid_floor_request);


// Create ad groups
//
// Create multiple new ad groups. All ads in a given ad group will have the same budget, bid, run dates, targeting, and placement (search, browse, other). For more information, <a href=\"https://help.pinterest.com/en/business/article/campaign-structure\" target=\"_blank\"> click here</a>.</p> <strong>Note:</strong> - 'bid_in_micro_currency' and 'budget_in_micro_currency' should be expressed in microcurrency amounts based on the currency field set in the advertiser's profile.<p/> <p>Microcurrency is used to track very small transactions, based on the currency set in the advertiser’s profile.</p> <p>A microcurrency unit is 10^(-6) of the standard unit of currency selected in the advertiser’s profile.</p> <p><strong>Equivalency equations</strong>, using dollars as an example currency:</p> <ul>   <li>$1 = 1,000,000 microdollars</li>   <li>1 microdollar = $0.000001 </li> </ul> <p><strong>To convert between currency and microcurrency</strong>, using dollars as an example currency:</p> <ul>   <li>To convert dollars to microdollars, mutiply dollars by 1,000,000</li>   <li>To convert microdollars to dollars, divide microdollars by 1,000,000</li> </ul> - Ad groups belong to ad campaigns. Some types of campaigns (e.g. budget optimization) have limits on the number of ad groups they can hold. If you exceed those limits, you will get an error message. - Start and end time cannot be set for ad groups that belong to CBO campaigns. Currently, campaigns with the following objective types: TRAFFIC, AWARENESS, WEB_CONVERSIONS, and CATALOG_SALES will default to CBO.
//
ad_group_array_response_t*
AdGroupsAPI_adGroupsCreate(apiClient_t *apiClient, char *ad_account_id, list_t *ad_group_create_request);


// Get ad group
//
// Get a specific ad given the ad ID. If your pin is rejected, rejected_reasons will contain additional information from the Ad Review process. For more information about our policies and rejection reasons see the <a href=\"https://www.pinterest.com/_/_/policy/advertising-guidelines/\" target=\"_blank\">Pinterest advertising standards</a>.
//
ad_group_response_t*
AdGroupsAPI_adGroupsGet(apiClient_t *apiClient, char *ad_account_id, char *ad_group_id);


// List ad groups
//
// List ad groups based on provided campaign IDs or ad group IDs.(campaign_ids or ad_group_ids). <p/> <strong>Note:</strong><p/> Provide only campaign_id or ad_group_id. Do not provide both.
//
ad_groups_list_200_response_t*
AdGroupsAPI_adGroupsList(apiClient_t *apiClient, char *ad_account_id, list_t *campaign_ids, list_t *ad_group_ids, list_t *entity_statuses, int *page_size, pinterest_rest_api_adGroupsList_order_e order, char *bookmark, int *translate_interests_to_names);


// Get targeting analytics for ad groups
//
// Get targeting analytics for one or more ad groups. For the requested ad group(s) and metrics, the response will include the requested metric information (e.g. SPEND_IN_DOLLAR) for the requested target type (e.g. \"age_bucket\") for applicable values (e.g. \"45-49\"). <p/> - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
//
metrics_response_t*
AdGroupsAPI_adGroupsTargetingAnalyticsGet(apiClient_t *apiClient, char *ad_account_id, list_t *ad_group_ids, char start_date, char end_date, list_t *targeting_types, list_t *columns, granularity_e granularity, int *click_window_days, int *engagement_window_days, int *view_window_days, pinterest_rest_api_adGroupsTargetingAnalyticsGet_conversion_report_time_e conversion_report_time, conversion_report_attribution_type_e attribution_types);


// Update ad groups
//
// Update multiple existing ad groups.
//
ad_group_array_response_t*
AdGroupsAPI_adGroupsUpdate(apiClient_t *apiClient, char *ad_account_id, list_t *ad_group_update_request);


