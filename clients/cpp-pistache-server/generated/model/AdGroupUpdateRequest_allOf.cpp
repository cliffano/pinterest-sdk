/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "AdGroupUpdateRequest_allOf.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

AdGroupUpdateRequest_allOf::AdGroupUpdateRequest_allOf()
{
    m_Id = "";
    
}

void AdGroupUpdateRequest_allOf::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AdGroupUpdateRequest_allOf::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AdGroupUpdateRequest_allOf::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AdGroupUpdateRequest_allOf" : pathPrefix;

         
    
    /* Id */ {
        const std::string& value = m_Id;
        const std::string currentValuePath = _pathPrefix + ".id";
                
        

    }
    
    return success;
}

bool AdGroupUpdateRequest_allOf::operator==(const AdGroupUpdateRequest_allOf& rhs) const
{
    return
    
    
    (getId() == rhs.getId())
    
    
    ;
}

bool AdGroupUpdateRequest_allOf::operator!=(const AdGroupUpdateRequest_allOf& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AdGroupUpdateRequest_allOf& o)
{
    j = nlohmann::json();
    j["id"] = o.m_Id;
    
}

void from_json(const nlohmann::json& j, AdGroupUpdateRequest_allOf& o)
{
    j.at("id").get_to(o.m_Id);
    
}

std::string AdGroupUpdateRequest_allOf::getId() const
{
    return m_Id;
}
void AdGroupUpdateRequest_allOf::setId(std::string const& value)
{
    m_Id = value;
}


} // namespace org::openapitools::server::model

