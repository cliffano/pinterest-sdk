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
#include "OpenAPICatalogsProductGroupMultipleStringListCriteria.h"

namespace OpenAPI
{

/*
 * OpenAPIProductType4Filter
 *
 * 
 */
class OPENAPI_API OpenAPIProductType4Filter : public Model
{
public:
    virtual ~OpenAPIProductType4Filter() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	OpenAPICatalogsProductGroupMultipleStringListCriteria PRODUCTTYPE4;
};

}
