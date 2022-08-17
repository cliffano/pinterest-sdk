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

namespace OpenAPI
{

/*
 * OpenAPIMetricsReportingLevel
 *
 * Level of the reporting request
 */
class OPENAPI_API OpenAPIMetricsReportingLevel : public Model
{
public:
    virtual ~OpenAPIMetricsReportingLevel() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	enum class Values
	{
		Advertiser,
		AdvertiserTargeting,
		Campaign,
		CampaignTargeting,
		AdGroup,
		AdGroupTargeting,
		PinPromotion,
		PinPromotionTargeting,
		Keyword,
		ProductGroup,
		ProductGroupTargeting,
		ProductItem,
  	};

	Values Value;

	static FString EnumToString(const Values& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, Values& EnumValue);
};

}
