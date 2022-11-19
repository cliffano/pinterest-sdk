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


#include "MetricsResponse.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

MetricsResponse::MetricsResponse()
{
    m_DataIsSet = false;
    
}

void MetricsResponse::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool MetricsResponse::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool MetricsResponse::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "MetricsResponse" : pathPrefix;

         
    if (dataIsSet())
    {
        const std::vector<org::openapitools::server::model::Object>& value = m_Data;
        const std::string currentValuePath = _pathPrefix + ".data";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const org::openapitools::server::model::Object& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
    
    return success;
}

bool MetricsResponse::operator==(const MetricsResponse& rhs) const
{
    return
    
    
    
    ((!dataIsSet() && !rhs.dataIsSet()) || (dataIsSet() && rhs.dataIsSet() && getData() == rhs.getData()))
    
    ;
}

bool MetricsResponse::operator!=(const MetricsResponse& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const MetricsResponse& o)
{
    j = nlohmann::json();
    if(o.dataIsSet() || !o.m_Data.empty())
        j["data"] = o.m_Data;
    
}

void from_json(const nlohmann::json& j, MetricsResponse& o)
{
    if(j.find("data") != j.end())
    {
        j.at("data").get_to(o.m_Data);
        o.m_DataIsSet = true;
    } 
    
}

std::vector<org::openapitools::server::model::Object> MetricsResponse::getData() const
{
    return m_Data;
}
void MetricsResponse::setData(std::vector<org::openapitools::server::model::Object> const& value)
{
    m_Data = value;
    m_DataIsSet = true;
}
bool MetricsResponse::dataIsSet() const
{
    return m_DataIsSet;
}
void MetricsResponse::unsetData()
{
    m_DataIsSet = false;
}


} // namespace org::openapitools::server::model

