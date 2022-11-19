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

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIBoardSection.h"

namespace OpenAPI
{

/*
 * OpenAPIBoardSectionsList200ResponseAllOf
 *
 * 
 */
class OPENAPI_API OpenAPIBoardSectionsList200ResponseAllOf : public Model
{
public:
    virtual ~OpenAPIBoardSectionsList200ResponseAllOf() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Board sections */
	TOptional<TArray<OpenAPIBoardSection>> Items;
};

}
