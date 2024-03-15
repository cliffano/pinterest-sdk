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


#include "CatalogsItemsFilters.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsItemsFilters::CatalogsItemsFilters()
{
    m_Catalog_id = "";
    m_Catalog_idIsSet = false;
    
}

void CatalogsItemsFilters::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsItemsFilters::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsItemsFilters::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsItemsFilters" : pathPrefix;

             
    
    /* Item_ids */ {
        const std::vector<std::string>& value = m_Item_ids;
        const std::string currentValuePath = _pathPrefix + ".itemIds";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        if (value.size() > 100)
        {
            success = false;
            msg << currentValuePath << ": must have at most 100 elements;";
        }
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
         
    if (catalogIdIsSet())
    {
        const std::string& value = m_Catalog_id;
        const std::string currentValuePath = _pathPrefix + ".catalogId";
                
        

    }
         
    
    /* Hotel_ids */ {
        const std::vector<std::string>& value = m_Hotel_ids;
        const std::string currentValuePath = _pathPrefix + ".hotelIds";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        if (value.size() > 100)
        {
            success = false;
            msg << currentValuePath << ": must have at most 100 elements;";
        }
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

bool CatalogsItemsFilters::operator==(const CatalogsItemsFilters& rhs) const
{
    return
    
    
    (getCatalogType() == rhs.getCatalogType())
     &&
    
    (getItemIds() == rhs.getItemIds())
     &&
    
    
    ((!catalogIdIsSet() && !rhs.catalogIdIsSet()) || (catalogIdIsSet() && rhs.catalogIdIsSet() && getCatalogId() == rhs.getCatalogId())) &&
    
    (getHotelIds() == rhs.getHotelIds())
    
    
    ;
}

bool CatalogsItemsFilters::operator!=(const CatalogsItemsFilters& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsItemsFilters& o)
{
    j = nlohmann::json::object();
    j["catalog_type"] = o.m_Catalog_type;
    j["item_ids"] = o.m_Item_ids;
    if(o.catalogIdIsSet())
        j["catalog_id"] = o.m_Catalog_id;
    j["hotel_ids"] = o.m_Hotel_ids;
    
}

void from_json(const nlohmann::json& j, CatalogsItemsFilters& o)
{
    j.at("catalog_type").get_to(o.m_Catalog_type);
    j.at("item_ids").get_to(o.m_Item_ids);
    if(j.find("catalog_id") != j.end())
    {
        j.at("catalog_id").get_to(o.m_Catalog_id);
        o.m_Catalog_idIsSet = true;
    } 
    j.at("hotel_ids").get_to(o.m_Hotel_ids);
    
}

org::openapitools::server::model::CatalogsType CatalogsItemsFilters::getCatalogType() const
{
    return m_Catalog_type;
}
void CatalogsItemsFilters::setCatalogType(org::openapitools::server::model::CatalogsType const& value)
{
    m_Catalog_type = value;
}
std::vector<std::string> CatalogsItemsFilters::getItemIds() const
{
    return m_Item_ids;
}
void CatalogsItemsFilters::setItemIds(std::vector<std::string> const& value)
{
    m_Item_ids = value;
}
std::string CatalogsItemsFilters::getCatalogId() const
{
    return m_Catalog_id;
}
void CatalogsItemsFilters::setCatalogId(std::string const& value)
{
    m_Catalog_id = value;
    m_Catalog_idIsSet = true;
}
bool CatalogsItemsFilters::catalogIdIsSet() const
{
    return m_Catalog_idIsSet;
}
void CatalogsItemsFilters::unsetCatalog_id()
{
    m_Catalog_idIsSet = false;
}
std::vector<std::string> CatalogsItemsFilters::getHotelIds() const
{
    return m_Hotel_ids;
}
void CatalogsItemsFilters::setHotelIds(std::vector<std::string> const& value)
{
    m_Hotel_ids = value;
}


} // namespace org::openapitools::server::model
