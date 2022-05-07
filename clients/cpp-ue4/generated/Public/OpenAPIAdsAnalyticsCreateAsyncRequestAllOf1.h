/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIDataOutputFormat.h"
#include "OpenAPIMetricsReportingLevel.h"
#include "OpenAPIReportingColumnAsync.h"

namespace OpenAPI
{

/*
 * OpenAPIAdsAnalyticsCreateAsyncRequestAllOf1
 *
 * 
 */
class OPENAPI_API OpenAPIAdsAnalyticsCreateAsyncRequestAllOf1 : public Model
{
public:
    virtual ~OpenAPIAdsAnalyticsCreateAsyncRequestAllOf1() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Metric and entity columns */
	TArray<OpenAPIReportingColumnAsync> Columns;
	/* Level of the report */
	OpenAPIMetricsReportingLevel Level;
	/* Specification for formatting report data */
	TOptional<OpenAPIDataOutputFormat> ReportFormat;
};

}
