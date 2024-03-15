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
#include "OpenAPICatalogsFormat.h"
#include "OpenAPICatalogsStatus.h"
#include "OpenAPICatalogsType.h"
#include "OpenAPINullableCurrency.h"

namespace OpenAPI
{

/*
 * OpenAPICatalogsHotelFeed
 *
 * Catalogs Hotel Feed object
 */
class OPENAPI_API OpenAPICatalogsHotelFeed : public Model
{
public:
    virtual ~OpenAPICatalogsHotelFeed() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<FDateTime> CreatedAt;
	TOptional<FString> Id;
	TOptional<FDateTime> UpdatedAt;
	/* A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future. */
	FString Name;
	OpenAPICatalogsFormat Format;
	OpenAPICatalogsType CatalogType;
	OpenAPICatalogsFeedCredentials Credentials;
	/* The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing. */
	FString Location;
	OpenAPICatalogsFeedProcessingSchedule PreferredProcessingSchedule;
	OpenAPICatalogsStatus Status;
	OpenAPINullableCurrency DefaultCurrency;
	/* The locale used within a feed for product descriptions. */
	FString DefaultLocale;
	/* Catalog id pertaining to the feed. If not provided, feed will use a default catalog based on type. */
	FString CatalogId;
};

}
