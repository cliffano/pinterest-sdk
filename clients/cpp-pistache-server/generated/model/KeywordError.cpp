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


#include "KeywordError.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

KeywordError::KeywordError()
{
    m_DataIsSet = false;
    m_Error_messagesIsSet = false;
    
}

void KeywordError::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool KeywordError::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool KeywordError::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "KeywordError" : pathPrefix;

             
    if (errorMessagesIsSet())
    {
        const std::vector<std::string>& value = m_Error_messages;
        const std::string currentValuePath = _pathPrefix + ".errorMessages";
                
        
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

bool KeywordError::operator==(const KeywordError& rhs) const
{
    return
    
    
    
    ((!dataIsSet() && !rhs.dataIsSet()) || (dataIsSet() && rhs.dataIsSet() && getData() == rhs.getData())) &&
    
    
    ((!errorMessagesIsSet() && !rhs.errorMessagesIsSet()) || (errorMessagesIsSet() && rhs.errorMessagesIsSet() && getErrorMessages() == rhs.getErrorMessages()))
    
    ;
}

bool KeywordError::operator!=(const KeywordError& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const KeywordError& o)
{
    j = nlohmann::json::object();
    if(o.dataIsSet())
        j["data"] = o.m_Data;
    if(o.errorMessagesIsSet() || !o.m_Error_messages.empty())
        j["error_messages"] = o.m_Error_messages;
    
}

void from_json(const nlohmann::json& j, KeywordError& o)
{
    if(j.find("data") != j.end())
    {
        j.at("data").get_to(o.m_Data);
        o.m_DataIsSet = true;
    } 
    if(j.find("error_messages") != j.end())
    {
        j.at("error_messages").get_to(o.m_Error_messages);
        o.m_Error_messagesIsSet = true;
    } 
    
}

org::openapitools::server::model::Keyword KeywordError::getData() const
{
    return m_Data;
}
void KeywordError::setData(org::openapitools::server::model::Keyword const& value)
{
    m_Data = value;
    m_DataIsSet = true;
}
bool KeywordError::dataIsSet() const
{
    return m_DataIsSet;
}
void KeywordError::unsetData()
{
    m_DataIsSet = false;
}
std::vector<std::string> KeywordError::getErrorMessages() const
{
    return m_Error_messages;
}
void KeywordError::setErrorMessages(std::vector<std::string> const& value)
{
    m_Error_messages = value;
    m_Error_messagesIsSet = true;
}
bool KeywordError::errorMessagesIsSet() const
{
    return m_Error_messagesIsSet;
}
void KeywordError::unsetError_messages()
{
    m_Error_messagesIsSet = false;
}


} // namespace org::openapitools::server::model

