/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.4.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "ProductGroupPromotionCommon.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

ProductGroupPromotionCommon::ProductGroupPromotionCommon()
{
    m_StatusIsSet = false;
    m_Tracking_url = "";
    m_Tracking_urlIsSet = false;
    m_Catalogs_product_group_id = "";
    m_Catalogs_product_group_idIsSet = false;
    m_Catalogs_product_group_name = "";
    m_Catalogs_product_group_nameIsSet = false;
    m_Creative_typeIsSet = false;
    m_Collections_hero_pin_id = "";
    m_Collections_hero_pin_idIsSet = false;
    m_Collections_hero_destination_url = "";
    m_Collections_hero_destination_urlIsSet = false;
    m_Slideshow_collections_title = "";
    m_Slideshow_collections_titleIsSet = false;
    m_Slideshow_collections_description = "";
    m_Slideshow_collections_descriptionIsSet = false;
    
}

void ProductGroupPromotionCommon::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool ProductGroupPromotionCommon::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool ProductGroupPromotionCommon::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "ProductGroupPromotionCommon" : pathPrefix;

                                        
    return success;
}

bool ProductGroupPromotionCommon::operator==(const ProductGroupPromotionCommon& rhs) const
{
    return
    
    
    
    ((!statusIsSet() && !rhs.statusIsSet()) || (statusIsSet() && rhs.statusIsSet() && getStatus() == rhs.getStatus())) &&
    
    
    ((!trackingUrlIsSet() && !rhs.trackingUrlIsSet()) || (trackingUrlIsSet() && rhs.trackingUrlIsSet() && getTrackingUrl() == rhs.getTrackingUrl())) &&
    
    
    ((!catalogsProductGroupIdIsSet() && !rhs.catalogsProductGroupIdIsSet()) || (catalogsProductGroupIdIsSet() && rhs.catalogsProductGroupIdIsSet() && getCatalogsProductGroupId() == rhs.getCatalogsProductGroupId())) &&
    
    
    ((!catalogsProductGroupNameIsSet() && !rhs.catalogsProductGroupNameIsSet()) || (catalogsProductGroupNameIsSet() && rhs.catalogsProductGroupNameIsSet() && getCatalogsProductGroupName() == rhs.getCatalogsProductGroupName())) &&
    
    
    ((!creativeTypeIsSet() && !rhs.creativeTypeIsSet()) || (creativeTypeIsSet() && rhs.creativeTypeIsSet() && getCreativeType() == rhs.getCreativeType())) &&
    
    
    ((!collectionsHeroPinIdIsSet() && !rhs.collectionsHeroPinIdIsSet()) || (collectionsHeroPinIdIsSet() && rhs.collectionsHeroPinIdIsSet() && getCollectionsHeroPinId() == rhs.getCollectionsHeroPinId())) &&
    
    
    ((!collectionsHeroDestinationUrlIsSet() && !rhs.collectionsHeroDestinationUrlIsSet()) || (collectionsHeroDestinationUrlIsSet() && rhs.collectionsHeroDestinationUrlIsSet() && getCollectionsHeroDestinationUrl() == rhs.getCollectionsHeroDestinationUrl())) &&
    
    
    ((!slideshowCollectionsTitleIsSet() && !rhs.slideshowCollectionsTitleIsSet()) || (slideshowCollectionsTitleIsSet() && rhs.slideshowCollectionsTitleIsSet() && getSlideshowCollectionsTitle() == rhs.getSlideshowCollectionsTitle())) &&
    
    
    ((!slideshowCollectionsDescriptionIsSet() && !rhs.slideshowCollectionsDescriptionIsSet()) || (slideshowCollectionsDescriptionIsSet() && rhs.slideshowCollectionsDescriptionIsSet() && getSlideshowCollectionsDescription() == rhs.getSlideshowCollectionsDescription()))
    
    ;
}

bool ProductGroupPromotionCommon::operator!=(const ProductGroupPromotionCommon& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ProductGroupPromotionCommon& o)
{
    j = nlohmann::json();
    if(o.statusIsSet())
        j["status"] = o.m_Status;
    if(o.trackingUrlIsSet())
        j["tracking_url"] = o.m_Tracking_url;
    if(o.catalogsProductGroupIdIsSet())
        j["catalogs_product_group_id"] = o.m_Catalogs_product_group_id;
    if(o.catalogsProductGroupNameIsSet())
        j["catalogs_product_group_name"] = o.m_Catalogs_product_group_name;
    if(o.creativeTypeIsSet())
        j["creative_type"] = o.m_Creative_type;
    if(o.collectionsHeroPinIdIsSet())
        j["collections_hero_pin_id"] = o.m_Collections_hero_pin_id;
    if(o.collectionsHeroDestinationUrlIsSet())
        j["collections_hero_destination_url"] = o.m_Collections_hero_destination_url;
    if(o.slideshowCollectionsTitleIsSet())
        j["slideshow_collections_title"] = o.m_Slideshow_collections_title;
    if(o.slideshowCollectionsDescriptionIsSet())
        j["slideshow_collections_description"] = o.m_Slideshow_collections_description;
    
}

void from_json(const nlohmann::json& j, ProductGroupPromotionCommon& o)
{
    if(j.find("status") != j.end())
    {
        j.at("status").get_to(o.m_Status);
        o.m_StatusIsSet = true;
    } 
    if(j.find("tracking_url") != j.end())
    {
        j.at("tracking_url").get_to(o.m_Tracking_url);
        o.m_Tracking_urlIsSet = true;
    } 
    if(j.find("catalogs_product_group_id") != j.end())
    {
        j.at("catalogs_product_group_id").get_to(o.m_Catalogs_product_group_id);
        o.m_Catalogs_product_group_idIsSet = true;
    } 
    if(j.find("catalogs_product_group_name") != j.end())
    {
        j.at("catalogs_product_group_name").get_to(o.m_Catalogs_product_group_name);
        o.m_Catalogs_product_group_nameIsSet = true;
    } 
    if(j.find("creative_type") != j.end())
    {
        j.at("creative_type").get_to(o.m_Creative_type);
        o.m_Creative_typeIsSet = true;
    } 
    if(j.find("collections_hero_pin_id") != j.end())
    {
        j.at("collections_hero_pin_id").get_to(o.m_Collections_hero_pin_id);
        o.m_Collections_hero_pin_idIsSet = true;
    } 
    if(j.find("collections_hero_destination_url") != j.end())
    {
        j.at("collections_hero_destination_url").get_to(o.m_Collections_hero_destination_url);
        o.m_Collections_hero_destination_urlIsSet = true;
    } 
    if(j.find("slideshow_collections_title") != j.end())
    {
        j.at("slideshow_collections_title").get_to(o.m_Slideshow_collections_title);
        o.m_Slideshow_collections_titleIsSet = true;
    } 
    if(j.find("slideshow_collections_description") != j.end())
    {
        j.at("slideshow_collections_description").get_to(o.m_Slideshow_collections_description);
        o.m_Slideshow_collections_descriptionIsSet = true;
    } 
    
}

org::openapitools::server::model::EntityStatus ProductGroupPromotionCommon::getStatus() const
{
    return m_Status;
}
void ProductGroupPromotionCommon::setStatus(org::openapitools::server::model::EntityStatus const& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool ProductGroupPromotionCommon::statusIsSet() const
{
    return m_StatusIsSet;
}
void ProductGroupPromotionCommon::unsetStatus()
{
    m_StatusIsSet = false;
}
std::string ProductGroupPromotionCommon::getTrackingUrl() const
{
    return m_Tracking_url;
}
void ProductGroupPromotionCommon::setTrackingUrl(std::string const& value)
{
    m_Tracking_url = value;
    m_Tracking_urlIsSet = true;
}
bool ProductGroupPromotionCommon::trackingUrlIsSet() const
{
    return m_Tracking_urlIsSet;
}
void ProductGroupPromotionCommon::unsetTracking_url()
{
    m_Tracking_urlIsSet = false;
}
std::string ProductGroupPromotionCommon::getCatalogsProductGroupId() const
{
    return m_Catalogs_product_group_id;
}
void ProductGroupPromotionCommon::setCatalogsProductGroupId(std::string const& value)
{
    m_Catalogs_product_group_id = value;
    m_Catalogs_product_group_idIsSet = true;
}
bool ProductGroupPromotionCommon::catalogsProductGroupIdIsSet() const
{
    return m_Catalogs_product_group_idIsSet;
}
void ProductGroupPromotionCommon::unsetCatalogs_product_group_id()
{
    m_Catalogs_product_group_idIsSet = false;
}
std::string ProductGroupPromotionCommon::getCatalogsProductGroupName() const
{
    return m_Catalogs_product_group_name;
}
void ProductGroupPromotionCommon::setCatalogsProductGroupName(std::string const& value)
{
    m_Catalogs_product_group_name = value;
    m_Catalogs_product_group_nameIsSet = true;
}
bool ProductGroupPromotionCommon::catalogsProductGroupNameIsSet() const
{
    return m_Catalogs_product_group_nameIsSet;
}
void ProductGroupPromotionCommon::unsetCatalogs_product_group_name()
{
    m_Catalogs_product_group_nameIsSet = false;
}
org::openapitools::server::model::CreativeType ProductGroupPromotionCommon::getCreativeType() const
{
    return m_Creative_type;
}
void ProductGroupPromotionCommon::setCreativeType(org::openapitools::server::model::CreativeType const& value)
{
    m_Creative_type = value;
    m_Creative_typeIsSet = true;
}
bool ProductGroupPromotionCommon::creativeTypeIsSet() const
{
    return m_Creative_typeIsSet;
}
void ProductGroupPromotionCommon::unsetCreative_type()
{
    m_Creative_typeIsSet = false;
}
std::string ProductGroupPromotionCommon::getCollectionsHeroPinId() const
{
    return m_Collections_hero_pin_id;
}
void ProductGroupPromotionCommon::setCollectionsHeroPinId(std::string const& value)
{
    m_Collections_hero_pin_id = value;
    m_Collections_hero_pin_idIsSet = true;
}
bool ProductGroupPromotionCommon::collectionsHeroPinIdIsSet() const
{
    return m_Collections_hero_pin_idIsSet;
}
void ProductGroupPromotionCommon::unsetCollections_hero_pin_id()
{
    m_Collections_hero_pin_idIsSet = false;
}
std::string ProductGroupPromotionCommon::getCollectionsHeroDestinationUrl() const
{
    return m_Collections_hero_destination_url;
}
void ProductGroupPromotionCommon::setCollectionsHeroDestinationUrl(std::string const& value)
{
    m_Collections_hero_destination_url = value;
    m_Collections_hero_destination_urlIsSet = true;
}
bool ProductGroupPromotionCommon::collectionsHeroDestinationUrlIsSet() const
{
    return m_Collections_hero_destination_urlIsSet;
}
void ProductGroupPromotionCommon::unsetCollections_hero_destination_url()
{
    m_Collections_hero_destination_urlIsSet = false;
}
std::string ProductGroupPromotionCommon::getSlideshowCollectionsTitle() const
{
    return m_Slideshow_collections_title;
}
void ProductGroupPromotionCommon::setSlideshowCollectionsTitle(std::string const& value)
{
    m_Slideshow_collections_title = value;
    m_Slideshow_collections_titleIsSet = true;
}
bool ProductGroupPromotionCommon::slideshowCollectionsTitleIsSet() const
{
    return m_Slideshow_collections_titleIsSet;
}
void ProductGroupPromotionCommon::unsetSlideshow_collections_title()
{
    m_Slideshow_collections_titleIsSet = false;
}
std::string ProductGroupPromotionCommon::getSlideshowCollectionsDescription() const
{
    return m_Slideshow_collections_description;
}
void ProductGroupPromotionCommon::setSlideshowCollectionsDescription(std::string const& value)
{
    m_Slideshow_collections_description = value;
    m_Slideshow_collections_descriptionIsSet = true;
}
bool ProductGroupPromotionCommon::slideshowCollectionsDescriptionIsSet() const
{
    return m_Slideshow_collections_descriptionIsSet;
}
void ProductGroupPromotionCommon::unsetSlideshow_collections_description()
{
    m_Slideshow_collections_descriptionIsSet = false;
}


} // namespace org::openapitools::server::model

