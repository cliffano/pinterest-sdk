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

#include "OpenAPIConversionTagConfigs.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIConversionTagConfigs::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (AemEnabled.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("aem_enabled")); WriteJsonValue(Writer, AemEnabled.GetValue());
	}
	if (MdFrequency.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("md_frequency")); WriteJsonValue(Writer, MdFrequency.GetValue());
	}
	if (AemFnlnEnabled.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("aem_fnln_enabled")); WriteJsonValue(Writer, AemFnlnEnabled.GetValue());
	}
	if (AemPhEnabled.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("aem_ph_enabled")); WriteJsonValue(Writer, AemPhEnabled.GetValue());
	}
	if (AemGeEnabled.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("aem_ge_enabled")); WriteJsonValue(Writer, AemGeEnabled.GetValue());
	}
	if (AemDbEnabled.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("aem_db_enabled")); WriteJsonValue(Writer, AemDbEnabled.GetValue());
	}
	if (AemLocEnabled.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("aem_loc_enabled")); WriteJsonValue(Writer, AemLocEnabled.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIConversionTagConfigs::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("aem_enabled"), AemEnabled);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("md_frequency"), MdFrequency);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("aem_fnln_enabled"), AemFnlnEnabled);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("aem_ph_enabled"), AemPhEnabled);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("aem_ge_enabled"), AemGeEnabled);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("aem_db_enabled"), AemDbEnabled);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("aem_loc_enabled"), AemLocEnabled);

	return ParseSuccess;
}

}
