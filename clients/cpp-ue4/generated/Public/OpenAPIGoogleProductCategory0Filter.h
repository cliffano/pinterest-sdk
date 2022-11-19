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
#include "OpenAPICatalogsProductGroupMultipleStringListCriteria.h"

namespace OpenAPI
{

/*
 * OpenAPIGoogleProductCategory0Filter
 *
 * 
 */
class OPENAPI_API OpenAPIGoogleProductCategory0Filter : public Model
{
public:
    virtual ~OpenAPIGoogleProductCategory0Filter() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	OpenAPICatalogsProductGroupMultipleStringListCriteria GOOGLEPRODUCTCATEGORY0;
};

}
