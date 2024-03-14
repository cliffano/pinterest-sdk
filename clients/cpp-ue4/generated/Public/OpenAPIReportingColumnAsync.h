/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"

namespace OpenAPI
{

/*
 * OpenAPIReportingColumnAsync
 *
 * Reporting columns
 */
class OPENAPI_API OpenAPIReportingColumnAsync : public Model
{
public:
    virtual ~OpenAPIReportingColumnAsync() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	enum class Values
	{
		SpendInMicroDollar,
		PaidImpression,
		CpcInMicroDollar,
		EcpcInMicroDollar,
		Ctr,
		Ectr,
		CampaignName,
		CampaignStatus,
		AdStatus,
		PinPromotionStatus,
		PinId,
		TotalEngagement,
		ENGAGEMENT1,
		ENGAGEMENT2,
		EcpmInMicroDollar,
		CTR2,
		CampaignId,
		AdvertiserId,
		AdAccountId,
		PinPromotionId,
		AdId,
		AdGroupId,
		CampaignManagedStatus,
		CpmInMicroDollar,
		AdGroupName,
		AdGroupStatus,
		ProductGroupId,
		CLICKTHROUGH1,
		REPIN1,
		IMPRESSION1,
		IMPRESSION1GROSS,
		CLICKTHROUGH1GROSS,
		OUTBOUNDCLICK1,
		CLICKTHROUGH2,
		REPIN2,
		IMPRESSION2,
		OUTBOUNDCLICK2,
		TotalImpressionUser,
		TotalImpressionFrequency,
		TotalEngagementPageVisit,
		TotalEngagementSignup,
		TotalEngagementCheckout,
		TotalEngagementCustom,
		TotalEngagementAddToCart,
		TotalEngagementLead,
		TotalEngagementSearch,
		TotalEngagementWatchVideo,
		TotalEngagementViewCategory,
		TotalEngagementAppInstall,
		TotalEngagementUnknown,
		TotalClickPageVisit,
		TotalClickSignup,
		TotalClickCheckout,
		TotalClickCustom,
		TotalClickAddToCart,
		TotalClickLead,
		TotalClickSearch,
		TotalClickWatchVideo,
		TotalClickViewCategory,
		TotalClickAppInstall,
		TotalClickUnknown,
		TotalViewPageVisit,
		TotalViewSignup,
		TotalViewCheckout,
		TotalViewCustom,
		TotalViewAddToCart,
		TotalViewLead,
		TotalViewSearch,
		TotalViewWatchVideo,
		TotalViewViewCategory,
		TotalViewAppInstall,
		TotalViewUnknown,
		TotalConversions,
		TotalEngagementPageVisitValueInMicroDollar,
		TotalEngagementSignupValueInMicroDollar,
		TotalEngagementCheckoutValueInMicroDollar,
		TotalEngagementCustomValueInMicroDollar,
		TotalEngagementAddToCartValueInMicroDollar,
		TotalEngagementLeadValueInMicroDollar,
		TotalEngagementSearchValueInMicroDollar,
		TotalEngagementWatchVideoValueInMicroDollar,
		TotalEngagementViewCategoryValueInMicroDollar,
		TotalEngagementAppInstallValueInMicroDollar,
		TotalEngagementUnknownValueInMicroDollar,
		TotalClickPageVisitValueInMicroDollar,
		TotalClickSignupValueInMicroDollar,
		TotalClickCheckoutValueInMicroDollar,
		TotalClickCustomValueInMicroDollar,
		TotalClickAddToCartValueInMicroDollar,
		TotalClickLeadValueInMicroDollar,
		TotalClickSearchValueInMicroDollar,
		TotalClickWatchVideoValueInMicroDollar,
		TotalClickViewCategoryValueInMicroDollar,
		TotalClickAppInstallValueInMicroDollar,
		TotalClickUnknownValueInMicroDollar,
		TotalViewPageVisitValueInMicroDollar,
		TotalViewSignupValueInMicroDollar,
		TotalViewCheckoutValueInMicroDollar,
		TotalViewCustomValueInMicroDollar,
		TotalViewAddToCartValueInMicroDollar,
		TotalViewLeadValueInMicroDollar,
		TotalViewSearchValueInMicroDollar,
		TotalViewWatchVideoValueInMicroDollar,
		TotalViewViewCategoryValueInMicroDollar,
		TotalViewAppInstallValueInMicroDollar,
		TotalViewUnknownValueInMicroDollar,
		TotalConversionsValueInMicroDollar,
		TotalEngagementPageVisitQuantity,
		TotalEngagementSignupQuantity,
		TotalEngagementCheckoutQuantity,
		TotalEngagementCustomQuantity,
		TotalEngagementAddToCartQuantity,
		TotalEngagementLeadQuantity,
		TotalEngagementSearchQuantity,
		TotalEngagementWatchVideoQuantity,
		TotalEngagementViewCategoryQuantity,
		TotalEngagementUnknownQuantity,
		TotalClickPageVisitQuantity,
		TotalClickSignupQuantity,
		TotalClickCheckoutQuantity,
		TotalClickCustomQuantity,
		TotalClickAddToCartQuantity,
		TotalClickLeadQuantity,
		TotalClickSearchQuantity,
		TotalClickWatchVideoQuantity,
		TotalClickViewCategoryQuantity,
		TotalClickUnknownQuantity,
		TotalViewPageVisitQuantity,
		TotalViewSignupQuantity,
		TotalViewCheckoutQuantity,
		TotalViewCustomQuantity,
		TotalViewAddToCartQuantity,
		TotalViewLeadQuantity,
		TotalViewSearchQuantity,
		TotalViewWatchVideoQuantity,
		TotalViewViewCategoryQuantity,
		TotalViewUnknownQuantity,
		TotalConversionsQuantity,
		ONSITECHECKOUTS1,
		PinPromotionName,
		AdName,
		CampaignLifetimeSpendCap,
		CampaignDailySpendCap,
		TotalPageVisitDesktopActionToDesktopConversion,
		TotalPageVisitDesktopActionToMobileConversion,
		TotalPageVisitDesktopActionToTabletConversion,
		TotalPageVisitMobileActionToDesktopConversion,
		TotalPageVisitMobileActionToMobileConversion,
		TotalPageVisitMobileActionToTabletConversion,
		TotalPageVisitTabletActionToDesktopConversion,
		TotalPageVisitTabletActionToMobileConversion,
		TotalPageVisitTabletActionToTabletConversion,
		TotalSignupDesktopActionToDesktopConversion,
		TotalSignupDesktopActionToMobileConversion,
		TotalSignupDesktopActionToTabletConversion,
		TotalSignupMobileActionToDesktopConversion,
		TotalSignupMobileActionToMobileConversion,
		TotalSignupMobileActionToTabletConversion,
		TotalSignupTabletActionToDesktopConversion,
		TotalSignupTabletActionToMobileConversion,
		TotalSignupTabletActionToTabletConversion,
		TotalCheckoutDesktopActionToDesktopConversion,
		TotalCheckoutDesktopActionToMobileConversion,
		TotalCheckoutDesktopActionToTabletConversion,
		TotalCheckoutMobileActionToDesktopConversion,
		TotalCheckoutMobileActionToMobileConversion,
		TotalCheckoutMobileActionToTabletConversion,
		TotalCheckoutTabletActionToDesktopConversion,
		TotalCheckoutTabletActionToMobileConversion,
		TotalCheckoutTabletActionToTabletConversion,
		TotalCustomDesktopActionToDesktopConversion,
		TotalCustomDesktopActionToMobileConversion,
		TotalCustomDesktopActionToTabletConversion,
		TotalCustomMobileActionToDesktopConversion,
		TotalCustomMobileActionToMobileConversion,
		TotalCustomMobileActionToTabletConversion,
		TotalCustomTabletActionToDesktopConversion,
		TotalCustomTabletActionToMobileConversion,
		TotalCustomTabletActionToTabletConversion,
		TotalAddToCartDesktopActionToDesktopConversion,
		TotalAddToCartDesktopActionToMobileConversion,
		TotalAddToCartDesktopActionToTabletConversion,
		TotalAddToCartMobileActionToDesktopConversion,
		TotalAddToCartMobileActionToMobileConversion,
		TotalAddToCartMobileActionToTabletConversion,
		TotalAddToCartTabletActionToDesktopConversion,
		TotalAddToCartTabletActionToMobileConversion,
		TotalAddToCartTabletActionToTabletConversion,
		TotalLeadDesktopActionToDesktopConversion,
		TotalLeadDesktopActionToMobileConversion,
		TotalLeadDesktopActionToTabletConversion,
		TotalLeadMobileActionToDesktopConversion,
		TotalLeadMobileActionToMobileConversion,
		TotalLeadMobileActionToTabletConversion,
		TotalLeadTabletActionToDesktopConversion,
		TotalLeadTabletActionToMobileConversion,
		TotalLeadTabletActionToTabletConversion,
		TotalSearchDesktopActionToDesktopConversion,
		TotalSearchDesktopActionToMobileConversion,
		TotalSearchDesktopActionToTabletConversion,
		TotalSearchMobileActionToDesktopConversion,
		TotalSearchMobileActionToMobileConversion,
		TotalSearchMobileActionToTabletConversion,
		TotalSearchTabletActionToDesktopConversion,
		TotalSearchTabletActionToMobileConversion,
		TotalSearchTabletActionToTabletConversion,
		TotalWatchVideoDesktopActionToDesktopConversion,
		TotalWatchVideoDesktopActionToMobileConversion,
		TotalWatchVideoDesktopActionToTabletConversion,
		TotalWatchVideoMobileActionToDesktopConversion,
		TotalWatchVideoMobileActionToMobileConversion,
		TotalWatchVideoMobileActionToTabletConversion,
		TotalWatchVideoTabletActionToDesktopConversion,
		TotalWatchVideoTabletActionToMobileConversion,
		TotalWatchVideoTabletActionToTabletConversion,
		TotalViewCategoryDesktopActionToDesktopConversion,
		TotalViewCategoryDesktopActionToMobileConversion,
		TotalViewCategoryDesktopActionToTabletConversion,
		TotalViewCategoryMobileActionToDesktopConversion,
		TotalViewCategoryMobileActionToMobileConversion,
		TotalViewCategoryMobileActionToTabletConversion,
		TotalViewCategoryTabletActionToDesktopConversion,
		TotalViewCategoryTabletActionToMobileConversion,
		TotalViewCategoryTabletActionToTabletConversion,
		TotalAppInstallDesktopActionToDesktopConversion,
		TotalAppInstallDesktopActionToMobileConversion,
		TotalAppInstallDesktopActionToTabletConversion,
		TotalAppInstallMobileActionToDesktopConversion,
		TotalAppInstallMobileActionToMobileConversion,
		TotalAppInstallMobileActionToTabletConversion,
		TotalAppInstallTabletActionToDesktopConversion,
		TotalAppInstallTabletActionToMobileConversion,
		TotalAppInstallTabletActionToTabletConversion,
		TotalUnknownDesktopActionToDesktopConversion,
		TotalUnknownDesktopActionToMobileConversion,
		TotalUnknownDesktopActionToTabletConversion,
		TotalUnknownMobileActionToDesktopConversion,
		TotalUnknownMobileActionToMobileConversion,
		TotalUnknownMobileActionToTabletConversion,
		TotalUnknownTabletActionToDesktopConversion,
		TotalUnknownTabletActionToMobileConversion,
		TotalUnknownTabletActionToTabletConversion,
		TotalCheckout,
		TotalCustom,
		TotalLead,
		TotalAppInstall,
		TotalCheckoutValueInMicroDollar,
		TotalAppInstallValueInMicroDollar,
		TotalCheckoutQuantity,
		AppInstallCostPerAction,
		VIDEO3SECVIEWS1,
		VIDEOP100COMPLETE1,
		VIDEOP0COMBINED1,
		VIDEOP25COMBINED1,
		VIDEOP50COMBINED1,
		VIDEOP75COMBINED1,
		VIDEOP95COMBINED1,
		VIDEOMRCVIEWS1,
		VIDEO3SECVIEWS2,
		VIDEOP100COMPLETE2,
		VIDEOP0COMBINED2,
		VIDEOP25COMBINED2,
		VIDEOP50COMBINED2,
		VIDEOP75COMBINED2,
		VIDEOP95COMBINED2,
		VIDEOMRCVIEWS2,
		VideoLength,
		CpvInMicroDollar,
		CpcvInMicroDollar,
		CPCVP95INMICRODOLLAR,
		TOTALVIDEO3SECVIEWS,
		VIDEOAVGWATCHTIMEINSECOND1,
		VIDEOAVGWATCHTIMEINSECOND2,
		TotalVideoAvgWatchtimeInSecond,
		WebCheckoutCostPerAction,
		WebCheckoutRoas,
		TotalWebCheckout,
		TotalWebCheckoutValueInMicroDollar,
		TotalWebClickCheckout,
		TotalWebClickCheckoutValueInMicroDollar,
		TotalWebEngagementCheckout,
		TotalWebEngagementCheckoutValueInMicroDollar,
		TotalWebViewCheckout,
		TotalWebViewCheckoutValueInMicroDollar,
		InappCheckoutCostPerAction,
		InappCheckoutRoas,
		TotalInappCheckout,
		TotalInappCheckoutValueInMicroDollar,
		TotalInappClickCheckout,
		TotalInappClickCheckoutValueInMicroDollar,
		TotalInappEngagementCheckout,
		TotalInappEngagementCheckoutValueInMicroDollar,
		TotalInappViewCheckout,
		TotalInappViewCheckoutValueInMicroDollar,
		OfflineCheckoutCostPerAction,
		OfflineCheckoutRoas,
		TotalOfflineCheckout,
		TotalOfflineCheckoutValueInMicroDollar,
		TotalOfflineClickCheckout,
		TotalOfflineClickCheckoutValueInMicroDollar,
		TotalOfflineEngagementCheckout,
		TotalOfflineEngagementCheckoutValueInMicroDollar,
		TotalOfflineViewCheckout,
		TotalOfflineViewCheckoutValueInMicroDollar,
		WebAddToCartCostPerAction,
		WebAddToCartRoas,
		TotalWebAddToCart,
		TotalWebAddToCartValueInMicroDollar,
		TotalWebClickAddToCart,
		TotalWebClickAddToCartValueInMicroDollar,
		TotalWebEngagementAddToCart,
		TotalWebEngagementAddToCartValueInMicroDollar,
		TotalWebViewAddToCart,
		TotalWebViewAddToCartValueInMicroDollar,
		InappAddToCartCostPerAction,
		InappAddToCartRoas,
		TotalInappAddToCart,
		TotalInappAddToCartValueInMicroDollar,
		TotalInappClickAddToCart,
		TotalInappClickAddToCartValueInMicroDollar,
		TotalInappEngagementAddToCart,
		TotalInappEngagementAddToCartValueInMicroDollar,
		TotalInappViewAddToCart,
		TotalInappViewAddToCartValueInMicroDollar,
		WebPageVisitCostPerAction,
		WebPageVisitRoas,
		TotalWebPageVisit,
		TotalWebPageVisitValueInMicroDollar,
		TotalWebClickPageVisit,
		TotalWebClickPageVisitValueInMicroDollar,
		TotalWebEngagementPageVisit,
		TotalWebEngagementPageVisitValueInMicroDollar,
		TotalWebViewPageVisit,
		TotalWebViewPageVisitValueInMicroDollar,
		WebSignupCostPerAction,
		WebSignupRoas,
		TotalWebSignup,
		TotalWebSignupValueInMicroDollar,
		TotalWebClickSignup,
		TotalWebClickSignupValueInMicroDollar,
		TotalWebEngagementSignup,
		TotalWebEngagementSignupValueInMicroDollar,
		TotalWebViewSignup,
		TotalWebViewSignupValueInMicroDollar,
		InappSignupCostPerAction,
		InappSignupRoas,
		TotalInappSignup,
		TotalInappSignupValueInMicroDollar,
		TotalInappClickSignup,
		TotalInappClickSignupValueInMicroDollar,
		TotalInappEngagementSignup,
		TotalInappEngagementSignupValueInMicroDollar,
		TotalInappViewSignup,
		TotalInappViewSignupValueInMicroDollar,
		OfflineSignupCostPerAction,
		OfflineSignupRoas,
		TotalOfflineSignup,
		TotalOfflineSignupValueInMicroDollar,
		TotalOfflineClickSignup,
		TotalOfflineClickSignupValueInMicroDollar,
		TotalOfflineEngagementSignup,
		TotalOfflineEngagementSignupValueInMicroDollar,
		TotalOfflineViewSignup,
		TotalOfflineViewSignupValueInMicroDollar,
		WebWatchVideoCostPerAction,
		WebWatchVideoRoas,
		TotalWebWatchVideo,
		TotalWebWatchVideoValueInMicroDollar,
		TotalWebClickWatchVideo,
		TotalWebClickWatchVideoValueInMicroDollar,
		TotalWebEngagementWatchVideo,
		TotalWebEngagementWatchVideoValueInMicroDollar,
		TotalWebViewWatchVideo,
		TotalWebViewWatchVideoValueInMicroDollar,
		WebLeadCostPerAction,
		WebLeadRoas,
		TotalWebLead,
		TotalWebLeadValueInMicroDollar,
		TotalWebClickLead,
		TotalWebClickLeadValueInMicroDollar,
		TotalWebEngagementLead,
		TotalWebEngagementLeadValueInMicroDollar,
		TotalWebViewLead,
		TotalWebViewLeadValueInMicroDollar,
		OfflineLeadCostPerAction,
		OfflineLeadRoas,
		TotalOfflineLead,
		TotalOfflineLeadValueInMicroDollar,
		TotalOfflineClickLead,
		TotalOfflineClickLeadValueInMicroDollar,
		TotalOfflineEngagementLead,
		TotalOfflineEngagementLeadValueInMicroDollar,
		TotalOfflineViewLead,
		TotalOfflineViewLeadValueInMicroDollar,
		WebSearchCostPerAction,
		WebSearchRoas,
		TotalWebSearch,
		TotalWebSearchValueInMicroDollar,
		TotalWebClickSearch,
		TotalWebClickSearchValueInMicroDollar,
		TotalWebEngagementSearch,
		TotalWebEngagementSearchValueInMicroDollar,
		TotalWebViewSearch,
		TotalWebViewSearchValueInMicroDollar,
		InappSearchCostPerAction,
		InappSearchRoas,
		TotalInappSearch,
		TotalInappSearchValueInMicroDollar,
		TotalInappClickSearch,
		TotalInappClickSearchValueInMicroDollar,
		TotalInappEngagementSearch,
		TotalInappEngagementSearchValueInMicroDollar,
		TotalInappViewSearch,
		TotalInappViewSearchValueInMicroDollar,
		WebViewCategoryCostPerAction,
		WebViewCategoryRoas,
		TotalWebViewCategory,
		TotalWebViewCategoryValueInMicroDollar,
		TotalWebClickViewCategory,
		TotalWebClickViewCategoryValueInMicroDollar,
		TotalWebEngagementViewCategory,
		TotalWebEngagementViewCategoryValueInMicroDollar,
		TotalWebViewViewCategory,
		TotalWebViewViewCategoryValueInMicroDollar,
		WebCustomCostPerAction,
		WebCustomRoas,
		TotalWebCustom,
		TotalWebCustomValueInMicroDollar,
		TotalWebClickCustom,
		TotalWebClickCustomValueInMicroDollar,
		TotalWebEngagementCustom,
		TotalWebEngagementCustomValueInMicroDollar,
		TotalWebViewCustom,
		TotalWebViewCustomValueInMicroDollar,
		OfflineCustomCostPerAction,
		OfflineCustomRoas,
		TotalOfflineCustom,
		TotalOfflineCustomValueInMicroDollar,
		TotalOfflineClickCustom,
		TotalOfflineClickCustomValueInMicroDollar,
		TotalOfflineEngagementCustom,
		TotalOfflineEngagementCustomValueInMicroDollar,
		TotalOfflineViewCustom,
		TotalOfflineViewCustomValueInMicroDollar,
		WebUnknownCostPerAction,
		WebUnknownRoas,
		TotalWebUnknown,
		TotalWebUnknownValueInMicroDollar,
		TotalWebClickUnknown,
		TotalWebClickUnknownValueInMicroDollar,
		TotalWebEngagementUnknown,
		TotalWebEngagementUnknownValueInMicroDollar,
		TotalWebViewUnknown,
		TotalWebViewUnknownValueInMicroDollar,
		InappUnknownCostPerAction,
		InappUnknownRoas,
		TotalInappUnknown,
		TotalInappUnknownValueInMicroDollar,
		TotalInappClickUnknown,
		TotalInappClickUnknownValueInMicroDollar,
		TotalInappEngagementUnknown,
		TotalInappEngagementUnknownValueInMicroDollar,
		TotalInappViewUnknown,
		TotalInappViewUnknownValueInMicroDollar,
		OfflineUnknownCostPerAction,
		OfflineUnknownRoas,
		TotalOfflineUnknown,
		TotalOfflineUnknownValueInMicroDollar,
		TotalOfflineClickUnknown,
		TotalOfflineClickUnknownValueInMicroDollar,
		TotalOfflineEngagementUnknown,
		TotalOfflineEngagementUnknownValueInMicroDollar,
		TotalOfflineViewUnknown,
		TotalOfflineViewUnknownValueInMicroDollar,
		InappAppInstallCostPerAction,
		InappAppInstallRoas,
		TotalInappAppInstall,
		TotalInappAppInstallValueInMicroDollar,
		TotalInappClickAppInstall,
		TotalInappClickAppInstallValueInMicroDollar,
		TotalInappEngagementAppInstall,
		TotalInappEngagementAppInstallValueInMicroDollar,
		TotalInappViewAppInstall,
		TotalInappViewAppInstallValueInMicroDollar,
		IDEAPINPRODUCTTAGVISIT1,
		IDEAPINPRODUCTTAGVISIT2,
		RepinRate,
		TOTALVIDEOP95COMBINED,
		AdGroupEntityStatus,
		ECPCVP95INDOLLAR,
		EngagementRate,
		PageVisitCostPerAction,
		TotalPageVisit,
		CheckoutRoas,
		TotalSignupValueInMicroDollar,
		EcpcvInDollar,
		TOTALVIDEOP75COMBINED,
		TOTALVIDEOP50COMBINED,
		TotalSignup,
		TOTALVIDEOP0COMBINED,
		SpendInDollar,
		EengagementRate,
		TOTALVIDEOP25COMBINED,
		CpmInDollar,
		EcpvInDollar,
		TotalClickthrough,
		EcpeInDollar,
		TOTALVIDEOP100COMPLETE,
		CampaignEntityStatus,
		PageVisitRoas,
		TotalRepinRate,
		TotalVideoMrcViews,
		TotalIdeaPinProductTagVisit,
		EcpcInDollar,
		WEBSESSIONS1,
		WEBSESSIONS2,
		TotalWebSessions,
  	};

	Values Value;

	static FString EnumToString(const Values& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, Values& EnumValue);
};

}