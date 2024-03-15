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
 * OpenAPICatalogsFeedIngestionWarnings
 *
 * 
 */
class OPENAPI_API OpenAPICatalogsFeedIngestionWarnings : public Model
{
public:
    virtual ~OpenAPICatalogsFeedIngestionWarnings() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* We experienced a technical difficulty and were unable to download some additional images. The next download attempt will happen in 24 hours. */
	TOptional<int32> AdditionalImageLevelInternalError;
	/* Additional image files are unreadable. Please upload new files to continue. */
	TOptional<int32> AdditionalImageFileNotAccessible;
	/* Additional image files are unreadable. Please check your link and upload new files to continue. */
	TOptional<int32> AdditionalImageMalformedUrl;
	/* Additional image files are unreadable. Please upload new files to continue. */
	TOptional<int32> AdditionalImageFileNotFound;
	/* Additional image files are unreadable. Please upload new files to continue. */
	TOptional<int32> AdditionalImageInvalidFile;
	/* price is not a supported column. Use base_price and sale_price instead. */
	TOptional<int32> HotelPriceHeaderIsPresent;
};

}