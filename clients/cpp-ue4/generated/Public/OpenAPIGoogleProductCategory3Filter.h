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
#include "OpenAPICatalogsProductGroupMultipleStringListCriteria.h"

namespace OpenAPI
{

/*
 * OpenAPIGoogleProductCategory3Filter
 *
 * 
 */
class OPENAPI_API OpenAPIGoogleProductCategory3Filter : public Model
{
public:
    virtual ~OpenAPIGoogleProductCategory3Filter() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	OpenAPICatalogsProductGroupMultipleStringListCriteria GOOGLEPRODUCTCATEGORY3;
};

}
