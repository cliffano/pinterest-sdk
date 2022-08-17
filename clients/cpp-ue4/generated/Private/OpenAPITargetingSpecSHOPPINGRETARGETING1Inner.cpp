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

#include "OpenAPITargetingSpecSHOPPINGRETARGETING1Inner.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPITargetingSpecSHOPPINGRETARGETING1Inner::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (LookbackWindow.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("lookback_window")); WriteJsonValue(Writer, LookbackWindow.GetValue());
	}
	if (TagTypes.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("tag_types")); WriteJsonValue(Writer, TagTypes.GetValue());
	}
	if (ExclusionWindow.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("exclusion_window")); WriteJsonValue(Writer, ExclusionWindow.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPITargetingSpecSHOPPINGRETARGETING1Inner::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("lookback_window"), LookbackWindow);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("tag_types"), TagTypes);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("exclusion_window"), ExclusionWindow);

	return ParseSuccess;
}

}