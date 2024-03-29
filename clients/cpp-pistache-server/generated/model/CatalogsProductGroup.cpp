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


#include "CatalogsProductGroup.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsProductGroup::CatalogsProductGroup()
{
    m_Id = "";
    m_Name = "";
    m_NameIsSet = false;
    m_Description = "";
    m_DescriptionIsSet = false;
    m_Is_featured = false;
    m_Is_featuredIsSet = false;
    m_TypeIsSet = false;
    m_StatusIsSet = false;
    m_Created_at = 0;
    m_Created_atIsSet = false;
    m_Updated_at = 0;
    m_Updated_atIsSet = false;
    m_Feed_id = "";
    m_Catalog_type = "";
    m_Catalog_typeIsSet = false;
    
}

void CatalogsProductGroup::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsProductGroup::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsProductGroup::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsProductGroup" : pathPrefix;

         
    
    /* Id */ {
        const std::string& value = m_Id;
        const std::string currentValuePath = _pathPrefix + ".id";
                
        

    }
                
    if (!m_Filters.validate()) {
        msg << _pathPrefix << ": Filters is invalid;";
        success = false;
    }                         
    
    /* Feed_id */ {
        const std::string& value = m_Feed_id;
        const std::string currentValuePath = _pathPrefix + ".feedId";
                
        

    }
        
    return success;
}

bool CatalogsProductGroup::operator==(const CatalogsProductGroup& rhs) const
{
    return
    
    
    (getId() == rhs.getId())
     &&
    
    
    ((!nameIsSet() && !rhs.nameIsSet()) || (nameIsSet() && rhs.nameIsSet() && getName() == rhs.getName())) &&
    
    
    ((!descriptionIsSet() && !rhs.descriptionIsSet()) || (descriptionIsSet() && rhs.descriptionIsSet() && getDescription() == rhs.getDescription())) &&
    
    (getFilters() == rhs.getFilters())
     &&
    
    
    ((!isFeaturedIsSet() && !rhs.isFeaturedIsSet()) || (isFeaturedIsSet() && rhs.isFeaturedIsSet() && isIsFeatured() == rhs.isIsFeatured())) &&
    
    
    ((!typeIsSet() && !rhs.typeIsSet()) || (typeIsSet() && rhs.typeIsSet() && getType() == rhs.getType())) &&
    
    
    ((!statusIsSet() && !rhs.statusIsSet()) || (statusIsSet() && rhs.statusIsSet() && getStatus() == rhs.getStatus())) &&
    
    
    ((!createdAtIsSet() && !rhs.createdAtIsSet()) || (createdAtIsSet() && rhs.createdAtIsSet() && getCreatedAt() == rhs.getCreatedAt())) &&
    
    
    ((!updatedAtIsSet() && !rhs.updatedAtIsSet()) || (updatedAtIsSet() && rhs.updatedAtIsSet() && getUpdatedAt() == rhs.getUpdatedAt())) &&
    
    (getFeedId() == rhs.getFeedId())
     &&
    
    
    ((!catalogTypeIsSet() && !rhs.catalogTypeIsSet()) || (catalogTypeIsSet() && rhs.catalogTypeIsSet() && getCatalogType() == rhs.getCatalogType()))
    
    ;
}

bool CatalogsProductGroup::operator!=(const CatalogsProductGroup& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsProductGroup& o)
{
    j = nlohmann::json::object();
    j["id"] = o.m_Id;
    if(o.nameIsSet())
        j["name"] = o.m_Name;
    if(o.descriptionIsSet())
        j["description"] = o.m_Description;
    j["filters"] = o.m_Filters;
    if(o.isFeaturedIsSet())
        j["is_featured"] = o.m_Is_featured;
    if(o.typeIsSet())
        j["type"] = o.m_Type;
    if(o.statusIsSet())
        j["status"] = o.m_Status;
    if(o.createdAtIsSet())
        j["created_at"] = o.m_Created_at;
    if(o.updatedAtIsSet())
        j["updated_at"] = o.m_Updated_at;
    j["feed_id"] = o.m_Feed_id;
    if(o.catalogTypeIsSet())
        j["catalog_type"] = o.m_Catalog_type;
    
}

void from_json(const nlohmann::json& j, CatalogsProductGroup& o)
{
    j.at("id").get_to(o.m_Id);
    if(j.find("name") != j.end())
    {
        j.at("name").get_to(o.m_Name);
        o.m_NameIsSet = true;
    } 
    if(j.find("description") != j.end())
    {
        j.at("description").get_to(o.m_Description);
        o.m_DescriptionIsSet = true;
    } 
    j.at("filters").get_to(o.m_Filters);
    if(j.find("is_featured") != j.end())
    {
        j.at("is_featured").get_to(o.m_Is_featured);
        o.m_Is_featuredIsSet = true;
    } 
    if(j.find("type") != j.end())
    {
        j.at("type").get_to(o.m_Type);
        o.m_TypeIsSet = true;
    } 
    if(j.find("status") != j.end())
    {
        j.at("status").get_to(o.m_Status);
        o.m_StatusIsSet = true;
    } 
    if(j.find("created_at") != j.end())
    {
        j.at("created_at").get_to(o.m_Created_at);
        o.m_Created_atIsSet = true;
    } 
    if(j.find("updated_at") != j.end())
    {
        j.at("updated_at").get_to(o.m_Updated_at);
        o.m_Updated_atIsSet = true;
    } 
    j.at("feed_id").get_to(o.m_Feed_id);
    if(j.find("catalog_type") != j.end())
    {
        j.at("catalog_type").get_to(o.m_Catalog_type);
        o.m_Catalog_typeIsSet = true;
    } 
    
}

std::string CatalogsProductGroup::getId() const
{
    return m_Id;
}
void CatalogsProductGroup::setId(std::string const& value)
{
    m_Id = value;
}
std::string CatalogsProductGroup::getName() const
{
    return m_Name;
}
void CatalogsProductGroup::setName(std::string const& value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool CatalogsProductGroup::nameIsSet() const
{
    return m_NameIsSet;
}
void CatalogsProductGroup::unsetName()
{
    m_NameIsSet = false;
}
std::string CatalogsProductGroup::getDescription() const
{
    return m_Description;
}
void CatalogsProductGroup::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool CatalogsProductGroup::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void CatalogsProductGroup::unsetDescription()
{
    m_DescriptionIsSet = false;
}
org::openapitools::server::model::CatalogsProductGroupFilters CatalogsProductGroup::getFilters() const
{
    return m_Filters;
}
void CatalogsProductGroup::setFilters(org::openapitools::server::model::CatalogsProductGroupFilters const& value)
{
    m_Filters = value;
}
bool CatalogsProductGroup::isIsFeatured() const
{
    return m_Is_featured;
}
void CatalogsProductGroup::setIsFeatured(bool const value)
{
    m_Is_featured = value;
    m_Is_featuredIsSet = true;
}
bool CatalogsProductGroup::isFeaturedIsSet() const
{
    return m_Is_featuredIsSet;
}
void CatalogsProductGroup::unsetIs_featured()
{
    m_Is_featuredIsSet = false;
}
org::openapitools::server::model::CatalogsProductGroupType CatalogsProductGroup::getType() const
{
    return m_Type;
}
void CatalogsProductGroup::setType(org::openapitools::server::model::CatalogsProductGroupType const& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool CatalogsProductGroup::typeIsSet() const
{
    return m_TypeIsSet;
}
void CatalogsProductGroup::unsetType()
{
    m_TypeIsSet = false;
}
org::openapitools::server::model::CatalogsProductGroupStatus CatalogsProductGroup::getStatus() const
{
    return m_Status;
}
void CatalogsProductGroup::setStatus(org::openapitools::server::model::CatalogsProductGroupStatus const& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool CatalogsProductGroup::statusIsSet() const
{
    return m_StatusIsSet;
}
void CatalogsProductGroup::unsetStatus()
{
    m_StatusIsSet = false;
}
int32_t CatalogsProductGroup::getCreatedAt() const
{
    return m_Created_at;
}
void CatalogsProductGroup::setCreatedAt(int32_t const value)
{
    m_Created_at = value;
    m_Created_atIsSet = true;
}
bool CatalogsProductGroup::createdAtIsSet() const
{
    return m_Created_atIsSet;
}
void CatalogsProductGroup::unsetCreated_at()
{
    m_Created_atIsSet = false;
}
int32_t CatalogsProductGroup::getUpdatedAt() const
{
    return m_Updated_at;
}
void CatalogsProductGroup::setUpdatedAt(int32_t const value)
{
    m_Updated_at = value;
    m_Updated_atIsSet = true;
}
bool CatalogsProductGroup::updatedAtIsSet() const
{
    return m_Updated_atIsSet;
}
void CatalogsProductGroup::unsetUpdated_at()
{
    m_Updated_atIsSet = false;
}
std::string CatalogsProductGroup::getFeedId() const
{
    return m_Feed_id;
}
void CatalogsProductGroup::setFeedId(std::string const& value)
{
    m_Feed_id = value;
}
std::string CatalogsProductGroup::getCatalogType() const
{
    return m_Catalog_type;
}
void CatalogsProductGroup::setCatalogType(std::string const& value)
{
    m_Catalog_type = value;
    m_Catalog_typeIsSet = true;
}
bool CatalogsProductGroup::catalogTypeIsSet() const
{
    return m_Catalog_typeIsSet;
}
void CatalogsProductGroup::unsetCatalog_type()
{
    m_Catalog_typeIsSet = false;
}


} // namespace org::openapitools::server::model

