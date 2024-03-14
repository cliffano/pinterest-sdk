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

#include "OpenAPIRelatedTerms.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIRelatedTerms::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Id.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("id")); WriteJsonValue(Writer, Id.GetValue());
	}
	if (RelatedTermCount.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("related_term_count")); WriteJsonValue(Writer, RelatedTermCount.GetValue());
	}
	if (RelatedTermsList.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("related_terms_list")); WriteJsonValue(Writer, RelatedTermsList.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIRelatedTerms::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("id"), Id);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("related_term_count"), RelatedTermCount);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("related_terms_list"), RelatedTermsList);

	return ParseSuccess;
}

}
