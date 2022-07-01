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

#include "OpenAPIGoogleProductCategory6Filter.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIGoogleProductCategory6Filter::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("GOOGLE_PRODUCT_CATEGORY_6")); WriteJsonValue(Writer, GOOGLEPRODUCTCATEGORY6);
	Writer->WriteObjectEnd();
}

bool OpenAPIGoogleProductCategory6Filter::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("GOOGLE_PRODUCT_CATEGORY_6"), GOOGLEPRODUCTCATEGORY6);

	return ParseSuccess;
}

}
