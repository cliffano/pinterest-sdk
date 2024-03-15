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
#include "OpenAPIAudienceSubcategory.h"

namespace OpenAPI
{

/*
 * OpenAPIAudienceCategory
 *
 * 
 */
class OPENAPI_API OpenAPIAudienceCategory : public Model
{
public:
    virtual ~OpenAPIAudienceCategory() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Interest unique key (same as ID). */
	TOptional<FString> Key;
	/* Interest name. */
	TOptional<FString> Name;
	/* Interest's percent of category's total audience. */
	TOptional<double> Ratio;
	/* Interest affinity index. */
	TOptional<double> Index;
	/* Interest ID. */
	TOptional<FString> Id;
	/* Subcategory interest distribution */
	TOptional<TArray<OpenAPIAudienceSubcategory>> Subcategories;
};

}