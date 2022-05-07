/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPICatalogsFeedProductCounts.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPICatalogsFeedProductCounts::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Original.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("original")); WriteJsonValue(Writer, Original.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPICatalogsFeedProductCounts::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("original"), Original);

	return ParseSuccess;
}

}
