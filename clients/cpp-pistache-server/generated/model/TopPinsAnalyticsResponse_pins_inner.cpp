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


#include "TopPinsAnalyticsResponse_pins_inner.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

TopPinsAnalyticsResponse_pins_inner::TopPinsAnalyticsResponse_pins_inner()
{
    m_MetricsIsSet = false;
    m_Data_statusIsSet = false;
    m_Pin_id = "";
    m_Pin_idIsSet = false;
    
}

void TopPinsAnalyticsResponse_pins_inner::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool TopPinsAnalyticsResponse_pins_inner::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool TopPinsAnalyticsResponse_pins_inner::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "TopPinsAnalyticsResponse_pins_inner" : pathPrefix;

                
    return success;
}

bool TopPinsAnalyticsResponse_pins_inner::operator==(const TopPinsAnalyticsResponse_pins_inner& rhs) const
{
    return
    
    
    
    ((!metricsIsSet() && !rhs.metricsIsSet()) || (metricsIsSet() && rhs.metricsIsSet() && getMetrics() == rhs.getMetrics())) &&
    
    
    ((!dataStatusIsSet() && !rhs.dataStatusIsSet()) || (dataStatusIsSet() && rhs.dataStatusIsSet() && getDataStatus() == rhs.getDataStatus())) &&
    
    
    ((!pinIdIsSet() && !rhs.pinIdIsSet()) || (pinIdIsSet() && rhs.pinIdIsSet() && getPinId() == rhs.getPinId()))
    
    ;
}

bool TopPinsAnalyticsResponse_pins_inner::operator!=(const TopPinsAnalyticsResponse_pins_inner& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const TopPinsAnalyticsResponse_pins_inner& o)
{
    j = nlohmann::json();
    if(o.metricsIsSet() || !o.m_Metrics.empty())
        j["metrics"] = o.m_Metrics;
    if(o.dataStatusIsSet() || !o.m_Data_status.empty())
        j["data_status"] = o.m_Data_status;
    if(o.pinIdIsSet())
        j["pin_id"] = o.m_Pin_id;
    
}

void from_json(const nlohmann::json& j, TopPinsAnalyticsResponse_pins_inner& o)
{
    if(j.find("metrics") != j.end())
    {
        j.at("metrics").get_to(o.m_Metrics);
        o.m_MetricsIsSet = true;
    } 
    if(j.find("data_status") != j.end())
    {
        j.at("data_status").get_to(o.m_Data_status);
        o.m_Data_statusIsSet = true;
    } 
    if(j.find("pin_id") != j.end())
    {
        j.at("pin_id").get_to(o.m_Pin_id);
        o.m_Pin_idIsSet = true;
    } 
    
}

std::map<std::string, double> TopPinsAnalyticsResponse_pins_inner::getMetrics() const
{
    return m_Metrics;
}
void TopPinsAnalyticsResponse_pins_inner::setMetrics(std::map<std::string, double> const value)
{
    m_Metrics = value;
    m_MetricsIsSet = true;
}
bool TopPinsAnalyticsResponse_pins_inner::metricsIsSet() const
{
    return m_MetricsIsSet;
}
void TopPinsAnalyticsResponse_pins_inner::unsetMetrics()
{
    m_MetricsIsSet = false;
}
std::map<std::string, org::openapitools::server::model::DataStatus> TopPinsAnalyticsResponse_pins_inner::getDataStatus() const
{
    return m_Data_status;
}
void TopPinsAnalyticsResponse_pins_inner::setDataStatus(std::map<std::string, org::openapitools::server::model::DataStatus> const& value)
{
    m_Data_status = value;
    m_Data_statusIsSet = true;
}
bool TopPinsAnalyticsResponse_pins_inner::dataStatusIsSet() const
{
    return m_Data_statusIsSet;
}
void TopPinsAnalyticsResponse_pins_inner::unsetData_status()
{
    m_Data_statusIsSet = false;
}
std::string TopPinsAnalyticsResponse_pins_inner::getPinId() const
{
    return m_Pin_id;
}
void TopPinsAnalyticsResponse_pins_inner::setPinId(std::string const& value)
{
    m_Pin_id = value;
    m_Pin_idIsSet = true;
}
bool TopPinsAnalyticsResponse_pins_inner::pinIdIsSet() const
{
    return m_Pin_idIsSet;
}
void TopPinsAnalyticsResponse_pins_inner::unsetPin_id()
{
    m_Pin_idIsSet = false;
}


} // namespace org::openapitools::server::model
