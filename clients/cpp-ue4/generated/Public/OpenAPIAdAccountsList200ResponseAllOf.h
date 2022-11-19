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
#include "OpenAPIAdAccount.h"

namespace OpenAPI
{

/*
 * OpenAPIAdAccountsList200ResponseAllOf
 *
 * 
 */
class OPENAPI_API OpenAPIAdAccountsList200ResponseAllOf : public Model
{
public:
    virtual ~OpenAPIAdAccountsList200ResponseAllOf() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Ad accounts */
	TOptional<TArray<OpenAPIAdAccount>> Items;
};

}
