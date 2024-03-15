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

#include "OpenAPIAudienceInsightsResponse.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIAudienceInsightsResponse::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Categories.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("categories")); WriteJsonValue(Writer, Categories.GetValue());
	}
	if (Demographics.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("demographics")); WriteJsonValue(Writer, Demographics.GetValue());
	}
	if (Type.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("type")); WriteJsonValue(Writer, Type.GetValue());
	}
	if (Date.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("date")); WriteJsonValue(Writer, Date.GetValue());
	}
	if (Size.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("size")); WriteJsonValue(Writer, Size.GetValue());
	}
	if (SizeIsUpperBound.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("size_is_upper_bound")); WriteJsonValue(Writer, SizeIsUpperBound.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIAudienceInsightsResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("categories"), Categories);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("demographics"), Demographics);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("type"), Type);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("date"), Date);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("size"), Size);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("size_is_upper_bound"), SizeIsUpperBound);

	return ParseSuccess;
}

}
