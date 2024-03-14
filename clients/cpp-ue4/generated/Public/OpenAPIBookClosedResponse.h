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

namespace OpenAPI
{

/*
 * OpenAPIBookClosedResponse
 *
 * Creation fields
 */
class OPENAPI_API OpenAPIBookClosedResponse : public Model
{
public:
    virtual ~OpenAPIBookClosedResponse() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Are conversion metrics ready? */
	TOptional<bool> ConversionMetricsReady;
	/* Are non-conversion metrics ready? */
	TOptional<bool> NonConversionMetricsReady;
};

}
