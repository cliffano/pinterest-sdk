/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ReportingColumnAsync.h
 *
 * Reporting columns
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ReportingColumnAsync_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ReportingColumnAsync_H_


#include "ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  ReportingColumnAsync
    : public ModelBase
{
public:
    ReportingColumnAsync();
    virtual ~ReportingColumnAsync();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eReportingColumnAsync
    {
        ReportingColumnAsync_SPEND_IN_MICRO_DOLLAR,
        ReportingColumnAsync_PAID_IMPRESSION,
        ReportingColumnAsync_CPC_IN_MICRO_DOLLAR,
        ReportingColumnAsync_ECPC_IN_MICRO_DOLLAR,
        ReportingColumnAsync_CTR,
        ReportingColumnAsync_ECTR,
        ReportingColumnAsync_CAMPAIGN_NAME,
        ReportingColumnAsync_CAMPAIGN_STATUS,
        ReportingColumnAsync_AD_STATUS,
        ReportingColumnAsync_PIN_PROMOTION_STATUS,
        ReportingColumnAsync_PIN_ID,
        ReportingColumnAsync_TOTAL_ENGAGEMENT,
        ReportingColumnAsync_ENGAGEMENT_1,
        ReportingColumnAsync_ENGAGEMENT_2,
        ReportingColumnAsync_ECPM_IN_MICRO_DOLLAR,
        ReportingColumnAsync_CTR_2,
        ReportingColumnAsync_CAMPAIGN_ID,
        ReportingColumnAsync_ADVERTISER_ID,
        ReportingColumnAsync_AD_ACCOUNT_ID,
        ReportingColumnAsync_PIN_PROMOTION_ID,
        ReportingColumnAsync_AD_ID,
        ReportingColumnAsync_AD_GROUP_ID,
        ReportingColumnAsync_CAMPAIGN_MANAGED_STATUS,
        ReportingColumnAsync_CPM_IN_MICRO_DOLLAR,
        ReportingColumnAsync_AD_GROUP_NAME,
        ReportingColumnAsync_AD_GROUP_STATUS,
        ReportingColumnAsync_PRODUCT_GROUP_ID,
        ReportingColumnAsync_CLICKTHROUGH_1,
        ReportingColumnAsync_REPIN_1,
        ReportingColumnAsync_IMPRESSION_1,
        ReportingColumnAsync_IMPRESSION_1_GROSS,
        ReportingColumnAsync_CLICKTHROUGH_1_GROSS,
        ReportingColumnAsync_OUTBOUND_CLICK_1,
        ReportingColumnAsync_CLICKTHROUGH_2,
        ReportingColumnAsync_REPIN_2,
        ReportingColumnAsync_IMPRESSION_2,
        ReportingColumnAsync_OUTBOUND_CLICK_2,
        ReportingColumnAsync_TOTAL_IMPRESSION_USER,
        ReportingColumnAsync_TOTAL_IMPRESSION_FREQUENCY,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_PAGE_VISIT,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_SIGNUP,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_CHECKOUT,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_CUSTOM,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_ADD_TO_CART,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_LEAD,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_SEARCH,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_WATCH_VIDEO,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_VIEW_CATEGORY,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_APP_INSTALL,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_UNKNOWN,
        ReportingColumnAsync_TOTAL_CLICK_PAGE_VISIT,
        ReportingColumnAsync_TOTAL_CLICK_SIGNUP,
        ReportingColumnAsync_TOTAL_CLICK_CHECKOUT,
        ReportingColumnAsync_TOTAL_CLICK_CUSTOM,
        ReportingColumnAsync_TOTAL_CLICK_ADD_TO_CART,
        ReportingColumnAsync_TOTAL_CLICK_LEAD,
        ReportingColumnAsync_TOTAL_CLICK_SEARCH,
        ReportingColumnAsync_TOTAL_CLICK_WATCH_VIDEO,
        ReportingColumnAsync_TOTAL_CLICK_VIEW_CATEGORY,
        ReportingColumnAsync_TOTAL_CLICK_APP_INSTALL,
        ReportingColumnAsync_TOTAL_CLICK_UNKNOWN,
        ReportingColumnAsync_TOTAL_VIEW_PAGE_VISIT,
        ReportingColumnAsync_TOTAL_VIEW_SIGNUP,
        ReportingColumnAsync_TOTAL_VIEW_CHECKOUT,
        ReportingColumnAsync_TOTAL_VIEW_CUSTOM,
        ReportingColumnAsync_TOTAL_VIEW_ADD_TO_CART,
        ReportingColumnAsync_TOTAL_VIEW_LEAD,
        ReportingColumnAsync_TOTAL_VIEW_SEARCH,
        ReportingColumnAsync_TOTAL_VIEW_WATCH_VIDEO,
        ReportingColumnAsync_TOTAL_VIEW_VIEW_CATEGORY,
        ReportingColumnAsync_TOTAL_VIEW_APP_INSTALL,
        ReportingColumnAsync_TOTAL_VIEW_UNKNOWN,
        ReportingColumnAsync_TOTAL_CONVERSIONS,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_PAGE_VISIT_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_CUSTOM_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_LEAD_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_SEARCH_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_WATCH_VIDEO_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_VIEW_CATEGORY_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_APP_INSTALL_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_UNKNOWN_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_CLICK_PAGE_VISIT_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_CLICK_CUSTOM_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_CLICK_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_CLICK_LEAD_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_CLICK_SEARCH_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_CLICK_WATCH_VIDEO_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_CLICK_VIEW_CATEGORY_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_CLICK_APP_INSTALL_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_CLICK_UNKNOWN_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_VIEW_PAGE_VISIT_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_VIEW_CUSTOM_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_VIEW_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_VIEW_LEAD_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_VIEW_SEARCH_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_VIEW_WATCH_VIDEO_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_VIEW_VIEW_CATEGORY_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_VIEW_APP_INSTALL_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_VIEW_UNKNOWN_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_CONVERSIONS_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_PAGE_VISIT_QUANTITY,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_SIGNUP_QUANTITY,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_CHECKOUT_QUANTITY,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_CUSTOM_QUANTITY,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_ADD_TO_CART_QUANTITY,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_LEAD_QUANTITY,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_SEARCH_QUANTITY,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_WATCH_VIDEO_QUANTITY,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_VIEW_CATEGORY_QUANTITY,
        ReportingColumnAsync_TOTAL_ENGAGEMENT_UNKNOWN_QUANTITY,
        ReportingColumnAsync_TOTAL_CLICK_PAGE_VISIT_QUANTITY,
        ReportingColumnAsync_TOTAL_CLICK_SIGNUP_QUANTITY,
        ReportingColumnAsync_TOTAL_CLICK_CHECKOUT_QUANTITY,
        ReportingColumnAsync_TOTAL_CLICK_CUSTOM_QUANTITY,
        ReportingColumnAsync_TOTAL_CLICK_ADD_TO_CART_QUANTITY,
        ReportingColumnAsync_TOTAL_CLICK_LEAD_QUANTITY,
        ReportingColumnAsync_TOTAL_CLICK_SEARCH_QUANTITY,
        ReportingColumnAsync_TOTAL_CLICK_WATCH_VIDEO_QUANTITY,
        ReportingColumnAsync_TOTAL_CLICK_VIEW_CATEGORY_QUANTITY,
        ReportingColumnAsync_TOTAL_CLICK_UNKNOWN_QUANTITY,
        ReportingColumnAsync_TOTAL_VIEW_PAGE_VISIT_QUANTITY,
        ReportingColumnAsync_TOTAL_VIEW_SIGNUP_QUANTITY,
        ReportingColumnAsync_TOTAL_VIEW_CHECKOUT_QUANTITY,
        ReportingColumnAsync_TOTAL_VIEW_CUSTOM_QUANTITY,
        ReportingColumnAsync_TOTAL_VIEW_ADD_TO_CART_QUANTITY,
        ReportingColumnAsync_TOTAL_VIEW_LEAD_QUANTITY,
        ReportingColumnAsync_TOTAL_VIEW_SEARCH_QUANTITY,
        ReportingColumnAsync_TOTAL_VIEW_WATCH_VIDEO_QUANTITY,
        ReportingColumnAsync_TOTAL_VIEW_VIEW_CATEGORY_QUANTITY,
        ReportingColumnAsync_TOTAL_VIEW_UNKNOWN_QUANTITY,
        ReportingColumnAsync_TOTAL_CONVERSIONS_QUANTITY,
        ReportingColumnAsync_ONSITE_CHECKOUTS_1,
        ReportingColumnAsync_PIN_PROMOTION_NAME,
        ReportingColumnAsync_AD_NAME,
        ReportingColumnAsync_CAMPAIGN_LIFETIME_SPEND_CAP,
        ReportingColumnAsync_CAMPAIGN_DAILY_SPEND_CAP,
        ReportingColumnAsync_TOTAL_PAGE_VISIT_DESKTOP_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_PAGE_VISIT_DESKTOP_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_PAGE_VISIT_DESKTOP_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_PAGE_VISIT_MOBILE_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_PAGE_VISIT_MOBILE_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_PAGE_VISIT_MOBILE_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_PAGE_VISIT_TABLET_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_PAGE_VISIT_TABLET_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_PAGE_VISIT_TABLET_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_SIGNUP_DESKTOP_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_SIGNUP_DESKTOP_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_SIGNUP_DESKTOP_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_SIGNUP_MOBILE_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_SIGNUP_MOBILE_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_SIGNUP_MOBILE_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_SIGNUP_TABLET_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_SIGNUP_TABLET_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_SIGNUP_TABLET_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_CHECKOUT_DESKTOP_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_CHECKOUT_DESKTOP_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_CHECKOUT_DESKTOP_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_CHECKOUT_MOBILE_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_CHECKOUT_MOBILE_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_CHECKOUT_MOBILE_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_CHECKOUT_TABLET_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_CHECKOUT_TABLET_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_CHECKOUT_TABLET_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_CUSTOM_DESKTOP_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_CUSTOM_DESKTOP_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_CUSTOM_DESKTOP_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_CUSTOM_MOBILE_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_CUSTOM_MOBILE_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_CUSTOM_MOBILE_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_CUSTOM_TABLET_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_CUSTOM_TABLET_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_CUSTOM_TABLET_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_ADD_TO_CART_DESKTOP_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_ADD_TO_CART_DESKTOP_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_ADD_TO_CART_DESKTOP_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_ADD_TO_CART_MOBILE_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_ADD_TO_CART_MOBILE_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_ADD_TO_CART_MOBILE_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_ADD_TO_CART_TABLET_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_ADD_TO_CART_TABLET_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_ADD_TO_CART_TABLET_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_LEAD_DESKTOP_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_LEAD_DESKTOP_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_LEAD_DESKTOP_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_LEAD_MOBILE_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_LEAD_MOBILE_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_LEAD_MOBILE_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_LEAD_TABLET_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_LEAD_TABLET_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_LEAD_TABLET_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_SEARCH_DESKTOP_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_SEARCH_DESKTOP_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_SEARCH_DESKTOP_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_SEARCH_MOBILE_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_SEARCH_MOBILE_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_SEARCH_MOBILE_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_SEARCH_TABLET_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_SEARCH_TABLET_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_SEARCH_TABLET_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_WATCH_VIDEO_DESKTOP_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_WATCH_VIDEO_DESKTOP_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_WATCH_VIDEO_DESKTOP_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_WATCH_VIDEO_MOBILE_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_WATCH_VIDEO_MOBILE_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_WATCH_VIDEO_MOBILE_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_WATCH_VIDEO_TABLET_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_WATCH_VIDEO_TABLET_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_WATCH_VIDEO_TABLET_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_VIEW_CATEGORY_DESKTOP_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_VIEW_CATEGORY_DESKTOP_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_VIEW_CATEGORY_DESKTOP_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_VIEW_CATEGORY_MOBILE_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_VIEW_CATEGORY_MOBILE_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_VIEW_CATEGORY_MOBILE_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_VIEW_CATEGORY_TABLET_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_VIEW_CATEGORY_TABLET_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_VIEW_CATEGORY_TABLET_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_APP_INSTALL_DESKTOP_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_APP_INSTALL_DESKTOP_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_APP_INSTALL_DESKTOP_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_APP_INSTALL_MOBILE_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_APP_INSTALL_MOBILE_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_APP_INSTALL_MOBILE_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_APP_INSTALL_TABLET_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_APP_INSTALL_TABLET_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_APP_INSTALL_TABLET_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_UNKNOWN_DESKTOP_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_UNKNOWN_DESKTOP_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_UNKNOWN_DESKTOP_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_UNKNOWN_MOBILE_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_UNKNOWN_MOBILE_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_UNKNOWN_MOBILE_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_UNKNOWN_TABLET_ACTION_TO_DESKTOP_CONVERSION,
        ReportingColumnAsync_TOTAL_UNKNOWN_TABLET_ACTION_TO_MOBILE_CONVERSION,
        ReportingColumnAsync_TOTAL_UNKNOWN_TABLET_ACTION_TO_TABLET_CONVERSION,
        ReportingColumnAsync_TOTAL_CHECKOUT,
        ReportingColumnAsync_TOTAL_CUSTOM,
        ReportingColumnAsync_TOTAL_LEAD,
        ReportingColumnAsync_TOTAL_APP_INSTALL,
        ReportingColumnAsync_TOTAL_CHECKOUT_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_APP_INSTALL_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_CHECKOUT_QUANTITY,
        ReportingColumnAsync_APP_INSTALL_COST_PER_ACTION,
        ReportingColumnAsync_VIDEO_3SEC_VIEWS_1,
        ReportingColumnAsync_VIDEO_P100_COMPLETE_1,
        ReportingColumnAsync_VIDEO_P0_COMBINED_1,
        ReportingColumnAsync_VIDEO_P25_COMBINED_1,
        ReportingColumnAsync_VIDEO_P50_COMBINED_1,
        ReportingColumnAsync_VIDEO_P75_COMBINED_1,
        ReportingColumnAsync_VIDEO_P95_COMBINED_1,
        ReportingColumnAsync_VIDEO_MRC_VIEWS_1,
        ReportingColumnAsync_VIDEO_3SEC_VIEWS_2,
        ReportingColumnAsync_VIDEO_P100_COMPLETE_2,
        ReportingColumnAsync_VIDEO_P0_COMBINED_2,
        ReportingColumnAsync_VIDEO_P25_COMBINED_2,
        ReportingColumnAsync_VIDEO_P50_COMBINED_2,
        ReportingColumnAsync_VIDEO_P75_COMBINED_2,
        ReportingColumnAsync_VIDEO_P95_COMBINED_2,
        ReportingColumnAsync_VIDEO_MRC_VIEWS_2,
        ReportingColumnAsync_VIDEO_LENGTH,
        ReportingColumnAsync_CPV_IN_MICRO_DOLLAR,
        ReportingColumnAsync_CPCV_IN_MICRO_DOLLAR,
        ReportingColumnAsync_CPCV_P95_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_VIDEO_3SEC_VIEWS,
        ReportingColumnAsync_VIDEO_AVG_WATCHTIME_IN_SECOND_1,
        ReportingColumnAsync_VIDEO_AVG_WATCHTIME_IN_SECOND_2,
        ReportingColumnAsync_TOTAL_VIDEO_AVG_WATCHTIME_IN_SECOND,
        ReportingColumnAsync_WEB_CHECKOUT_COST_PER_ACTION,
        ReportingColumnAsync_WEB_CHECKOUT_ROAS,
        ReportingColumnAsync_TOTAL_WEB_CHECKOUT,
        ReportingColumnAsync_TOTAL_WEB_CHECKOUT_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_CLICK_CHECKOUT,
        ReportingColumnAsync_TOTAL_WEB_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_ENGAGEMENT_CHECKOUT,
        ReportingColumnAsync_TOTAL_WEB_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_VIEW_CHECKOUT,
        ReportingColumnAsync_TOTAL_WEB_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_INAPP_CHECKOUT_COST_PER_ACTION,
        ReportingColumnAsync_INAPP_CHECKOUT_ROAS,
        ReportingColumnAsync_TOTAL_INAPP_CHECKOUT,
        ReportingColumnAsync_TOTAL_INAPP_CHECKOUT_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_INAPP_CLICK_CHECKOUT,
        ReportingColumnAsync_TOTAL_INAPP_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_INAPP_ENGAGEMENT_CHECKOUT,
        ReportingColumnAsync_TOTAL_INAPP_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_INAPP_VIEW_CHECKOUT,
        ReportingColumnAsync_TOTAL_INAPP_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_OFFLINE_CHECKOUT_COST_PER_ACTION,
        ReportingColumnAsync_OFFLINE_CHECKOUT_ROAS,
        ReportingColumnAsync_TOTAL_OFFLINE_CHECKOUT,
        ReportingColumnAsync_TOTAL_OFFLINE_CHECKOUT_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_OFFLINE_CLICK_CHECKOUT,
        ReportingColumnAsync_TOTAL_OFFLINE_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_OFFLINE_ENGAGEMENT_CHECKOUT,
        ReportingColumnAsync_TOTAL_OFFLINE_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_OFFLINE_VIEW_CHECKOUT,
        ReportingColumnAsync_TOTAL_OFFLINE_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_WEB_ADD_TO_CART_COST_PER_ACTION,
        ReportingColumnAsync_WEB_ADD_TO_CART_ROAS,
        ReportingColumnAsync_TOTAL_WEB_ADD_TO_CART,
        ReportingColumnAsync_TOTAL_WEB_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_CLICK_ADD_TO_CART,
        ReportingColumnAsync_TOTAL_WEB_CLICK_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_ENGAGEMENT_ADD_TO_CART,
        ReportingColumnAsync_TOTAL_WEB_ENGAGEMENT_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_VIEW_ADD_TO_CART,
        ReportingColumnAsync_TOTAL_WEB_VIEW_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_INAPP_ADD_TO_CART_COST_PER_ACTION,
        ReportingColumnAsync_INAPP_ADD_TO_CART_ROAS,
        ReportingColumnAsync_TOTAL_INAPP_ADD_TO_CART,
        ReportingColumnAsync_TOTAL_INAPP_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_INAPP_CLICK_ADD_TO_CART,
        ReportingColumnAsync_TOTAL_INAPP_CLICK_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_INAPP_ENGAGEMENT_ADD_TO_CART,
        ReportingColumnAsync_TOTAL_INAPP_ENGAGEMENT_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_INAPP_VIEW_ADD_TO_CART,
        ReportingColumnAsync_TOTAL_INAPP_VIEW_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_WEB_PAGE_VISIT_COST_PER_ACTION,
        ReportingColumnAsync_WEB_PAGE_VISIT_ROAS,
        ReportingColumnAsync_TOTAL_WEB_PAGE_VISIT,
        ReportingColumnAsync_TOTAL_WEB_PAGE_VISIT_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_CLICK_PAGE_VISIT,
        ReportingColumnAsync_TOTAL_WEB_CLICK_PAGE_VISIT_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_ENGAGEMENT_PAGE_VISIT,
        ReportingColumnAsync_TOTAL_WEB_ENGAGEMENT_PAGE_VISIT_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_VIEW_PAGE_VISIT,
        ReportingColumnAsync_TOTAL_WEB_VIEW_PAGE_VISIT_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_WEB_SIGNUP_COST_PER_ACTION,
        ReportingColumnAsync_WEB_SIGNUP_ROAS,
        ReportingColumnAsync_TOTAL_WEB_SIGNUP,
        ReportingColumnAsync_TOTAL_WEB_SIGNUP_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_CLICK_SIGNUP,
        ReportingColumnAsync_TOTAL_WEB_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_ENGAGEMENT_SIGNUP,
        ReportingColumnAsync_TOTAL_WEB_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_VIEW_SIGNUP,
        ReportingColumnAsync_TOTAL_WEB_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_INAPP_SIGNUP_COST_PER_ACTION,
        ReportingColumnAsync_INAPP_SIGNUP_ROAS,
        ReportingColumnAsync_TOTAL_INAPP_SIGNUP,
        ReportingColumnAsync_TOTAL_INAPP_SIGNUP_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_INAPP_CLICK_SIGNUP,
        ReportingColumnAsync_TOTAL_INAPP_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_INAPP_ENGAGEMENT_SIGNUP,
        ReportingColumnAsync_TOTAL_INAPP_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_INAPP_VIEW_SIGNUP,
        ReportingColumnAsync_TOTAL_INAPP_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_OFFLINE_SIGNUP_COST_PER_ACTION,
        ReportingColumnAsync_OFFLINE_SIGNUP_ROAS,
        ReportingColumnAsync_TOTAL_OFFLINE_SIGNUP,
        ReportingColumnAsync_TOTAL_OFFLINE_SIGNUP_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_OFFLINE_CLICK_SIGNUP,
        ReportingColumnAsync_TOTAL_OFFLINE_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_OFFLINE_ENGAGEMENT_SIGNUP,
        ReportingColumnAsync_TOTAL_OFFLINE_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_OFFLINE_VIEW_SIGNUP,
        ReportingColumnAsync_TOTAL_OFFLINE_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_WEB_WATCH_VIDEO_COST_PER_ACTION,
        ReportingColumnAsync_WEB_WATCH_VIDEO_ROAS,
        ReportingColumnAsync_TOTAL_WEB_WATCH_VIDEO,
        ReportingColumnAsync_TOTAL_WEB_WATCH_VIDEO_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_CLICK_WATCH_VIDEO,
        ReportingColumnAsync_TOTAL_WEB_CLICK_WATCH_VIDEO_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_ENGAGEMENT_WATCH_VIDEO,
        ReportingColumnAsync_TOTAL_WEB_ENGAGEMENT_WATCH_VIDEO_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_VIEW_WATCH_VIDEO,
        ReportingColumnAsync_TOTAL_WEB_VIEW_WATCH_VIDEO_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_WEB_LEAD_COST_PER_ACTION,
        ReportingColumnAsync_WEB_LEAD_ROAS,
        ReportingColumnAsync_TOTAL_WEB_LEAD,
        ReportingColumnAsync_TOTAL_WEB_LEAD_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_CLICK_LEAD,
        ReportingColumnAsync_TOTAL_WEB_CLICK_LEAD_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_ENGAGEMENT_LEAD,
        ReportingColumnAsync_TOTAL_WEB_ENGAGEMENT_LEAD_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_VIEW_LEAD,
        ReportingColumnAsync_TOTAL_WEB_VIEW_LEAD_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_OFFLINE_LEAD_COST_PER_ACTION,
        ReportingColumnAsync_OFFLINE_LEAD_ROAS,
        ReportingColumnAsync_TOTAL_OFFLINE_LEAD,
        ReportingColumnAsync_TOTAL_OFFLINE_LEAD_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_OFFLINE_CLICK_LEAD,
        ReportingColumnAsync_TOTAL_OFFLINE_CLICK_LEAD_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_OFFLINE_ENGAGEMENT_LEAD,
        ReportingColumnAsync_TOTAL_OFFLINE_ENGAGEMENT_LEAD_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_OFFLINE_VIEW_LEAD,
        ReportingColumnAsync_TOTAL_OFFLINE_VIEW_LEAD_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_WEB_SEARCH_COST_PER_ACTION,
        ReportingColumnAsync_WEB_SEARCH_ROAS,
        ReportingColumnAsync_TOTAL_WEB_SEARCH,
        ReportingColumnAsync_TOTAL_WEB_SEARCH_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_CLICK_SEARCH,
        ReportingColumnAsync_TOTAL_WEB_CLICK_SEARCH_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_ENGAGEMENT_SEARCH,
        ReportingColumnAsync_TOTAL_WEB_ENGAGEMENT_SEARCH_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_VIEW_SEARCH,
        ReportingColumnAsync_TOTAL_WEB_VIEW_SEARCH_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_INAPP_SEARCH_COST_PER_ACTION,
        ReportingColumnAsync_INAPP_SEARCH_ROAS,
        ReportingColumnAsync_TOTAL_INAPP_SEARCH,
        ReportingColumnAsync_TOTAL_INAPP_SEARCH_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_INAPP_CLICK_SEARCH,
        ReportingColumnAsync_TOTAL_INAPP_CLICK_SEARCH_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_INAPP_ENGAGEMENT_SEARCH,
        ReportingColumnAsync_TOTAL_INAPP_ENGAGEMENT_SEARCH_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_INAPP_VIEW_SEARCH,
        ReportingColumnAsync_TOTAL_INAPP_VIEW_SEARCH_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_WEB_VIEW_CATEGORY_COST_PER_ACTION,
        ReportingColumnAsync_WEB_VIEW_CATEGORY_ROAS,
        ReportingColumnAsync_TOTAL_WEB_VIEW_CATEGORY,
        ReportingColumnAsync_TOTAL_WEB_VIEW_CATEGORY_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_CLICK_VIEW_CATEGORY,
        ReportingColumnAsync_TOTAL_WEB_CLICK_VIEW_CATEGORY_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_ENGAGEMENT_VIEW_CATEGORY,
        ReportingColumnAsync_TOTAL_WEB_ENGAGEMENT_VIEW_CATEGORY_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_VIEW_VIEW_CATEGORY,
        ReportingColumnAsync_TOTAL_WEB_VIEW_VIEW_CATEGORY_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_WEB_CUSTOM_COST_PER_ACTION,
        ReportingColumnAsync_WEB_CUSTOM_ROAS,
        ReportingColumnAsync_TOTAL_WEB_CUSTOM,
        ReportingColumnAsync_TOTAL_WEB_CUSTOM_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_CLICK_CUSTOM,
        ReportingColumnAsync_TOTAL_WEB_CLICK_CUSTOM_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_ENGAGEMENT_CUSTOM,
        ReportingColumnAsync_TOTAL_WEB_ENGAGEMENT_CUSTOM_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_VIEW_CUSTOM,
        ReportingColumnAsync_TOTAL_WEB_VIEW_CUSTOM_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_OFFLINE_CUSTOM_COST_PER_ACTION,
        ReportingColumnAsync_OFFLINE_CUSTOM_ROAS,
        ReportingColumnAsync_TOTAL_OFFLINE_CUSTOM,
        ReportingColumnAsync_TOTAL_OFFLINE_CUSTOM_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_OFFLINE_CLICK_CUSTOM,
        ReportingColumnAsync_TOTAL_OFFLINE_CLICK_CUSTOM_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_OFFLINE_ENGAGEMENT_CUSTOM,
        ReportingColumnAsync_TOTAL_OFFLINE_ENGAGEMENT_CUSTOM_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_OFFLINE_VIEW_CUSTOM,
        ReportingColumnAsync_TOTAL_OFFLINE_VIEW_CUSTOM_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_WEB_UNKNOWN_COST_PER_ACTION,
        ReportingColumnAsync_WEB_UNKNOWN_ROAS,
        ReportingColumnAsync_TOTAL_WEB_UNKNOWN,
        ReportingColumnAsync_TOTAL_WEB_UNKNOWN_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_CLICK_UNKNOWN,
        ReportingColumnAsync_TOTAL_WEB_CLICK_UNKNOWN_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_ENGAGEMENT_UNKNOWN,
        ReportingColumnAsync_TOTAL_WEB_ENGAGEMENT_UNKNOWN_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_WEB_VIEW_UNKNOWN,
        ReportingColumnAsync_TOTAL_WEB_VIEW_UNKNOWN_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_INAPP_UNKNOWN_COST_PER_ACTION,
        ReportingColumnAsync_INAPP_UNKNOWN_ROAS,
        ReportingColumnAsync_TOTAL_INAPP_UNKNOWN,
        ReportingColumnAsync_TOTAL_INAPP_UNKNOWN_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_INAPP_CLICK_UNKNOWN,
        ReportingColumnAsync_TOTAL_INAPP_CLICK_UNKNOWN_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_INAPP_ENGAGEMENT_UNKNOWN,
        ReportingColumnAsync_TOTAL_INAPP_ENGAGEMENT_UNKNOWN_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_INAPP_VIEW_UNKNOWN,
        ReportingColumnAsync_TOTAL_INAPP_VIEW_UNKNOWN_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_OFFLINE_UNKNOWN_COST_PER_ACTION,
        ReportingColumnAsync_OFFLINE_UNKNOWN_ROAS,
        ReportingColumnAsync_TOTAL_OFFLINE_UNKNOWN,
        ReportingColumnAsync_TOTAL_OFFLINE_UNKNOWN_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_OFFLINE_CLICK_UNKNOWN,
        ReportingColumnAsync_TOTAL_OFFLINE_CLICK_UNKNOWN_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_OFFLINE_ENGAGEMENT_UNKNOWN,
        ReportingColumnAsync_TOTAL_OFFLINE_ENGAGEMENT_UNKNOWN_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_OFFLINE_VIEW_UNKNOWN,
        ReportingColumnAsync_TOTAL_OFFLINE_VIEW_UNKNOWN_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_INAPP_APP_INSTALL_COST_PER_ACTION,
        ReportingColumnAsync_INAPP_APP_INSTALL_ROAS,
        ReportingColumnAsync_TOTAL_INAPP_APP_INSTALL,
        ReportingColumnAsync_TOTAL_INAPP_APP_INSTALL_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_INAPP_CLICK_APP_INSTALL,
        ReportingColumnAsync_TOTAL_INAPP_CLICK_APP_INSTALL_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_INAPP_ENGAGEMENT_APP_INSTALL,
        ReportingColumnAsync_TOTAL_INAPP_ENGAGEMENT_APP_INSTALL_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_TOTAL_INAPP_VIEW_APP_INSTALL,
        ReportingColumnAsync_TOTAL_INAPP_VIEW_APP_INSTALL_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_IDEA_PIN_PRODUCT_TAG_VISIT_1,
        ReportingColumnAsync_IDEA_PIN_PRODUCT_TAG_VISIT_2,
        ReportingColumnAsync_REPIN_RATE,
        ReportingColumnAsync_TOTAL_VIDEO_P95_COMBINED,
        ReportingColumnAsync_AD_GROUP_ENTITY_STATUS,
        ReportingColumnAsync_ECPCV_P95_IN_DOLLAR,
        ReportingColumnAsync_ENGAGEMENT_RATE,
        ReportingColumnAsync_PAGE_VISIT_COST_PER_ACTION,
        ReportingColumnAsync_TOTAL_PAGE_VISIT,
        ReportingColumnAsync_CHECKOUT_ROAS,
        ReportingColumnAsync_TOTAL_SIGNUP_VALUE_IN_MICRO_DOLLAR,
        ReportingColumnAsync_ECPCV_IN_DOLLAR,
        ReportingColumnAsync_TOTAL_VIDEO_P75_COMBINED,
        ReportingColumnAsync_TOTAL_VIDEO_P50_COMBINED,
        ReportingColumnAsync_TOTAL_SIGNUP,
        ReportingColumnAsync_TOTAL_VIDEO_P0_COMBINED,
        ReportingColumnAsync_SPEND_IN_DOLLAR,
        ReportingColumnAsync_EENGAGEMENT_RATE,
        ReportingColumnAsync_TOTAL_VIDEO_P25_COMBINED,
        ReportingColumnAsync_CPM_IN_DOLLAR,
        ReportingColumnAsync_ECPV_IN_DOLLAR,
        ReportingColumnAsync_TOTAL_CLICKTHROUGH,
        ReportingColumnAsync_ECPE_IN_DOLLAR,
        ReportingColumnAsync_TOTAL_VIDEO_P100_COMPLETE,
        ReportingColumnAsync_CAMPAIGN_ENTITY_STATUS,
        ReportingColumnAsync_PAGE_VISIT_ROAS,
        ReportingColumnAsync_TOTAL_REPIN_RATE,
        ReportingColumnAsync_TOTAL_VIDEO_MRC_VIEWS,
        ReportingColumnAsync_TOTAL_IDEA_PIN_PRODUCT_TAG_VISIT,
        ReportingColumnAsync_ECPC_IN_DOLLAR,
    };

    eReportingColumnAsync getValue() const;
    void setValue(eReportingColumnAsync const value);

    protected:
        eReportingColumnAsync m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ReportingColumnAsync_H_ */