/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.6.0
 * Contact: blah+oapicf@cliffano.com
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
 * OpenAPIProductGroupPromotion
 *
 * 
 */
class OPENAPI_API OpenAPIProductGroupPromotion : public Model
{
public:
    virtual ~OpenAPIProductGroupPromotion() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* ID of the product group promotion. */
	TOptional<FString> Id;
	/* ID of the ad group the product group belongs to. */
	TOptional<FString> AdGroupId;
	/* Product group promotion */
	TOptional<FString> Type;
	/* The bid in micro currency. */
	TOptional<int32> BidInMicroCurrency;
	/* True if the group is BIDDABLE, false if it should be EXCLUDED from serving ads. */
	TOptional<bool> Included;
	/* The full product group definition path */
	TOptional<FString> Definition;
	/* The definition of the product group, relative to its parent - an attribute name/value pair */
	TOptional<FString> RelativeDefinition;
	/* The parent Product Group ID of this Product Group */
	TOptional<FString> ParentId;
	/* Slideshow Collections Title */
	TOptional<FString> SlideshowCollectionsTitle;
	/* Slideshow Collections Description */
	TOptional<FString> SlideshowCollectionsDescription;
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
	/* If set to true products promoted in this product group will use the Mobile Deep Link specified in your catalog */
	TOptional<bool> IsMdl;
};

}
