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


#include "ConversionEventsUserData_anyOf_2.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

ConversionEventsUserData_anyOf_2::ConversionEventsUserData_anyOf_2()
{
    m_Client_ip_address = "";
    m_Client_user_agent = "";
    
}

void ConversionEventsUserData_anyOf_2::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool ConversionEventsUserData_anyOf_2::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool ConversionEventsUserData_anyOf_2::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "ConversionEventsUserData_anyOf_2" : pathPrefix;

            
    return success;
}

bool ConversionEventsUserData_anyOf_2::operator==(const ConversionEventsUserData_anyOf_2& rhs) const
{
    return
    
    
    (getClientIpAddress() == rhs.getClientIpAddress())
     &&
    
    (getClientUserAgent() == rhs.getClientUserAgent())
    
    
    ;
}

bool ConversionEventsUserData_anyOf_2::operator!=(const ConversionEventsUserData_anyOf_2& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ConversionEventsUserData_anyOf_2& o)
{
    j = nlohmann::json();
    j["client_ip_address"] = o.m_Client_ip_address;
    j["client_user_agent"] = o.m_Client_user_agent;
    
}

void from_json(const nlohmann::json& j, ConversionEventsUserData_anyOf_2& o)
{
    j.at("client_ip_address").get_to(o.m_Client_ip_address);
    j.at("client_user_agent").get_to(o.m_Client_user_agent);
    
}

std::string ConversionEventsUserData_anyOf_2::getClientIpAddress() const
{
    return m_Client_ip_address;
}
void ConversionEventsUserData_anyOf_2::setClientIpAddress(std::string const& value)
{
    m_Client_ip_address = value;
}
std::string ConversionEventsUserData_anyOf_2::getClientUserAgent() const
{
    return m_Client_user_agent;
}
void ConversionEventsUserData_anyOf_2::setClientUserAgent(std::string const& value)
{
    m_Client_user_agent = value;
}


} // namespace org::openapitools::server::model

