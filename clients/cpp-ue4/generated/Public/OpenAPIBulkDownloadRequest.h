/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIBulkDownloadRequestCampaignFilter.h"
#include "OpenAPIBulkEntityType.h"
#include "OpenAPIBulkOutputFormat.h"

namespace OpenAPI
{

/*
 * OpenAPIBulkDownloadRequest
 *
 * Ad entities to get in bulk request.
 */
class OPENAPI_API OpenAPIBulkDownloadRequest : public Model
{
public:
    virtual ~OpenAPIBulkDownloadRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* All entity types specified will be downloaded. Fewer types result in faster downloads. */
	TOptional<TArray<OpenAPIBulkEntityType>> EntityTypes;
	/* All entities specified by these IDs as well as their children and grandchildren will be downloaded if the entity type is one of the types requested to be downloaded. */
	TOptional<TArray<FString>> EntityIds;
	/* Unix UTC timestamp to retrieve all entities that have changed since this time. */
	TOptional<FString> UpdatedSince;
	TOptional<OpenAPIBulkDownloadRequestCampaignFilter> CampaignFilter;
	TOptional<OpenAPIBulkOutputFormat> OutputFormat;
};

}
