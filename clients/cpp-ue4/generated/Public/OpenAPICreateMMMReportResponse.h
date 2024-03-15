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
#include "OpenAPICreateMMMReportResponseData.h"

namespace OpenAPI
{

/*
 * OpenAPICreateMMMReportResponse
 *
 * 
 */
class OPENAPI_API OpenAPICreateMMMReportResponse : public Model
{
public:
    virtual ~OpenAPICreateMMMReportResponse() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<double> Code;
	TOptional<OpenAPICreateMMMReportResponseData> Data;
};

}
