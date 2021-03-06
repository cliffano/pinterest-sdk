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

#include "OpenAPIOauthAccessTokenResponseCodeAllOf.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIOauthAccessTokenResponseCodeAllOf::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("refresh_token")); WriteJsonValue(Writer, RefreshToken);
	Writer->WriteIdentifierPrefix(TEXT("refresh_token_expires_in")); WriteJsonValue(Writer, RefreshTokenExpiresIn);
	Writer->WriteObjectEnd();
}

bool OpenAPIOauthAccessTokenResponseCodeAllOf::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("refresh_token"), RefreshToken);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("refresh_token_expires_in"), RefreshTokenExpiresIn);

	return ParseSuccess;
}

}
