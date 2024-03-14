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

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIBoardOwner.h"
#include "OpenAPIPinMedia.h"
#include "OpenAPIPinMediaSource.h"

namespace OpenAPI
{

/*
 * OpenAPIPin
 *
 * Pin
 */
class OPENAPI_API OpenAPIPin : public Model
{
public:
    virtual ~OpenAPIPin() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<FString> Id;
	TOptional<FDateTime> CreatedAt;
	TOptional<FString> Link;
	TOptional<FString> Title;
	TOptional<FString> Description;
	/* Dominant pin color. Hex number, e.g. \\\"#6E7874\\\". */
	TOptional<FString> DominantColor;
	TOptional<FString> AltText;
	/* The board to which this Pin belongs. */
	TOptional<FString> BoardId;
	/* The board section to which this Pin belongs. */
	TOptional<FString> BoardSectionId;
	TOptional<OpenAPIBoardOwner> BoardOwner;
	TOptional<OpenAPIPinMedia> Media;
	TOptional<OpenAPIPinMediaSource> MediaSource;
	/* The source pin id if this pin was saved from another pin. <a href=\"https://help.pinterest.com/article/save-pins-on-pinterest\">Learn more</a>. */
	TOptional<FString> ParentPinId;
};

}
