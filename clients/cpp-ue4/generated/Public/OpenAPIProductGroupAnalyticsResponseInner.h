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

namespace OpenAPI
{

/*
 * OpenAPIProductGroupAnalyticsResponseInner
 *
 * 
 */
class OPENAPI_API OpenAPIProductGroupAnalyticsResponseInner : public Model
{
public:
    virtual ~OpenAPIProductGroupAnalyticsResponseInner() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* The ID of the product group that this metrics belongs to. */
	FString ProductGroupId;
	/* Current metrics date. Only returned when granularity is a time-based value (`DAY`, `HOUR`, `WEEK`, `MONTH`) */
	TOptional<FDateTime> Date;
};

}
