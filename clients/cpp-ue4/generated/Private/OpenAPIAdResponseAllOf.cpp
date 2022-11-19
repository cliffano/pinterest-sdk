/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPIAdResponseAllOf.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIAdResponseAllOf::RejectedReasonsEnum& Value)
{
	switch (Value)
	{
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::Hashtags:
		return TEXT("HASHTAGS");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::PromotionsAndPrices:
		return TEXT("PROMOTIONS_AND_PRICES");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::Targeting:
		return TEXT("TARGETING");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::LandingPage:
		return TEXT("LANDING_PAGE");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::CapsAndSymbols:
		return TEXT("CAPS_AND_SYMBOLS");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::Shocking:
		return TEXT("SHOCKING");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::WeightLoss:
		return TEXT("WEIGHT_LOSS");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::ProhibitedProduct:
		return TEXT("PROHIBITED_PRODUCT");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::Authenticity:
		return TEXT("AUTHENTICITY");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::Nudity:
		return TEXT("NUDITY");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::ConfusingDesign:
		return TEXT("CONFUSING_DESIGN");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::Urgency:
		return TEXT("URGENCY");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::Ratings:
		return TEXT("RATINGS");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::App:
		return TEXT("APP");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::Alcohol:
		return TEXT("ALCOHOL");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::Contests:
		return TEXT("CONTESTS");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::Political:
		return TEXT("POLITICAL");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::Other:
		return TEXT("OTHER");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::Image:
		return TEXT("IMAGE");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::Nar:
		return TEXT("NAR");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::Inconsistent:
		return TEXT("INCONSISTENT");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::Clickbait:
		return TEXT("CLICKBAIT");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::NoDescription:
		return TEXT("NO_DESCRIPTION");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::LowQuality:
		return TEXT("LOW_QUALITY");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::ExaggeratedClaims:
		return TEXT("EXAGGERATED_CLAIMS");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::PinterestBrand:
		return TEXT("PINTEREST_BRAND");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::AlcoholNoSale:
		return TEXT("ALCOHOL_NO_SALE");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::LandingPageSpeed:
		return TEXT("LANDING_PAGE_SPEED");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::LandingPageHardwall:
		return TEXT("LANDING_PAGE_HARDWALL");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::LandingPageBroken:
		return TEXT("LANDING_PAGE_BROKEN");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::LandingPageQuality:
		return TEXT("LANDING_PAGE_QUALITY");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::OutOfStock:
		return TEXT("OUT_OF_STOCK");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::ImageLowQuality:
		return TEXT("IMAGE_LOW_QUALITY");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::ImageBusy:
		return TEXT("IMAGE_BUSY");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::ImagePoorlyEdited:
		return TEXT("IMAGE_POORLY_EDITED");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::ImageBeforeAfter:
		return TEXT("IMAGE_BEFORE_AFTER");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::Ugc:
		return TEXT("UGC");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::FakeButtons:
		return TEXT("FAKE_BUTTONS");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::Weapons:
		return TEXT("WEAPONS");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::Sensitive:
		return TEXT("SENSITIVE");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::UnacceptableBusiness:
		return TEXT("UNACCEPTABLE_BUSINESS");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::SuspiciousClaims:
		return TEXT("SUSPICIOUS_CLAIMS");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::Pharma:
		return TEXT("PHARMA");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::SuspiciousSupplements:
		return TEXT("SUSPICIOUS_SUPPLEMENTS");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::IllegalRecreationalDrug:
		return TEXT("ILLEGAL_RECREATIONAL_DRUG");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::LowQualityLandingPage:
		return TEXT("LOW_QUALITY_LANDING_PAGE");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::RestrictedHealthcare:
		return TEXT("RESTRICTED_HEALTHCARE");
	case OpenAPIAdResponseAllOf::RejectedReasonsEnum::InconsistentLangFr:
		return TEXT("INCONSISTENT_LANG_FR");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIAdResponseAllOf::RejectedReasonsEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIAdResponseAllOf::EnumToString(const OpenAPIAdResponseAllOf::RejectedReasonsEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIAdResponseAllOf::RejectedReasonsEnum& Value)
{
	static TMap<FString, OpenAPIAdResponseAllOf::RejectedReasonsEnum> StringToEnum = { 
		{ TEXT("HASHTAGS"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::Hashtags },
		{ TEXT("PROMOTIONS_AND_PRICES"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::PromotionsAndPrices },
		{ TEXT("TARGETING"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::Targeting },
		{ TEXT("LANDING_PAGE"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::LandingPage },
		{ TEXT("CAPS_AND_SYMBOLS"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::CapsAndSymbols },
		{ TEXT("SHOCKING"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::Shocking },
		{ TEXT("WEIGHT_LOSS"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::WeightLoss },
		{ TEXT("PROHIBITED_PRODUCT"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::ProhibitedProduct },
		{ TEXT("AUTHENTICITY"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::Authenticity },
		{ TEXT("NUDITY"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::Nudity },
		{ TEXT("CONFUSING_DESIGN"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::ConfusingDesign },
		{ TEXT("URGENCY"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::Urgency },
		{ TEXT("RATINGS"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::Ratings },
		{ TEXT("APP"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::App },
		{ TEXT("ALCOHOL"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::Alcohol },
		{ TEXT("CONTESTS"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::Contests },
		{ TEXT("POLITICAL"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::Political },
		{ TEXT("OTHER"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::Other },
		{ TEXT("IMAGE"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::Image },
		{ TEXT("NAR"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::Nar },
		{ TEXT("INCONSISTENT"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::Inconsistent },
		{ TEXT("CLICKBAIT"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::Clickbait },
		{ TEXT("NO_DESCRIPTION"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::NoDescription },
		{ TEXT("LOW_QUALITY"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::LowQuality },
		{ TEXT("EXAGGERATED_CLAIMS"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::ExaggeratedClaims },
		{ TEXT("PINTEREST_BRAND"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::PinterestBrand },
		{ TEXT("ALCOHOL_NO_SALE"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::AlcoholNoSale },
		{ TEXT("LANDING_PAGE_SPEED"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::LandingPageSpeed },
		{ TEXT("LANDING_PAGE_HARDWALL"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::LandingPageHardwall },
		{ TEXT("LANDING_PAGE_BROKEN"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::LandingPageBroken },
		{ TEXT("LANDING_PAGE_QUALITY"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::LandingPageQuality },
		{ TEXT("OUT_OF_STOCK"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::OutOfStock },
		{ TEXT("IMAGE_LOW_QUALITY"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::ImageLowQuality },
		{ TEXT("IMAGE_BUSY"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::ImageBusy },
		{ TEXT("IMAGE_POORLY_EDITED"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::ImagePoorlyEdited },
		{ TEXT("IMAGE_BEFORE_AFTER"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::ImageBeforeAfter },
		{ TEXT("UGC"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::Ugc },
		{ TEXT("FAKE_BUTTONS"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::FakeButtons },
		{ TEXT("WEAPONS"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::Weapons },
		{ TEXT("SENSITIVE"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::Sensitive },
		{ TEXT("UNACCEPTABLE_BUSINESS"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::UnacceptableBusiness },
		{ TEXT("SUSPICIOUS_CLAIMS"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::SuspiciousClaims },
		{ TEXT("PHARMA"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::Pharma },
		{ TEXT("SUSPICIOUS_SUPPLEMENTS"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::SuspiciousSupplements },
		{ TEXT("ILLEGAL_RECREATIONAL_DRUG"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::IllegalRecreationalDrug },
		{ TEXT("LOW_QUALITY_LANDING_PAGE"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::LowQualityLandingPage },
		{ TEXT("RESTRICTED_HEALTHCARE"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::RestrictedHealthcare },
		{ TEXT("INCONSISTENT_LANG_FR"), OpenAPIAdResponseAllOf::RejectedReasonsEnum::InconsistentLangFr }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIAdResponseAllOf::EnumFromString(const FString& EnumAsString, OpenAPIAdResponseAllOf::RejectedReasonsEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIAdResponseAllOf::RejectedReasonsEnum& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIAdResponseAllOf::RejectedReasonsEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIAdResponseAllOf::RejectedReasonsEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

inline FString ToString(const OpenAPIAdResponseAllOf::ReviewStatusEnum& Value)
{
	switch (Value)
	{
	case OpenAPIAdResponseAllOf::ReviewStatusEnum::Other:
		return TEXT("OTHER");
	case OpenAPIAdResponseAllOf::ReviewStatusEnum::Pending:
		return TEXT("PENDING");
	case OpenAPIAdResponseAllOf::ReviewStatusEnum::Rejected:
		return TEXT("REJECTED");
	case OpenAPIAdResponseAllOf::ReviewStatusEnum::Approved:
		return TEXT("APPROVED");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIAdResponseAllOf::ReviewStatusEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIAdResponseAllOf::EnumToString(const OpenAPIAdResponseAllOf::ReviewStatusEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIAdResponseAllOf::ReviewStatusEnum& Value)
{
	static TMap<FString, OpenAPIAdResponseAllOf::ReviewStatusEnum> StringToEnum = { 
		{ TEXT("OTHER"), OpenAPIAdResponseAllOf::ReviewStatusEnum::Other },
		{ TEXT("PENDING"), OpenAPIAdResponseAllOf::ReviewStatusEnum::Pending },
		{ TEXT("REJECTED"), OpenAPIAdResponseAllOf::ReviewStatusEnum::Rejected },
		{ TEXT("APPROVED"), OpenAPIAdResponseAllOf::ReviewStatusEnum::Approved }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIAdResponseAllOf::EnumFromString(const FString& EnumAsString, OpenAPIAdResponseAllOf::ReviewStatusEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIAdResponseAllOf::ReviewStatusEnum& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIAdResponseAllOf::ReviewStatusEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIAdResponseAllOf::ReviewStatusEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIAdResponseAllOf::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (AdAccountId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ad_account_id")); WriteJsonValue(Writer, AdAccountId.GetValue());
	}
	if (CampaignId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("campaign_id")); WriteJsonValue(Writer, CampaignId.GetValue());
	}
	if (CollectionItemsDestinationUrlTemplate.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("collection_items_destination_url_template")); WriteJsonValue(Writer, CollectionItemsDestinationUrlTemplate.GetValue());
	}
	if (CreatedTime.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("created_time")); WriteJsonValue(Writer, CreatedTime.GetValue());
	}
	if (Id.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("id")); WriteJsonValue(Writer, Id.GetValue());
	}
	if (RejectedReasons.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("rejected_reasons")); WriteJsonValue(Writer, RejectedReasons.GetValue());
	}
	if (RejectionLabels.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("rejection_labels")); WriteJsonValue(Writer, RejectionLabels.GetValue());
	}
	if (ReviewStatus.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("review_status")); WriteJsonValue(Writer, ReviewStatus.GetValue());
	}
	if (Type.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("type")); WriteJsonValue(Writer, Type.GetValue());
	}
	if (UpdatedTime.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("updated_time")); WriteJsonValue(Writer, UpdatedTime.GetValue());
	}
	if (SummaryStatus.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("summary_status")); WriteJsonValue(Writer, SummaryStatus.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIAdResponseAllOf::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("ad_account_id"), AdAccountId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("campaign_id"), CampaignId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("collection_items_destination_url_template"), CollectionItemsDestinationUrlTemplate);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("created_time"), CreatedTime);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("id"), Id);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("rejected_reasons"), RejectedReasons);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("rejection_labels"), RejectionLabels);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("review_status"), ReviewStatus);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("type"), Type);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("updated_time"), UpdatedTime);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("summary_status"), SummaryStatus);

	return ParseSuccess;
}

}
