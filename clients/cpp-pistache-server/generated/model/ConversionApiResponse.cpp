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


#include "ConversionApiResponse.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

ConversionApiResponse::ConversionApiResponse()
{
    m_Num_events_received = 0;
    m_Num_events_processed = 0;
    
}

void ConversionApiResponse::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool ConversionApiResponse::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool ConversionApiResponse::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "ConversionApiResponse" : pathPrefix;

                 
    
    /* Events */ {
        const std::vector<org::openapitools::server::model::ConversionApiResponse_events_inner>& value = m_Events;
        const std::string currentValuePath = _pathPrefix + ".events";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const org::openapitools::server::model::ConversionApiResponse_events_inner& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".events") && success;
 
                i++;
            }
        }

    }
    
    return success;
}

bool ConversionApiResponse::operator==(const ConversionApiResponse& rhs) const
{
    return
    
    
    (getNumEventsReceived() == rhs.getNumEventsReceived())
     &&
    
    (getNumEventsProcessed() == rhs.getNumEventsProcessed())
     &&
    
    (getEvents() == rhs.getEvents())
    
    
    ;
}

bool ConversionApiResponse::operator!=(const ConversionApiResponse& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ConversionApiResponse& o)
{
    j = nlohmann::json::object();
    j["num_events_received"] = o.m_Num_events_received;
    j["num_events_processed"] = o.m_Num_events_processed;
    j["events"] = o.m_Events;
    
}

void from_json(const nlohmann::json& j, ConversionApiResponse& o)
{
    j.at("num_events_received").get_to(o.m_Num_events_received);
    j.at("num_events_processed").get_to(o.m_Num_events_processed);
    j.at("events").get_to(o.m_Events);
    
}

int32_t ConversionApiResponse::getNumEventsReceived() const
{
    return m_Num_events_received;
}
void ConversionApiResponse::setNumEventsReceived(int32_t const value)
{
    m_Num_events_received = value;
}
int32_t ConversionApiResponse::getNumEventsProcessed() const
{
    return m_Num_events_processed;
}
void ConversionApiResponse::setNumEventsProcessed(int32_t const value)
{
    m_Num_events_processed = value;
}
std::vector<org::openapitools::server::model::ConversionApiResponse_events_inner> ConversionApiResponse::getEvents() const
{
    return m_Events;
}
void ConversionApiResponse::setEvents(std::vector<org::openapitools::server::model::ConversionApiResponse_events_inner> const& value)
{
    m_Events = value;
}


} // namespace org::openapitools::server::model

