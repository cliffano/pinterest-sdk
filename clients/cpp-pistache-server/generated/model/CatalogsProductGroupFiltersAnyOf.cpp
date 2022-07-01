/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "CatalogsProductGroupFiltersAnyOf.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsProductGroupFiltersAnyOf::CatalogsProductGroupFiltersAnyOf()
{
    m_Any_ofIsSet = false;
    
}

void CatalogsProductGroupFiltersAnyOf::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsProductGroupFiltersAnyOf::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsProductGroupFiltersAnyOf::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsProductGroupFiltersAnyOf" : pathPrefix;

         
    if (anyOfIsSet())
    {
        const std::vector<CatalogsProductGroupFilterKeys>& value = m_Any_of;
        const std::string currentValuePath = _pathPrefix + ".anyOf";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const CatalogsProductGroupFilterKeys& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
    
    return success;
}

bool CatalogsProductGroupFiltersAnyOf::operator==(const CatalogsProductGroupFiltersAnyOf& rhs) const
{
    return
    
    
    
    ((!anyOfIsSet() && !rhs.anyOfIsSet()) || (anyOfIsSet() && rhs.anyOfIsSet() && getAnyOf() == rhs.getAnyOf()))
    
    ;
}

bool CatalogsProductGroupFiltersAnyOf::operator!=(const CatalogsProductGroupFiltersAnyOf& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsProductGroupFiltersAnyOf& o)
{
    j = nlohmann::json();
    if(o.anyOfIsSet() || !o.m_Any_of.empty())
        j["any_of"] = o.m_Any_of;
    
}

void from_json(const nlohmann::json& j, CatalogsProductGroupFiltersAnyOf& o)
{
    if(j.find("any_of") != j.end())
    {
        j.at("any_of").get_to(o.m_Any_of);
        o.m_Any_ofIsSet = true;
    } 
    
}

std::vector<CatalogsProductGroupFilterKeys> CatalogsProductGroupFiltersAnyOf::getAnyOf() const
{
    return m_Any_of;
}
void CatalogsProductGroupFiltersAnyOf::setAnyOf(std::vector<CatalogsProductGroupFilterKeys> const& value)
{
    m_Any_of = value;
    m_Any_ofIsSet = true;
}
bool CatalogsProductGroupFiltersAnyOf::anyOfIsSet() const
{
    return m_Any_ofIsSet;
}
void CatalogsProductGroupFiltersAnyOf::unsetAny_of()
{
    m_Any_ofIsSet = false;
}


} // namespace org::openapitools::server::model

