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
 * OpenAPIAdAccountAnalyticsResponseInner
 *
 * 
 */
class OPENAPI_API OpenAPIAdAccountAnalyticsResponseInner : public Model
{
public:
    virtual ~OpenAPIAdAccountAnalyticsResponseInner() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* The ID of the advertiser that this metrics belongs to. */
	FString AdAccountId;
	/* Current metrics date. Only returned when granularity is a time-based value (`DAY`, `HOUR`, `WEEK`, `MONTH`) */
	TOptional<FDateTime> Date;
};

}
