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
 * OpenAPITemplateResponseDateRangeDynamicDateRange
 *
 * The dynamic date range of the template
 */
class OPENAPI_API OpenAPITemplateResponseDateRangeDynamicDateRange : public Model
{
public:
    virtual ~OpenAPITemplateResponseDateRangeDynamicDateRange() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* The date range type */
	TOptional<FString> Type;
	enum class RangeEnum
	{
		YearToDate,
		QuarterToDate,
		MonthToDate,
		LastMonth,
  	};

	static FString EnumToString(const RangeEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, RangeEnum& EnumValue);
	/* The dynamic range type */
	TOptional<RangeEnum> Range;
};

}