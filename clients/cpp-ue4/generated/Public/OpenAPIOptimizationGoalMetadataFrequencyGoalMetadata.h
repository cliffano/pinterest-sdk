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
 * OpenAPIOptimizationGoalMetadataFrequencyGoalMetadata
 *
 * 
 */
class OPENAPI_API OpenAPIOptimizationGoalMetadataFrequencyGoalMetadata : public Model
{
public:
    virtual ~OpenAPIOptimizationGoalMetadataFrequencyGoalMetadata() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<int32> Frequency;
	enum class TimerangeEnum
	{
		ThirtyDay,
		Day,
		SevenDay,
		TwentyMinute,
		TenMinute,
		TwentyFourHour,
  	};

	static FString EnumToString(const TimerangeEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, TimerangeEnum& EnumValue);
	/* User entity counts time range */
	TOptional<TimerangeEnum> Timerange;
};

}