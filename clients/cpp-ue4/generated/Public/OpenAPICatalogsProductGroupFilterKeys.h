/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIAvailabilityFilter.h"
#include "OpenAPIBrandFilter.h"
#include "OpenAPICatalogsProductGroupCurrencyCriteria.h"
#include "OpenAPICatalogsProductGroupMultipleStringCriteria.h"
#include "OpenAPICatalogsProductGroupMultipleStringListCriteria.h"
#include "OpenAPICatalogsProductGroupPricingCriteria.h"
#include "OpenAPIConditionFilter.h"
#include "OpenAPICurrencyFilter.h"
#include "OpenAPICustomLabel0Filter.h"
#include "OpenAPICustomLabel1Filter.h"
#include "OpenAPICustomLabel2Filter.h"
#include "OpenAPICustomLabel3Filter.h"
#include "OpenAPICustomLabel4Filter.h"
#include "OpenAPIGenderFilter.h"
#include "OpenAPIGoogleProductCategory0Filter.h"
#include "OpenAPIGoogleProductCategory1Filter.h"
#include "OpenAPIGoogleProductCategory2Filter.h"
#include "OpenAPIGoogleProductCategory3Filter.h"
#include "OpenAPIGoogleProductCategory4Filter.h"
#include "OpenAPIGoogleProductCategory5Filter.h"
#include "OpenAPIGoogleProductCategory6Filter.h"
#include "OpenAPIItemGroupIdFilter.h"
#include "OpenAPIItemIdFilter.h"
#include "OpenAPIMaxPriceFilter.h"
#include "OpenAPIMinPriceFilter.h"
#include "OpenAPIProductType0Filter.h"
#include "OpenAPIProductType1Filter.h"
#include "OpenAPIProductType2Filter.h"
#include "OpenAPIProductType3Filter.h"
#include "OpenAPIProductType4Filter.h"

namespace OpenAPI
{

/*
 * OpenAPICatalogsProductGroupFilterKeys
 *
 * 
 */
class OPENAPI_API OpenAPICatalogsProductGroupFilterKeys : public Model
{
public:
    virtual ~OpenAPICatalogsProductGroupFilterKeys() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	OpenAPICatalogsProductGroupPricingCriteria MinPrice;
	OpenAPICatalogsProductGroupPricingCriteria MaxPrice;
	OpenAPICatalogsProductGroupCurrencyCriteria Currency;
	OpenAPICatalogsProductGroupCurrencyCriteria ItemId;
	OpenAPICatalogsProductGroupMultipleStringCriteria Availability;
	OpenAPICatalogsProductGroupMultipleStringCriteria Brand;
	OpenAPICatalogsProductGroupMultipleStringCriteria Condition;
	OpenAPICatalogsProductGroupMultipleStringCriteria CUSTOMLABEL0;
	OpenAPICatalogsProductGroupMultipleStringCriteria CUSTOMLABEL1;
	OpenAPICatalogsProductGroupMultipleStringCriteria CUSTOMLABEL2;
	OpenAPICatalogsProductGroupMultipleStringCriteria CUSTOMLABEL3;
	OpenAPICatalogsProductGroupMultipleStringCriteria CUSTOMLABEL4;
	OpenAPICatalogsProductGroupMultipleStringCriteria ItemGroupId;
	OpenAPICatalogsProductGroupMultipleStringCriteria Gender;
	OpenAPICatalogsProductGroupMultipleStringListCriteria PRODUCTTYPE4;
	OpenAPICatalogsProductGroupMultipleStringListCriteria PRODUCTTYPE3;
	OpenAPICatalogsProductGroupMultipleStringListCriteria PRODUCTTYPE2;
	OpenAPICatalogsProductGroupMultipleStringListCriteria PRODUCTTYPE1;
	OpenAPICatalogsProductGroupMultipleStringListCriteria PRODUCTTYPE0;
	OpenAPICatalogsProductGroupMultipleStringListCriteria GOOGLEPRODUCTCATEGORY6;
	OpenAPICatalogsProductGroupMultipleStringListCriteria GOOGLEPRODUCTCATEGORY5;
	OpenAPICatalogsProductGroupMultipleStringListCriteria GOOGLEPRODUCTCATEGORY4;
	OpenAPICatalogsProductGroupMultipleStringListCriteria GOOGLEPRODUCTCATEGORY3;
	OpenAPICatalogsProductGroupMultipleStringListCriteria GOOGLEPRODUCTCATEGORY2;
	OpenAPICatalogsProductGroupMultipleStringListCriteria GOOGLEPRODUCTCATEGORY1;
	OpenAPICatalogsProductGroupMultipleStringListCriteria GOOGLEPRODUCTCATEGORY0;
};

}
