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


#include "TopPinsAnalyticsResponse.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

TopPinsAnalyticsResponse::TopPinsAnalyticsResponse()
{
    m_Date_availabilityIsSet = false;
    m_PinsIsSet = false;
    m_Sort_by = "";
    m_Sort_byIsSet = false;
    
}

void TopPinsAnalyticsResponse::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool TopPinsAnalyticsResponse::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool TopPinsAnalyticsResponse::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "TopPinsAnalyticsResponse" : pathPrefix;

             
    if (pinsIsSet())
    {
        const std::vector<org::openapitools::server::model::TopPinsAnalyticsResponse_pins_inner>& value = m_Pins;
        const std::string currentValuePath = _pathPrefix + ".pins";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const org::openapitools::server::model::TopPinsAnalyticsResponse_pins_inner& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".pins") && success;
 
                i++;
            }
        }

    }
        
    return success;
}

bool TopPinsAnalyticsResponse::operator==(const TopPinsAnalyticsResponse& rhs) const
{
    return
    
    
    
    ((!dateAvailabilityIsSet() && !rhs.dateAvailabilityIsSet()) || (dateAvailabilityIsSet() && rhs.dateAvailabilityIsSet() && getDateAvailability() == rhs.getDateAvailability())) &&
    
    
    ((!pinsIsSet() && !rhs.pinsIsSet()) || (pinsIsSet() && rhs.pinsIsSet() && getPins() == rhs.getPins())) &&
    
    
    ((!sortByIsSet() && !rhs.sortByIsSet()) || (sortByIsSet() && rhs.sortByIsSet() && getSortBy() == rhs.getSortBy()))
    
    ;
}

bool TopPinsAnalyticsResponse::operator!=(const TopPinsAnalyticsResponse& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const TopPinsAnalyticsResponse& o)
{
    j = nlohmann::json();
    if(o.dateAvailabilityIsSet())
        j["date_availability"] = o.m_Date_availability;
    if(o.pinsIsSet() || !o.m_Pins.empty())
        j["pins"] = o.m_Pins;
    if(o.sortByIsSet())
        j["sort_by"] = o.m_Sort_by;
    
}

void from_json(const nlohmann::json& j, TopPinsAnalyticsResponse& o)
{
    if(j.find("date_availability") != j.end())
    {
        j.at("date_availability").get_to(o.m_Date_availability);
        o.m_Date_availabilityIsSet = true;
    } 
    if(j.find("pins") != j.end())
    {
        j.at("pins").get_to(o.m_Pins);
        o.m_PinsIsSet = true;
    } 
    if(j.find("sort_by") != j.end())
    {
        j.at("sort_by").get_to(o.m_Sort_by);
        o.m_Sort_byIsSet = true;
    } 
    
}

org::openapitools::server::model::TopPinsAnalyticsResponse_date_availability TopPinsAnalyticsResponse::getDateAvailability() const
{
    return m_Date_availability;
}
void TopPinsAnalyticsResponse::setDateAvailability(org::openapitools::server::model::TopPinsAnalyticsResponse_date_availability const& value)
{
    m_Date_availability = value;
    m_Date_availabilityIsSet = true;
}
bool TopPinsAnalyticsResponse::dateAvailabilityIsSet() const
{
    return m_Date_availabilityIsSet;
}
void TopPinsAnalyticsResponse::unsetDate_availability()
{
    m_Date_availabilityIsSet = false;
}
std::vector<org::openapitools::server::model::TopPinsAnalyticsResponse_pins_inner> TopPinsAnalyticsResponse::getPins() const
{
    return m_Pins;
}
void TopPinsAnalyticsResponse::setPins(std::vector<org::openapitools::server::model::TopPinsAnalyticsResponse_pins_inner> const& value)
{
    m_Pins = value;
    m_PinsIsSet = true;
}
bool TopPinsAnalyticsResponse::pinsIsSet() const
{
    return m_PinsIsSet;
}
void TopPinsAnalyticsResponse::unsetPins()
{
    m_PinsIsSet = false;
}
std::string TopPinsAnalyticsResponse::getSortBy() const
{
    return m_Sort_by;
}
void TopPinsAnalyticsResponse::setSortBy(std::string const& value)
{
    m_Sort_by = value;
    m_Sort_byIsSet = true;
}
bool TopPinsAnalyticsResponse::sortByIsSet() const
{
    return m_Sort_byIsSet;
}
void TopPinsAnalyticsResponse::unsetSort_by()
{
    m_Sort_byIsSet = false;
}


} // namespace org::openapitools::server::model
