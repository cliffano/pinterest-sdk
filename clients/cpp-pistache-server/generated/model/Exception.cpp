/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "Exception.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

Exception::Exception()
{
    m_Code = 0;
    m_CodeIsSet = false;
    m_Message = "";
    m_MessageIsSet = false;
    
}

void Exception::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool Exception::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool Exception::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "Exception" : pathPrefix;

            
    return success;
}

bool Exception::operator==(const Exception& rhs) const
{
    return
    
    
    
    ((!codeIsSet() && !rhs.codeIsSet()) || (codeIsSet() && rhs.codeIsSet() && getCode() == rhs.getCode())) &&
    
    
    ((!messageIsSet() && !rhs.messageIsSet()) || (messageIsSet() && rhs.messageIsSet() && getMessage() == rhs.getMessage()))
    
    ;
}

bool Exception::operator!=(const Exception& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Exception& o)
{
    j = nlohmann::json::object();
    if(o.codeIsSet())
        j["code"] = o.m_Code;
    if(o.messageIsSet())
        j["message"] = o.m_Message;
    
}

void from_json(const nlohmann::json& j, Exception& o)
{
    if(j.find("code") != j.end())
    {
        j.at("code").get_to(o.m_Code);
        o.m_CodeIsSet = true;
    } 
    if(j.find("message") != j.end())
    {
        j.at("message").get_to(o.m_Message);
        o.m_MessageIsSet = true;
    } 
    
}

int32_t Exception::getCode() const
{
    return m_Code;
}
void Exception::setCode(int32_t const value)
{
    m_Code = value;
    m_CodeIsSet = true;
}
bool Exception::codeIsSet() const
{
    return m_CodeIsSet;
}
void Exception::unsetCode()
{
    m_CodeIsSet = false;
}
std::string Exception::getMessage() const
{
    return m_Message;
}
void Exception::setMessage(std::string const& value)
{
    m_Message = value;
    m_MessageIsSet = true;
}
bool Exception::messageIsSet() const
{
    return m_MessageIsSet;
}
void Exception::unsetMessage()
{
    m_MessageIsSet = false;
}


} // namespace org::openapitools::server::model
