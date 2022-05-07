// tslint:disable
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/**
 * Reporting columns
 * @export
 * @enum {string}
 */
export enum ReportingColumnAsync {
    SpendInMicroDollar = 'SPEND_IN_MICRO_DOLLAR',
    PaidImpression = 'PAID_IMPRESSION',
    CpcInMicroDollar = 'CPC_IN_MICRO_DOLLAR',
    EcpcInMicroDollar = 'ECPC_IN_MICRO_DOLLAR',
    Ctr = 'CTR',
    Ectr = 'ECTR',
    CampaignName = 'CAMPAIGN_NAME',
    CampaignStatus = 'CAMPAIGN_STATUS',
    AdStatus = 'AD_STATUS',
    PinPromotionStatus = 'PIN_PROMOTION_STATUS',
    PinId = 'PIN_ID',
    TotalEngagement = 'TOTAL_ENGAGEMENT',
    Engagement1 = 'ENGAGEMENT_1',
    Engagement2 = 'ENGAGEMENT_2',
    EcpmInMicroDollar = 'ECPM_IN_MICRO_DOLLAR',
    Ctr2 = 'CTR_2',
    CampaignId = 'CAMPAIGN_ID',
    AdvertiserId = 'ADVERTISER_ID',
    AdAccountId = 'AD_ACCOUNT_ID',
    PinPromotionId = 'PIN_PROMOTION_ID',
    AdId = 'AD_ID',
    AdGroupId = 'AD_GROUP_ID',
    CampaignManagedStatus = 'CAMPAIGN_MANAGED_STATUS',
    CpmInMicroDollar = 'CPM_IN_MICRO_DOLLAR',
    AdGroupName = 'AD_GROUP_NAME',
    AdGroupStatus = 'AD_GROUP_STATUS',
    ProductGroupId = 'PRODUCT_GROUP_ID',
    Clickthrough1 = 'CLICKTHROUGH_1',
    Repin1 = 'REPIN_1',
    Impression1 = 'IMPRESSION_1',
    Impression1Gross = 'IMPRESSION_1_GROSS',
    Clickthrough1Gross = 'CLICKTHROUGH_1_GROSS',
    OutboundClick1 = 'OUTBOUND_CLICK_1',
    Clickthrough2 = 'CLICKTHROUGH_2',
    Repin2 = 'REPIN_2',
    Impression2 = 'IMPRESSION_2',
    OutboundClick2 = 'OUTBOUND_CLICK_2',
    TotalImpressionUser = 'TOTAL_IMPRESSION_USER',
    TotalImpressionFrequency = 'TOTAL_IMPRESSION_FREQUENCY',
    TotalEngagementPageVisit = 'TOTAL_ENGAGEMENT_PAGE_VISIT',
    TotalEngagementSignup = 'TOTAL_ENGAGEMENT_SIGNUP',
    TotalEngagementCheckout = 'TOTAL_ENGAGEMENT_CHECKOUT',
    TotalEngagementCustom = 'TOTAL_ENGAGEMENT_CUSTOM',
    TotalEngagementAddToCart = 'TOTAL_ENGAGEMENT_ADD_TO_CART',
    TotalEngagementLead = 'TOTAL_ENGAGEMENT_LEAD',
    TotalEngagementSearch = 'TOTAL_ENGAGEMENT_SEARCH',
    TotalEngagementWatchVideo = 'TOTAL_ENGAGEMENT_WATCH_VIDEO',
    TotalEngagementViewCategory = 'TOTAL_ENGAGEMENT_VIEW_CATEGORY',
    TotalEngagementAppInstall = 'TOTAL_ENGAGEMENT_APP_INSTALL',
    TotalEngagementUnknown = 'TOTAL_ENGAGEMENT_UNKNOWN',
    TotalClickPageVisit = 'TOTAL_CLICK_PAGE_VISIT',
    TotalClickSignup = 'TOTAL_CLICK_SIGNUP',
    TotalClickCheckout = 'TOTAL_CLICK_CHECKOUT',
    TotalClickCustom = 'TOTAL_CLICK_CUSTOM',
    TotalClickAddToCart = 'TOTAL_CLICK_ADD_TO_CART',
    TotalClickLead = 'TOTAL_CLICK_LEAD',
    TotalClickSearch = 'TOTAL_CLICK_SEARCH',
    TotalClickWatchVideo = 'TOTAL_CLICK_WATCH_VIDEO',
    TotalClickViewCategory = 'TOTAL_CLICK_VIEW_CATEGORY',
    TotalClickAppInstall = 'TOTAL_CLICK_APP_INSTALL',
    TotalClickUnknown = 'TOTAL_CLICK_UNKNOWN',
    TotalViewPageVisit = 'TOTAL_VIEW_PAGE_VISIT',
    TotalViewSignup = 'TOTAL_VIEW_SIGNUP',
    TotalViewCheckout = 'TOTAL_VIEW_CHECKOUT',
    TotalViewCustom = 'TOTAL_VIEW_CUSTOM',
    TotalViewAddToCart = 'TOTAL_VIEW_ADD_TO_CART',
    TotalViewLead = 'TOTAL_VIEW_LEAD',
    TotalViewSearch = 'TOTAL_VIEW_SEARCH',
    TotalViewWatchVideo = 'TOTAL_VIEW_WATCH_VIDEO',
    TotalViewViewCategory = 'TOTAL_VIEW_VIEW_CATEGORY',
    TotalViewAppInstall = 'TOTAL_VIEW_APP_INSTALL',
    TotalViewUnknown = 'TOTAL_VIEW_UNKNOWN',
    TotalConversions = 'TOTAL_CONVERSIONS',
    TotalEngagementPageVisitValueInMicroDollar = 'TOTAL_ENGAGEMENT_PAGE_VISIT_VALUE_IN_MICRO_DOLLAR',
    TotalEngagementSignupValueInMicroDollar = 'TOTAL_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalEngagementCheckoutValueInMicroDollar = 'TOTAL_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalEngagementCustomValueInMicroDollar = 'TOTAL_ENGAGEMENT_CUSTOM_VALUE_IN_MICRO_DOLLAR',
    TotalEngagementAddToCartValueInMicroDollar = 'TOTAL_ENGAGEMENT_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR',
    TotalEngagementLeadValueInMicroDollar = 'TOTAL_ENGAGEMENT_LEAD_VALUE_IN_MICRO_DOLLAR',
    TotalEngagementSearchValueInMicroDollar = 'TOTAL_ENGAGEMENT_SEARCH_VALUE_IN_MICRO_DOLLAR',
    TotalEngagementWatchVideoValueInMicroDollar = 'TOTAL_ENGAGEMENT_WATCH_VIDEO_VALUE_IN_MICRO_DOLLAR',
    TotalEngagementViewCategoryValueInMicroDollar = 'TOTAL_ENGAGEMENT_VIEW_CATEGORY_VALUE_IN_MICRO_DOLLAR',
    TotalEngagementAppInstallValueInMicroDollar = 'TOTAL_ENGAGEMENT_APP_INSTALL_VALUE_IN_MICRO_DOLLAR',
    TotalEngagementUnknownValueInMicroDollar = 'TOTAL_ENGAGEMENT_UNKNOWN_VALUE_IN_MICRO_DOLLAR',
    TotalClickPageVisitValueInMicroDollar = 'TOTAL_CLICK_PAGE_VISIT_VALUE_IN_MICRO_DOLLAR',
    TotalClickSignupValueInMicroDollar = 'TOTAL_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalClickCheckoutValueInMicroDollar = 'TOTAL_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalClickCustomValueInMicroDollar = 'TOTAL_CLICK_CUSTOM_VALUE_IN_MICRO_DOLLAR',
    TotalClickAddToCartValueInMicroDollar = 'TOTAL_CLICK_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR',
    TotalClickLeadValueInMicroDollar = 'TOTAL_CLICK_LEAD_VALUE_IN_MICRO_DOLLAR',
    TotalClickSearchValueInMicroDollar = 'TOTAL_CLICK_SEARCH_VALUE_IN_MICRO_DOLLAR',
    TotalClickWatchVideoValueInMicroDollar = 'TOTAL_CLICK_WATCH_VIDEO_VALUE_IN_MICRO_DOLLAR',
    TotalClickViewCategoryValueInMicroDollar = 'TOTAL_CLICK_VIEW_CATEGORY_VALUE_IN_MICRO_DOLLAR',
    TotalClickAppInstallValueInMicroDollar = 'TOTAL_CLICK_APP_INSTALL_VALUE_IN_MICRO_DOLLAR',
    TotalClickUnknownValueInMicroDollar = 'TOTAL_CLICK_UNKNOWN_VALUE_IN_MICRO_DOLLAR',
    TotalViewPageVisitValueInMicroDollar = 'TOTAL_VIEW_PAGE_VISIT_VALUE_IN_MICRO_DOLLAR',
    TotalViewSignupValueInMicroDollar = 'TOTAL_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalViewCheckoutValueInMicroDollar = 'TOTAL_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalViewCustomValueInMicroDollar = 'TOTAL_VIEW_CUSTOM_VALUE_IN_MICRO_DOLLAR',
    TotalViewAddToCartValueInMicroDollar = 'TOTAL_VIEW_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR',
    TotalViewLeadValueInMicroDollar = 'TOTAL_VIEW_LEAD_VALUE_IN_MICRO_DOLLAR',
    TotalViewSearchValueInMicroDollar = 'TOTAL_VIEW_SEARCH_VALUE_IN_MICRO_DOLLAR',
    TotalViewWatchVideoValueInMicroDollar = 'TOTAL_VIEW_WATCH_VIDEO_VALUE_IN_MICRO_DOLLAR',
    TotalViewViewCategoryValueInMicroDollar = 'TOTAL_VIEW_VIEW_CATEGORY_VALUE_IN_MICRO_DOLLAR',
    TotalViewAppInstallValueInMicroDollar = 'TOTAL_VIEW_APP_INSTALL_VALUE_IN_MICRO_DOLLAR',
    TotalViewUnknownValueInMicroDollar = 'TOTAL_VIEW_UNKNOWN_VALUE_IN_MICRO_DOLLAR',
    TotalConversionsValueInMicroDollar = 'TOTAL_CONVERSIONS_VALUE_IN_MICRO_DOLLAR',
    TotalEngagementPageVisitQuantity = 'TOTAL_ENGAGEMENT_PAGE_VISIT_QUANTITY',
    TotalEngagementSignupQuantity = 'TOTAL_ENGAGEMENT_SIGNUP_QUANTITY',
    TotalEngagementCheckoutQuantity = 'TOTAL_ENGAGEMENT_CHECKOUT_QUANTITY',
    TotalEngagementCustomQuantity = 'TOTAL_ENGAGEMENT_CUSTOM_QUANTITY',
    TotalEngagementAddToCartQuantity = 'TOTAL_ENGAGEMENT_ADD_TO_CART_QUANTITY',
    TotalEngagementLeadQuantity = 'TOTAL_ENGAGEMENT_LEAD_QUANTITY',
    TotalEngagementSearchQuantity = 'TOTAL_ENGAGEMENT_SEARCH_QUANTITY',
    TotalEngagementWatchVideoQuantity = 'TOTAL_ENGAGEMENT_WATCH_VIDEO_QUANTITY',
    TotalEngagementViewCategoryQuantity = 'TOTAL_ENGAGEMENT_VIEW_CATEGORY_QUANTITY',
    TotalEngagementUnknownQuantity = 'TOTAL_ENGAGEMENT_UNKNOWN_QUANTITY',
    TotalClickPageVisitQuantity = 'TOTAL_CLICK_PAGE_VISIT_QUANTITY',
    TotalClickSignupQuantity = 'TOTAL_CLICK_SIGNUP_QUANTITY',
    TotalClickCheckoutQuantity = 'TOTAL_CLICK_CHECKOUT_QUANTITY',
    TotalClickCustomQuantity = 'TOTAL_CLICK_CUSTOM_QUANTITY',
    TotalClickAddToCartQuantity = 'TOTAL_CLICK_ADD_TO_CART_QUANTITY',
    TotalClickLeadQuantity = 'TOTAL_CLICK_LEAD_QUANTITY',
    TotalClickSearchQuantity = 'TOTAL_CLICK_SEARCH_QUANTITY',
    TotalClickWatchVideoQuantity = 'TOTAL_CLICK_WATCH_VIDEO_QUANTITY',
    TotalClickViewCategoryQuantity = 'TOTAL_CLICK_VIEW_CATEGORY_QUANTITY',
    TotalClickUnknownQuantity = 'TOTAL_CLICK_UNKNOWN_QUANTITY',
    TotalViewPageVisitQuantity = 'TOTAL_VIEW_PAGE_VISIT_QUANTITY',
    TotalViewSignupQuantity = 'TOTAL_VIEW_SIGNUP_QUANTITY',
    TotalViewCheckoutQuantity = 'TOTAL_VIEW_CHECKOUT_QUANTITY',
    TotalViewCustomQuantity = 'TOTAL_VIEW_CUSTOM_QUANTITY',
    TotalViewAddToCartQuantity = 'TOTAL_VIEW_ADD_TO_CART_QUANTITY',
    TotalViewLeadQuantity = 'TOTAL_VIEW_LEAD_QUANTITY',
    TotalViewSearchQuantity = 'TOTAL_VIEW_SEARCH_QUANTITY',
    TotalViewWatchVideoQuantity = 'TOTAL_VIEW_WATCH_VIDEO_QUANTITY',
    TotalViewViewCategoryQuantity = 'TOTAL_VIEW_VIEW_CATEGORY_QUANTITY',
    TotalViewUnknownQuantity = 'TOTAL_VIEW_UNKNOWN_QUANTITY',
    TotalConversionsQuantity = 'TOTAL_CONVERSIONS_QUANTITY',
    OnsiteCheckouts1 = 'ONSITE_CHECKOUTS_1',
    PinPromotionName = 'PIN_PROMOTION_NAME',
    AdName = 'AD_NAME',
    CampaignLifetimeSpendCap = 'CAMPAIGN_LIFETIME_SPEND_CAP',
    CampaignDailySpendCap = 'CAMPAIGN_DAILY_SPEND_CAP',
    TotalPageVisitDesktopActionToDesktopConversion = 'TOTAL_PAGE_VISIT_DESKTOP_ACTION_TO_DESKTOP_CONVERSION',
    TotalPageVisitDesktopActionToMobileConversion = 'TOTAL_PAGE_VISIT_DESKTOP_ACTION_TO_MOBILE_CONVERSION',
    TotalPageVisitDesktopActionToTabletConversion = 'TOTAL_PAGE_VISIT_DESKTOP_ACTION_TO_TABLET_CONVERSION',
    TotalPageVisitMobileActionToDesktopConversion = 'TOTAL_PAGE_VISIT_MOBILE_ACTION_TO_DESKTOP_CONVERSION',
    TotalPageVisitMobileActionToMobileConversion = 'TOTAL_PAGE_VISIT_MOBILE_ACTION_TO_MOBILE_CONVERSION',
    TotalPageVisitMobileActionToTabletConversion = 'TOTAL_PAGE_VISIT_MOBILE_ACTION_TO_TABLET_CONVERSION',
    TotalPageVisitTabletActionToDesktopConversion = 'TOTAL_PAGE_VISIT_TABLET_ACTION_TO_DESKTOP_CONVERSION',
    TotalPageVisitTabletActionToMobileConversion = 'TOTAL_PAGE_VISIT_TABLET_ACTION_TO_MOBILE_CONVERSION',
    TotalPageVisitTabletActionToTabletConversion = 'TOTAL_PAGE_VISIT_TABLET_ACTION_TO_TABLET_CONVERSION',
    TotalSignupDesktopActionToDesktopConversion = 'TOTAL_SIGNUP_DESKTOP_ACTION_TO_DESKTOP_CONVERSION',
    TotalSignupDesktopActionToMobileConversion = 'TOTAL_SIGNUP_DESKTOP_ACTION_TO_MOBILE_CONVERSION',
    TotalSignupDesktopActionToTabletConversion = 'TOTAL_SIGNUP_DESKTOP_ACTION_TO_TABLET_CONVERSION',
    TotalSignupMobileActionToDesktopConversion = 'TOTAL_SIGNUP_MOBILE_ACTION_TO_DESKTOP_CONVERSION',
    TotalSignupMobileActionToMobileConversion = 'TOTAL_SIGNUP_MOBILE_ACTION_TO_MOBILE_CONVERSION',
    TotalSignupMobileActionToTabletConversion = 'TOTAL_SIGNUP_MOBILE_ACTION_TO_TABLET_CONVERSION',
    TotalSignupTabletActionToDesktopConversion = 'TOTAL_SIGNUP_TABLET_ACTION_TO_DESKTOP_CONVERSION',
    TotalSignupTabletActionToMobileConversion = 'TOTAL_SIGNUP_TABLET_ACTION_TO_MOBILE_CONVERSION',
    TotalSignupTabletActionToTabletConversion = 'TOTAL_SIGNUP_TABLET_ACTION_TO_TABLET_CONVERSION',
    TotalCheckoutDesktopActionToDesktopConversion = 'TOTAL_CHECKOUT_DESKTOP_ACTION_TO_DESKTOP_CONVERSION',
    TotalCheckoutDesktopActionToMobileConversion = 'TOTAL_CHECKOUT_DESKTOP_ACTION_TO_MOBILE_CONVERSION',
    TotalCheckoutDesktopActionToTabletConversion = 'TOTAL_CHECKOUT_DESKTOP_ACTION_TO_TABLET_CONVERSION',
    TotalCheckoutMobileActionToDesktopConversion = 'TOTAL_CHECKOUT_MOBILE_ACTION_TO_DESKTOP_CONVERSION',
    TotalCheckoutMobileActionToMobileConversion = 'TOTAL_CHECKOUT_MOBILE_ACTION_TO_MOBILE_CONVERSION',
    TotalCheckoutMobileActionToTabletConversion = 'TOTAL_CHECKOUT_MOBILE_ACTION_TO_TABLET_CONVERSION',
    TotalCheckoutTabletActionToDesktopConversion = 'TOTAL_CHECKOUT_TABLET_ACTION_TO_DESKTOP_CONVERSION',
    TotalCheckoutTabletActionToMobileConversion = 'TOTAL_CHECKOUT_TABLET_ACTION_TO_MOBILE_CONVERSION',
    TotalCheckoutTabletActionToTabletConversion = 'TOTAL_CHECKOUT_TABLET_ACTION_TO_TABLET_CONVERSION',
    TotalCustomDesktopActionToDesktopConversion = 'TOTAL_CUSTOM_DESKTOP_ACTION_TO_DESKTOP_CONVERSION',
    TotalCustomDesktopActionToMobileConversion = 'TOTAL_CUSTOM_DESKTOP_ACTION_TO_MOBILE_CONVERSION',
    TotalCustomDesktopActionToTabletConversion = 'TOTAL_CUSTOM_DESKTOP_ACTION_TO_TABLET_CONVERSION',
    TotalCustomMobileActionToDesktopConversion = 'TOTAL_CUSTOM_MOBILE_ACTION_TO_DESKTOP_CONVERSION',
    TotalCustomMobileActionToMobileConversion = 'TOTAL_CUSTOM_MOBILE_ACTION_TO_MOBILE_CONVERSION',
    TotalCustomMobileActionToTabletConversion = 'TOTAL_CUSTOM_MOBILE_ACTION_TO_TABLET_CONVERSION',
    TotalCustomTabletActionToDesktopConversion = 'TOTAL_CUSTOM_TABLET_ACTION_TO_DESKTOP_CONVERSION',
    TotalCustomTabletActionToMobileConversion = 'TOTAL_CUSTOM_TABLET_ACTION_TO_MOBILE_CONVERSION',
    TotalCustomTabletActionToTabletConversion = 'TOTAL_CUSTOM_TABLET_ACTION_TO_TABLET_CONVERSION',
    TotalAddToCartDesktopActionToDesktopConversion = 'TOTAL_ADD_TO_CART_DESKTOP_ACTION_TO_DESKTOP_CONVERSION',
    TotalAddToCartDesktopActionToMobileConversion = 'TOTAL_ADD_TO_CART_DESKTOP_ACTION_TO_MOBILE_CONVERSION',
    TotalAddToCartDesktopActionToTabletConversion = 'TOTAL_ADD_TO_CART_DESKTOP_ACTION_TO_TABLET_CONVERSION',
    TotalAddToCartMobileActionToDesktopConversion = 'TOTAL_ADD_TO_CART_MOBILE_ACTION_TO_DESKTOP_CONVERSION',
    TotalAddToCartMobileActionToMobileConversion = 'TOTAL_ADD_TO_CART_MOBILE_ACTION_TO_MOBILE_CONVERSION',
    TotalAddToCartMobileActionToTabletConversion = 'TOTAL_ADD_TO_CART_MOBILE_ACTION_TO_TABLET_CONVERSION',
    TotalAddToCartTabletActionToDesktopConversion = 'TOTAL_ADD_TO_CART_TABLET_ACTION_TO_DESKTOP_CONVERSION',
    TotalAddToCartTabletActionToMobileConversion = 'TOTAL_ADD_TO_CART_TABLET_ACTION_TO_MOBILE_CONVERSION',
    TotalAddToCartTabletActionToTabletConversion = 'TOTAL_ADD_TO_CART_TABLET_ACTION_TO_TABLET_CONVERSION',
    TotalLeadDesktopActionToDesktopConversion = 'TOTAL_LEAD_DESKTOP_ACTION_TO_DESKTOP_CONVERSION',
    TotalLeadDesktopActionToMobileConversion = 'TOTAL_LEAD_DESKTOP_ACTION_TO_MOBILE_CONVERSION',
    TotalLeadDesktopActionToTabletConversion = 'TOTAL_LEAD_DESKTOP_ACTION_TO_TABLET_CONVERSION',
    TotalLeadMobileActionToDesktopConversion = 'TOTAL_LEAD_MOBILE_ACTION_TO_DESKTOP_CONVERSION',
    TotalLeadMobileActionToMobileConversion = 'TOTAL_LEAD_MOBILE_ACTION_TO_MOBILE_CONVERSION',
    TotalLeadMobileActionToTabletConversion = 'TOTAL_LEAD_MOBILE_ACTION_TO_TABLET_CONVERSION',
    TotalLeadTabletActionToDesktopConversion = 'TOTAL_LEAD_TABLET_ACTION_TO_DESKTOP_CONVERSION',
    TotalLeadTabletActionToMobileConversion = 'TOTAL_LEAD_TABLET_ACTION_TO_MOBILE_CONVERSION',
    TotalLeadTabletActionToTabletConversion = 'TOTAL_LEAD_TABLET_ACTION_TO_TABLET_CONVERSION',
    TotalSearchDesktopActionToDesktopConversion = 'TOTAL_SEARCH_DESKTOP_ACTION_TO_DESKTOP_CONVERSION',
    TotalSearchDesktopActionToMobileConversion = 'TOTAL_SEARCH_DESKTOP_ACTION_TO_MOBILE_CONVERSION',
    TotalSearchDesktopActionToTabletConversion = 'TOTAL_SEARCH_DESKTOP_ACTION_TO_TABLET_CONVERSION',
    TotalSearchMobileActionToDesktopConversion = 'TOTAL_SEARCH_MOBILE_ACTION_TO_DESKTOP_CONVERSION',
    TotalSearchMobileActionToMobileConversion = 'TOTAL_SEARCH_MOBILE_ACTION_TO_MOBILE_CONVERSION',
    TotalSearchMobileActionToTabletConversion = 'TOTAL_SEARCH_MOBILE_ACTION_TO_TABLET_CONVERSION',
    TotalSearchTabletActionToDesktopConversion = 'TOTAL_SEARCH_TABLET_ACTION_TO_DESKTOP_CONVERSION',
    TotalSearchTabletActionToMobileConversion = 'TOTAL_SEARCH_TABLET_ACTION_TO_MOBILE_CONVERSION',
    TotalSearchTabletActionToTabletConversion = 'TOTAL_SEARCH_TABLET_ACTION_TO_TABLET_CONVERSION',
    TotalWatchVideoDesktopActionToDesktopConversion = 'TOTAL_WATCH_VIDEO_DESKTOP_ACTION_TO_DESKTOP_CONVERSION',
    TotalWatchVideoDesktopActionToMobileConversion = 'TOTAL_WATCH_VIDEO_DESKTOP_ACTION_TO_MOBILE_CONVERSION',
    TotalWatchVideoDesktopActionToTabletConversion = 'TOTAL_WATCH_VIDEO_DESKTOP_ACTION_TO_TABLET_CONVERSION',
    TotalWatchVideoMobileActionToDesktopConversion = 'TOTAL_WATCH_VIDEO_MOBILE_ACTION_TO_DESKTOP_CONVERSION',
    TotalWatchVideoMobileActionToMobileConversion = 'TOTAL_WATCH_VIDEO_MOBILE_ACTION_TO_MOBILE_CONVERSION',
    TotalWatchVideoMobileActionToTabletConversion = 'TOTAL_WATCH_VIDEO_MOBILE_ACTION_TO_TABLET_CONVERSION',
    TotalWatchVideoTabletActionToDesktopConversion = 'TOTAL_WATCH_VIDEO_TABLET_ACTION_TO_DESKTOP_CONVERSION',
    TotalWatchVideoTabletActionToMobileConversion = 'TOTAL_WATCH_VIDEO_TABLET_ACTION_TO_MOBILE_CONVERSION',
    TotalWatchVideoTabletActionToTabletConversion = 'TOTAL_WATCH_VIDEO_TABLET_ACTION_TO_TABLET_CONVERSION',
    TotalViewCategoryDesktopActionToDesktopConversion = 'TOTAL_VIEW_CATEGORY_DESKTOP_ACTION_TO_DESKTOP_CONVERSION',
    TotalViewCategoryDesktopActionToMobileConversion = 'TOTAL_VIEW_CATEGORY_DESKTOP_ACTION_TO_MOBILE_CONVERSION',
    TotalViewCategoryDesktopActionToTabletConversion = 'TOTAL_VIEW_CATEGORY_DESKTOP_ACTION_TO_TABLET_CONVERSION',
    TotalViewCategoryMobileActionToDesktopConversion = 'TOTAL_VIEW_CATEGORY_MOBILE_ACTION_TO_DESKTOP_CONVERSION',
    TotalViewCategoryMobileActionToMobileConversion = 'TOTAL_VIEW_CATEGORY_MOBILE_ACTION_TO_MOBILE_CONVERSION',
    TotalViewCategoryMobileActionToTabletConversion = 'TOTAL_VIEW_CATEGORY_MOBILE_ACTION_TO_TABLET_CONVERSION',
    TotalViewCategoryTabletActionToDesktopConversion = 'TOTAL_VIEW_CATEGORY_TABLET_ACTION_TO_DESKTOP_CONVERSION',
    TotalViewCategoryTabletActionToMobileConversion = 'TOTAL_VIEW_CATEGORY_TABLET_ACTION_TO_MOBILE_CONVERSION',
    TotalViewCategoryTabletActionToTabletConversion = 'TOTAL_VIEW_CATEGORY_TABLET_ACTION_TO_TABLET_CONVERSION',
    TotalAppInstallDesktopActionToDesktopConversion = 'TOTAL_APP_INSTALL_DESKTOP_ACTION_TO_DESKTOP_CONVERSION',
    TotalAppInstallDesktopActionToMobileConversion = 'TOTAL_APP_INSTALL_DESKTOP_ACTION_TO_MOBILE_CONVERSION',
    TotalAppInstallDesktopActionToTabletConversion = 'TOTAL_APP_INSTALL_DESKTOP_ACTION_TO_TABLET_CONVERSION',
    TotalAppInstallMobileActionToDesktopConversion = 'TOTAL_APP_INSTALL_MOBILE_ACTION_TO_DESKTOP_CONVERSION',
    TotalAppInstallMobileActionToMobileConversion = 'TOTAL_APP_INSTALL_MOBILE_ACTION_TO_MOBILE_CONVERSION',
    TotalAppInstallMobileActionToTabletConversion = 'TOTAL_APP_INSTALL_MOBILE_ACTION_TO_TABLET_CONVERSION',
    TotalAppInstallTabletActionToDesktopConversion = 'TOTAL_APP_INSTALL_TABLET_ACTION_TO_DESKTOP_CONVERSION',
    TotalAppInstallTabletActionToMobileConversion = 'TOTAL_APP_INSTALL_TABLET_ACTION_TO_MOBILE_CONVERSION',
    TotalAppInstallTabletActionToTabletConversion = 'TOTAL_APP_INSTALL_TABLET_ACTION_TO_TABLET_CONVERSION',
    TotalUnknownDesktopActionToDesktopConversion = 'TOTAL_UNKNOWN_DESKTOP_ACTION_TO_DESKTOP_CONVERSION',
    TotalUnknownDesktopActionToMobileConversion = 'TOTAL_UNKNOWN_DESKTOP_ACTION_TO_MOBILE_CONVERSION',
    TotalUnknownDesktopActionToTabletConversion = 'TOTAL_UNKNOWN_DESKTOP_ACTION_TO_TABLET_CONVERSION',
    TotalUnknownMobileActionToDesktopConversion = 'TOTAL_UNKNOWN_MOBILE_ACTION_TO_DESKTOP_CONVERSION',
    TotalUnknownMobileActionToMobileConversion = 'TOTAL_UNKNOWN_MOBILE_ACTION_TO_MOBILE_CONVERSION',
    TotalUnknownMobileActionToTabletConversion = 'TOTAL_UNKNOWN_MOBILE_ACTION_TO_TABLET_CONVERSION',
    TotalUnknownTabletActionToDesktopConversion = 'TOTAL_UNKNOWN_TABLET_ACTION_TO_DESKTOP_CONVERSION',
    TotalUnknownTabletActionToMobileConversion = 'TOTAL_UNKNOWN_TABLET_ACTION_TO_MOBILE_CONVERSION',
    TotalUnknownTabletActionToTabletConversion = 'TOTAL_UNKNOWN_TABLET_ACTION_TO_TABLET_CONVERSION',
    TotalCheckout = 'TOTAL_CHECKOUT',
    TotalCustom = 'TOTAL_CUSTOM',
    TotalLead = 'TOTAL_LEAD',
    TotalAppInstall = 'TOTAL_APP_INSTALL',
    TotalCheckoutValueInMicroDollar = 'TOTAL_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalAppInstallValueInMicroDollar = 'TOTAL_APP_INSTALL_VALUE_IN_MICRO_DOLLAR',
    TotalCheckoutQuantity = 'TOTAL_CHECKOUT_QUANTITY',
    AppInstallCostPerAction = 'APP_INSTALL_COST_PER_ACTION',
    Video3SecViews1 = 'VIDEO_3SEC_VIEWS_1',
    VideoP100Complete1 = 'VIDEO_P100_COMPLETE_1',
    VideoP0Combined1 = 'VIDEO_P0_COMBINED_1',
    VideoP25Combined1 = 'VIDEO_P25_COMBINED_1',
    VideoP50Combined1 = 'VIDEO_P50_COMBINED_1',
    VideoP75Combined1 = 'VIDEO_P75_COMBINED_1',
    VideoP95Combined1 = 'VIDEO_P95_COMBINED_1',
    VideoMrcViews1 = 'VIDEO_MRC_VIEWS_1',
    Video3SecViews2 = 'VIDEO_3SEC_VIEWS_2',
    VideoP100Complete2 = 'VIDEO_P100_COMPLETE_2',
    VideoP0Combined2 = 'VIDEO_P0_COMBINED_2',
    VideoP25Combined2 = 'VIDEO_P25_COMBINED_2',
    VideoP50Combined2 = 'VIDEO_P50_COMBINED_2',
    VideoP75Combined2 = 'VIDEO_P75_COMBINED_2',
    VideoP95Combined2 = 'VIDEO_P95_COMBINED_2',
    VideoMrcViews2 = 'VIDEO_MRC_VIEWS_2',
    VideoLength = 'VIDEO_LENGTH',
    CpvInMicroDollar = 'CPV_IN_MICRO_DOLLAR',
    CpcvInMicroDollar = 'CPCV_IN_MICRO_DOLLAR',
    CpcvP95InMicroDollar = 'CPCV_P95_IN_MICRO_DOLLAR',
    TotalVideo3SecViews = 'TOTAL_VIDEO_3SEC_VIEWS',
    VideoAvgWatchtimeInSecond1 = 'VIDEO_AVG_WATCHTIME_IN_SECOND_1',
    VideoAvgWatchtimeInSecond2 = 'VIDEO_AVG_WATCHTIME_IN_SECOND_2',
    TotalVideoAvgWatchtimeInSecond = 'TOTAL_VIDEO_AVG_WATCHTIME_IN_SECOND',
    WebCheckoutCostPerAction = 'WEB_CHECKOUT_COST_PER_ACTION',
    WebCheckoutRoas = 'WEB_CHECKOUT_ROAS',
    TotalWebCheckout = 'TOTAL_WEB_CHECKOUT',
    TotalWebCheckoutValueInMicroDollar = 'TOTAL_WEB_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalWebClickCheckout = 'TOTAL_WEB_CLICK_CHECKOUT',
    TotalWebClickCheckoutValueInMicroDollar = 'TOTAL_WEB_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalWebEngagementCheckout = 'TOTAL_WEB_ENGAGEMENT_CHECKOUT',
    TotalWebEngagementCheckoutValueInMicroDollar = 'TOTAL_WEB_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalWebViewCheckout = 'TOTAL_WEB_VIEW_CHECKOUT',
    TotalWebViewCheckoutValueInMicroDollar = 'TOTAL_WEB_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    InappCheckoutCostPerAction = 'INAPP_CHECKOUT_COST_PER_ACTION',
    InappCheckoutRoas = 'INAPP_CHECKOUT_ROAS',
    TotalInappCheckout = 'TOTAL_INAPP_CHECKOUT',
    TotalInappCheckoutValueInMicroDollar = 'TOTAL_INAPP_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalInappClickCheckout = 'TOTAL_INAPP_CLICK_CHECKOUT',
    TotalInappClickCheckoutValueInMicroDollar = 'TOTAL_INAPP_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalInappEngagementCheckout = 'TOTAL_INAPP_ENGAGEMENT_CHECKOUT',
    TotalInappEngagementCheckoutValueInMicroDollar = 'TOTAL_INAPP_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalInappViewCheckout = 'TOTAL_INAPP_VIEW_CHECKOUT',
    TotalInappViewCheckoutValueInMicroDollar = 'TOTAL_INAPP_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    OfflineCheckoutCostPerAction = 'OFFLINE_CHECKOUT_COST_PER_ACTION',
    OfflineCheckoutRoas = 'OFFLINE_CHECKOUT_ROAS',
    TotalOfflineCheckout = 'TOTAL_OFFLINE_CHECKOUT',
    TotalOfflineCheckoutValueInMicroDollar = 'TOTAL_OFFLINE_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalOfflineClickCheckout = 'TOTAL_OFFLINE_CLICK_CHECKOUT',
    TotalOfflineClickCheckoutValueInMicroDollar = 'TOTAL_OFFLINE_CLICK_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalOfflineEngagementCheckout = 'TOTAL_OFFLINE_ENGAGEMENT_CHECKOUT',
    TotalOfflineEngagementCheckoutValueInMicroDollar = 'TOTAL_OFFLINE_ENGAGEMENT_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    TotalOfflineViewCheckout = 'TOTAL_OFFLINE_VIEW_CHECKOUT',
    TotalOfflineViewCheckoutValueInMicroDollar = 'TOTAL_OFFLINE_VIEW_CHECKOUT_VALUE_IN_MICRO_DOLLAR',
    WebAddToCartCostPerAction = 'WEB_ADD_TO_CART_COST_PER_ACTION',
    WebAddToCartRoas = 'WEB_ADD_TO_CART_ROAS',
    TotalWebAddToCart = 'TOTAL_WEB_ADD_TO_CART',
    TotalWebAddToCartValueInMicroDollar = 'TOTAL_WEB_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR',
    TotalWebClickAddToCart = 'TOTAL_WEB_CLICK_ADD_TO_CART',
    TotalWebClickAddToCartValueInMicroDollar = 'TOTAL_WEB_CLICK_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR',
    TotalWebEngagementAddToCart = 'TOTAL_WEB_ENGAGEMENT_ADD_TO_CART',
    TotalWebEngagementAddToCartValueInMicroDollar = 'TOTAL_WEB_ENGAGEMENT_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR',
    TotalWebViewAddToCart = 'TOTAL_WEB_VIEW_ADD_TO_CART',
    TotalWebViewAddToCartValueInMicroDollar = 'TOTAL_WEB_VIEW_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR',
    InappAddToCartCostPerAction = 'INAPP_ADD_TO_CART_COST_PER_ACTION',
    InappAddToCartRoas = 'INAPP_ADD_TO_CART_ROAS',
    TotalInappAddToCart = 'TOTAL_INAPP_ADD_TO_CART',
    TotalInappAddToCartValueInMicroDollar = 'TOTAL_INAPP_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR',
    TotalInappClickAddToCart = 'TOTAL_INAPP_CLICK_ADD_TO_CART',
    TotalInappClickAddToCartValueInMicroDollar = 'TOTAL_INAPP_CLICK_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR',
    TotalInappEngagementAddToCart = 'TOTAL_INAPP_ENGAGEMENT_ADD_TO_CART',
    TotalInappEngagementAddToCartValueInMicroDollar = 'TOTAL_INAPP_ENGAGEMENT_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR',
    TotalInappViewAddToCart = 'TOTAL_INAPP_VIEW_ADD_TO_CART',
    TotalInappViewAddToCartValueInMicroDollar = 'TOTAL_INAPP_VIEW_ADD_TO_CART_VALUE_IN_MICRO_DOLLAR',
    WebPageVisitCostPerAction = 'WEB_PAGE_VISIT_COST_PER_ACTION',
    WebPageVisitRoas = 'WEB_PAGE_VISIT_ROAS',
    TotalWebPageVisit = 'TOTAL_WEB_PAGE_VISIT',
    TotalWebPageVisitValueInMicroDollar = 'TOTAL_WEB_PAGE_VISIT_VALUE_IN_MICRO_DOLLAR',
    TotalWebClickPageVisit = 'TOTAL_WEB_CLICK_PAGE_VISIT',
    TotalWebClickPageVisitValueInMicroDollar = 'TOTAL_WEB_CLICK_PAGE_VISIT_VALUE_IN_MICRO_DOLLAR',
    TotalWebEngagementPageVisit = 'TOTAL_WEB_ENGAGEMENT_PAGE_VISIT',
    TotalWebEngagementPageVisitValueInMicroDollar = 'TOTAL_WEB_ENGAGEMENT_PAGE_VISIT_VALUE_IN_MICRO_DOLLAR',
    TotalWebViewPageVisit = 'TOTAL_WEB_VIEW_PAGE_VISIT',
    TotalWebViewPageVisitValueInMicroDollar = 'TOTAL_WEB_VIEW_PAGE_VISIT_VALUE_IN_MICRO_DOLLAR',
    WebSignupCostPerAction = 'WEB_SIGNUP_COST_PER_ACTION',
    WebSignupRoas = 'WEB_SIGNUP_ROAS',
    TotalWebSignup = 'TOTAL_WEB_SIGNUP',
    TotalWebSignupValueInMicroDollar = 'TOTAL_WEB_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalWebClickSignup = 'TOTAL_WEB_CLICK_SIGNUP',
    TotalWebClickSignupValueInMicroDollar = 'TOTAL_WEB_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalWebEngagementSignup = 'TOTAL_WEB_ENGAGEMENT_SIGNUP',
    TotalWebEngagementSignupValueInMicroDollar = 'TOTAL_WEB_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalWebViewSignup = 'TOTAL_WEB_VIEW_SIGNUP',
    TotalWebViewSignupValueInMicroDollar = 'TOTAL_WEB_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    InappSignupCostPerAction = 'INAPP_SIGNUP_COST_PER_ACTION',
    InappSignupRoas = 'INAPP_SIGNUP_ROAS',
    TotalInappSignup = 'TOTAL_INAPP_SIGNUP',
    TotalInappSignupValueInMicroDollar = 'TOTAL_INAPP_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalInappClickSignup = 'TOTAL_INAPP_CLICK_SIGNUP',
    TotalInappClickSignupValueInMicroDollar = 'TOTAL_INAPP_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalInappEngagementSignup = 'TOTAL_INAPP_ENGAGEMENT_SIGNUP',
    TotalInappEngagementSignupValueInMicroDollar = 'TOTAL_INAPP_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalInappViewSignup = 'TOTAL_INAPP_VIEW_SIGNUP',
    TotalInappViewSignupValueInMicroDollar = 'TOTAL_INAPP_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    OfflineSignupCostPerAction = 'OFFLINE_SIGNUP_COST_PER_ACTION',
    OfflineSignupRoas = 'OFFLINE_SIGNUP_ROAS',
    TotalOfflineSignup = 'TOTAL_OFFLINE_SIGNUP',
    TotalOfflineSignupValueInMicroDollar = 'TOTAL_OFFLINE_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalOfflineClickSignup = 'TOTAL_OFFLINE_CLICK_SIGNUP',
    TotalOfflineClickSignupValueInMicroDollar = 'TOTAL_OFFLINE_CLICK_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalOfflineEngagementSignup = 'TOTAL_OFFLINE_ENGAGEMENT_SIGNUP',
    TotalOfflineEngagementSignupValueInMicroDollar = 'TOTAL_OFFLINE_ENGAGEMENT_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    TotalOfflineViewSignup = 'TOTAL_OFFLINE_VIEW_SIGNUP',
    TotalOfflineViewSignupValueInMicroDollar = 'TOTAL_OFFLINE_VIEW_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    WebWatchVideoCostPerAction = 'WEB_WATCH_VIDEO_COST_PER_ACTION',
    WebWatchVideoRoas = 'WEB_WATCH_VIDEO_ROAS',
    TotalWebWatchVideo = 'TOTAL_WEB_WATCH_VIDEO',
    TotalWebWatchVideoValueInMicroDollar = 'TOTAL_WEB_WATCH_VIDEO_VALUE_IN_MICRO_DOLLAR',
    TotalWebClickWatchVideo = 'TOTAL_WEB_CLICK_WATCH_VIDEO',
    TotalWebClickWatchVideoValueInMicroDollar = 'TOTAL_WEB_CLICK_WATCH_VIDEO_VALUE_IN_MICRO_DOLLAR',
    TotalWebEngagementWatchVideo = 'TOTAL_WEB_ENGAGEMENT_WATCH_VIDEO',
    TotalWebEngagementWatchVideoValueInMicroDollar = 'TOTAL_WEB_ENGAGEMENT_WATCH_VIDEO_VALUE_IN_MICRO_DOLLAR',
    TotalWebViewWatchVideo = 'TOTAL_WEB_VIEW_WATCH_VIDEO',
    TotalWebViewWatchVideoValueInMicroDollar = 'TOTAL_WEB_VIEW_WATCH_VIDEO_VALUE_IN_MICRO_DOLLAR',
    WebLeadCostPerAction = 'WEB_LEAD_COST_PER_ACTION',
    WebLeadRoas = 'WEB_LEAD_ROAS',
    TotalWebLead = 'TOTAL_WEB_LEAD',
    TotalWebLeadValueInMicroDollar = 'TOTAL_WEB_LEAD_VALUE_IN_MICRO_DOLLAR',
    TotalWebClickLead = 'TOTAL_WEB_CLICK_LEAD',
    TotalWebClickLeadValueInMicroDollar = 'TOTAL_WEB_CLICK_LEAD_VALUE_IN_MICRO_DOLLAR',
    TotalWebEngagementLead = 'TOTAL_WEB_ENGAGEMENT_LEAD',
    TotalWebEngagementLeadValueInMicroDollar = 'TOTAL_WEB_ENGAGEMENT_LEAD_VALUE_IN_MICRO_DOLLAR',
    TotalWebViewLead = 'TOTAL_WEB_VIEW_LEAD',
    TotalWebViewLeadValueInMicroDollar = 'TOTAL_WEB_VIEW_LEAD_VALUE_IN_MICRO_DOLLAR',
    OfflineLeadCostPerAction = 'OFFLINE_LEAD_COST_PER_ACTION',
    OfflineLeadRoas = 'OFFLINE_LEAD_ROAS',
    TotalOfflineLead = 'TOTAL_OFFLINE_LEAD',
    TotalOfflineLeadValueInMicroDollar = 'TOTAL_OFFLINE_LEAD_VALUE_IN_MICRO_DOLLAR',
    TotalOfflineClickLead = 'TOTAL_OFFLINE_CLICK_LEAD',
    TotalOfflineClickLeadValueInMicroDollar = 'TOTAL_OFFLINE_CLICK_LEAD_VALUE_IN_MICRO_DOLLAR',
    TotalOfflineEngagementLead = 'TOTAL_OFFLINE_ENGAGEMENT_LEAD',
    TotalOfflineEngagementLeadValueInMicroDollar = 'TOTAL_OFFLINE_ENGAGEMENT_LEAD_VALUE_IN_MICRO_DOLLAR',
    TotalOfflineViewLead = 'TOTAL_OFFLINE_VIEW_LEAD',
    TotalOfflineViewLeadValueInMicroDollar = 'TOTAL_OFFLINE_VIEW_LEAD_VALUE_IN_MICRO_DOLLAR',
    WebSearchCostPerAction = 'WEB_SEARCH_COST_PER_ACTION',
    WebSearchRoas = 'WEB_SEARCH_ROAS',
    TotalWebSearch = 'TOTAL_WEB_SEARCH',
    TotalWebSearchValueInMicroDollar = 'TOTAL_WEB_SEARCH_VALUE_IN_MICRO_DOLLAR',
    TotalWebClickSearch = 'TOTAL_WEB_CLICK_SEARCH',
    TotalWebClickSearchValueInMicroDollar = 'TOTAL_WEB_CLICK_SEARCH_VALUE_IN_MICRO_DOLLAR',
    TotalWebEngagementSearch = 'TOTAL_WEB_ENGAGEMENT_SEARCH',
    TotalWebEngagementSearchValueInMicroDollar = 'TOTAL_WEB_ENGAGEMENT_SEARCH_VALUE_IN_MICRO_DOLLAR',
    TotalWebViewSearch = 'TOTAL_WEB_VIEW_SEARCH',
    TotalWebViewSearchValueInMicroDollar = 'TOTAL_WEB_VIEW_SEARCH_VALUE_IN_MICRO_DOLLAR',
    InappSearchCostPerAction = 'INAPP_SEARCH_COST_PER_ACTION',
    InappSearchRoas = 'INAPP_SEARCH_ROAS',
    TotalInappSearch = 'TOTAL_INAPP_SEARCH',
    TotalInappSearchValueInMicroDollar = 'TOTAL_INAPP_SEARCH_VALUE_IN_MICRO_DOLLAR',
    TotalInappClickSearch = 'TOTAL_INAPP_CLICK_SEARCH',
    TotalInappClickSearchValueInMicroDollar = 'TOTAL_INAPP_CLICK_SEARCH_VALUE_IN_MICRO_DOLLAR',
    TotalInappEngagementSearch = 'TOTAL_INAPP_ENGAGEMENT_SEARCH',
    TotalInappEngagementSearchValueInMicroDollar = 'TOTAL_INAPP_ENGAGEMENT_SEARCH_VALUE_IN_MICRO_DOLLAR',
    TotalInappViewSearch = 'TOTAL_INAPP_VIEW_SEARCH',
    TotalInappViewSearchValueInMicroDollar = 'TOTAL_INAPP_VIEW_SEARCH_VALUE_IN_MICRO_DOLLAR',
    WebViewCategoryCostPerAction = 'WEB_VIEW_CATEGORY_COST_PER_ACTION',
    WebViewCategoryRoas = 'WEB_VIEW_CATEGORY_ROAS',
    TotalWebViewCategory = 'TOTAL_WEB_VIEW_CATEGORY',
    TotalWebViewCategoryValueInMicroDollar = 'TOTAL_WEB_VIEW_CATEGORY_VALUE_IN_MICRO_DOLLAR',
    TotalWebClickViewCategory = 'TOTAL_WEB_CLICK_VIEW_CATEGORY',
    TotalWebClickViewCategoryValueInMicroDollar = 'TOTAL_WEB_CLICK_VIEW_CATEGORY_VALUE_IN_MICRO_DOLLAR',
    TotalWebEngagementViewCategory = 'TOTAL_WEB_ENGAGEMENT_VIEW_CATEGORY',
    TotalWebEngagementViewCategoryValueInMicroDollar = 'TOTAL_WEB_ENGAGEMENT_VIEW_CATEGORY_VALUE_IN_MICRO_DOLLAR',
    TotalWebViewViewCategory = 'TOTAL_WEB_VIEW_VIEW_CATEGORY',
    TotalWebViewViewCategoryValueInMicroDollar = 'TOTAL_WEB_VIEW_VIEW_CATEGORY_VALUE_IN_MICRO_DOLLAR',
    WebCustomCostPerAction = 'WEB_CUSTOM_COST_PER_ACTION',
    WebCustomRoas = 'WEB_CUSTOM_ROAS',
    TotalWebCustom = 'TOTAL_WEB_CUSTOM',
    TotalWebCustomValueInMicroDollar = 'TOTAL_WEB_CUSTOM_VALUE_IN_MICRO_DOLLAR',
    TotalWebClickCustom = 'TOTAL_WEB_CLICK_CUSTOM',
    TotalWebClickCustomValueInMicroDollar = 'TOTAL_WEB_CLICK_CUSTOM_VALUE_IN_MICRO_DOLLAR',
    TotalWebEngagementCustom = 'TOTAL_WEB_ENGAGEMENT_CUSTOM',
    TotalWebEngagementCustomValueInMicroDollar = 'TOTAL_WEB_ENGAGEMENT_CUSTOM_VALUE_IN_MICRO_DOLLAR',
    TotalWebViewCustom = 'TOTAL_WEB_VIEW_CUSTOM',
    TotalWebViewCustomValueInMicroDollar = 'TOTAL_WEB_VIEW_CUSTOM_VALUE_IN_MICRO_DOLLAR',
    OfflineCustomCostPerAction = 'OFFLINE_CUSTOM_COST_PER_ACTION',
    OfflineCustomRoas = 'OFFLINE_CUSTOM_ROAS',
    TotalOfflineCustom = 'TOTAL_OFFLINE_CUSTOM',
    TotalOfflineCustomValueInMicroDollar = 'TOTAL_OFFLINE_CUSTOM_VALUE_IN_MICRO_DOLLAR',
    TotalOfflineClickCustom = 'TOTAL_OFFLINE_CLICK_CUSTOM',
    TotalOfflineClickCustomValueInMicroDollar = 'TOTAL_OFFLINE_CLICK_CUSTOM_VALUE_IN_MICRO_DOLLAR',
    TotalOfflineEngagementCustom = 'TOTAL_OFFLINE_ENGAGEMENT_CUSTOM',
    TotalOfflineEngagementCustomValueInMicroDollar = 'TOTAL_OFFLINE_ENGAGEMENT_CUSTOM_VALUE_IN_MICRO_DOLLAR',
    TotalOfflineViewCustom = 'TOTAL_OFFLINE_VIEW_CUSTOM',
    TotalOfflineViewCustomValueInMicroDollar = 'TOTAL_OFFLINE_VIEW_CUSTOM_VALUE_IN_MICRO_DOLLAR',
    WebUnknownCostPerAction = 'WEB_UNKNOWN_COST_PER_ACTION',
    WebUnknownRoas = 'WEB_UNKNOWN_ROAS',
    TotalWebUnknown = 'TOTAL_WEB_UNKNOWN',
    TotalWebUnknownValueInMicroDollar = 'TOTAL_WEB_UNKNOWN_VALUE_IN_MICRO_DOLLAR',
    TotalWebClickUnknown = 'TOTAL_WEB_CLICK_UNKNOWN',
    TotalWebClickUnknownValueInMicroDollar = 'TOTAL_WEB_CLICK_UNKNOWN_VALUE_IN_MICRO_DOLLAR',
    TotalWebEngagementUnknown = 'TOTAL_WEB_ENGAGEMENT_UNKNOWN',
    TotalWebEngagementUnknownValueInMicroDollar = 'TOTAL_WEB_ENGAGEMENT_UNKNOWN_VALUE_IN_MICRO_DOLLAR',
    TotalWebViewUnknown = 'TOTAL_WEB_VIEW_UNKNOWN',
    TotalWebViewUnknownValueInMicroDollar = 'TOTAL_WEB_VIEW_UNKNOWN_VALUE_IN_MICRO_DOLLAR',
    InappUnknownCostPerAction = 'INAPP_UNKNOWN_COST_PER_ACTION',
    InappUnknownRoas = 'INAPP_UNKNOWN_ROAS',
    TotalInappUnknown = 'TOTAL_INAPP_UNKNOWN',
    TotalInappUnknownValueInMicroDollar = 'TOTAL_INAPP_UNKNOWN_VALUE_IN_MICRO_DOLLAR',
    TotalInappClickUnknown = 'TOTAL_INAPP_CLICK_UNKNOWN',
    TotalInappClickUnknownValueInMicroDollar = 'TOTAL_INAPP_CLICK_UNKNOWN_VALUE_IN_MICRO_DOLLAR',
    TotalInappEngagementUnknown = 'TOTAL_INAPP_ENGAGEMENT_UNKNOWN',
    TotalInappEngagementUnknownValueInMicroDollar = 'TOTAL_INAPP_ENGAGEMENT_UNKNOWN_VALUE_IN_MICRO_DOLLAR',
    TotalInappViewUnknown = 'TOTAL_INAPP_VIEW_UNKNOWN',
    TotalInappViewUnknownValueInMicroDollar = 'TOTAL_INAPP_VIEW_UNKNOWN_VALUE_IN_MICRO_DOLLAR',
    OfflineUnknownCostPerAction = 'OFFLINE_UNKNOWN_COST_PER_ACTION',
    OfflineUnknownRoas = 'OFFLINE_UNKNOWN_ROAS',
    TotalOfflineUnknown = 'TOTAL_OFFLINE_UNKNOWN',
    TotalOfflineUnknownValueInMicroDollar = 'TOTAL_OFFLINE_UNKNOWN_VALUE_IN_MICRO_DOLLAR',
    TotalOfflineClickUnknown = 'TOTAL_OFFLINE_CLICK_UNKNOWN',
    TotalOfflineClickUnknownValueInMicroDollar = 'TOTAL_OFFLINE_CLICK_UNKNOWN_VALUE_IN_MICRO_DOLLAR',
    TotalOfflineEngagementUnknown = 'TOTAL_OFFLINE_ENGAGEMENT_UNKNOWN',
    TotalOfflineEngagementUnknownValueInMicroDollar = 'TOTAL_OFFLINE_ENGAGEMENT_UNKNOWN_VALUE_IN_MICRO_DOLLAR',
    TotalOfflineViewUnknown = 'TOTAL_OFFLINE_VIEW_UNKNOWN',
    TotalOfflineViewUnknownValueInMicroDollar = 'TOTAL_OFFLINE_VIEW_UNKNOWN_VALUE_IN_MICRO_DOLLAR',
    InappAppInstallCostPerAction = 'INAPP_APP_INSTALL_COST_PER_ACTION',
    InappAppInstallRoas = 'INAPP_APP_INSTALL_ROAS',
    TotalInappAppInstall = 'TOTAL_INAPP_APP_INSTALL',
    TotalInappAppInstallValueInMicroDollar = 'TOTAL_INAPP_APP_INSTALL_VALUE_IN_MICRO_DOLLAR',
    TotalInappClickAppInstall = 'TOTAL_INAPP_CLICK_APP_INSTALL',
    TotalInappClickAppInstallValueInMicroDollar = 'TOTAL_INAPP_CLICK_APP_INSTALL_VALUE_IN_MICRO_DOLLAR',
    TotalInappEngagementAppInstall = 'TOTAL_INAPP_ENGAGEMENT_APP_INSTALL',
    TotalInappEngagementAppInstallValueInMicroDollar = 'TOTAL_INAPP_ENGAGEMENT_APP_INSTALL_VALUE_IN_MICRO_DOLLAR',
    TotalInappViewAppInstall = 'TOTAL_INAPP_VIEW_APP_INSTALL',
    TotalInappViewAppInstallValueInMicroDollar = 'TOTAL_INAPP_VIEW_APP_INSTALL_VALUE_IN_MICRO_DOLLAR',
    IdeaPinProductTagVisit1 = 'IDEA_PIN_PRODUCT_TAG_VISIT_1',
    IdeaPinProductTagVisit2 = 'IDEA_PIN_PRODUCT_TAG_VISIT_2',
    RepinRate = 'REPIN_RATE',
    TotalVideoP95Combined = 'TOTAL_VIDEO_P95_COMBINED',
    AdGroupEntityStatus = 'AD_GROUP_ENTITY_STATUS',
    EcpcvP95InDollar = 'ECPCV_P95_IN_DOLLAR',
    EngagementRate = 'ENGAGEMENT_RATE',
    PageVisitCostPerAction = 'PAGE_VISIT_COST_PER_ACTION',
    TotalPageVisit = 'TOTAL_PAGE_VISIT',
    CheckoutRoas = 'CHECKOUT_ROAS',
    TotalSignupValueInMicroDollar = 'TOTAL_SIGNUP_VALUE_IN_MICRO_DOLLAR',
    EcpcvInDollar = 'ECPCV_IN_DOLLAR',
    TotalVideoP75Combined = 'TOTAL_VIDEO_P75_COMBINED',
    TotalVideoP50Combined = 'TOTAL_VIDEO_P50_COMBINED',
    TotalSignup = 'TOTAL_SIGNUP',
    TotalVideoP0Combined = 'TOTAL_VIDEO_P0_COMBINED',
    SpendInDollar = 'SPEND_IN_DOLLAR',
    EengagementRate = 'EENGAGEMENT_RATE',
    TotalVideoP25Combined = 'TOTAL_VIDEO_P25_COMBINED',
    CpmInDollar = 'CPM_IN_DOLLAR',
    EcpvInDollar = 'ECPV_IN_DOLLAR',
    TotalClickthrough = 'TOTAL_CLICKTHROUGH',
    EcpeInDollar = 'ECPE_IN_DOLLAR',
    TotalVideoP100Complete = 'TOTAL_VIDEO_P100_COMPLETE',
    CampaignEntityStatus = 'CAMPAIGN_ENTITY_STATUS',
    PageVisitRoas = 'PAGE_VISIT_ROAS',
    TotalRepinRate = 'TOTAL_REPIN_RATE',
    TotalVideoMrcViews = 'TOTAL_VIDEO_MRC_VIEWS',
    TotalIdeaPinProductTagVisit = 'TOTAL_IDEA_PIN_PRODUCT_TAG_VISIT',
    EcpcInDollar = 'ECPC_IN_DOLLAR'
}

export function ReportingColumnAsyncFromJSON(json: any): ReportingColumnAsync {
    return json as ReportingColumnAsync;
}

export function ReportingColumnAsyncToJSON(value?: ReportingColumnAsync): any {
    return value as any;
}

