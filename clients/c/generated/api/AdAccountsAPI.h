#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/ad_account.h"
#include "../model/ad_account_analytics_response_inner.h"
#include "../model/ad_account_create_request.h"
#include "../model/ad_accounts_list_200_response.h"
#include "../model/ads_analytics_create_async_request.h"
#include "../model/ads_analytics_create_async_response.h"
#include "../model/ads_analytics_get_async_response.h"
#include "../model/ads_analytics_targeting_type.h"
#include "../model/conversion_report_attribution_type.h"
#include "../model/create_mmm_report_request.h"
#include "../model/create_mmm_report_response.h"
#include "../model/error.h"
#include "../model/get_mmm_report_response.h"
#include "../model/granularity.h"
#include "../model/metrics_response.h"
#include "../model/templates_list_200_response.h"

// Enum COLUMNS for AdAccountsAPI_adAccountAnalytics
typedef enum  { pinterest_rest_api_adAccountAnalytics_COLUMNS_NULL = 0, pinterest_rest_api_adAccountAnalytics_COLUMNS_SPEND_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_PAID_IMPRESSION, pinterest_rest_api_adAccountAnalytics_COLUMNS_SPEND_IN_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_CPC_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_ECPC_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_ECPC_IN_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_CTR, pinterest_rest_api_adAccountAnalytics_COLUMNS_ECTR, pinterest_rest_api_adAccountAnalytics_COLUMNS_CAMPAIGN_NAME, pinterest_rest_api_adAccountAnalytics_COLUMNS_PIN_ID, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_ENGAGEMENT, pinterest_rest_api_adAccountAnalytics_COLUMNS_ENGAGEMENT_1, pinterest_rest_api_adAccountAnalytics_COLUMNS_ENGAGEMENT_2, pinterest_rest_api_adAccountAnalytics_COLUMNS_ECPE_IN_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_ENGAGEMENT_RATE, pinterest_rest_api_adAccountAnalytics_COLUMNS_EENGAGEMENT_RATE, pinterest_rest_api_adAccountAnalytics_COLUMNS_ECPM_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_REPIN_RATE, pinterest_rest_api_adAccountAnalytics_COLUMNS_CTR_2, pinterest_rest_api_adAccountAnalytics_COLUMNS_CAMPAIGN_ID, pinterest_rest_api_adAccountAnalytics_COLUMNS_ADVERTISER_ID, pinterest_rest_api_adAccountAnalytics_COLUMNS_AD_ACCOUNT_ID, pinterest_rest_api_adAccountAnalytics_COLUMNS_PIN_PROMOTION_ID, pinterest_rest_api_adAccountAnalytics_COLUMNS_AD_ID, pinterest_rest_api_adAccountAnalytics_COLUMNS_AD_GROUP_ID, pinterest_rest_api_adAccountAnalytics_COLUMNS_CAMPAIGN_ENTITY_STATUS, pinterest_rest_api_adAccountAnalytics_COLUMNS_CAMPAIGN_OBJECTIVE_TYPE, pinterest_rest_api_adAccountAnalytics_COLUMNS_CPM_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_CPM_IN_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_AD_GROUP_ENTITY_STATUS, pinterest_rest_api_adAccountAnalytics_COLUMNS_ORDER_LINE_ID, pinterest_rest_api_adAccountAnalytics_COLUMNS_ORDER_LINE_NAME, pinterest_rest_api_adAccountAnalytics_COLUMNS_CLICKTHROUGH_1, pinterest_rest_api_adAccountAnalytics_COLUMNS_REPIN_1, pinterest_rest_api_adAccountAnalytics_COLUMNS_IMPRESSION_1, pinterest_rest_api_adAccountAnalytics_COLUMNS_IMPRESSION_1_GROSS, pinterest_rest_api_adAccountAnalytics_COLUMNS_CLICKTHROUGH_1_GROSS, pinterest_rest_api_adAccountAnalytics_COLUMNS_OUTBOUND_CLICK_1, pinterest_rest_api_adAccountAnalytics_COLUMNS_CLICKTHROUGH_2, pinterest_rest_api_adAccountAnalytics_COLUMNS_REPIN_2, pinterest_rest_api_adAccountAnalytics_COLUMNS_IMPRESSION_2, pinterest_rest_api_adAccountAnalytics_COLUMNS_OUTBOUND_CLICK_2, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_CLICKTHROUGH, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_IMPRESSION, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_IMPRESSION_USER, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_IMPRESSION_FREQUENCY, pinterest_rest_api_adAccountAnalytics_COLUMNS_COST_PER_OUTBOUND_CLICK_IN_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_ENGAGEMENT_SIGNUP, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_ENGAGEMENT_CHECKOUT, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_ENGAGEMENT_LEAD, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_CLICK_SIGNUP, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_CLICK_CHECKOUT, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_CLICK_ADD_TO_CART, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_CLICK_LEAD, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_VIEW_SIGNUP, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_VIEW_CHECKOUT, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_VIEW_ADD_TO_CART, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_VIEW_LEAD, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_CONVERSIONS, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_WEB_SESSIONS, pinterest_rest_api_adAccountAnalytics_COLUMNS_WEB_SESSIONS_1, pinterest_rest_api_adAccountAnalytics_COLUMNS_WEB_SESSIONS_2, pinterest_rest_api_adAccountAnalytics_COLUMNS_CAMPAIGN_LIFETIME_SPEND_CAP, pinterest_rest_api_adAccountAnalytics_COLUMNS_CAMPAIGN_DAILY_SPEND_CAP, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_PAGE_VISIT, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_SIGNUP, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_CHECKOUT, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_CUSTOM, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_LEAD, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_SIGNUP_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_CUSTOM_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_PAGE_VISIT_COST_PER_ACTION, pinterest_rest_api_adAccountAnalytics_COLUMNS_PAGE_VISIT_ROAS, pinterest_rest_api_adAccountAnalytics_COLUMNS_CHECKOUT_ROAS, pinterest_rest_api_adAccountAnalytics_COLUMNS_CUSTOM_ROAS, pinterest_rest_api_adAccountAnalytics_COLUMNS_VIDEO_MRC_VIEWS_1, pinterest_rest_api_adAccountAnalytics_COLUMNS_VIDEO_3SEC_VIEWS_2, pinterest_rest_api_adAccountAnalytics_COLUMNS_VIDEO_P100_COMPLETE_2, pinterest_rest_api_adAccountAnalytics_COLUMNS_VIDEO_P0_COMBINED_2, pinterest_rest_api_adAccountAnalytics_COLUMNS_VIDEO_P25_COMBINED_2, pinterest_rest_api_adAccountAnalytics_COLUMNS_VIDEO_P50_COMBINED_2, pinterest_rest_api_adAccountAnalytics_COLUMNS_VIDEO_P75_COMBINED_2, pinterest_rest_api_adAccountAnalytics_COLUMNS_VIDEO_P95_COMBINED_2, pinterest_rest_api_adAccountAnalytics_COLUMNS_VIDEO_MRC_VIEWS_2, pinterest_rest_api_adAccountAnalytics_COLUMNS_VIDEO_LENGTH, pinterest_rest_api_adAccountAnalytics_COLUMNS_ECPV_IN_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_ECPCV_IN_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_ECPCV_P95_IN_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_VIDEO_3SEC_VIEWS, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_VIDEO_P100_COMPLETE, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_VIDEO_P0_COMBINED, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_VIDEO_P25_COMBINED, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_VIDEO_P50_COMBINED, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_VIDEO_P75_COMBINED, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_VIDEO_P95_COMBINED, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_VIDEO_MRC_VIEWS, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_VIDEO_AVG_WATCHTIME_IN_SECOND, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_REPIN_RATE, pinterest_rest_api_adAccountAnalytics_COLUMNS_WEB_CHECKOUT_COST_PER_ACTION, pinterest_rest_api_adAccountAnalytics_COLUMNS_WEB_CHECKOUT_ROAS, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_WEB_CHECKOUT, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_WEB_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_WEB_CLICK_CHECKOUT, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_WEB_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_WEB_ENGAGEMENT_CHECKOUT, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_WEB_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_WEB_VIEW_CHECKOUT, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_WEB_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountAnalytics_COLUMNS_INAPP_CHECKOUT_COST_PER_ACTION, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_OFFLINE_CHECKOUT, pinterest_rest_api_adAccountAnalytics_COLUMNS_IDEA_PIN_PRODUCT_TAG_VISIT_1, pinterest_rest_api_adAccountAnalytics_COLUMNS_IDEA_PIN_PRODUCT_TAG_VISIT_2, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_IDEA_PIN_PRODUCT_TAG_VISIT, pinterest_rest_api_adAccountAnalytics_COLUMNS_LEADS, pinterest_rest_api_adAccountAnalytics_COLUMNS_COST_PER_LEAD, pinterest_rest_api_adAccountAnalytics_COLUMNS_QUIZ_COMPLETED, pinterest_rest_api_adAccountAnalytics_COLUMNS_QUIZ_COMPLETION_RATE, pinterest_rest_api_adAccountAnalytics_COLUMNS_SHOWCASE_PIN_CLICKTHROUGH, pinterest_rest_api_adAccountAnalytics_COLUMNS_SHOWCASE_SUBPAGE_CLICKTHROUGH, pinterest_rest_api_adAccountAnalytics_COLUMNS_SHOWCASE_SUBPIN_CLICKTHROUGH, pinterest_rest_api_adAccountAnalytics_COLUMNS_SHOWCASE_SUBPAGE_IMPRESSION, pinterest_rest_api_adAccountAnalytics_COLUMNS_SHOWCASE_SUBPIN_IMPRESSION, pinterest_rest_api_adAccountAnalytics_COLUMNS_SHOWCASE_SUBPAGE_SWIPE_LEFT, pinterest_rest_api_adAccountAnalytics_COLUMNS_SHOWCASE_SUBPAGE_SWIPE_RIGHT, pinterest_rest_api_adAccountAnalytics_COLUMNS_SHOWCASE_SUBPIN_SWIPE_LEFT, pinterest_rest_api_adAccountAnalytics_COLUMNS_SHOWCASE_SUBPIN_SWIPE_RIGHT, pinterest_rest_api_adAccountAnalytics_COLUMNS_SHOWCASE_SUBPAGE_REPIN, pinterest_rest_api_adAccountAnalytics_COLUMNS_SHOWCASE_SUBPIN_REPIN, pinterest_rest_api_adAccountAnalytics_COLUMNS_SHOWCASE_SUBPAGE_CLOSEUP, pinterest_rest_api_adAccountAnalytics_COLUMNS_SHOWCASE_CARD_THUMBNAIL_SWIPE_FORWARD, pinterest_rest_api_adAccountAnalytics_COLUMNS_SHOWCASE_CARD_THUMBNAIL_SWIPE_BACKWARD, pinterest_rest_api_adAccountAnalytics_COLUMNS_SHOWCASE_AVERAGE_SUBPAGE_CLOSEUP_PER_SESSION, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_CHECKOUT_CONVERSION_RATE, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_VIEW_CATEGORY_CONVERSION_RATE, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_ADD_TO_CART_CONVERSION_RATE, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_SIGNUP_CONVERSION_RATE, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_PAGE_VISIT_CONVERSION_RATE, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_LEAD_CONVERSION_RATE, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_SEARCH_CONVERSION_RATE, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_WATCH_VIDEO_CONVERSION_RATE, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_UNKNOWN_CONVERSION_RATE, pinterest_rest_api_adAccountAnalytics_COLUMNS_TOTAL_CUSTOM_CONVERSION_RATE } pinterest_rest_api_adAccountAnalytics_columns_e;

// Enum  for AdAccountsAPI_adAccountAnalytics
typedef enum  { pinterest_rest_api_adAccountAnalytics__NULL = 0, pinterest_rest_api_adAccountAnalytics__TOTAL, pinterest_rest_api_adAccountAnalytics__DAY, pinterest_rest_api_adAccountAnalytics__HOUR, pinterest_rest_api_adAccountAnalytics__WEEK, pinterest_rest_api_adAccountAnalytics__MONTH } pinterest_rest_api_adAccountAnalytics_granularity_e;

// Enum CLICKWINDOWDAYS for AdAccountsAPI_adAccountAnalytics
typedef enum  { pinterest_rest_api_adAccountAnalytics_CLICKWINDOWDAYS_NULL = 0, pinterest_rest_api_adAccountAnalytics_CLICKWINDOWDAYS__0, pinterest_rest_api_adAccountAnalytics_CLICKWINDOWDAYS__1, pinterest_rest_api_adAccountAnalytics_CLICKWINDOWDAYS__7, pinterest_rest_api_adAccountAnalytics_CLICKWINDOWDAYS__14, pinterest_rest_api_adAccountAnalytics_CLICKWINDOWDAYS__30, pinterest_rest_api_adAccountAnalytics_CLICKWINDOWDAYS__60 } pinterest_rest_api_adAccountAnalytics_click_window_days_e;

// Enum ENGAGEMENTWINDOWDAYS for AdAccountsAPI_adAccountAnalytics
typedef enum  { pinterest_rest_api_adAccountAnalytics_ENGAGEMENTWINDOWDAYS_NULL = 0, pinterest_rest_api_adAccountAnalytics_ENGAGEMENTWINDOWDAYS__0, pinterest_rest_api_adAccountAnalytics_ENGAGEMENTWINDOWDAYS__1, pinterest_rest_api_adAccountAnalytics_ENGAGEMENTWINDOWDAYS__7, pinterest_rest_api_adAccountAnalytics_ENGAGEMENTWINDOWDAYS__14, pinterest_rest_api_adAccountAnalytics_ENGAGEMENTWINDOWDAYS__30, pinterest_rest_api_adAccountAnalytics_ENGAGEMENTWINDOWDAYS__60 } pinterest_rest_api_adAccountAnalytics_engagement_window_days_e;

// Enum VIEWWINDOWDAYS for AdAccountsAPI_adAccountAnalytics
typedef enum  { pinterest_rest_api_adAccountAnalytics_VIEWWINDOWDAYS_NULL = 0, pinterest_rest_api_adAccountAnalytics_VIEWWINDOWDAYS__0, pinterest_rest_api_adAccountAnalytics_VIEWWINDOWDAYS__1, pinterest_rest_api_adAccountAnalytics_VIEWWINDOWDAYS__7, pinterest_rest_api_adAccountAnalytics_VIEWWINDOWDAYS__14, pinterest_rest_api_adAccountAnalytics_VIEWWINDOWDAYS__30, pinterest_rest_api_adAccountAnalytics_VIEWWINDOWDAYS__60 } pinterest_rest_api_adAccountAnalytics_view_window_days_e;

// Enum CONVERSIONREPORTTIME for AdAccountsAPI_adAccountAnalytics
typedef enum  { pinterest_rest_api_adAccountAnalytics_CONVERSIONREPORTTIME_NULL = 0, pinterest_rest_api_adAccountAnalytics_CONVERSIONREPORTTIME_TIME_OF_AD_ACTION, pinterest_rest_api_adAccountAnalytics_CONVERSIONREPORTTIME_TIME_OF_CONVERSION } pinterest_rest_api_adAccountAnalytics_conversion_report_time_e;

// Enum TARGETINGTYPES for AdAccountsAPI_adAccountTargetingAnalyticsGet
typedef enum  { pinterest_rest_api_adAccountTargetingAnalyticsGet_TARGETINGTYPES_NULL = 0, pinterest_rest_api_adAccountTargetingAnalyticsGet_TARGETINGTYPES_KEYWORD, pinterest_rest_api_adAccountTargetingAnalyticsGet_TARGETINGTYPES_APPTYPE, pinterest_rest_api_adAccountTargetingAnalyticsGet_TARGETINGTYPES_GENDER, pinterest_rest_api_adAccountTargetingAnalyticsGet_TARGETINGTYPES_LOCATION, pinterest_rest_api_adAccountTargetingAnalyticsGet_TARGETINGTYPES_PLACEMENT, pinterest_rest_api_adAccountTargetingAnalyticsGet_TARGETINGTYPES_COUNTRY, pinterest_rest_api_adAccountTargetingAnalyticsGet_TARGETINGTYPES_TARGETED_INTEREST, pinterest_rest_api_adAccountTargetingAnalyticsGet_TARGETINGTYPES_PINNER_INTEREST, pinterest_rest_api_adAccountTargetingAnalyticsGet_TARGETINGTYPES_AUDIENCE_INCLUDE, pinterest_rest_api_adAccountTargetingAnalyticsGet_TARGETINGTYPES_GEO, pinterest_rest_api_adAccountTargetingAnalyticsGet_TARGETINGTYPES_AGE_BUCKET, pinterest_rest_api_adAccountTargetingAnalyticsGet_TARGETINGTYPES_REGION } pinterest_rest_api_adAccountTargetingAnalyticsGet_targeting_types_e;

// Enum COLUMNS for AdAccountsAPI_adAccountTargetingAnalyticsGet
typedef enum  { pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_NULL = 0, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_SPEND_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_PAID_IMPRESSION, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_SPEND_IN_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_CPC_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_ECPC_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_ECPC_IN_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_CTR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_ECTR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_CAMPAIGN_NAME, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_PIN_ID, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_ENGAGEMENT, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_ENGAGEMENT_1, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_ENGAGEMENT_2, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_ECPE_IN_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_ENGAGEMENT_RATE, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_EENGAGEMENT_RATE, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_ECPM_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_REPIN_RATE, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_CTR_2, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_CAMPAIGN_ID, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_ADVERTISER_ID, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_AD_ACCOUNT_ID, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_PIN_PROMOTION_ID, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_AD_ID, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_AD_GROUP_ID, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_CAMPAIGN_ENTITY_STATUS, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_CAMPAIGN_OBJECTIVE_TYPE, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_CPM_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_CPM_IN_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_AD_GROUP_ENTITY_STATUS, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_ORDER_LINE_ID, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_ORDER_LINE_NAME, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_CLICKTHROUGH_1, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_REPIN_1, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_IMPRESSION_1, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_IMPRESSION_1_GROSS, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_CLICKTHROUGH_1_GROSS, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_OUTBOUND_CLICK_1, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_CLICKTHROUGH_2, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_REPIN_2, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_IMPRESSION_2, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_OUTBOUND_CLICK_2, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_CLICKTHROUGH, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_IMPRESSION, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_IMPRESSION_USER, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_IMPRESSION_FREQUENCY, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_COST_PER_OUTBOUND_CLICK_IN_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_ENGAGEMENT_SIGNUP, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_ENGAGEMENT_CHECKOUT, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_ENGAGEMENT_LEAD, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_CLICK_SIGNUP, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_CLICK_CHECKOUT, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_CLICK_ADD_TO_CART, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_CLICK_LEAD, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_VIEW_SIGNUP, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_VIEW_CHECKOUT, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_VIEW_ADD_TO_CART, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_VIEW_LEAD, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_CONVERSIONS, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_WEB_SESSIONS, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_WEB_SESSIONS_1, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_WEB_SESSIONS_2, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_CAMPAIGN_LIFETIME_SPEND_CAP, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_CAMPAIGN_DAILY_SPEND_CAP, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_PAGE_VISIT, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_SIGNUP, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_CHECKOUT, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_CUSTOM, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_LEAD, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_SIGNUP_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_CUSTOM_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_PAGE_VISIT_COST_PER_ACTION, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_PAGE_VISIT_ROAS, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_CHECKOUT_ROAS, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_CUSTOM_ROAS, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_VIDEO_MRC_VIEWS_1, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_VIDEO_3SEC_VIEWS_2, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_VIDEO_P100_COMPLETE_2, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_VIDEO_P0_COMBINED_2, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_VIDEO_P25_COMBINED_2, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_VIDEO_P50_COMBINED_2, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_VIDEO_P75_COMBINED_2, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_VIDEO_P95_COMBINED_2, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_VIDEO_MRC_VIEWS_2, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_VIDEO_LENGTH, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_ECPV_IN_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_ECPCV_IN_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_ECPCV_P95_IN_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_VIDEO_3SEC_VIEWS, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_VIDEO_P100_COMPLETE, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_VIDEO_P0_COMBINED, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_VIDEO_P25_COMBINED, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_VIDEO_P50_COMBINED, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_VIDEO_P75_COMBINED, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_VIDEO_P95_COMBINED, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_VIDEO_MRC_VIEWS, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_VIDEO_AVG_WATCHTIME_IN_SECOND, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_REPIN_RATE, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_WEB_CHECKOUT_COST_PER_ACTION, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_WEB_CHECKOUT_ROAS, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_WEB_CHECKOUT, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_WEB_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_WEB_CLICK_CHECKOUT, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_WEB_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_WEB_ENGAGEMENT_CHECKOUT, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_WEB_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_WEB_VIEW_CHECKOUT, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_WEB_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_INAPP_CHECKOUT_COST_PER_ACTION, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_OFFLINE_CHECKOUT, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_IDEA_PIN_PRODUCT_TAG_VISIT_1, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_IDEA_PIN_PRODUCT_TAG_VISIT_2, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_IDEA_PIN_PRODUCT_TAG_VISIT, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_LEADS, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_COST_PER_LEAD, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_QUIZ_COMPLETED, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_QUIZ_COMPLETION_RATE, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_SHOWCASE_PIN_CLICKTHROUGH, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_SHOWCASE_SUBPAGE_CLICKTHROUGH, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_SHOWCASE_SUBPIN_CLICKTHROUGH, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_SHOWCASE_SUBPAGE_IMPRESSION, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_SHOWCASE_SUBPIN_IMPRESSION, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_SHOWCASE_SUBPAGE_SWIPE_LEFT, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_SHOWCASE_SUBPAGE_SWIPE_RIGHT, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_SHOWCASE_SUBPIN_SWIPE_LEFT, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_SHOWCASE_SUBPIN_SWIPE_RIGHT, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_SHOWCASE_SUBPAGE_REPIN, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_SHOWCASE_SUBPIN_REPIN, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_SHOWCASE_SUBPAGE_CLOSEUP, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_SHOWCASE_CARD_THUMBNAIL_SWIPE_FORWARD, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_SHOWCASE_CARD_THUMBNAIL_SWIPE_BACKWARD, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_SHOWCASE_AVERAGE_SUBPAGE_CLOSEUP_PER_SESSION, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_CHECKOUT_CONVERSION_RATE, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_VIEW_CATEGORY_CONVERSION_RATE, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_ADD_TO_CART_CONVERSION_RATE, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_SIGNUP_CONVERSION_RATE, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_PAGE_VISIT_CONVERSION_RATE, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_LEAD_CONVERSION_RATE, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_SEARCH_CONVERSION_RATE, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_WATCH_VIDEO_CONVERSION_RATE, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_UNKNOWN_CONVERSION_RATE, pinterest_rest_api_adAccountTargetingAnalyticsGet_COLUMNS_TOTAL_CUSTOM_CONVERSION_RATE } pinterest_rest_api_adAccountTargetingAnalyticsGet_columns_e;

// Enum  for AdAccountsAPI_adAccountTargetingAnalyticsGet
typedef enum  { pinterest_rest_api_adAccountTargetingAnalyticsGet__NULL = 0, pinterest_rest_api_adAccountTargetingAnalyticsGet__TOTAL, pinterest_rest_api_adAccountTargetingAnalyticsGet__DAY, pinterest_rest_api_adAccountTargetingAnalyticsGet__HOUR, pinterest_rest_api_adAccountTargetingAnalyticsGet__WEEK, pinterest_rest_api_adAccountTargetingAnalyticsGet__MONTH } pinterest_rest_api_adAccountTargetingAnalyticsGet_granularity_e;

// Enum CLICKWINDOWDAYS for AdAccountsAPI_adAccountTargetingAnalyticsGet
typedef enum  { pinterest_rest_api_adAccountTargetingAnalyticsGet_CLICKWINDOWDAYS_NULL = 0, pinterest_rest_api_adAccountTargetingAnalyticsGet_CLICKWINDOWDAYS__0, pinterest_rest_api_adAccountTargetingAnalyticsGet_CLICKWINDOWDAYS__1, pinterest_rest_api_adAccountTargetingAnalyticsGet_CLICKWINDOWDAYS__7, pinterest_rest_api_adAccountTargetingAnalyticsGet_CLICKWINDOWDAYS__14, pinterest_rest_api_adAccountTargetingAnalyticsGet_CLICKWINDOWDAYS__30, pinterest_rest_api_adAccountTargetingAnalyticsGet_CLICKWINDOWDAYS__60 } pinterest_rest_api_adAccountTargetingAnalyticsGet_click_window_days_e;

// Enum ENGAGEMENTWINDOWDAYS for AdAccountsAPI_adAccountTargetingAnalyticsGet
typedef enum  { pinterest_rest_api_adAccountTargetingAnalyticsGet_ENGAGEMENTWINDOWDAYS_NULL = 0, pinterest_rest_api_adAccountTargetingAnalyticsGet_ENGAGEMENTWINDOWDAYS__0, pinterest_rest_api_adAccountTargetingAnalyticsGet_ENGAGEMENTWINDOWDAYS__1, pinterest_rest_api_adAccountTargetingAnalyticsGet_ENGAGEMENTWINDOWDAYS__7, pinterest_rest_api_adAccountTargetingAnalyticsGet_ENGAGEMENTWINDOWDAYS__14, pinterest_rest_api_adAccountTargetingAnalyticsGet_ENGAGEMENTWINDOWDAYS__30, pinterest_rest_api_adAccountTargetingAnalyticsGet_ENGAGEMENTWINDOWDAYS__60 } pinterest_rest_api_adAccountTargetingAnalyticsGet_engagement_window_days_e;

// Enum VIEWWINDOWDAYS for AdAccountsAPI_adAccountTargetingAnalyticsGet
typedef enum  { pinterest_rest_api_adAccountTargetingAnalyticsGet_VIEWWINDOWDAYS_NULL = 0, pinterest_rest_api_adAccountTargetingAnalyticsGet_VIEWWINDOWDAYS__0, pinterest_rest_api_adAccountTargetingAnalyticsGet_VIEWWINDOWDAYS__1, pinterest_rest_api_adAccountTargetingAnalyticsGet_VIEWWINDOWDAYS__7, pinterest_rest_api_adAccountTargetingAnalyticsGet_VIEWWINDOWDAYS__14, pinterest_rest_api_adAccountTargetingAnalyticsGet_VIEWWINDOWDAYS__30, pinterest_rest_api_adAccountTargetingAnalyticsGet_VIEWWINDOWDAYS__60 } pinterest_rest_api_adAccountTargetingAnalyticsGet_view_window_days_e;

// Enum CONVERSIONREPORTTIME for AdAccountsAPI_adAccountTargetingAnalyticsGet
typedef enum  { pinterest_rest_api_adAccountTargetingAnalyticsGet_CONVERSIONREPORTTIME_NULL = 0, pinterest_rest_api_adAccountTargetingAnalyticsGet_CONVERSIONREPORTTIME_TIME_OF_AD_ACTION, pinterest_rest_api_adAccountTargetingAnalyticsGet_CONVERSIONREPORTTIME_TIME_OF_CONVERSION } pinterest_rest_api_adAccountTargetingAnalyticsGet_conversion_report_time_e;

// Enum  for AdAccountsAPI_adAccountTargetingAnalyticsGet
typedef enum  { pinterest_rest_api_adAccountTargetingAnalyticsGet__NULL = 0, pinterest_rest_api_adAccountTargetingAnalyticsGet__INDIVIDUAL, pinterest_rest_api_adAccountTargetingAnalyticsGet__HOUSEHOLD } pinterest_rest_api_adAccountTargetingAnalyticsGet_attribution_types_e;

// Enum  for AdAccountsAPI_analyticsCreateTemplateReport
typedef enum  { pinterest_rest_api_analyticsCreateTemplateReport__NULL = 0, pinterest_rest_api_analyticsCreateTemplateReport__TOTAL, pinterest_rest_api_analyticsCreateTemplateReport__DAY, pinterest_rest_api_analyticsCreateTemplateReport__HOUR, pinterest_rest_api_analyticsCreateTemplateReport__WEEK, pinterest_rest_api_analyticsCreateTemplateReport__MONTH } pinterest_rest_api_analyticsCreateTemplateReport_granularity_e;

// Enum ORDER for AdAccountsAPI_templatesList
typedef enum  { pinterest_rest_api_templatesList_ORDER_NULL = 0, pinterest_rest_api_templatesList_ORDER_ASCENDING, pinterest_rest_api_templatesList_ORDER_DESCENDING } pinterest_rest_api_templatesList_order_e;


// Get ad account analytics
//
// Get analytics for the specified <code>ad_account_id</code>, filtered by the specified options. - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time.
//
list_t*
AdAccountsAPI_adAccountAnalytics(apiClient_t *apiClient, char *ad_account_id, char start_date, char end_date, list_t *columns, granularity_e granularity, int *click_window_days, int *engagement_window_days, int *view_window_days, pinterest_rest_api_adAccountAnalytics_conversion_report_time_e conversion_report_time);


// Get targeting analytics for an ad account
//
// Get targeting analytics for an ad account. For the requested account and metrics, the response will include the requested metric information (e.g. SPEND_IN_DOLLAR) for the requested target type (e.g. \"age_bucket\") for applicable values (e.g. \"45-49\"). <p/> - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
//
metrics_response_t*
AdAccountsAPI_adAccountTargetingAnalyticsGet(apiClient_t *apiClient, char *ad_account_id, char start_date, char end_date, list_t *targeting_types, list_t *columns, granularity_e granularity, int *click_window_days, int *engagement_window_days, int *view_window_days, pinterest_rest_api_adAccountTargetingAnalyticsGet_conversion_report_time_e conversion_report_time, conversion_report_attribution_type_e attribution_types);


// Create ad account
//
// Create a new ad account. Different ad accounts can support different currencies, payment methods, etc. An ad account is needed to create campaigns, ad groups, and ads; other accounts (your employees or partners) can be assigned business access and appropriate roles to access an ad account. <p/> You can set up up to 50 ad accounts per user. (The user must have a business account to create an ad account.) <p/> For more, see <a class=\"reference external\" href=\"https://help.pinterest.com/en/business/article/create-an-advertiser-account\">Create an advertiser account</a>.
//
ad_account_t*
AdAccountsAPI_adAccountsCreate(apiClient_t *apiClient, ad_account_create_request_t *ad_account_create_request);


// Get ad account
//
// Get an ad account
//
ad_account_t*
AdAccountsAPI_adAccountsGet(apiClient_t *apiClient, char *ad_account_id);


// List ad accounts
//
// Get a list of the ad_accounts that the \"operation user_account\" has access to. - This includes ad_accounts they own and ad_accounts that are owned by others who have granted them <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>.
//
ad_accounts_list_200_response_t*
AdAccountsAPI_adAccountsList(apiClient_t *apiClient, char *bookmark, int *page_size, int *include_shared_accounts);


// Create a request for a Marketing Mix Modeling (MMM) report
//
// This creates an asynchronous mmm report based on the given request. It returns a token that you can use to download the report when it is ready. NOTE: An additional limit of 5 queries per minute per advertiser applies to this endpoint while it's in beta release.
//
create_mmm_report_response_t*
AdAccountsAPI_analyticsCreateMmmReport(apiClient_t *apiClient, char *ad_account_id, create_mmm_report_request_t *create_mmm_report_request);


// Create async request for an account analytics report
//
// This returns a token that you can use to download the report when it is ready. Note that this endpoint requires the parameters to be passed as JSON-formatted in the request body. This endpoint does not support URL query parameters. - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 914 days before the current date in UTC time and the max time range supported is 186 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days. - If level is PRODUCT_ITEM, the furthest back you can are allowed to pull data is 92 days before the current date in UTC time and the max time range supported is 31 days. - If level is PRODUCT_ITEM, ad_ids and ad_statuses parameters are not allowed. Any columns related to pin promotion and ad is not allowed either.
//
ads_analytics_create_async_response_t*
AdAccountsAPI_analyticsCreateReport(apiClient_t *apiClient, char *ad_account_id, ads_analytics_create_async_request_t *ads_analytics_create_async_request);


// Create async request for an analytics report using a template
//
// This takes a template ID and an optional custom timeframe and constructs an asynchronous report based on the template. It returns a token that you can use to download the report when it is ready.
//
ads_analytics_create_async_response_t*
AdAccountsAPI_analyticsCreateTemplateReport(apiClient_t *apiClient, char *ad_account_id, char *template_id, char start_date, char end_date, granularity_e granularity);


// Get advertiser Marketing Mix Modeling (MMM) report.
//
// Get an mmm report for an ad account. This returns a URL to an mmm metrics report given a token returned from the create mmm report endpoint.
//
get_mmm_report_response_t*
AdAccountsAPI_analyticsGetMmmReport(apiClient_t *apiClient, char *ad_account_id, char *token);


// Get the account analytics report created by the async call
//
// This returns a URL to an analytics report given a token returned from the post request report creation call. You can use the URL to download the report. The link is valid for five minutes and the report is valid for one hour. - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager.
//
ads_analytics_get_async_response_t*
AdAccountsAPI_analyticsGetReport(apiClient_t *apiClient, char *ad_account_id, char *token);


// Delete ads data for ad account in API Sandbox
//
// Delete an ad account and all the ads data associated with that account.  A string message is returned indicating the status of the delete operation.  Note: This endpoint is only allowed in the Pinterest API Sandbox (https://api-sandbox.pinterest.com/v5).  Go to https://developers.pinterest.com/docs/dev-tools/sandbox/ for more information.
//
char*
AdAccountsAPI_sandboxDelete(apiClient_t *apiClient, char *ad_account_id);


// List templates
//
// Gets all Templates associated with an ad account ID.
//
templates_list_200_response_t*
AdAccountsAPI_templatesList(apiClient_t *apiClient, char *ad_account_id, int *page_size, pinterest_rest_api_templatesList_order_e order, char *bookmark);

