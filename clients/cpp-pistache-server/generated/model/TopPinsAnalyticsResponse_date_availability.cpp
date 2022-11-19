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


#include "TopPinsAnalyticsResponse_date_availability.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

TopPinsAnalyticsResponse_date_availability::TopPinsAnalyticsResponse_date_availability()
{
    m_Latest_available_timestamp = 0.0;
    m_Latest_available_timestampIsSet = false;
    m_Is_realtime = false;
    m_Is_realtimeIsSet = false;
    
}

void TopPinsAnalyticsResponse_date_availability::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool TopPinsAnalyticsResponse_date_availability::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool TopPinsAnalyticsResponse_date_availability::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "TopPinsAnalyticsResponse_date_availability" : pathPrefix;

            
    return success;
}

bool TopPinsAnalyticsResponse_date_availability::operator==(const TopPinsAnalyticsResponse_date_availability& rhs) const
{
    return
    
    
    
    ((!latestAvailableTimestampIsSet() && !rhs.latestAvailableTimestampIsSet()) || (latestAvailableTimestampIsSet() && rhs.latestAvailableTimestampIsSet() && getLatestAvailableTimestamp() == rhs.getLatestAvailableTimestamp())) &&
    
    
    ((!isRealtimeIsSet() && !rhs.isRealtimeIsSet()) || (isRealtimeIsSet() && rhs.isRealtimeIsSet() && isIsRealtime() == rhs.isIsRealtime()))
    
    ;
}

bool TopPinsAnalyticsResponse_date_availability::operator!=(const TopPinsAnalyticsResponse_date_availability& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const TopPinsAnalyticsResponse_date_availability& o)
{
    j = nlohmann::json();
    if(o.latestAvailableTimestampIsSet())
        j["latest_available_timestamp"] = o.m_Latest_available_timestamp;
    if(o.isRealtimeIsSet())
        j["is_realtime"] = o.m_Is_realtime;
    
}

void from_json(const nlohmann::json& j, TopPinsAnalyticsResponse_date_availability& o)
{
    if(j.find("latest_available_timestamp") != j.end())
    {
        j.at("latest_available_timestamp").get_to(o.m_Latest_available_timestamp);
        o.m_Latest_available_timestampIsSet = true;
    } 
    if(j.find("is_realtime") != j.end())
    {
        j.at("is_realtime").get_to(o.m_Is_realtime);
        o.m_Is_realtimeIsSet = true;
    } 
    
}

double TopPinsAnalyticsResponse_date_availability::getLatestAvailableTimestamp() const
{
    return m_Latest_available_timestamp;
}
void TopPinsAnalyticsResponse_date_availability::setLatestAvailableTimestamp(double const value)
{
    m_Latest_available_timestamp = value;
    m_Latest_available_timestampIsSet = true;
}
bool TopPinsAnalyticsResponse_date_availability::latestAvailableTimestampIsSet() const
{
    return m_Latest_available_timestampIsSet;
}
void TopPinsAnalyticsResponse_date_availability::unsetLatest_available_timestamp()
{
    m_Latest_available_timestampIsSet = false;
}
bool TopPinsAnalyticsResponse_date_availability::isIsRealtime() const
{
    return m_Is_realtime;
}
void TopPinsAnalyticsResponse_date_availability::setIsRealtime(bool const value)
{
    m_Is_realtime = value;
    m_Is_realtimeIsSet = true;
}
bool TopPinsAnalyticsResponse_date_availability::isRealtimeIsSet() const
{
    return m_Is_realtimeIsSet;
}
void TopPinsAnalyticsResponse_date_availability::unsetIs_realtime()
{
    m_Is_realtimeIsSet = false;
}


} // namespace org::openapitools::server::model

