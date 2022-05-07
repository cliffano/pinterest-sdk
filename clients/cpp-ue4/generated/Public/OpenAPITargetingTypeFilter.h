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
#include "OpenAPIAdsAnalyticsTargetingType.h"

namespace OpenAPI
{

/*
 * OpenAPITargetingTypeFilter
 *
 * 
 */
class OPENAPI_API OpenAPITargetingTypeFilter : public Model
{
public:
    virtual ~OpenAPITargetingTypeFilter() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* List of targeting types */
	TOptional<TArray<OpenAPIAdsAnalyticsTargetingType>> TargetingTypes;
};

}
