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
 * OpenAPIIntegrationLogClientError
 *
 * System error details included in the log sent by the client.
 */
class OPENAPI_API OpenAPIIntegrationLogClientError : public Model
{
public:
    virtual ~OpenAPIIntegrationLogClientError() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Original cause of the error. */
	TOptional<FString> Cause;
	/* Column number in the line of the file that raised the error. */
	TOptional<int32> ColumnNumber;
	/* Filename where the error happened. */
	TOptional<FString> FileName;
	/* Line number where the error happened. */
	TOptional<int32> LineNumber;
	/* Human-readable description of the error. */
	TOptional<FString> Message;
	/* More detail about the message. */
	TOptional<FString> MessageDetail;
	/* Filename where the error happened. */
	TOptional<FString> Name;
	/* Integer that specifies the error code. */
	TOptional<int32> Number;
	/* Stack trace of where the error happened. */
	TOptional<FString> StackTrace;
};

}
