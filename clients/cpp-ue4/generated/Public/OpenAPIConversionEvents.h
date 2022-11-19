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
#include "OpenAPIConversionEventsDataInner.h"

namespace OpenAPI
{

/*
 * OpenAPIConversionEvents
 *
 * A list of events (one or more) encapsulated by a data object.
 */
class OPENAPI_API OpenAPIConversionEvents : public Model
{
public:
    virtual ~OpenAPIConversionEvents() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TArray<OpenAPIConversionEventsDataInner> Data;
};

}
