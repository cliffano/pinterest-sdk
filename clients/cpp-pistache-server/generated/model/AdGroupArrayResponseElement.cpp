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


#include "AdGroupArrayResponseElement.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

AdGroupArrayResponseElement::AdGroupArrayResponseElement()
{
    m_DataIsSet = false;
    m_ExceptionsIsSet = false;
    
}

void AdGroupArrayResponseElement::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AdGroupArrayResponseElement::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AdGroupArrayResponseElement::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AdGroupArrayResponseElement" : pathPrefix;

             
    if (exceptionsIsSet())
    {
        const std::vector<org::openapitools::server::model::Exception>& value = m_Exceptions;
        const std::string currentValuePath = _pathPrefix + ".exceptions";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const org::openapitools::server::model::Exception& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".exceptions") && success;
 
                i++;
            }
        }

    }
    
    return success;
}

bool AdGroupArrayResponseElement::operator==(const AdGroupArrayResponseElement& rhs) const
{
    return
    
    
    
    ((!dataIsSet() && !rhs.dataIsSet()) || (dataIsSet() && rhs.dataIsSet() && getData() == rhs.getData())) &&
    
    
    ((!exceptionsIsSet() && !rhs.exceptionsIsSet()) || (exceptionsIsSet() && rhs.exceptionsIsSet() && getExceptions() == rhs.getExceptions()))
    
    ;
}

bool AdGroupArrayResponseElement::operator!=(const AdGroupArrayResponseElement& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AdGroupArrayResponseElement& o)
{
    j = nlohmann::json();
    if(o.dataIsSet())
        j["data"] = o.m_Data;
    if(o.exceptionsIsSet() || !o.m_Exceptions.empty())
        j["exceptions"] = o.m_Exceptions;
    
}

void from_json(const nlohmann::json& j, AdGroupArrayResponseElement& o)
{
    if(j.find("data") != j.end())
    {
        j.at("data").get_to(o.m_Data);
        o.m_DataIsSet = true;
    } 
    if(j.find("exceptions") != j.end())
    {
        j.at("exceptions").get_to(o.m_Exceptions);
        o.m_ExceptionsIsSet = true;
    } 
    
}

org::openapitools::server::model::AdGroupResponse AdGroupArrayResponseElement::getData() const
{
    return m_Data;
}
void AdGroupArrayResponseElement::setData(org::openapitools::server::model::AdGroupResponse const& value)
{
    m_Data = value;
    m_DataIsSet = true;
}
bool AdGroupArrayResponseElement::dataIsSet() const
{
    return m_DataIsSet;
}
void AdGroupArrayResponseElement::unsetData()
{
    m_DataIsSet = false;
}
std::vector<org::openapitools::server::model::Exception> AdGroupArrayResponseElement::getExceptions() const
{
    return m_Exceptions;
}
void AdGroupArrayResponseElement::setExceptions(std::vector<org::openapitools::server::model::Exception> const& value)
{
    m_Exceptions = value;
    m_ExceptionsIsSet = true;
}
bool AdGroupArrayResponseElement::exceptionsIsSet() const
{
    return m_ExceptionsIsSet;
}
void AdGroupArrayResponseElement::unsetExceptions()
{
    m_ExceptionsIsSet = false;
}


} // namespace org::openapitools::server::model
