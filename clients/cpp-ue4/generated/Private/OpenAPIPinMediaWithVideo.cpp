/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPIPinMediaWithVideo.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIPinMediaWithVideo::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Images.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("images")); WriteJsonValue(Writer, Images.GetValue());
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
	if (MediaType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("media_type")); WriteJsonValue(Writer, MediaType.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIPinMediaWithVideo::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("images"), Images);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("cover_image_url"), CoverImageUrl);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("duration"), Duration);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("height"), Height);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("width"), Width);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("media_type"), MediaType);

	return ParseSuccess;
}

}