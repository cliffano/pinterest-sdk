/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPIPin.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIPin::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Id.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("id")); WriteJsonValue(Writer, Id.GetValue());
	}
	if (CreatedAt.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("created_at")); WriteJsonValue(Writer, CreatedAt.GetValue());
	}
	if (Link.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("link")); WriteJsonValue(Writer, Link.GetValue());
	}
	if (Title.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("title")); WriteJsonValue(Writer, Title.GetValue());
	}
	if (Description.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("description")); WriteJsonValue(Writer, Description.GetValue());
	}
	if (DominantColor.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("dominant_color")); WriteJsonValue(Writer, DominantColor.GetValue());
	}
	if (AltText.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("alt_text")); WriteJsonValue(Writer, AltText.GetValue());
	}
	if (BoardId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("board_id")); WriteJsonValue(Writer, BoardId.GetValue());
	}
	if (BoardSectionId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("board_section_id")); WriteJsonValue(Writer, BoardSectionId.GetValue());
	}
	if (BoardOwner.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("board_owner")); WriteJsonValue(Writer, BoardOwner.GetValue());
	}
	if (Media.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("media")); WriteJsonValue(Writer, Media.GetValue());
	}
	if (MediaSource.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("media_source")); WriteJsonValue(Writer, MediaSource.GetValue());
	}
	if (ParentPinId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("parent_pin_id")); WriteJsonValue(Writer, ParentPinId.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIPin::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("id"), Id);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("created_at"), CreatedAt);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("link"), Link);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("title"), Title);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("description"), Description);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("dominant_color"), DominantColor);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("alt_text"), AltText);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("board_id"), BoardId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("board_section_id"), BoardSectionId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("board_owner"), BoardOwner);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("media"), Media);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("media_source"), MediaSource);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("parent_pin_id"), ParentPinId);

	return ParseSuccess;
}

}
