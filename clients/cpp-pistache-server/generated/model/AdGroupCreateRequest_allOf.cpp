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


#include "AdGroupCreateRequest_allOf.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

AdGroupCreateRequest_allOf::AdGroupCreateRequest_allOf()
{
    m_Targeting_specIsSet = false;
    
}

void AdGroupCreateRequest_allOf::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AdGroupCreateRequest_allOf::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AdGroupCreateRequest_allOf::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AdGroupCreateRequest_allOf" : pathPrefix;

        
    return success;
}

bool AdGroupCreateRequest_allOf::operator==(const AdGroupCreateRequest_allOf& rhs) const
{
    return
    
    
    
    ((!targetingSpecIsSet() && !rhs.targetingSpecIsSet()) || (targetingSpecIsSet() && rhs.targetingSpecIsSet() && getTargetingSpec() == rhs.getTargetingSpec()))
    
    ;
}

bool AdGroupCreateRequest_allOf::operator!=(const AdGroupCreateRequest_allOf& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AdGroupCreateRequest_allOf& o)
{
    j = nlohmann::json();
    if(o.targetingSpecIsSet())
        j["targeting_spec"] = o.m_Targeting_spec;
    
}

void from_json(const nlohmann::json& j, AdGroupCreateRequest_allOf& o)
{
    if(j.find("targeting_spec") != j.end())
    {
        j.at("targeting_spec").get_to(o.m_Targeting_spec);
        o.m_Targeting_specIsSet = true;
    } 
    
}

org::openapitools::server::model::TargetingSpec AdGroupCreateRequest_allOf::getTargetingSpec() const
{
    return m_Targeting_spec;
}
void AdGroupCreateRequest_allOf::setTargetingSpec(org::openapitools::server::model::TargetingSpec const& value)
{
    m_Targeting_spec = value;
    m_Targeting_specIsSet = true;
}
bool AdGroupCreateRequest_allOf::targetingSpecIsSet() const
{
    return m_Targeting_specIsSet;
}
void AdGroupCreateRequest_allOf::unsetTargeting_spec()
{
    m_Targeting_specIsSet = false;
}


} // namespace org::openapitools::server::model

