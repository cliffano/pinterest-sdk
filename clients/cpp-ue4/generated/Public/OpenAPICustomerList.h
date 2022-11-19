/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.6.0
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
 * OpenAPICustomerList
 *
 * 
 */
class OPENAPI_API OpenAPICustomerList : public Model
{
public:
    virtual ~OpenAPICustomerList() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Associated ad account ID. */
	TOptional<FString> AdAccountId;
	/* Creation time. Unix timestamp in seconds. */
	TOptional<double> CreatedTime;
	/* Customer list ID. */
	TOptional<FString> Id;
	/* Customer list name. */
	TOptional<FString> Name;
	/* Total number of list updates.  List creation counts as one batch. Each <a href=\"/docs/redoc/#operation/ads_v3_customer_list_add_handler_PUT\">Append</a> or <a href=\"/docs/redoc/#operation/ads_v3_customer_list_remove_handler_PUT\">Remove API</a> call counts as another. List creation via the Ads Manager UI could result in more than one batch since the UI breaks up large lists. */
	TOptional<double> NumBatches;
	/* Number of removed user records. In a <a href=\"/docs/redoc/#operation/ads_v3_customer_list_remove_handler_PUT\">Remove API</a> call, this counter increases even if the user is not found in the list. */
	TOptional<double> NumRemovedUserRecords;
	/* Number of uploaded user records. In an <a href=\"/docs/redoc/#operation/ads_v3_customer_list_add_handler_PUT\">Append API</a> call, this counter increases even if the uploaded user is already in the list. */
	TOptional<double> NumUploadedUserRecords;
	enum class StatusEnum
	{
		Processing,
		Ready,
		TooSmall,
		Uploading,
  	};

	static FString EnumToString(const StatusEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, StatusEnum& EnumValue);
	/* Customer list status. TOO_SMALL - the list has less than 100 Pinterest users. */
	TOptional<StatusEnum> Status;
	/* Always \"customerlist\". */
	TOptional<FString> Type;
	/* Last update time. Unix timestamp in seconds. */
	TOptional<double> UpdatedTime;
	/* Customer list errors */
	TOptional<TSharedPtr<FJsonObject>> Exceptions;
};

}
