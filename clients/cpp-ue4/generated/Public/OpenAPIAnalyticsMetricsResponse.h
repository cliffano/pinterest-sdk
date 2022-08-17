/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIAnalyticsMetricsResponseDailyMetricsInner.h"

namespace OpenAPI
{

/*
 * OpenAPIAnalyticsMetricsResponse
 *
 * 
 */
class OPENAPI_API OpenAPIAnalyticsMetricsResponse : public Model
{
public:
    virtual ~OpenAPIAnalyticsMetricsResponse() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Array with the requested daily metric records */
	TOptional<TArray<OpenAPIAnalyticsMetricsResponseDailyMetricsInner>> DailyMetrics;
	/* The metric name and value over the requested period for each requested metric */
	TOptional<TMap<FString, double>> SummaryMetrics;
};

}
