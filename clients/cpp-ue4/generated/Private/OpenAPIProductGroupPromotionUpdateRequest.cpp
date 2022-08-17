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

#include "OpenAPIProductGroupPromotionUpdateRequest.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIProductGroupPromotionUpdateRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("ad_group_id")); WriteJsonValue(Writer, AdGroupId);
	Writer->WriteIdentifierPrefix(TEXT("product_group_promotion")); WriteJsonValue(Writer, ProductGroupPromotion);
	Writer->WriteObjectEnd();
}

bool OpenAPIProductGroupPromotionUpdateRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("ad_group_id"), AdGroupId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("product_group_promotion"), ProductGroupPromotion);

	return ParseSuccess;
}

}
