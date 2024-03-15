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

#include "OpenAPIPinUpdate.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIPinUpdate::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
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
	if (Description.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("description")); WriteJsonValue(Writer, Description.GetValue());
	}
	if (Link.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("link")); WriteJsonValue(Writer, Link.GetValue());
	}
	if (Title.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("title")); WriteJsonValue(Writer, Title.GetValue());
	}
	if (CarouselSlots.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("carousel_slots")); WriteJsonValue(Writer, CarouselSlots.GetValue());
	}
	if (Note.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("note")); WriteJsonValue(Writer, Note.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIPinUpdate::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("alt_text"), AltText);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("board_id"), BoardId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("board_section_id"), BoardSectionId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("description"), Description);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("link"), Link);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("title"), Title);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("carousel_slots"), CarouselSlots);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("note"), Note);

	return ParseSuccess;
}

}