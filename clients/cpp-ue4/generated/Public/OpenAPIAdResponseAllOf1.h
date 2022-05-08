/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIPinPromotionSummaryStatus.h"

namespace OpenAPI
{

/*
 * OpenAPIAdResponseAllOf1
 *
 * 
 */
class OPENAPI_API OpenAPIAdResponseAllOf1 : public Model
{
public:
    virtual ~OpenAPIAdResponseAllOf1() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* The ID of the advertiser that this ad belongs to. */
	TOptional<FString> AdAccountId;
	/* ID of the ad campaign that contains this ad. */
	TOptional<FString> CampaignId;
	/* Destination URL template for all items within a collections drawer. */
	TOptional<FString> CollectionItemsDestinationUrlTemplate;
	/* Pin creation time. Unix timestamp in seconds. */
	TOptional<int32> CreatedTime;
	/* The ID of this ad. */
	TOptional<FString> Id;
	enum class RejectedReasonsEnum
	{
		Hashtags,
		PromotionsAndPrices,
		Targeting,
		LandingPage,
		CapsAndSymbols,
		Shocking,
		WeightLoss,
		ProhibitedProduct,
		Authenticity,
		Nudity,
		ConfusingDesign,
		Urgency,
		Ratings,
		App,
		Alcohol,
		Contests,
		Political,
		Other,
		Image,
		Nar,
		Inconsistent,
		Clickbait,
		NoDescription,
		LowQuality,
		ExaggeratedClaims,
		PinterestBrand,
		AlcoholNoSale,
		LandingPageSpeed,
		LandingPageHardwall,
		LandingPageBroken,
		LandingPageQuality,
		OutOfStock,
		ImageLowQuality,
		ImageBusy,
		ImagePoorlyEdited,
		ImageBeforeAfter,
		Ugc,
		FakeButtons,
		Weapons,
		Sensitive,
		UnacceptableBusiness,
		SuspiciousClaims,
		Pharma,
		SuspiciousSupplements,
		IllegalRecreationalDrug,
		LowQualityLandingPage,
		RestrictedHealthcare,
		InconsistentLangFr,
  	};

	static FString EnumToString(const RejectedReasonsEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, RejectedReasonsEnum& EnumValue);
	/* Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\". */
	TOptional<TArray<RejectedReasonsEnum>> RejectedReasons;
	/* Text reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\". */
	TOptional<TArray<FString>> RejectionLabels;
	enum class ReviewStatusEnum
	{
		Other,
		Pending,
		Rejected,
		Approved,
  	};

	static FString EnumToString(const ReviewStatusEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, ReviewStatusEnum& EnumValue);
	/* Ad review status */
	TOptional<ReviewStatusEnum> ReviewStatus;
	/* Always \"ad\". */
	TOptional<FString> Type;
	/* Last update time. Unix timestamp in seconds. */
	TOptional<int32> UpdatedTime;
	/* Ad summary status */
	TOptional<OpenAPIPinPromotionSummaryStatus> SummaryStatus;
};

}