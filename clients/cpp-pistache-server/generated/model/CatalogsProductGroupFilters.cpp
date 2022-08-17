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


#include "CatalogsProductGroupFilters.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsProductGroupFilters::CatalogsProductGroupFilters()
{
    
}

void CatalogsProductGroupFilters::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsProductGroupFilters::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsProductGroupFilters::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsProductGroupFilters" : pathPrefix;

         
    
    /* Any_of */ {
        const std::vector<org::openapitools::server::model::CatalogsProductGroupFilterKeys>& value = m_Any_of;
        const std::string currentValuePath = _pathPrefix + ".anyOf";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const org::openapitools::server::model::CatalogsProductGroupFilterKeys& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
         
    
    /* All_of */ {
        const std::vector<org::openapitools::server::model::CatalogsProductGroupFilterKeys>& value = m_All_of;
        const std::string currentValuePath = _pathPrefix + ".allOf";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const org::openapitools::server::model::CatalogsProductGroupFilterKeys& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
    
    return success;
}

bool CatalogsProductGroupFilters::operator==(const CatalogsProductGroupFilters& rhs) const
{
    return
    
    
    (getAnyOf() == rhs.getAnyOf())
     &&
    
    (getAllOf() == rhs.getAllOf())
    
    
    ;
}

bool CatalogsProductGroupFilters::operator!=(const CatalogsProductGroupFilters& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsProductGroupFilters& o)
{
    j = nlohmann::json();
    j["any_of"] = o.m_Any_of;
    j["all_of"] = o.m_All_of;
    
}

void from_json(const nlohmann::json& j, CatalogsProductGroupFilters& o)
{
    j.at("any_of").get_to(o.m_Any_of);
    j.at("all_of").get_to(o.m_All_of);
    
}

std::vector<org::openapitools::server::model::CatalogsProductGroupFilterKeys> CatalogsProductGroupFilters::getAnyOf() const
{
    return m_Any_of;
}
void CatalogsProductGroupFilters::setAnyOf(std::vector<org::openapitools::server::model::CatalogsProductGroupFilterKeys> const& value)
{
    m_Any_of = value;
}
std::vector<org::openapitools::server::model::CatalogsProductGroupFilterKeys> CatalogsProductGroupFilters::getAllOf() const
{
    return m_All_of;
}
void CatalogsProductGroupFilters::setAllOf(std::vector<org::openapitools::server::model::CatalogsProductGroupFilterKeys> const& value)
{
    m_All_of = value;
}


} // namespace org::openapitools::server::model

