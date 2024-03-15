/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPIBusinessAccessRole.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIBusinessAccessRole::Values& Value)
{
	switch (Value)
	{
	case OpenAPIBusinessAccessRole::Values::Owner:
		return TEXT("OWNER");
	case OpenAPIBusinessAccessRole::Values::Admin:
		return TEXT("ADMIN");
	case OpenAPIBusinessAccessRole::Values::Analyst:
		return TEXT("ANALYST");
	case OpenAPIBusinessAccessRole::Values::SosReader:
		return TEXT("SOS_READER");
	case OpenAPIBusinessAccessRole::Values::FinanceManager:
		return TEXT("FINANCE_MANAGER");
	case OpenAPIBusinessAccessRole::Values::AudienceManager:
		return TEXT("AUDIENCE_MANAGER");
	case OpenAPIBusinessAccessRole::Values::CampaignManager:
		return TEXT("CAMPAIGN_MANAGER");
	case OpenAPIBusinessAccessRole::Values::CatalogsManager:
		return TEXT("CATALOGS_MANAGER");
	case OpenAPIBusinessAccessRole::Values::RestrictedOwner:
		return TEXT("RESTRICTED_OWNER");
	case OpenAPIBusinessAccessRole::Values::ProfileManager:
		return TEXT("PROFILE_MANAGER");
	case OpenAPIBusinessAccessRole::Values::ProfilePublisher:
		return TEXT("PROFILE_PUBLISHER");
	case OpenAPIBusinessAccessRole::Values::ResourcePinnerListOwner:
		return TEXT("RESOURCE_PINNER_LIST_OWNER");
	case OpenAPIBusinessAccessRole::Values::ResourcePinnerListReader:
		return TEXT("RESOURCE_PINNER_LIST_READER");
	case OpenAPIBusinessAccessRole::Values::BizPinnerListSharer:
		return TEXT("BIZ_PINNER_LIST_SHARER");
	case OpenAPIBusinessAccessRole::Values::ResourceConversionTagsReader:
		return TEXT("RESOURCE_CONVERSION_TAGS_READER");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIBusinessAccessRole::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIBusinessAccessRole::EnumToString(const OpenAPIBusinessAccessRole::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIBusinessAccessRole::Values& Value)
{
	static TMap<FString, OpenAPIBusinessAccessRole::Values> StringToEnum = { 
		{ TEXT("OWNER"), OpenAPIBusinessAccessRole::Values::Owner },
		{ TEXT("ADMIN"), OpenAPIBusinessAccessRole::Values::Admin },
		{ TEXT("ANALYST"), OpenAPIBusinessAccessRole::Values::Analyst },
		{ TEXT("SOS_READER"), OpenAPIBusinessAccessRole::Values::SosReader },
		{ TEXT("FINANCE_MANAGER"), OpenAPIBusinessAccessRole::Values::FinanceManager },
		{ TEXT("AUDIENCE_MANAGER"), OpenAPIBusinessAccessRole::Values::AudienceManager },
		{ TEXT("CAMPAIGN_MANAGER"), OpenAPIBusinessAccessRole::Values::CampaignManager },
		{ TEXT("CATALOGS_MANAGER"), OpenAPIBusinessAccessRole::Values::CatalogsManager },
		{ TEXT("RESTRICTED_OWNER"), OpenAPIBusinessAccessRole::Values::RestrictedOwner },
		{ TEXT("PROFILE_MANAGER"), OpenAPIBusinessAccessRole::Values::ProfileManager },
		{ TEXT("PROFILE_PUBLISHER"), OpenAPIBusinessAccessRole::Values::ProfilePublisher },
		{ TEXT("RESOURCE_PINNER_LIST_OWNER"), OpenAPIBusinessAccessRole::Values::ResourcePinnerListOwner },
		{ TEXT("RESOURCE_PINNER_LIST_READER"), OpenAPIBusinessAccessRole::Values::ResourcePinnerListReader },
		{ TEXT("BIZ_PINNER_LIST_SHARER"), OpenAPIBusinessAccessRole::Values::BizPinnerListSharer },
		{ TEXT("RESOURCE_CONVERSION_TAGS_READER"), OpenAPIBusinessAccessRole::Values::ResourceConversionTagsReader }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIBusinessAccessRole::EnumFromString(const FString& EnumAsString, OpenAPIBusinessAccessRole::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIBusinessAccessRole::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIBusinessAccessRole::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIBusinessAccessRole::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPIBusinessAccessRole::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
