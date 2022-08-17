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
#include "OpenAPICatalogsFeedCredentials.h"
#include "OpenAPICatalogsFeedProcessingSchedule.h"
#include "OpenAPICatalogsFormat.h"
#include "OpenAPICountry.h"
#include "OpenAPINullableCurrency.h"
#include "OpenAPIProductAvailabilityType.h"

namespace OpenAPI
{

/*
 * OpenAPICatalogsFeedsCreateRequest
 *
 * Request object for creating a feed. Please, be aware that \&quot;default_country\&quot; and \&quot;default_locale\&quot; are not required in the spec for forward compatibility but for now the API will not accept requests without those fields.
 */
class OPENAPI_API OpenAPICatalogsFeedsCreateRequest : public Model
{
public:
    virtual ~OpenAPICatalogsFeedsCreateRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<OpenAPICountry> DefaultCountry;
	TOptional<OpenAPIProductAvailabilityType> DefaultAvailability;
	TOptional<OpenAPINullableCurrency> DefaultCurrency;
	/* A human-friendly name associated to a given feed. */
	FString Name;
	OpenAPICatalogsFormat Format;
	/* The locale used within a feed for product descriptions. */
	TOptional<FString> DefaultLocale;
	TOptional<OpenAPICatalogsFeedCredentials> Credentials;
	/* The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing. */
	FString Location;
	TOptional<OpenAPICatalogsFeedProcessingSchedule> PreferredProcessingSchedule;
};

}
