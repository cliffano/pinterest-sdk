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
#include "OpenAPICreativeType.h"
#include "OpenAPIEntityStatus.h"

namespace OpenAPI
{

/*
 * OpenAPIProductGroupPromotionCommon
 *
 * 
 */
class OPENAPI_API OpenAPIProductGroupPromotionCommon : public Model
{
public:
    virtual ~OpenAPIProductGroupPromotionCommon() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<OpenAPIEntityStatus> Status;
	/* Tracking template for proudct group promotions. 4000 limit */
	TOptional<FString> TrackingUrl;
	/* ID of the catalogs product group that this product group promotion references */
	TOptional<FString> CatalogsProductGroupId;
	/* Catalogs product group */
	TOptional<FString> CatalogsProductGroupName;
	TOptional<OpenAPICreativeType> CreativeType;
	/* Hero Pin ID if this PG is promoted as a Collection */
	TOptional<FString> CollectionsHeroPinId;
	/* Collections Hero Destination Url */
	TOptional<FString> CollectionsHeroDestinationUrl;
	/* Slideshow Collections Title */
	TOptional<FString> SlideshowCollectionsTitle;
	/* Slideshow Collections Description */
	TOptional<FString> SlideshowCollectionsDescription;
};

}