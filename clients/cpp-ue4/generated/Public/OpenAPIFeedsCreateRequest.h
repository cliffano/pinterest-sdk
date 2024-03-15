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
#include "OpenAPICatalogsFeedCredentials.h"
#include "OpenAPICatalogsFeedProcessingSchedule.h"
#include "OpenAPICatalogsFeedsCreateRequest.h"
#include "OpenAPICatalogsFeedsCreateRequestDefaultLocale.h"
#include "OpenAPICatalogsFormat.h"
#include "OpenAPICatalogsType.h"
#include "OpenAPICatalogsVerticalFeedsCreateRequest.h"
#include "OpenAPICountry.h"
#include "OpenAPINullableCurrency.h"
#include "OpenAPIProductAvailabilityType.h"

namespace OpenAPI
{

/*
 * OpenAPIFeedsCreateRequest
 *
 * 
 */
class OPENAPI_API OpenAPIFeedsCreateRequest : public Model
{
public:
    virtual ~OpenAPIFeedsCreateRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<OpenAPINullableCurrency> DefaultCurrency;
	/* A human-friendly name associated to a given feed. */
	FString Name;
	OpenAPICatalogsFormat Format;
	OpenAPICatalogsFeedsCreateRequestDefaultLocale DefaultLocale;
	TOptional<OpenAPICatalogsFeedCredentials> Credentials;
	/* The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing. */
	FString Location;
	TOptional<OpenAPICatalogsFeedProcessingSchedule> PreferredProcessingSchedule;
	OpenAPICatalogsType CatalogType;
	OpenAPICountry DefaultCountry;
	TOptional<OpenAPIProductAvailabilityType> DefaultAvailability;
	/* Catalog id pertaining to the feed. If not provided, feed will use a default catalog based on type. At the moment a catalog can not have multiple hotel feeds but this will change in the future. */
	TOptional<FString> CatalogId;
};

}
