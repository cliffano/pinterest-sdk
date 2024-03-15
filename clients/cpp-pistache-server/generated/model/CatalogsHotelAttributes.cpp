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


#include "CatalogsHotelAttributes.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsHotelAttributes::CatalogsHotelAttributes()
{
    m_Name = "";
    m_NameIsSet = false;
    m_Link = "";
    m_LinkIsSet = false;
    m_Description = "";
    m_DescriptionIsSet = false;
    m_Brand = "";
    m_BrandIsSet = false;
    m_Latitude = 0.0;
    m_LatitudeIsSet = false;
    m_Longitude = 0.0;
    m_LongitudeIsSet = false;
    m_NeighborhoodIsSet = false;
    m_AddressIsSet = false;
    m_Custom_label_0 = "";
    m_Custom_label_0IsSet = false;
    m_Custom_label_1 = "";
    m_Custom_label_1IsSet = false;
    m_Custom_label_2 = "";
    m_Custom_label_2IsSet = false;
    m_Custom_label_3 = "";
    m_Custom_label_3IsSet = false;
    m_Custom_label_4 = "";
    m_Custom_label_4IsSet = false;
    m_Category = "";
    m_CategoryIsSet = false;
    m_Base_price = "";
    m_Base_priceIsSet = false;
    m_Sale_price = "";
    m_Sale_priceIsSet = false;
    m_Guest_ratingsIsSet = false;
    m_Main_imageIsSet = false;
    m_Additional_image_linkIsSet = false;
    
}

void CatalogsHotelAttributes::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsHotelAttributes::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsHotelAttributes::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsHotelAttributes" : pathPrefix;

                                 
    if (neighborhoodIsSet())
    {
        const std::vector<std::string>& value = m_Neighborhood;
        const std::string currentValuePath = _pathPrefix + ".neighborhood";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
                                                     
    if (additionalImageLinkIsSet())
    {
        const std::vector<std::string>& value = m_Additional_image_link;
        const std::string currentValuePath = _pathPrefix + ".additionalImageLink";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
    
    return success;
}

bool CatalogsHotelAttributes::operator==(const CatalogsHotelAttributes& rhs) const
{
    return
    
    
    
    ((!nameIsSet() && !rhs.nameIsSet()) || (nameIsSet() && rhs.nameIsSet() && getName() == rhs.getName())) &&
    
    
    ((!linkIsSet() && !rhs.linkIsSet()) || (linkIsSet() && rhs.linkIsSet() && getLink() == rhs.getLink())) &&
    
    
    ((!descriptionIsSet() && !rhs.descriptionIsSet()) || (descriptionIsSet() && rhs.descriptionIsSet() && getDescription() == rhs.getDescription())) &&
    
    
    ((!brandIsSet() && !rhs.brandIsSet()) || (brandIsSet() && rhs.brandIsSet() && getBrand() == rhs.getBrand())) &&
    
    
    ((!latitudeIsSet() && !rhs.latitudeIsSet()) || (latitudeIsSet() && rhs.latitudeIsSet() && getLatitude() == rhs.getLatitude())) &&
    
    
    ((!longitudeIsSet() && !rhs.longitudeIsSet()) || (longitudeIsSet() && rhs.longitudeIsSet() && getLongitude() == rhs.getLongitude())) &&
    
    
    ((!neighborhoodIsSet() && !rhs.neighborhoodIsSet()) || (neighborhoodIsSet() && rhs.neighborhoodIsSet() && getNeighborhood() == rhs.getNeighborhood())) &&
    
    
    ((!addressIsSet() && !rhs.addressIsSet()) || (addressIsSet() && rhs.addressIsSet() && getAddress() == rhs.getAddress())) &&
    
    
    ((!customLabel0IsSet() && !rhs.customLabel0IsSet()) || (customLabel0IsSet() && rhs.customLabel0IsSet() && getCustomLabel0() == rhs.getCustomLabel0())) &&
    
    
    ((!customLabel1IsSet() && !rhs.customLabel1IsSet()) || (customLabel1IsSet() && rhs.customLabel1IsSet() && getCustomLabel1() == rhs.getCustomLabel1())) &&
    
    
    ((!customLabel2IsSet() && !rhs.customLabel2IsSet()) || (customLabel2IsSet() && rhs.customLabel2IsSet() && getCustomLabel2() == rhs.getCustomLabel2())) &&
    
    
    ((!customLabel3IsSet() && !rhs.customLabel3IsSet()) || (customLabel3IsSet() && rhs.customLabel3IsSet() && getCustomLabel3() == rhs.getCustomLabel3())) &&
    
    
    ((!customLabel4IsSet() && !rhs.customLabel4IsSet()) || (customLabel4IsSet() && rhs.customLabel4IsSet() && getCustomLabel4() == rhs.getCustomLabel4())) &&
    
    
    ((!categoryIsSet() && !rhs.categoryIsSet()) || (categoryIsSet() && rhs.categoryIsSet() && getCategory() == rhs.getCategory())) &&
    
    
    ((!basePriceIsSet() && !rhs.basePriceIsSet()) || (basePriceIsSet() && rhs.basePriceIsSet() && getBasePrice() == rhs.getBasePrice())) &&
    
    
    ((!salePriceIsSet() && !rhs.salePriceIsSet()) || (salePriceIsSet() && rhs.salePriceIsSet() && getSalePrice() == rhs.getSalePrice())) &&
    
    
    ((!guestRatingsIsSet() && !rhs.guestRatingsIsSet()) || (guestRatingsIsSet() && rhs.guestRatingsIsSet() && getGuestRatings() == rhs.getGuestRatings())) &&
    
    
    ((!mainImageIsSet() && !rhs.mainImageIsSet()) || (mainImageIsSet() && rhs.mainImageIsSet() && getMainImage() == rhs.getMainImage())) &&
    
    
    ((!additionalImageLinkIsSet() && !rhs.additionalImageLinkIsSet()) || (additionalImageLinkIsSet() && rhs.additionalImageLinkIsSet() && getAdditionalImageLink() == rhs.getAdditionalImageLink()))
    
    ;
}

bool CatalogsHotelAttributes::operator!=(const CatalogsHotelAttributes& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsHotelAttributes& o)
{
    j = nlohmann::json::object();
    if(o.nameIsSet())
        j["name"] = o.m_Name;
    if(o.linkIsSet())
        j["link"] = o.m_Link;
    if(o.descriptionIsSet())
        j["description"] = o.m_Description;
    if(o.brandIsSet())
        j["brand"] = o.m_Brand;
    if(o.latitudeIsSet())
        j["latitude"] = o.m_Latitude;
    if(o.longitudeIsSet())
        j["longitude"] = o.m_Longitude;
    if(o.neighborhoodIsSet() || !o.m_Neighborhood.empty())
        j["neighborhood"] = o.m_Neighborhood;
    if(o.addressIsSet())
        j["address"] = o.m_Address;
    if(o.customLabel0IsSet())
        j["custom_label_0"] = o.m_Custom_label_0;
    if(o.customLabel1IsSet())
        j["custom_label_1"] = o.m_Custom_label_1;
    if(o.customLabel2IsSet())
        j["custom_label_2"] = o.m_Custom_label_2;
    if(o.customLabel3IsSet())
        j["custom_label_3"] = o.m_Custom_label_3;
    if(o.customLabel4IsSet())
        j["custom_label_4"] = o.m_Custom_label_4;
    if(o.categoryIsSet())
        j["category"] = o.m_Category;
    if(o.basePriceIsSet())
        j["base_price"] = o.m_Base_price;
    if(o.salePriceIsSet())
        j["sale_price"] = o.m_Sale_price;
    if(o.guestRatingsIsSet())
        j["guest_ratings"] = o.m_Guest_ratings;
    if(o.mainImageIsSet())
        j["main_image"] = o.m_Main_image;
    if(o.additionalImageLinkIsSet() || !o.m_Additional_image_link.empty())
        j["additional_image_link"] = o.m_Additional_image_link;
    
}

void from_json(const nlohmann::json& j, CatalogsHotelAttributes& o)
{
    if(j.find("name") != j.end())
    {
        j.at("name").get_to(o.m_Name);
        o.m_NameIsSet = true;
    } 
    if(j.find("link") != j.end())
    {
        j.at("link").get_to(o.m_Link);
        o.m_LinkIsSet = true;
    } 
    if(j.find("description") != j.end())
    {
        j.at("description").get_to(o.m_Description);
        o.m_DescriptionIsSet = true;
    } 
    if(j.find("brand") != j.end())
    {
        j.at("brand").get_to(o.m_Brand);
        o.m_BrandIsSet = true;
    } 
    if(j.find("latitude") != j.end())
    {
        j.at("latitude").get_to(o.m_Latitude);
        o.m_LatitudeIsSet = true;
    } 
    if(j.find("longitude") != j.end())
    {
        j.at("longitude").get_to(o.m_Longitude);
        o.m_LongitudeIsSet = true;
    } 
    if(j.find("neighborhood") != j.end())
    {
        j.at("neighborhood").get_to(o.m_Neighborhood);
        o.m_NeighborhoodIsSet = true;
    } 
    if(j.find("address") != j.end())
    {
        j.at("address").get_to(o.m_Address);
        o.m_AddressIsSet = true;
    } 
    if(j.find("custom_label_0") != j.end())
    {
        j.at("custom_label_0").get_to(o.m_Custom_label_0);
        o.m_Custom_label_0IsSet = true;
    } 
    if(j.find("custom_label_1") != j.end())
    {
        j.at("custom_label_1").get_to(o.m_Custom_label_1);
        o.m_Custom_label_1IsSet = true;
    } 
    if(j.find("custom_label_2") != j.end())
    {
        j.at("custom_label_2").get_to(o.m_Custom_label_2);
        o.m_Custom_label_2IsSet = true;
    } 
    if(j.find("custom_label_3") != j.end())
    {
        j.at("custom_label_3").get_to(o.m_Custom_label_3);
        o.m_Custom_label_3IsSet = true;
    } 
    if(j.find("custom_label_4") != j.end())
    {
        j.at("custom_label_4").get_to(o.m_Custom_label_4);
        o.m_Custom_label_4IsSet = true;
    } 
    if(j.find("category") != j.end())
    {
        j.at("category").get_to(o.m_Category);
        o.m_CategoryIsSet = true;
    } 
    if(j.find("base_price") != j.end())
    {
        j.at("base_price").get_to(o.m_Base_price);
        o.m_Base_priceIsSet = true;
    } 
    if(j.find("sale_price") != j.end())
    {
        j.at("sale_price").get_to(o.m_Sale_price);
        o.m_Sale_priceIsSet = true;
    } 
    if(j.find("guest_ratings") != j.end())
    {
        j.at("guest_ratings").get_to(o.m_Guest_ratings);
        o.m_Guest_ratingsIsSet = true;
    } 
    if(j.find("main_image") != j.end())
    {
        j.at("main_image").get_to(o.m_Main_image);
        o.m_Main_imageIsSet = true;
    } 
    if(j.find("additional_image_link") != j.end())
    {
        j.at("additional_image_link").get_to(o.m_Additional_image_link);
        o.m_Additional_image_linkIsSet = true;
    } 
    
}

std::string CatalogsHotelAttributes::getName() const
{
    return m_Name;
}
void CatalogsHotelAttributes::setName(std::string const& value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool CatalogsHotelAttributes::nameIsSet() const
{
    return m_NameIsSet;
}
void CatalogsHotelAttributes::unsetName()
{
    m_NameIsSet = false;
}
std::string CatalogsHotelAttributes::getLink() const
{
    return m_Link;
}
void CatalogsHotelAttributes::setLink(std::string const& value)
{
    m_Link = value;
    m_LinkIsSet = true;
}
bool CatalogsHotelAttributes::linkIsSet() const
{
    return m_LinkIsSet;
}
void CatalogsHotelAttributes::unsetLink()
{
    m_LinkIsSet = false;
}
std::string CatalogsHotelAttributes::getDescription() const
{
    return m_Description;
}
void CatalogsHotelAttributes::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool CatalogsHotelAttributes::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void CatalogsHotelAttributes::unsetDescription()
{
    m_DescriptionIsSet = false;
}
std::string CatalogsHotelAttributes::getBrand() const
{
    return m_Brand;
}
void CatalogsHotelAttributes::setBrand(std::string const& value)
{
    m_Brand = value;
    m_BrandIsSet = true;
}
bool CatalogsHotelAttributes::brandIsSet() const
{
    return m_BrandIsSet;
}
void CatalogsHotelAttributes::unsetBrand()
{
    m_BrandIsSet = false;
}
double CatalogsHotelAttributes::getLatitude() const
{
    return m_Latitude;
}
void CatalogsHotelAttributes::setLatitude(double const value)
{
    m_Latitude = value;
    m_LatitudeIsSet = true;
}
bool CatalogsHotelAttributes::latitudeIsSet() const
{
    return m_LatitudeIsSet;
}
void CatalogsHotelAttributes::unsetLatitude()
{
    m_LatitudeIsSet = false;
}
double CatalogsHotelAttributes::getLongitude() const
{
    return m_Longitude;
}
void CatalogsHotelAttributes::setLongitude(double const value)
{
    m_Longitude = value;
    m_LongitudeIsSet = true;
}
bool CatalogsHotelAttributes::longitudeIsSet() const
{
    return m_LongitudeIsSet;
}
void CatalogsHotelAttributes::unsetLongitude()
{
    m_LongitudeIsSet = false;
}
std::vector<std::string> CatalogsHotelAttributes::getNeighborhood() const
{
    return m_Neighborhood;
}
void CatalogsHotelAttributes::setNeighborhood(std::vector<std::string> const& value)
{
    m_Neighborhood = value;
    m_NeighborhoodIsSet = true;
}
bool CatalogsHotelAttributes::neighborhoodIsSet() const
{
    return m_NeighborhoodIsSet;
}
void CatalogsHotelAttributes::unsetNeighborhood()
{
    m_NeighborhoodIsSet = false;
}
org::openapitools::server::model::CatalogsHotelAddress CatalogsHotelAttributes::getAddress() const
{
    return m_Address;
}
void CatalogsHotelAttributes::setAddress(org::openapitools::server::model::CatalogsHotelAddress const& value)
{
    m_Address = value;
    m_AddressIsSet = true;
}
bool CatalogsHotelAttributes::addressIsSet() const
{
    return m_AddressIsSet;
}
void CatalogsHotelAttributes::unsetAddress()
{
    m_AddressIsSet = false;
}
std::string CatalogsHotelAttributes::getCustomLabel0() const
{
    return m_Custom_label_0;
}
void CatalogsHotelAttributes::setCustomLabel0(std::string const& value)
{
    m_Custom_label_0 = value;
    m_Custom_label_0IsSet = true;
}
bool CatalogsHotelAttributes::customLabel0IsSet() const
{
    return m_Custom_label_0IsSet;
}
void CatalogsHotelAttributes::unsetCustom_label_0()
{
    m_Custom_label_0IsSet = false;
}
std::string CatalogsHotelAttributes::getCustomLabel1() const
{
    return m_Custom_label_1;
}
void CatalogsHotelAttributes::setCustomLabel1(std::string const& value)
{
    m_Custom_label_1 = value;
    m_Custom_label_1IsSet = true;
}
bool CatalogsHotelAttributes::customLabel1IsSet() const
{
    return m_Custom_label_1IsSet;
}
void CatalogsHotelAttributes::unsetCustom_label_1()
{
    m_Custom_label_1IsSet = false;
}
std::string CatalogsHotelAttributes::getCustomLabel2() const
{
    return m_Custom_label_2;
}
void CatalogsHotelAttributes::setCustomLabel2(std::string const& value)
{
    m_Custom_label_2 = value;
    m_Custom_label_2IsSet = true;
}
bool CatalogsHotelAttributes::customLabel2IsSet() const
{
    return m_Custom_label_2IsSet;
}
void CatalogsHotelAttributes::unsetCustom_label_2()
{
    m_Custom_label_2IsSet = false;
}
std::string CatalogsHotelAttributes::getCustomLabel3() const
{
    return m_Custom_label_3;
}
void CatalogsHotelAttributes::setCustomLabel3(std::string const& value)
{
    m_Custom_label_3 = value;
    m_Custom_label_3IsSet = true;
}
bool CatalogsHotelAttributes::customLabel3IsSet() const
{
    return m_Custom_label_3IsSet;
}
void CatalogsHotelAttributes::unsetCustom_label_3()
{
    m_Custom_label_3IsSet = false;
}
std::string CatalogsHotelAttributes::getCustomLabel4() const
{
    return m_Custom_label_4;
}
void CatalogsHotelAttributes::setCustomLabel4(std::string const& value)
{
    m_Custom_label_4 = value;
    m_Custom_label_4IsSet = true;
}
bool CatalogsHotelAttributes::customLabel4IsSet() const
{
    return m_Custom_label_4IsSet;
}
void CatalogsHotelAttributes::unsetCustom_label_4()
{
    m_Custom_label_4IsSet = false;
}
std::string CatalogsHotelAttributes::getCategory() const
{
    return m_Category;
}
void CatalogsHotelAttributes::setCategory(std::string const& value)
{
    m_Category = value;
    m_CategoryIsSet = true;
}
bool CatalogsHotelAttributes::categoryIsSet() const
{
    return m_CategoryIsSet;
}
void CatalogsHotelAttributes::unsetCategory()
{
    m_CategoryIsSet = false;
}
std::string CatalogsHotelAttributes::getBasePrice() const
{
    return m_Base_price;
}
void CatalogsHotelAttributes::setBasePrice(std::string const& value)
{
    m_Base_price = value;
    m_Base_priceIsSet = true;
}
bool CatalogsHotelAttributes::basePriceIsSet() const
{
    return m_Base_priceIsSet;
}
void CatalogsHotelAttributes::unsetBase_price()
{
    m_Base_priceIsSet = false;
}
std::string CatalogsHotelAttributes::getSalePrice() const
{
    return m_Sale_price;
}
void CatalogsHotelAttributes::setSalePrice(std::string const& value)
{
    m_Sale_price = value;
    m_Sale_priceIsSet = true;
}
bool CatalogsHotelAttributes::salePriceIsSet() const
{
    return m_Sale_priceIsSet;
}
void CatalogsHotelAttributes::unsetSale_price()
{
    m_Sale_priceIsSet = false;
}
org::openapitools::server::model::CatalogsHotelGuestRatings CatalogsHotelAttributes::getGuestRatings() const
{
    return m_Guest_ratings;
}
void CatalogsHotelAttributes::setGuestRatings(org::openapitools::server::model::CatalogsHotelGuestRatings const& value)
{
    m_Guest_ratings = value;
    m_Guest_ratingsIsSet = true;
}
bool CatalogsHotelAttributes::guestRatingsIsSet() const
{
    return m_Guest_ratingsIsSet;
}
void CatalogsHotelAttributes::unsetGuest_ratings()
{
    m_Guest_ratingsIsSet = false;
}
org::openapitools::server::model::CatalogsHotelAttributes_allOf_main_image CatalogsHotelAttributes::getMainImage() const
{
    return m_Main_image;
}
void CatalogsHotelAttributes::setMainImage(org::openapitools::server::model::CatalogsHotelAttributes_allOf_main_image const& value)
{
    m_Main_image = value;
    m_Main_imageIsSet = true;
}
bool CatalogsHotelAttributes::mainImageIsSet() const
{
    return m_Main_imageIsSet;
}
void CatalogsHotelAttributes::unsetMain_image()
{
    m_Main_imageIsSet = false;
}
std::vector<std::string> CatalogsHotelAttributes::getAdditionalImageLink() const
{
    return m_Additional_image_link;
}
void CatalogsHotelAttributes::setAdditionalImageLink(std::vector<std::string> const& value)
{
    m_Additional_image_link = value;
    m_Additional_image_linkIsSet = true;
}
bool CatalogsHotelAttributes::additionalImageLinkIsSet() const
{
    return m_Additional_image_linkIsSet;
}
void CatalogsHotelAttributes::unsetAdditional_image_link()
{
    m_Additional_image_linkIsSet = false;
}


} // namespace org::openapitools::server::model
