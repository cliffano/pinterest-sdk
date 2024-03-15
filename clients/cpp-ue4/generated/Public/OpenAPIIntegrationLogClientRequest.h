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
 * OpenAPIIntegrationLogClientRequest
 *
 * HTTP request details included in the log sent by the client.
 */
class OPENAPI_API OpenAPIIntegrationLogClientRequest : public Model
{
public:
    virtual ~OpenAPIIntegrationLogClientRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	enum class MethodEnum
	{
		Get,
		Head,
		Post,
		Put,
		_Delete,
		Connect,
		Options,
		Trace,
		Patch,
  	};

	static FString EnumToString(const MethodEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, MethodEnum& EnumValue);
	MethodEnum Method;
	/* HTTP request host from host header. */
	FString Host;
	/* HTTP request path. */
	FString Path;
	/* HTTP request headers as key-value pairs. */
	TOptional<TMap<FString, FString>> RequestHeaders;
	/* HTTP response headers as key-value pairs. */
	TOptional<TMap<FString, FString>> ResponseHeaders;
	TOptional<int32> ResponseStatusCode;
};

}