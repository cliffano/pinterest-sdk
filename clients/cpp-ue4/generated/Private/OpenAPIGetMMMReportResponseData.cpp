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

#include "OpenAPIGetMMMReportResponseData.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIGetMMMReportResponseData::ReportStatusEnum& Value)
{
	switch (Value)
	{
	case OpenAPIGetMMMReportResponseData::ReportStatusEnum::DoesNotExist:
		return TEXT("DOES_NOT_EXIST");
	case OpenAPIGetMMMReportResponseData::ReportStatusEnum::Finished:
		return TEXT("FINISHED");
	case OpenAPIGetMMMReportResponseData::ReportStatusEnum::InProgress:
		return TEXT("IN_PROGRESS");
	case OpenAPIGetMMMReportResponseData::ReportStatusEnum::Expired:
		return TEXT("EXPIRED");
	case OpenAPIGetMMMReportResponseData::ReportStatusEnum::Failed:
		return TEXT("FAILED");
	case OpenAPIGetMMMReportResponseData::ReportStatusEnum::Cancelled:
		return TEXT("CANCELLED");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIGetMMMReportResponseData::ReportStatusEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIGetMMMReportResponseData::EnumToString(const OpenAPIGetMMMReportResponseData::ReportStatusEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIGetMMMReportResponseData::ReportStatusEnum& Value)
{
	static TMap<FString, OpenAPIGetMMMReportResponseData::ReportStatusEnum> StringToEnum = { 
		{ TEXT("DOES_NOT_EXIST"), OpenAPIGetMMMReportResponseData::ReportStatusEnum::DoesNotExist },
		{ TEXT("FINISHED"), OpenAPIGetMMMReportResponseData::ReportStatusEnum::Finished },
		{ TEXT("IN_PROGRESS"), OpenAPIGetMMMReportResponseData::ReportStatusEnum::InProgress },
		{ TEXT("EXPIRED"), OpenAPIGetMMMReportResponseData::ReportStatusEnum::Expired },
		{ TEXT("FAILED"), OpenAPIGetMMMReportResponseData::ReportStatusEnum::Failed },
		{ TEXT("CANCELLED"), OpenAPIGetMMMReportResponseData::ReportStatusEnum::Cancelled }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIGetMMMReportResponseData::EnumFromString(const FString& EnumAsString, OpenAPIGetMMMReportResponseData::ReportStatusEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIGetMMMReportResponseData::ReportStatusEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIGetMMMReportResponseData::ReportStatusEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIGetMMMReportResponseData::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (ReportStatus.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("report_status")); WriteJsonValue(Writer, ReportStatus.GetValue());
	}
	if (Url.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("url")); WriteJsonValue(Writer, Url.GetValue());
	}
	if (Size.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("size")); WriteJsonValue(Writer, Size.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIGetMMMReportResponseData::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("report_status"), ReportStatus);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("url"), Url);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("size"), Size);

	return ParseSuccess;
}

}
