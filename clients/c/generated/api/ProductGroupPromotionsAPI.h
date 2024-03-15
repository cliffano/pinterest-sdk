#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error.h"
#include "../model/granularity.h"
#include "../model/product_group_analytics_response_inner.h"
#include "../model/product_group_promotion_create_request.h"
#include "../model/product_group_promotion_response.h"
#include "../model/product_group_promotion_update_request.h"
#include "../model/product_group_promotions_list_200_response.h"

// Enum ENTITYSTATUSES for ProductGroupPromotionsAPI_productGroupPromotionsList
typedef enum  { pinterest_rest_api_productGroupPromotionsList_ENTITYSTATUSES_NULL = 0, pinterest_rest_api_productGroupPromotionsList_ENTITYSTATUSES_ACTIVE, pinterest_rest_api_productGroupPromotionsList_ENTITYSTATUSES_PAUSED, pinterest_rest_api_productGroupPromotionsList_ENTITYSTATUSES_ARCHIVED, pinterest_rest_api_productGroupPromotionsList_ENTITYSTATUSES_DRAFT, pinterest_rest_api_productGroupPromotionsList_ENTITYSTATUSES_DELETED_DRAFT } pinterest_rest_api_productGroupPromotionsList_entity_statuses_e;

// Enum ORDER for ProductGroupPromotionsAPI_productGroupPromotionsList
typedef enum  { pinterest_rest_api_productGroupPromotionsList_ORDER_NULL = 0, pinterest_rest_api_productGroupPromotionsList_ORDER_ASCENDING, pinterest_rest_api_productGroupPromotionsList_ORDER_DESCENDING } pinterest_rest_api_productGroupPromotionsList_order_e;

// Enum COLUMNS for ProductGroupPromotionsAPI_productGroupsAnalytics
typedef enum  { pinterest_rest_api_productGroupsAnalytics_COLUMNS_NULL = 0, pinterest_rest_api_productGroupsAnalytics_COLUMNS_SPEND_IN_MICRO_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_PAID_IMPRESSION, pinterest_rest_api_productGroupsAnalytics_COLUMNS_SPEND_IN_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_CPC_IN_MICRO_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_ECPC_IN_MICRO_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_ECPC_IN_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_CTR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_ECTR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_CAMPAIGN_NAME, pinterest_rest_api_productGroupsAnalytics_COLUMNS_PIN_ID, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_ENGAGEMENT, pinterest_rest_api_productGroupsAnalytics_COLUMNS_ENGAGEMENT_1, pinterest_rest_api_productGroupsAnalytics_COLUMNS_ENGAGEMENT_2, pinterest_rest_api_productGroupsAnalytics_COLUMNS_ECPE_IN_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_ENGAGEMENT_RATE, pinterest_rest_api_productGroupsAnalytics_COLUMNS_EENGAGEMENT_RATE, pinterest_rest_api_productGroupsAnalytics_COLUMNS_ECPM_IN_MICRO_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_REPIN_RATE, pinterest_rest_api_productGroupsAnalytics_COLUMNS_CTR_2, pinterest_rest_api_productGroupsAnalytics_COLUMNS_CAMPAIGN_ID, pinterest_rest_api_productGroupsAnalytics_COLUMNS_ADVERTISER_ID, pinterest_rest_api_productGroupsAnalytics_COLUMNS_AD_ACCOUNT_ID, pinterest_rest_api_productGroupsAnalytics_COLUMNS_PIN_PROMOTION_ID, pinterest_rest_api_productGroupsAnalytics_COLUMNS_AD_ID, pinterest_rest_api_productGroupsAnalytics_COLUMNS_AD_GROUP_ID, pinterest_rest_api_productGroupsAnalytics_COLUMNS_CAMPAIGN_ENTITY_STATUS, pinterest_rest_api_productGroupsAnalytics_COLUMNS_CAMPAIGN_OBJECTIVE_TYPE, pinterest_rest_api_productGroupsAnalytics_COLUMNS_CPM_IN_MICRO_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_CPM_IN_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_AD_GROUP_ENTITY_STATUS, pinterest_rest_api_productGroupsAnalytics_COLUMNS_ORDER_LINE_ID, pinterest_rest_api_productGroupsAnalytics_COLUMNS_ORDER_LINE_NAME, pinterest_rest_api_productGroupsAnalytics_COLUMNS_CLICKTHROUGH_1, pinterest_rest_api_productGroupsAnalytics_COLUMNS_REPIN_1, pinterest_rest_api_productGroupsAnalytics_COLUMNS_IMPRESSION_1, pinterest_rest_api_productGroupsAnalytics_COLUMNS_IMPRESSION_1_GROSS, pinterest_rest_api_productGroupsAnalytics_COLUMNS_CLICKTHROUGH_1_GROSS, pinterest_rest_api_productGroupsAnalytics_COLUMNS_OUTBOUND_CLICK_1, pinterest_rest_api_productGroupsAnalytics_COLUMNS_CLICKTHROUGH_2, pinterest_rest_api_productGroupsAnalytics_COLUMNS_REPIN_2, pinterest_rest_api_productGroupsAnalytics_COLUMNS_IMPRESSION_2, pinterest_rest_api_productGroupsAnalytics_COLUMNS_OUTBOUND_CLICK_2, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_CLICKTHROUGH, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_IMPRESSION, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_IMPRESSION_USER, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_IMPRESSION_FREQUENCY, pinterest_rest_api_productGroupsAnalytics_COLUMNS_COST_PER_OUTBOUND_CLICK_IN_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_ENGAGEMENT_SIGNUP, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_ENGAGEMENT_CHECKOUT, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_ENGAGEMENT_LEAD, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_CLICK_SIGNUP, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_CLICK_CHECKOUT, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_CLICK_ADD_TO_CART, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_CLICK_LEAD, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_VIEW_SIGNUP, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_VIEW_CHECKOUT, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_VIEW_ADD_TO_CART, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_VIEW_LEAD, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_CONVERSIONS, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_WEB_SESSIONS, pinterest_rest_api_productGroupsAnalytics_COLUMNS_WEB_SESSIONS_1, pinterest_rest_api_productGroupsAnalytics_COLUMNS_WEB_SESSIONS_2, pinterest_rest_api_productGroupsAnalytics_COLUMNS_CAMPAIGN_LIFETIME_SPEND_CAP, pinterest_rest_api_productGroupsAnalytics_COLUMNS_CAMPAIGN_DAILY_SPEND_CAP, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_PAGE_VISIT, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_SIGNUP, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_CHECKOUT, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_CUSTOM, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_LEAD, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_SIGNUP_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_CUSTOM_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_PAGE_VISIT_COST_PER_ACTION, pinterest_rest_api_productGroupsAnalytics_COLUMNS_PAGE_VISIT_ROAS, pinterest_rest_api_productGroupsAnalytics_COLUMNS_CHECKOUT_ROAS, pinterest_rest_api_productGroupsAnalytics_COLUMNS_CUSTOM_ROAS, pinterest_rest_api_productGroupsAnalytics_COLUMNS_VIDEO_MRC_VIEWS_1, pinterest_rest_api_productGroupsAnalytics_COLUMNS_VIDEO_3SEC_VIEWS_2, pinterest_rest_api_productGroupsAnalytics_COLUMNS_VIDEO_P100_COMPLETE_2, pinterest_rest_api_productGroupsAnalytics_COLUMNS_VIDEO_P0_COMBINED_2, pinterest_rest_api_productGroupsAnalytics_COLUMNS_VIDEO_P25_COMBINED_2, pinterest_rest_api_productGroupsAnalytics_COLUMNS_VIDEO_P50_COMBINED_2, pinterest_rest_api_productGroupsAnalytics_COLUMNS_VIDEO_P75_COMBINED_2, pinterest_rest_api_productGroupsAnalytics_COLUMNS_VIDEO_P95_COMBINED_2, pinterest_rest_api_productGroupsAnalytics_COLUMNS_VIDEO_MRC_VIEWS_2, pinterest_rest_api_productGroupsAnalytics_COLUMNS_VIDEO_LENGTH, pinterest_rest_api_productGroupsAnalytics_COLUMNS_ECPV_IN_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_ECPCV_IN_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_ECPCV_P95_IN_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_VIDEO_3SEC_VIEWS, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_VIDEO_P100_COMPLETE, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_VIDEO_P0_COMBINED, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_VIDEO_P25_COMBINED, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_VIDEO_P50_COMBINED, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_VIDEO_P75_COMBINED, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_VIDEO_P95_COMBINED, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_VIDEO_MRC_VIEWS, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_VIDEO_AVG_WATCHTIME_IN_SECOND, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_REPIN_RATE, pinterest_rest_api_productGroupsAnalytics_COLUMNS_WEB_CHECKOUT_COST_PER_ACTION, pinterest_rest_api_productGroupsAnalytics_COLUMNS_WEB_CHECKOUT_ROAS, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_WEB_CHECKOUT, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_WEB_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_WEB_CLICK_CHECKOUT, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_WEB_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_WEB_ENGAGEMENT_CHECKOUT, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_WEB_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_WEB_VIEW_CHECKOUT, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_WEB_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR, pinterest_rest_api_productGroupsAnalytics_COLUMNS_INAPP_CHECKOUT_COST_PER_ACTION, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_OFFLINE_CHECKOUT, pinterest_rest_api_productGroupsAnalytics_COLUMNS_IDEA_PIN_PRODUCT_TAG_VISIT_1, pinterest_rest_api_productGroupsAnalytics_COLUMNS_IDEA_PIN_PRODUCT_TAG_VISIT_2, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_IDEA_PIN_PRODUCT_TAG_VISIT, pinterest_rest_api_productGroupsAnalytics_COLUMNS_LEADS, pinterest_rest_api_productGroupsAnalytics_COLUMNS_COST_PER_LEAD, pinterest_rest_api_productGroupsAnalytics_COLUMNS_QUIZ_COMPLETED, pinterest_rest_api_productGroupsAnalytics_COLUMNS_QUIZ_COMPLETION_RATE, pinterest_rest_api_productGroupsAnalytics_COLUMNS_SHOWCASE_PIN_CLICKTHROUGH, pinterest_rest_api_productGroupsAnalytics_COLUMNS_SHOWCASE_SUBPAGE_CLICKTHROUGH, pinterest_rest_api_productGroupsAnalytics_COLUMNS_SHOWCASE_SUBPIN_CLICKTHROUGH, pinterest_rest_api_productGroupsAnalytics_COLUMNS_SHOWCASE_SUBPAGE_IMPRESSION, pinterest_rest_api_productGroupsAnalytics_COLUMNS_SHOWCASE_SUBPIN_IMPRESSION, pinterest_rest_api_productGroupsAnalytics_COLUMNS_SHOWCASE_SUBPAGE_SWIPE_LEFT, pinterest_rest_api_productGroupsAnalytics_COLUMNS_SHOWCASE_SUBPAGE_SWIPE_RIGHT, pinterest_rest_api_productGroupsAnalytics_COLUMNS_SHOWCASE_SUBPIN_SWIPE_LEFT, pinterest_rest_api_productGroupsAnalytics_COLUMNS_SHOWCASE_SUBPIN_SWIPE_RIGHT, pinterest_rest_api_productGroupsAnalytics_COLUMNS_SHOWCASE_SUBPAGE_REPIN, pinterest_rest_api_productGroupsAnalytics_COLUMNS_SHOWCASE_SUBPIN_REPIN, pinterest_rest_api_productGroupsAnalytics_COLUMNS_SHOWCASE_SUBPAGE_CLOSEUP, pinterest_rest_api_productGroupsAnalytics_COLUMNS_SHOWCASE_CARD_THUMBNAIL_SWIPE_FORWARD, pinterest_rest_api_productGroupsAnalytics_COLUMNS_SHOWCASE_CARD_THUMBNAIL_SWIPE_BACKWARD, pinterest_rest_api_productGroupsAnalytics_COLUMNS_SHOWCASE_AVERAGE_SUBPAGE_CLOSEUP_PER_SESSION, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_CHECKOUT_CONVERSION_RATE, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_VIEW_CATEGORY_CONVERSION_RATE, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_ADD_TO_CART_CONVERSION_RATE, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_SIGNUP_CONVERSION_RATE, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_PAGE_VISIT_CONVERSION_RATE, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_LEAD_CONVERSION_RATE, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_SEARCH_CONVERSION_RATE, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_WATCH_VIDEO_CONVERSION_RATE, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_UNKNOWN_CONVERSION_RATE, pinterest_rest_api_productGroupsAnalytics_COLUMNS_TOTAL_CUSTOM_CONVERSION_RATE } pinterest_rest_api_productGroupsAnalytics_columns_e;

// Enum  for ProductGroupPromotionsAPI_productGroupsAnalytics
typedef enum  { pinterest_rest_api_productGroupsAnalytics__NULL = 0, pinterest_rest_api_productGroupsAnalytics__TOTAL, pinterest_rest_api_productGroupsAnalytics__DAY, pinterest_rest_api_productGroupsAnalytics__HOUR, pinterest_rest_api_productGroupsAnalytics__WEEK, pinterest_rest_api_productGroupsAnalytics__MONTH } pinterest_rest_api_productGroupsAnalytics_granularity_e;

// Enum CLICKWINDOWDAYS for ProductGroupPromotionsAPI_productGroupsAnalytics
typedef enum  { pinterest_rest_api_productGroupsAnalytics_CLICKWINDOWDAYS_NULL = 0, pinterest_rest_api_productGroupsAnalytics_CLICKWINDOWDAYS__0, pinterest_rest_api_productGroupsAnalytics_CLICKWINDOWDAYS__1, pinterest_rest_api_productGroupsAnalytics_CLICKWINDOWDAYS__7, pinterest_rest_api_productGroupsAnalytics_CLICKWINDOWDAYS__14, pinterest_rest_api_productGroupsAnalytics_CLICKWINDOWDAYS__30, pinterest_rest_api_productGroupsAnalytics_CLICKWINDOWDAYS__60 } pinterest_rest_api_productGroupsAnalytics_click_window_days_e;

// Enum ENGAGEMENTWINDOWDAYS for ProductGroupPromotionsAPI_productGroupsAnalytics
typedef enum  { pinterest_rest_api_productGroupsAnalytics_ENGAGEMENTWINDOWDAYS_NULL = 0, pinterest_rest_api_productGroupsAnalytics_ENGAGEMENTWINDOWDAYS__0, pinterest_rest_api_productGroupsAnalytics_ENGAGEMENTWINDOWDAYS__1, pinterest_rest_api_productGroupsAnalytics_ENGAGEMENTWINDOWDAYS__7, pinterest_rest_api_productGroupsAnalytics_ENGAGEMENTWINDOWDAYS__14, pinterest_rest_api_productGroupsAnalytics_ENGAGEMENTWINDOWDAYS__30, pinterest_rest_api_productGroupsAnalytics_ENGAGEMENTWINDOWDAYS__60 } pinterest_rest_api_productGroupsAnalytics_engagement_window_days_e;

// Enum VIEWWINDOWDAYS for ProductGroupPromotionsAPI_productGroupsAnalytics
typedef enum  { pinterest_rest_api_productGroupsAnalytics_VIEWWINDOWDAYS_NULL = 0, pinterest_rest_api_productGroupsAnalytics_VIEWWINDOWDAYS__0, pinterest_rest_api_productGroupsAnalytics_VIEWWINDOWDAYS__1, pinterest_rest_api_productGroupsAnalytics_VIEWWINDOWDAYS__7, pinterest_rest_api_productGroupsAnalytics_VIEWWINDOWDAYS__14, pinterest_rest_api_productGroupsAnalytics_VIEWWINDOWDAYS__30, pinterest_rest_api_productGroupsAnalytics_VIEWWINDOWDAYS__60 } pinterest_rest_api_productGroupsAnalytics_view_window_days_e;

// Enum CONVERSIONREPORTTIME for ProductGroupPromotionsAPI_productGroupsAnalytics
typedef enum  { pinterest_rest_api_productGroupsAnalytics_CONVERSIONREPORTTIME_NULL = 0, pinterest_rest_api_productGroupsAnalytics_CONVERSIONREPORTTIME_TIME_OF_AD_ACTION, pinterest_rest_api_productGroupsAnalytics_CONVERSIONREPORTTIME_TIME_OF_CONVERSION } pinterest_rest_api_productGroupsAnalytics_conversion_report_time_e;


// Create product group promotions
//
// Add one or more product groups from your catalog to an existing ad group. (Product groups added to an ad group are a 'product group promotion.')
//
product_group_promotion_response_t*
ProductGroupPromotionsAPI_productGroupPromotionsCreate(apiClient_t *apiClient, char *ad_account_id, product_group_promotion_create_request_t *product_group_promotion_create_request);


// Get a product group promotion by id
//
// Get a product group promotion by id
//
product_group_promotion_response_t*
ProductGroupPromotionsAPI_productGroupPromotionsGet(apiClient_t *apiClient, char *ad_account_id, char *product_group_promotion_id);


// Get product group promotions
//
// List existing product group promotions associated with an ad account.  Include either ad_group_id or product_group_promotion_ids in your request.  <b>Note:</b> ad_group_ids and product_group_promotion_ids are mutually exclusive parameters. Only provide one. If multiple options are provided, product_group_promotion_ids takes precedence over ad_group_ids. If none are provided, the endpoint returns an error.
//
product_group_promotions_list_200_response_t*
ProductGroupPromotionsAPI_productGroupPromotionsList(apiClient_t *apiClient, char *ad_account_id, list_t *product_group_promotion_ids, list_t *entity_statuses, char *ad_group_id, int *page_size, pinterest_rest_api_productGroupPromotionsList_order_e order, char *bookmark);


// Update product group promotions
//
// Update multiple existing Product Group Promotions (by product_group_id)
//
product_group_promotion_response_t*
ProductGroupPromotionsAPI_productGroupPromotionsUpdate(apiClient_t *apiClient, char *ad_account_id, product_group_promotion_update_request_t *product_group_promotion_update_request);


// Get product group analytics
//
// Get analytics for the specified product groups in the specified <code>ad_account_id</code>, filtered by the specified options. - The token's user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a>: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
//
list_t*
ProductGroupPromotionsAPI_productGroupsAnalytics(apiClient_t *apiClient, char *ad_account_id, char start_date, char end_date, list_t *product_group_ids, list_t *columns, granularity_e granularity, int *click_window_days, int *engagement_window_days, int *view_window_days, pinterest_rest_api_productGroupsAnalytics_conversion_report_time_e conversion_report_time);


