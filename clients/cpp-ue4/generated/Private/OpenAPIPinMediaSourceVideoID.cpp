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

#include "OpenAPIPinMediaSourceVideoID.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIPinMediaSourceVideoID::SourceTypeEnum& Value)
{
	switch (Value)
	{
	case OpenAPIPinMediaSourceVideoID::SourceTypeEnum::VideoId:
		return TEXT("video_id");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIPinMediaSourceVideoID::SourceTypeEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIPinMediaSourceVideoID::EnumToString(const OpenAPIPinMediaSourceVideoID::SourceTypeEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIPinMediaSourceVideoID::SourceTypeEnum& Value)
{
	static TMap<FString, OpenAPIPinMediaSourceVideoID::SourceTypeEnum> StringToEnum = { 
		{ TEXT("video_id"), OpenAPIPinMediaSourceVideoID::SourceTypeEnum::VideoId }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIPinMediaSourceVideoID::EnumFromString(const FString& EnumAsString, OpenAPIPinMediaSourceVideoID::SourceTypeEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIPinMediaSourceVideoID::SourceTypeEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIPinMediaSourceVideoID::SourceTypeEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

inline FString ToString(const OpenAPIPinMediaSourceVideoID::CoverImageContentTypeEnum& Value)
{
	switch (Value)
	{
	case OpenAPIPinMediaSourceVideoID::CoverImageContentTypeEnum::Jpeg:
		return TEXT("image/jpeg");
	case OpenAPIPinMediaSourceVideoID::CoverImageContentTypeEnum::Png:
		return TEXT("image/png");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIPinMediaSourceVideoID::CoverImageContentTypeEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIPinMediaSourceVideoID::EnumToString(const OpenAPIPinMediaSourceVideoID::CoverImageContentTypeEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIPinMediaSourceVideoID::CoverImageContentTypeEnum& Value)
{
	static TMap<FString, OpenAPIPinMediaSourceVideoID::CoverImageContentTypeEnum> StringToEnum = { 
		{ TEXT("image/jpeg"), OpenAPIPinMediaSourceVideoID::CoverImageContentTypeEnum::Jpeg },
		{ TEXT("image/png"), OpenAPIPinMediaSourceVideoID::CoverImageContentTypeEnum::Png }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIPinMediaSourceVideoID::EnumFromString(const FString& EnumAsString, OpenAPIPinMediaSourceVideoID::CoverImageContentTypeEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIPinMediaSourceVideoID::CoverImageContentTypeEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIPinMediaSourceVideoID::CoverImageContentTypeEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIPinMediaSourceVideoID::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("source_type")); WriteJsonValue(Writer, SourceType);
	if (CoverImageUrl.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("cover_image_url")); WriteJsonValue(Writer, CoverImageUrl.GetValue());
	}
	if (CoverImageContentType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("cover_image_content_type")); WriteJsonValue(Writer, CoverImageContentType.GetValue());
	}
	if (CoverImageData.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("cover_image_data")); WriteJsonValue(Writer, CoverImageData.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("media_id")); WriteJsonValue(Writer, MediaId);
	if (IsStandard.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("is_standard")); WriteJsonValue(Writer, IsStandard.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIPinMediaSourceVideoID::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("source_type"), SourceType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("cover_image_url"), CoverImageUrl);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("cover_image_content_type"), CoverImageContentType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("cover_image_data"), CoverImageData);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("media_id"), MediaId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("is_standard"), IsStandard);

	return ParseSuccess;
}

}
