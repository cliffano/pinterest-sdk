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
 * OpenAPIAudienceDemographicValue
 *
 * Demographic detail for a single audience demographic
 */
class OPENAPI_API OpenAPIAudienceDemographicValue : public Model
{
public:
    virtual ~OpenAPIAudienceDemographicValue() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Unique key for demographic item */
	TOptional<FString> Key;
	/* Display name for demographic */
	TOptional<FString> Name;
	/* Value of demographic item as a percent of total audience */
	TOptional<double> Ratio;
};

}
