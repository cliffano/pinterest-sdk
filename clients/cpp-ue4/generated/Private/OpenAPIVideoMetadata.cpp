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

#include "OpenAPIVideoMetadata.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIVideoMetadata::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (ItemType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("item_type")); WriteJsonValue(Writer, ItemType.GetValue());
	}
	if (CoverImageUrl.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("cover_image_url")); WriteJsonValue(Writer, CoverImageUrl.GetValue());
	}
	if (Duration.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("duration")); WriteJsonValue(Writer, Duration.GetValue());
	}
	if (Height.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("height")); WriteJsonValue(Writer, Height.GetValue());
	}
	if (Width.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("width")); WriteJsonValue(Writer, Width.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIVideoMetadata::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("item_type"), ItemType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("cover_image_url"), CoverImageUrl);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("duration"), Duration);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("height"), Height);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("width"), Width);

	return ParseSuccess;
}

}