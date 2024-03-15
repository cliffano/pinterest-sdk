-module(openapi_reporting_column_async).

-include("openapi.hrl").

-export([openapi_reporting_column_async/0]).

-export_type([openapi_reporting_column_async/0]).

-type openapi_reporting_column_async() ::
  binary().

openapi_reporting_column_async() ->
  elements([<<"SPEND_IN_MICRO_DOLLAR">>, <<"PAID_IMPRESSION">>, <<"SPEND_IN_DOLLAR">>, <<"CPC_IN_MICRO_DOLLAR">>, <<"ECPC_IN_MICRO_DOLLAR">>, <<"ECPC_IN_DOLLAR">>, <<"CTR">>, <<"ECTR">>, <<"OUTBOUND_CTR">>, <<"COST_PER_OUTBOUND_CLICK">>, <<"CAMPAIGN_NAME">>, <<"CAMPAIGN_STATUS">>, <<"PIN_PROMOTION_STATUS">>, <<"AD_STATUS">>, <<"PIN_ID">>, <<"TOTAL_ENGAGEMENT">>, <<"ENGAGEMENT_1">>, <<"ENGAGEMENT_2">>, <<"ECPE_IN_DOLLAR">>, <<"ENGAGEMENT_RATE">>, <<"EENGAGEMENT_RATE">>, <<"ECPM_IN_MICRO_DOLLAR">>, <<"REPIN_RATE">>, <<"CTR_2">>, <<"CAMPAIGN_ID">>, <<"ADVERTISER_ID">>, <<"AD_ACCOUNT_ID">>, <<"PIN_PROMOTION_ID">>, <<"AD_ID">>, <<"AD_GROUP_ID">>, <<"CAMPAIGN_ENTITY_STATUS">>, <<"CAMPAIGN_MANAGED_STATUS">>, <<"CAMPAIGN_OBJECTIVE_TYPE">>, <<"CPM_IN_MICRO_DOLLAR">>, <<"CPM_IN_DOLLAR">>, <<"AD_GROUP_NAME">>, <<"AD_GROUP_STATUS">>, <<"AD_GROUP_ENTITY_STATUS">>, <<"PRODUCT_GROUP_ID">>, <<"PRODUCT_GROUP_STATUS">>, <<"ORDER_LINE_ID">>, <<"ORDER_LINE_NAME">>, <<"CLICKTHROUGH_1">>, <<"REPIN_1">>, <<"IMPRESSION_1">>, <<"IMPRESSION_1_GROSS">>, <<"CLICKTHROUGH_1_GROSS">>, <<"OUTBOUND_CLICK_1">>, <<"CLICKTHROUGH_2">>, <<"REPIN_2">>, <<"IMPRESSION_2">>, <<"OUTBOUND_CLICK_2">>, <<"TOTAL_CLICKTHROUGH">>, <<"TOTAL_IMPRESSION">>, <<"TOTAL_IMPRESSION_USER">>, <<"TOTAL_IMPRESSION_FREQUENCY">>, <<"COST_PER_OUTBOUND_CLICK_IN_DOLLAR">>, <<"TOTAL_ENGAGEMENT_PAGE_VISIT">>, <<"TOTAL_ENGAGEMENT_SIGNUP">>, <<"TOTAL_ENGAGEMENT_CHECKOUT">>, <<"TOTAL_ENGAGEMENT_CUSTOM">>, <<"TOTAL_ENGAGEMENT_ADD_TO_CART">>, <<"TOTAL_ENGAGEMENT_LEAD">>, <<"TOTAL_ENGAGEMENT_SEARCH">>, <<"TOTAL_ENGAGEMENT_WATCH_VIDEO">>, <<"TOTAL_ENGAGEMENT_VIEW_CATEGORY">>, <<"TOTAL_ENGAGEMENT_APP_INSTALL">>, <<"TOTAL_ENGAGEMENT_UNKNOWN">>, <<"TOTAL_CLICK_PAGE_VISIT">>, <<"TOTAL_CLICK_SIGNUP">>, <<"TOTAL_CLICK_CHECKOUT">>, <<"TOTAL_CLICK_CUSTOM">>, <<"TOTAL_CLICK_ADD_TO_CART">>, <<"TOTAL_CLICK_LEAD">>, <<"TOTAL_CLICK_SEARCH">>, <<"TOTAL_CLICK_WATCH_VIDEO">>, <<"TOTAL_CLICK_VIEW_CATEGORY">>, <<"TOTAL_CLICK_APP_INSTALL">>, <<"TOTAL_CLICK_UNKNOWN">>, <<"TOTAL_VIEW_PAGE_VISIT">>, <<"TOTAL_VIEW_SIGNUP">>, <<"TOTAL_VIEW_CHECKOUT">>, <<"TOTAL_VIEW_CUSTOM">>, <<"TOTAL_VIEW_ADD_TO_CART">>, <<"TOTAL_VIEW_LEAD">>, <<"TOTAL_VIEW_SEARCH">>, <<"TOTAL_VIEW_WATCH_VIDEO">>, <<"TOTAL_VIEW_VIEW_CATEGORY">>, <<"TOTAL_VIEW_APP_INSTALL">>, <<"TOTAL_VIEW_UNKNOWN">>, <<"TOTAL_CONVERSIONS">>, <<"TOTAL_ENGAGEMENT_PAGE_VISIT_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_ENGAGEMENT_CUSTOM_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_ENGAGEMENT_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_ENGAGEMENT_LEAD_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_ENGAGEMENT_SEARCH_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_ENGAGEMENT_WATCH_VIDEO_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_ENGAGEMENT_VIEW_CATEGORY_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_ENGAGEMENT_APP_INSTALL_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_ENGAGEMENT_UNKNOWN_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_CLICK_PAGE_VISIT_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_CLICK_CUSTOM_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_CLICK_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_CLICK_LEAD_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_CLICK_SEARCH_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_CLICK_WATCH_VIDEO_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_CLICK_VIEW_CATEGORY_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_CLICK_APP_INSTALL_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_CLICK_UNKNOWN_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_VIEW_PAGE_VISIT_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_VIEW_CUSTOM_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_VIEW_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_VIEW_LEAD_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_VIEW_SEARCH_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_VIEW_WATCH_VIDEO_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_VIEW_VIEW_CATEGORY_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_VIEW_APP_INSTALL_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_VIEW_UNKNOWN_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_CONVERSIONS_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_ENGAGEMENT_PAGE_VISIT_QUANTITY">>, <<"TOTAL_ENGAGEMENT_SIGNUP_QUANTITY">>, <<"TOTAL_ENGAGEMENT_CHECKOUT_QUANTITY">>, <<"TOTAL_ENGAGEMENT_CUSTOM_QUANTITY">>, <<"TOTAL_ENGAGEMENT_ADD_TO_CART_QUANTITY">>, <<"TOTAL_ENGAGEMENT_LEAD_QUANTITY">>, <<"TOTAL_ENGAGEMENT_SEARCH_QUANTITY">>, <<"TOTAL_ENGAGEMENT_WATCH_VIDEO_QUANTITY">>, <<"TOTAL_ENGAGEMENT_VIEW_CATEGORY_QUANTITY">>, <<"TOTAL_ENGAGEMENT_UNKNOWN_QUANTITY">>, <<"TOTAL_CLICK_PAGE_VISIT_QUANTITY">>, <<"TOTAL_CLICK_SIGNUP_QUANTITY">>, <<"TOTAL_CLICK_CHECKOUT_QUANTITY">>, <<"TOTAL_CLICK_CUSTOM_QUANTITY">>, <<"TOTAL_CLICK_ADD_TO_CART_QUANTITY">>, <<"TOTAL_CLICK_LEAD_QUANTITY">>, <<"TOTAL_CLICK_SEARCH_QUANTITY">>, <<"TOTAL_CLICK_WATCH_VIDEO_QUANTITY">>, <<"TOTAL_CLICK_VIEW_CATEGORY_QUANTITY">>, <<"TOTAL_CLICK_UNKNOWN_QUANTITY">>, <<"TOTAL_VIEW_PAGE_VISIT_QUANTITY">>, <<"TOTAL_VIEW_SIGNUP_QUANTITY">>, <<"TOTAL_VIEW_CHECKOUT_QUANTITY">>, <<"TOTAL_VIEW_CUSTOM_QUANTITY">>, <<"TOTAL_VIEW_ADD_TO_CART_QUANTITY">>, <<"TOTAL_VIEW_LEAD_QUANTITY">>, <<"TOTAL_VIEW_SEARCH_QUANTITY">>, <<"TOTAL_VIEW_WATCH_VIDEO_QUANTITY">>, <<"TOTAL_VIEW_VIEW_CATEGORY_QUANTITY">>, <<"TOTAL_VIEW_UNKNOWN_QUANTITY">>, <<"TOTAL_CONVERSIONS_QUANTITY">>, <<"TOTAL_WEB_SESSIONS">>, <<"WEB_SESSIONS_1">>, <<"WEB_SESSIONS_2">>, <<"ONSITE_CHECKOUTS_1">>, <<"PIN_PROMOTION_NAME">>, <<"AD_NAME">>, <<"CAMPAIGN_LIFETIME_SPEND_CAP">>, <<"CAMPAIGN_DAILY_SPEND_CAP">>, <<"TOTAL_PAGE_VISIT_DESKTOP_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_PAGE_VISIT_DESKTOP_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_PAGE_VISIT_DESKTOP_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_PAGE_VISIT_MOBILE_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_PAGE_VISIT_MOBILE_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_PAGE_VISIT_MOBILE_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_PAGE_VISIT_TABLET_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_PAGE_VISIT_TABLET_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_PAGE_VISIT_TABLET_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_SIGNUP_DESKTOP_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_SIGNUP_DESKTOP_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_SIGNUP_DESKTOP_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_SIGNUP_MOBILE_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_SIGNUP_MOBILE_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_SIGNUP_MOBILE_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_SIGNUP_TABLET_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_SIGNUP_TABLET_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_SIGNUP_TABLET_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_CHECKOUT_DESKTOP_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_CHECKOUT_DESKTOP_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_CHECKOUT_DESKTOP_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_CHECKOUT_MOBILE_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_CHECKOUT_MOBILE_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_CHECKOUT_MOBILE_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_CHECKOUT_TABLET_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_CHECKOUT_TABLET_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_CHECKOUT_TABLET_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_CUSTOM_DESKTOP_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_CUSTOM_DESKTOP_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_CUSTOM_DESKTOP_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_CUSTOM_MOBILE_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_CUSTOM_MOBILE_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_CUSTOM_MOBILE_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_CUSTOM_TABLET_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_CUSTOM_TABLET_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_CUSTOM_TABLET_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_ADD_TO_CART_DESKTOP_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_ADD_TO_CART_DESKTOP_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_ADD_TO_CART_DESKTOP_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_ADD_TO_CART_MOBILE_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_ADD_TO_CART_MOBILE_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_ADD_TO_CART_MOBILE_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_ADD_TO_CART_TABLET_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_ADD_TO_CART_TABLET_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_ADD_TO_CART_TABLET_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_LEAD_DESKTOP_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_LEAD_DESKTOP_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_LEAD_DESKTOP_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_LEAD_MOBILE_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_LEAD_MOBILE_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_LEAD_MOBILE_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_LEAD_TABLET_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_LEAD_TABLET_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_LEAD_TABLET_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_SEARCH_DESKTOP_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_SEARCH_DESKTOP_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_SEARCH_DESKTOP_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_SEARCH_MOBILE_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_SEARCH_MOBILE_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_SEARCH_MOBILE_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_SEARCH_TABLET_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_SEARCH_TABLET_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_SEARCH_TABLET_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_WATCH_VIDEO_DESKTOP_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_WATCH_VIDEO_DESKTOP_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_WATCH_VIDEO_DESKTOP_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_WATCH_VIDEO_MOBILE_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_WATCH_VIDEO_MOBILE_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_WATCH_VIDEO_MOBILE_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_WATCH_VIDEO_TABLET_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_WATCH_VIDEO_TABLET_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_WATCH_VIDEO_TABLET_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_VIEW_CATEGORY_DESKTOP_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_VIEW_CATEGORY_DESKTOP_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_VIEW_CATEGORY_DESKTOP_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_VIEW_CATEGORY_MOBILE_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_VIEW_CATEGORY_MOBILE_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_VIEW_CATEGORY_MOBILE_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_VIEW_CATEGORY_TABLET_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_VIEW_CATEGORY_TABLET_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_VIEW_CATEGORY_TABLET_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_APP_INSTALL_DESKTOP_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_APP_INSTALL_DESKTOP_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_APP_INSTALL_DESKTOP_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_APP_INSTALL_MOBILE_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_APP_INSTALL_MOBILE_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_APP_INSTALL_MOBILE_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_APP_INSTALL_TABLET_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_APP_INSTALL_TABLET_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_APP_INSTALL_TABLET_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_UNKNOWN_DESKTOP_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_UNKNOWN_DESKTOP_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_UNKNOWN_DESKTOP_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_UNKNOWN_MOBILE_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_UNKNOWN_MOBILE_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_UNKNOWN_MOBILE_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_UNKNOWN_TABLET_ACTION_TO_DESKTOP_CONVERSION">>, <<"TOTAL_UNKNOWN_TABLET_ACTION_TO_MOBILE_CONVERSION">>, <<"TOTAL_UNKNOWN_TABLET_ACTION_TO_TABLET_CONVERSION">>, <<"TOTAL_PAGE_VISIT">>, <<"TOTAL_SIGNUP">>, <<"TOTAL_CHECKOUT">>, <<"TOTAL_CUSTOM">>, <<"TOTAL_LEAD">>, <<"TOTAL_APP_INSTALL">>, <<"TOTAL_SIGNUP_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_CHECKOUT_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_CUSTOM_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_APP_INSTALL_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_CHECKOUT_QUANTITY">>, <<"PAGE_VISIT_COST_PER_ACTION">>, <<"APP_INSTALL_COST_PER_ACTION">>, <<"PAGE_VISIT_ROAS">>, <<"CHECKOUT_ROAS">>, <<"CUSTOM_ROAS">>, <<"VIDEO_3SEC_VIEWS_1">>, <<"VIDEO_P100_COMPLETE_1">>, <<"VIDEO_P0_COMBINED_1">>, <<"VIDEO_P25_COMBINED_1">>, <<"VIDEO_P50_COMBINED_1">>, <<"VIDEO_P75_COMBINED_1">>, <<"VIDEO_P95_COMBINED_1">>, <<"VIDEO_MRC_VIEWS_1">>, <<"VIDEO_3SEC_VIEWS_2">>, <<"VIDEO_P100_COMPLETE_2">>, <<"VIDEO_P0_COMBINED_2">>, <<"VIDEO_P25_COMBINED_2">>, <<"VIDEO_P50_COMBINED_2">>, <<"VIDEO_P75_COMBINED_2">>, <<"VIDEO_P95_COMBINED_2">>, <<"VIDEO_MRC_VIEWS_2">>, <<"VIDEO_LENGTH">>, <<"CPV_IN_MICRO_DOLLAR">>, <<"ECPV_IN_DOLLAR">>, <<"CPCV_IN_MICRO_DOLLAR">>, <<"ECPCV_IN_DOLLAR">>, <<"CPCV_P95_IN_MICRO_DOLLAR">>, <<"ECPCV_P95_IN_DOLLAR">>, <<"TOTAL_VIDEO_3SEC_VIEWS">>, <<"TOTAL_VIDEO_P100_COMPLETE">>, <<"TOTAL_VIDEO_P0_COMBINED">>, <<"TOTAL_VIDEO_P25_COMBINED">>, <<"TOTAL_VIDEO_P50_COMBINED">>, <<"TOTAL_VIDEO_P75_COMBINED">>, <<"TOTAL_VIDEO_P95_COMBINED">>, <<"TOTAL_VIDEO_MRC_VIEWS">>, <<"VIDEO_AVG_WATCHTIME_IN_SECOND_1">>, <<"VIDEO_AVG_WATCHTIME_IN_SECOND_2">>, <<"TOTAL_VIDEO_AVG_WATCHTIME_IN_SECOND">>, <<"TOTAL_REPIN_RATE">>, <<"WEB_CHECKOUT_COST_PER_ACTION">>, <<"WEB_CHECKOUT_ROAS">>, <<"TOTAL_WEB_CHECKOUT">>, <<"TOTAL_WEB_CHECKOUT_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_CLICK_CHECKOUT">>, <<"TOTAL_WEB_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_ENGAGEMENT_CHECKOUT">>, <<"TOTAL_WEB_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_VIEW_CHECKOUT">>, <<"TOTAL_WEB_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR">>, <<"INAPP_CHECKOUT_COST_PER_ACTION">>, <<"INAPP_CHECKOUT_ROAS">>, <<"TOTAL_INAPP_CHECKOUT">>, <<"TOTAL_INAPP_CHECKOUT_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_INAPP_CLICK_CHECKOUT">>, <<"TOTAL_INAPP_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_INAPP_ENGAGEMENT_CHECKOUT">>, <<"TOTAL_INAPP_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_INAPP_VIEW_CHECKOUT">>, <<"TOTAL_INAPP_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR">>, <<"OFFLINE_CHECKOUT_COST_PER_ACTION">>, <<"OFFLINE_CHECKOUT_ROAS">>, <<"TOTAL_OFFLINE_CHECKOUT">>, <<"TOTAL_OFFLINE_CHECKOUT_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_OFFLINE_CLICK_CHECKOUT">>, <<"TOTAL_OFFLINE_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_OFFLINE_ENGAGEMENT_CHECKOUT">>, <<"TOTAL_OFFLINE_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_OFFLINE_VIEW_CHECKOUT">>, <<"TOTAL_OFFLINE_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR">>, <<"PINTEREST_CHECKOUT_COST_PER_ACTION">>, <<"PINTEREST_CHECKOUT_ROAS">>, <<"TOTAL_PINTEREST_CHECKOUT">>, <<"TOTAL_PINTEREST_CHECKOUT_VALUE_IN_MICRO_DOLLAR">>, <<"WEB_ADD_TO_CART_COST_PER_ACTION">>, <<"WEB_ADD_TO_CART_ROAS">>, <<"TOTAL_WEB_ADD_TO_CART">>, <<"TOTAL_WEB_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_CLICK_ADD_TO_CART">>, <<"TOTAL_WEB_CLICK_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_ENGAGEMENT_ADD_TO_CART">>, <<"TOTAL_WEB_ENGAGEMENT_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_VIEW_ADD_TO_CART">>, <<"TOTAL_WEB_VIEW_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR">>, <<"INAPP_ADD_TO_CART_COST_PER_ACTION">>, <<"INAPP_ADD_TO_CART_ROAS">>, <<"TOTAL_INAPP_ADD_TO_CART">>, <<"TOTAL_INAPP_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_INAPP_CLICK_ADD_TO_CART">>, <<"TOTAL_INAPP_CLICK_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_INAPP_ENGAGEMENT_ADD_TO_CART">>, <<"TOTAL_INAPP_ENGAGEMENT_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_INAPP_VIEW_ADD_TO_CART">>, <<"TOTAL_INAPP_VIEW_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR">>, <<"WEB_PAGE_VISIT_COST_PER_ACTION">>, <<"WEB_PAGE_VISIT_ROAS">>, <<"TOTAL_WEB_PAGE_VISIT">>, <<"TOTAL_WEB_PAGE_VISIT_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_CLICK_PAGE_VISIT">>, <<"TOTAL_WEB_CLICK_PAGE_VISIT_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_ENGAGEMENT_PAGE_VISIT">>, <<"TOTAL_WEB_ENGAGEMENT_PAGE_VISIT_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_VIEW_PAGE_VISIT">>, <<"TOTAL_WEB_VIEW_PAGE_VISIT_VALUE_IN_MICRO_DOLLAR">>, <<"WEB_SIGNUP_COST_PER_ACTION">>, <<"WEB_SIGNUP_ROAS">>, <<"TOTAL_WEB_SIGNUP">>, <<"TOTAL_WEB_SIGNUP_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_CLICK_SIGNUP">>, <<"TOTAL_WEB_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_ENGAGEMENT_SIGNUP">>, <<"TOTAL_WEB_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_VIEW_SIGNUP">>, <<"TOTAL_WEB_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR">>, <<"INAPP_SIGNUP_COST_PER_ACTION">>, <<"INAPP_SIGNUP_ROAS">>, <<"TOTAL_INAPP_SIGNUP">>, <<"TOTAL_INAPP_SIGNUP_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_INAPP_CLICK_SIGNUP">>, <<"TOTAL_INAPP_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_INAPP_ENGAGEMENT_SIGNUP">>, <<"TOTAL_INAPP_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_INAPP_VIEW_SIGNUP">>, <<"TOTAL_INAPP_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR">>, <<"OFFLINE_SIGNUP_COST_PER_ACTION">>, <<"OFFLINE_SIGNUP_ROAS">>, <<"TOTAL_OFFLINE_SIGNUP">>, <<"TOTAL_OFFLINE_SIGNUP_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_OFFLINE_CLICK_SIGNUP">>, <<"TOTAL_OFFLINE_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_OFFLINE_ENGAGEMENT_SIGNUP">>, <<"TOTAL_OFFLINE_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_OFFLINE_VIEW_SIGNUP">>, <<"TOTAL_OFFLINE_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR">>, <<"WEB_WATCH_VIDEO_COST_PER_ACTION">>, <<"WEB_WATCH_VIDEO_ROAS">>, <<"TOTAL_WEB_WATCH_VIDEO">>, <<"TOTAL_WEB_WATCH_VIDEO_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_CLICK_WATCH_VIDEO">>, <<"TOTAL_WEB_CLICK_WATCH_VIDEO_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_ENGAGEMENT_WATCH_VIDEO">>, <<"TOTAL_WEB_ENGAGEMENT_WATCH_VIDEO_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_VIEW_WATCH_VIDEO">>, <<"TOTAL_WEB_VIEW_WATCH_VIDEO_VALUE_IN_MICRO_DOLLAR">>, <<"WEB_LEAD_COST_PER_ACTION">>, <<"WEB_LEAD_ROAS">>, <<"TOTAL_WEB_LEAD">>, <<"TOTAL_WEB_LEAD_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_CLICK_LEAD">>, <<"TOTAL_WEB_CLICK_LEAD_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_ENGAGEMENT_LEAD">>, <<"TOTAL_WEB_ENGAGEMENT_LEAD_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_VIEW_LEAD">>, <<"TOTAL_WEB_VIEW_LEAD_VALUE_IN_MICRO_DOLLAR">>, <<"OFFLINE_LEAD_COST_PER_ACTION">>, <<"OFFLINE_LEAD_ROAS">>, <<"TOTAL_OFFLINE_LEAD">>, <<"TOTAL_OFFLINE_LEAD_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_OFFLINE_CLICK_LEAD">>, <<"TOTAL_OFFLINE_CLICK_LEAD_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_OFFLINE_ENGAGEMENT_LEAD">>, <<"TOTAL_OFFLINE_ENGAGEMENT_LEAD_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_OFFLINE_VIEW_LEAD">>, <<"TOTAL_OFFLINE_VIEW_LEAD_VALUE_IN_MICRO_DOLLAR">>, <<"WEB_SEARCH_COST_PER_ACTION">>, <<"WEB_SEARCH_ROAS">>, <<"TOTAL_WEB_SEARCH">>, <<"TOTAL_WEB_SEARCH_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_CLICK_SEARCH">>, <<"TOTAL_WEB_CLICK_SEARCH_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_ENGAGEMENT_SEARCH">>, <<"TOTAL_WEB_ENGAGEMENT_SEARCH_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_VIEW_SEARCH">>, <<"TOTAL_WEB_VIEW_SEARCH_VALUE_IN_MICRO_DOLLAR">>, <<"INAPP_SEARCH_COST_PER_ACTION">>, <<"INAPP_SEARCH_ROAS">>, <<"TOTAL_INAPP_SEARCH">>, <<"TOTAL_INAPP_SEARCH_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_INAPP_CLICK_SEARCH">>, <<"TOTAL_INAPP_CLICK_SEARCH_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_INAPP_ENGAGEMENT_SEARCH">>, <<"TOTAL_INAPP_ENGAGEMENT_SEARCH_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_INAPP_VIEW_SEARCH">>, <<"TOTAL_INAPP_VIEW_SEARCH_VALUE_IN_MICRO_DOLLAR">>, <<"WEB_VIEW_CATEGORY_COST_PER_ACTION">>, <<"WEB_VIEW_CATEGORY_ROAS">>, <<"TOTAL_WEB_VIEW_CATEGORY">>, <<"TOTAL_WEB_VIEW_CATEGORY_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_CLICK_VIEW_CATEGORY">>, <<"TOTAL_WEB_CLICK_VIEW_CATEGORY_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_ENGAGEMENT_VIEW_CATEGORY">>, <<"TOTAL_WEB_ENGAGEMENT_VIEW_CATEGORY_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_VIEW_VIEW_CATEGORY">>, <<"TOTAL_WEB_VIEW_VIEW_CATEGORY_VALUE_IN_MICRO_DOLLAR">>, <<"WEB_CUSTOM_COST_PER_ACTION">>, <<"WEB_CUSTOM_ROAS">>, <<"TOTAL_WEB_CUSTOM">>, <<"TOTAL_WEB_CUSTOM_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_CLICK_CUSTOM">>, <<"TOTAL_WEB_CLICK_CUSTOM_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_ENGAGEMENT_CUSTOM">>, <<"TOTAL_WEB_ENGAGEMENT_CUSTOM_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_VIEW_CUSTOM">>, <<"TOTAL_WEB_VIEW_CUSTOM_VALUE_IN_MICRO_DOLLAR">>, <<"OFFLINE_CUSTOM_COST_PER_ACTION">>, <<"OFFLINE_CUSTOM_ROAS">>, <<"TOTAL_OFFLINE_CUSTOM">>, <<"TOTAL_OFFLINE_CUSTOM_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_OFFLINE_CLICK_CUSTOM">>, <<"TOTAL_OFFLINE_CLICK_CUSTOM_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_OFFLINE_ENGAGEMENT_CUSTOM">>, <<"TOTAL_OFFLINE_ENGAGEMENT_CUSTOM_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_OFFLINE_VIEW_CUSTOM">>, <<"TOTAL_OFFLINE_VIEW_CUSTOM_VALUE_IN_MICRO_DOLLAR">>, <<"WEB_UNKNOWN_COST_PER_ACTION">>, <<"WEB_UNKNOWN_ROAS">>, <<"TOTAL_WEB_UNKNOWN">>, <<"TOTAL_WEB_UNKNOWN_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_CLICK_UNKNOWN">>, <<"TOTAL_WEB_CLICK_UNKNOWN_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_ENGAGEMENT_UNKNOWN">>, <<"TOTAL_WEB_ENGAGEMENT_UNKNOWN_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_WEB_VIEW_UNKNOWN">>, <<"TOTAL_WEB_VIEW_UNKNOWN_VALUE_IN_MICRO_DOLLAR">>, <<"INAPP_UNKNOWN_COST_PER_ACTION">>, <<"INAPP_UNKNOWN_ROAS">>, <<"TOTAL_INAPP_UNKNOWN">>, <<"TOTAL_INAPP_UNKNOWN_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_INAPP_CLICK_UNKNOWN">>, <<"TOTAL_INAPP_CLICK_UNKNOWN_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_INAPP_ENGAGEMENT_UNKNOWN">>, <<"TOTAL_INAPP_ENGAGEMENT_UNKNOWN_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_INAPP_VIEW_UNKNOWN">>, <<"TOTAL_INAPP_VIEW_UNKNOWN_VALUE_IN_MICRO_DOLLAR">>, <<"OFFLINE_UNKNOWN_COST_PER_ACTION">>, <<"OFFLINE_UNKNOWN_ROAS">>, <<"TOTAL_OFFLINE_UNKNOWN">>, <<"TOTAL_OFFLINE_UNKNOWN_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_OFFLINE_CLICK_UNKNOWN">>, <<"TOTAL_OFFLINE_CLICK_UNKNOWN_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_OFFLINE_ENGAGEMENT_UNKNOWN">>, <<"TOTAL_OFFLINE_ENGAGEMENT_UNKNOWN_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_OFFLINE_VIEW_UNKNOWN">>, <<"TOTAL_OFFLINE_VIEW_UNKNOWN_VALUE_IN_MICRO_DOLLAR">>, <<"INAPP_APP_INSTALL_COST_PER_ACTION">>, <<"INAPP_APP_INSTALL_ROAS">>, <<"TOTAL_INAPP_APP_INSTALL">>, <<"TOTAL_INAPP_APP_INSTALL_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_INAPP_CLICK_APP_INSTALL">>, <<"TOTAL_INAPP_CLICK_APP_INSTALL_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_INAPP_ENGAGEMENT_APP_INSTALL">>, <<"TOTAL_INAPP_ENGAGEMENT_APP_INSTALL_VALUE_IN_MICRO_DOLLAR">>, <<"TOTAL_INAPP_VIEW_APP_INSTALL">>, <<"TOTAL_INAPP_VIEW_APP_INSTALL_VALUE_IN_MICRO_DOLLAR">>, <<"IDEA_PIN_PRODUCT_TAG_VISIT_1">>, <<"IDEA_PIN_PRODUCT_TAG_VISIT_2">>, <<"TOTAL_IDEA_PIN_PRODUCT_TAG_VISIT">>, <<"LEADS">>, <<"COST_PER_LEAD">>, <<"QUIZ_COMPLETED">>, <<"QUIZ_COMPLETION_RATE">>, <<"SHOWCASE_PIN_CLICKTHROUGH">>, <<"SHOWCASE_SUBPAGE_CLICKTHROUGH">>, <<"SHOWCASE_SUBPIN_CLICKTHROUGH">>, <<"SHOWCASE_SUBPAGE_IMPRESSION">>, <<"SHOWCASE_SUBPIN_IMPRESSION">>, <<"SHOWCASE_SUBPAGE_SWIPE_LEFT">>, <<"SHOWCASE_SUBPAGE_SWIPE_RIGHT">>, <<"SHOWCASE_SUBPIN_SWIPE_LEFT">>, <<"SHOWCASE_SUBPIN_SWIPE_RIGHT">>, <<"SHOWCASE_SUBPAGE_REPIN">>, <<"SHOWCASE_SUBPIN_REPIN">>, <<"SHOWCASE_SUBPAGE_CLOSEUP">>, <<"SHOWCASE_CARD_THUMBNAIL_SWIPE_FORWARD">>, <<"SHOWCASE_CARD_THUMBNAIL_SWIPE_BACKWARD">>, <<"SHOWCASE_AVERAGE_SUBPAGE_CLOSEUP_PER_SESSION">>, <<"TOTAL_CHECKOUT_CONVERSION_RATE">>, <<"TOTAL_VIEW_CATEGORY_CONVERSION_RATE">>, <<"TOTAL_ADD_TO_CART_CONVERSION_RATE">>, <<"TOTAL_SIGNUP_CONVERSION_RATE">>, <<"TOTAL_PAGE_VISIT_CONVERSION_RATE">>, <<"TOTAL_LEAD_CONVERSION_RATE">>, <<"TOTAL_SEARCH_CONVERSION_RATE">>, <<"TOTAL_WATCH_VIDEO_CONVERSION_RATE">>, <<"TOTAL_UNKNOWN_CONVERSION_RATE">>, <<"TOTAL_CUSTOM_CONVERSION_RATE">>, <<"STANDARD_AD_FEED_ITEM_ID">>]).

