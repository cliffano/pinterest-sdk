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


#include "CatalogsProductGroupFiltersAllOfRequest_anyOf.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsProductGroupFiltersAllOfRequest_anyOf::CatalogsProductGroupFiltersAllOfRequest_anyOf()
{
    
}

void CatalogsProductGroupFiltersAllOfRequest_anyOf::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsProductGroupFiltersAllOfRequest_anyOf::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsProductGroupFiltersAllOfRequest_anyOf::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsProductGroupFiltersAllOfRequest_anyOf" : pathPrefix;

         
    
    /* Any_of */ {
        const std::vector<org::openapitools::server::model::CatalogsProductGroupFilterKeys>& value = m_Any_of;
        const std::string currentValuePath = _pathPrefix + ".anyOf";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
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

bool CatalogsProductGroupFiltersAllOfRequest_anyOf::operator==(const CatalogsProductGroupFiltersAllOfRequest_anyOf& rhs) const
{
    return
    
    
    (getAnyOf() == rhs.getAnyOf())
    
    
    ;
}

bool CatalogsProductGroupFiltersAllOfRequest_anyOf::operator!=(const CatalogsProductGroupFiltersAllOfRequest_anyOf& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsProductGroupFiltersAllOfRequest_anyOf& o)
{
    j = nlohmann::json();
    j["any_of"] = o.m_Any_of;
    
}

void from_json(const nlohmann::json& j, CatalogsProductGroupFiltersAllOfRequest_anyOf& o)
{
    j.at("any_of").get_to(o.m_Any_of);
    
}

std::vector<org::openapitools::server::model::CatalogsProductGroupFilterKeys> CatalogsProductGroupFiltersAllOfRequest_anyOf::getAnyOf() const
{
    return m_Any_of;
}
void CatalogsProductGroupFiltersAllOfRequest_anyOf::setAnyOf(std::vector<org::openapitools::server::model::CatalogsProductGroupFilterKeys> const& value)
{
    m_Any_of = value;
}


} // namespace org::openapitools::server::model
