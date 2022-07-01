/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPICampaignResponseAllOf1.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPICampaignResponseAllOf1::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (ObjectiveType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("objective_type")); WriteJsonValue(Writer, ObjectiveType.GetValue());
	}
	if (CreatedTime.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("created_time")); WriteJsonValue(Writer, CreatedTime.GetValue());
	}
	if (UpdatedTime.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("updated_time")); WriteJsonValue(Writer, UpdatedTime.GetValue());
	}
	if (Type.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("type")); WriteJsonValue(Writer, Type.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPICampaignResponseAllOf1::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("objective_type"), ObjectiveType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("created_time"), CreatedTime);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("updated_time"), UpdatedTime);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("type"), Type);

	return ParseSuccess;
}

}
