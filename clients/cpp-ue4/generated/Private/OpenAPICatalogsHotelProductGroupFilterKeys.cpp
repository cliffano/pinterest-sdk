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

#include "OpenAPICatalogsHotelProductGroupFilterKeys.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPICatalogsHotelProductGroupFilterKeys::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("PRICE")); WriteJsonValue(Writer, Price);
	Writer->WriteIdentifierPrefix(TEXT("HOTEL_ID")); WriteJsonValue(Writer, HotelId);
	Writer->WriteIdentifierPrefix(TEXT("BRAND")); WriteJsonValue(Writer, Brand);
	Writer->WriteIdentifierPrefix(TEXT("CUSTOM_LABEL_0")); WriteJsonValue(Writer, CUSTOMLABEL0);
	Writer->WriteIdentifierPrefix(TEXT("CUSTOM_LABEL_1")); WriteJsonValue(Writer, CUSTOMLABEL1);
	Writer->WriteIdentifierPrefix(TEXT("CUSTOM_LABEL_2")); WriteJsonValue(Writer, CUSTOMLABEL2);
	Writer->WriteIdentifierPrefix(TEXT("CUSTOM_LABEL_3")); WriteJsonValue(Writer, CUSTOMLABEL3);
	Writer->WriteIdentifierPrefix(TEXT("CUSTOM_LABEL_4")); WriteJsonValue(Writer, CUSTOMLABEL4);
	Writer->WriteIdentifierPrefix(TEXT("COUNTRY")); WriteJsonValue(Writer, Country);
	Writer->WriteObjectEnd();
}

bool OpenAPICatalogsHotelProductGroupFilterKeys::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("PRICE"), Price);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("HOTEL_ID"), HotelId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("BRAND"), Brand);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("CUSTOM_LABEL_0"), CUSTOMLABEL0);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("CUSTOM_LABEL_1"), CUSTOMLABEL1);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("CUSTOM_LABEL_2"), CUSTOMLABEL2);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("CUSTOM_LABEL_3"), CUSTOMLABEL3);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("CUSTOM_LABEL_4"), CUSTOMLABEL4);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("COUNTRY"), Country);

	return ParseSuccess;
}

}
