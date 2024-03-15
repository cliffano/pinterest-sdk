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

#pragma once

#include "OpenAPIBaseModel.h"

namespace OpenAPI
{

/*
 * OpenAPIPinsSaveRequest
 *
 * 
 */
class OPENAPI_API OpenAPIPinsSaveRequest : public Model
{
public:
    virtual ~OpenAPIPinsSaveRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Unique identifier of the board to which the pin will be saved. */
	TOptional<FString> BoardId;
	/* Unique identifier of the board section to which the pin will be saved. */
	TOptional<FString> BoardSectionId;
};

}
