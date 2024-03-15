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

	/* List of targeting types. Requires `level` to be a value ending in `_TARGETING`. */
	TOptional<TArray<OpenAPIAdsAnalyticsTargetingType>> TargetingTypes;
};

}
