/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * ProductGroupPromotion.h
 *
 * 
 */

#ifndef ProductGroupPromotion_H_
#define ProductGroupPromotion_H_


#include "CreativeType.h"
#include "EntityStatus.h"
#include <string>
#include "GridClickType.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  ProductGroupPromotion
{
public:
    ProductGroupPromotion();
    virtual ~ProductGroupPromotion() = default;


    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    /// <summary>
    /// Helper overload for validate. Used when one model stores another model and calls it's validate.
    /// Not meant to be called outside that case.
    /// </summary>
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

    bool operator==(const ProductGroupPromotion& rhs) const;
    bool operator!=(const ProductGroupPromotion& rhs) const;

    /////////////////////////////////////////////
    /// ProductGroupPromotion members

    /// <summary>
    /// ID of the product group promotion.
    /// </summary>
    std::string getId() const;
    void setId(std::string const& value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// ID of the ad group the product group belongs to.
    /// </summary>
    std::string getAdGroupId() const;
    void setAdGroupId(std::string const& value);
    bool adGroupIdIsSet() const;
    void unsetAd_group_id();
    /// <summary>
    /// The bid in micro currency.
    /// </summary>
    int32_t getBidInMicroCurrency() const;
    void setBidInMicroCurrency(int32_t const value);
    bool bidInMicroCurrencyIsSet() const;
    void unsetBid_in_micro_currency();
    /// <summary>
    /// True if the group is BIDDABLE, false if it should be EXCLUDED from serving ads.
    /// </summary>
    bool isIncluded() const;
    void setIncluded(bool const value);
    bool includedIsSet() const;
    void unsetIncluded();
    /// <summary>
    /// The full product group definition path
    /// </summary>
    std::string getDefinition() const;
    void setDefinition(std::string const& value);
    bool definitionIsSet() const;
    void unsetDefinition();
    /// <summary>
    /// The definition of the product group, relative to its parent - an attribute name/value pair
    /// </summary>
    std::string getRelativeDefinition() const;
    void setRelativeDefinition(std::string const& value);
    bool relativeDefinitionIsSet() const;
    void unsetRelative_definition();
    /// <summary>
    /// The parent Product Group ID of this Product Group
    /// </summary>
    std::string getParentId() const;
    void setParentId(std::string const& value);
    bool parentIdIsSet() const;
    void unsetParent_id();
    /// <summary>
    /// Slideshow Collections Title
    /// </summary>
    std::string getSlideshowCollectionsTitle() const;
    void setSlideshowCollectionsTitle(std::string const& value);
    bool slideshowCollectionsTitleIsSet() const;
    void unsetSlideshow_collections_title();
    /// <summary>
    /// Slideshow Collections Description
    /// </summary>
    std::string getSlideshowCollectionsDescription() const;
    void setSlideshowCollectionsDescription(std::string const& value);
    bool slideshowCollectionsDescriptionIsSet() const;
    void unsetSlideshow_collections_description();
    /// <summary>
    /// If set to true products promoted in this product group will use the Mobile Deep Link specified in your catalog
    /// </summary>
    bool isIsMdl() const;
    void setIsMdl(bool const value);
    bool isMdlIsSet() const;
    void unsetIs_mdl();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::EntityStatus getStatus() const;
    void setStatus(org::openapitools::server::model::EntityStatus const& value);
    bool statusIsSet() const;
    void unsetStatus();
    /// <summary>
    /// Tracking template for proudct group promotions. 4000 limit
    /// </summary>
    std::string getTrackingUrl() const;
    void setTrackingUrl(std::string const& value);
    bool trackingUrlIsSet() const;
    void unsetTracking_url();
    /// <summary>
    /// ID of the catalogs product group that this product group promotion references
    /// </summary>
    std::string getCatalogProductGroupId() const;
    void setCatalogProductGroupId(std::string const& value);
    bool catalogProductGroupIdIsSet() const;
    void unsetCatalog_product_group_id();
    /// <summary>
    /// Catalogs product group name
    /// </summary>
    std::string getCatalogProductGroupName() const;
    void setCatalogProductGroupName(std::string const& value);
    bool catalogProductGroupNameIsSet() const;
    void unsetCatalog_product_group_name();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CreativeType getCreativeType() const;
    void setCreativeType(org::openapitools::server::model::CreativeType const& value);
    bool creativeTypeIsSet() const;
    void unsetCreative_type();
    /// <summary>
    /// Hero Pin ID if this PG is promoted as a Collection
    /// </summary>
    std::string getCollectionsHeroPinId() const;
    void setCollectionsHeroPinId(std::string const& value);
    bool collectionsHeroPinIdIsSet() const;
    void unsetCollections_hero_pin_id();
    /// <summary>
    /// Collections Hero Destination Url
    /// </summary>
    std::string getCollectionsHeroDestinationUrl() const;
    void setCollectionsHeroDestinationUrl(std::string const& value);
    bool collectionsHeroDestinationUrlIsSet() const;
    void unsetCollections_hero_destination_url();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::GridClickType getGridClickType() const;
    void setGridClickType(org::openapitools::server::model::GridClickType const& value);
    bool gridClickTypeIsSet() const;
    void unsetGrid_click_type();

    friend  void to_json(nlohmann::json& j, const ProductGroupPromotion& o);
    friend  void from_json(const nlohmann::json& j, ProductGroupPromotion& o);
protected:
    std::string m_Id;
    bool m_IdIsSet;
    std::string m_Ad_group_id;
    bool m_Ad_group_idIsSet;
    int32_t m_Bid_in_micro_currency;
    bool m_Bid_in_micro_currencyIsSet;
    bool m_Included;
    bool m_IncludedIsSet;
    std::string m_Definition;
    bool m_DefinitionIsSet;
    std::string m_Relative_definition;
    bool m_Relative_definitionIsSet;
    std::string m_Parent_id;
    bool m_Parent_idIsSet;
    std::string m_Slideshow_collections_title;
    bool m_Slideshow_collections_titleIsSet;
    std::string m_Slideshow_collections_description;
    bool m_Slideshow_collections_descriptionIsSet;
    bool m_Is_mdl;
    bool m_Is_mdlIsSet;
    org::openapitools::server::model::EntityStatus m_Status;
    bool m_StatusIsSet;
    std::string m_Tracking_url;
    bool m_Tracking_urlIsSet;
    std::string m_Catalog_product_group_id;
    bool m_Catalog_product_group_idIsSet;
    std::string m_Catalog_product_group_name;
    bool m_Catalog_product_group_nameIsSet;
    org::openapitools::server::model::CreativeType m_Creative_type;
    bool m_Creative_typeIsSet;
    std::string m_Collections_hero_pin_id;
    bool m_Collections_hero_pin_idIsSet;
    std::string m_Collections_hero_destination_url;
    bool m_Collections_hero_destination_urlIsSet;
    org::openapitools::server::model::GridClickType m_Grid_click_type;
    bool m_Grid_click_typeIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* ProductGroupPromotion_H_ */
