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


#include "KeywordsMetricsArrayResponse.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

KeywordsMetricsArrayResponse::KeywordsMetricsArrayResponse()
{
    m_DataIsSet = false;
    
}

void KeywordsMetricsArrayResponse::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool KeywordsMetricsArrayResponse::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool KeywordsMetricsArrayResponse::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "KeywordsMetricsArrayResponse" : pathPrefix;

         
    if (dataIsSet())
    {
        const std::vector<org::openapitools::server::model::KeywordMetricsResponse>& value = m_Data;
        const std::string currentValuePath = _pathPrefix + ".data";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const org::openapitools::server::model::KeywordMetricsResponse& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".data") && success;
 
                i++;
            }
        }

    }
    
    return success;
}

bool KeywordsMetricsArrayResponse::operator==(const KeywordsMetricsArrayResponse& rhs) const
{
    return
    
    
    
    ((!dataIsSet() && !rhs.dataIsSet()) || (dataIsSet() && rhs.dataIsSet() && getData() == rhs.getData()))
    
    ;
}

bool KeywordsMetricsArrayResponse::operator!=(const KeywordsMetricsArrayResponse& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const KeywordsMetricsArrayResponse& o)
{
    j = nlohmann::json::object();
    if(o.dataIsSet() || !o.m_Data.empty())
        j["data"] = o.m_Data;
    
}

void from_json(const nlohmann::json& j, KeywordsMetricsArrayResponse& o)
{
    if(j.find("data") != j.end())
    {
        j.at("data").get_to(o.m_Data);
        o.m_DataIsSet = true;
    } 
    
}

std::vector<org::openapitools::server::model::KeywordMetricsResponse> KeywordsMetricsArrayResponse::getData() const
{
    return m_Data;
}
void KeywordsMetricsArrayResponse::setData(std::vector<org::openapitools::server::model::KeywordMetricsResponse> const& value)
{
    m_Data = value;
    m_DataIsSet = true;
}
bool KeywordsMetricsArrayResponse::dataIsSet() const
{
    return m_DataIsSet;
}
void KeywordsMetricsArrayResponse::unsetData()
{
    m_DataIsSet = false;
}


} // namespace org::openapitools::server::model

