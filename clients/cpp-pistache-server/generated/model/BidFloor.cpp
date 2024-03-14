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


#include "BidFloor.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

BidFloor::BidFloor()
{
    m_Bid_floorsIsSet = false;
    m_Type = "bidfloor";
    m_TypeIsSet = false;
    
}

void BidFloor::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool BidFloor::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool BidFloor::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "BidFloor" : pathPrefix;

         
    if (bidFloorsIsSet())
    {
        const std::vector<int32_t>& value = m_Bid_floors;
        const std::string currentValuePath = _pathPrefix + ".bidFloors";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const int32_t& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
        
    return success;
}

bool BidFloor::operator==(const BidFloor& rhs) const
{
    return
    
    
    
    ((!bidFloorsIsSet() && !rhs.bidFloorsIsSet()) || (bidFloorsIsSet() && rhs.bidFloorsIsSet() && getBidFloors() == rhs.getBidFloors())) &&
    
    
    ((!typeIsSet() && !rhs.typeIsSet()) || (typeIsSet() && rhs.typeIsSet() && getType() == rhs.getType()))
    
    ;
}

bool BidFloor::operator!=(const BidFloor& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const BidFloor& o)
{
    j = nlohmann::json::object();
    if(o.bidFloorsIsSet() || !o.m_Bid_floors.empty())
        j["bid_floors"] = o.m_Bid_floors;
    if(o.typeIsSet())
        j["type"] = o.m_Type;
    
}

void from_json(const nlohmann::json& j, BidFloor& o)
{
    if(j.find("bid_floors") != j.end())
    {
        j.at("bid_floors").get_to(o.m_Bid_floors);
        o.m_Bid_floorsIsSet = true;
    } 
    if(j.find("type") != j.end())
    {
        j.at("type").get_to(o.m_Type);
        o.m_TypeIsSet = true;
    } 
    
}

std::vector<int32_t> BidFloor::getBidFloors() const
{
    return m_Bid_floors;
}
void BidFloor::setBidFloors(std::vector<int32_t> const value)
{
    m_Bid_floors = value;
    m_Bid_floorsIsSet = true;
}
bool BidFloor::bidFloorsIsSet() const
{
    return m_Bid_floorsIsSet;
}
void BidFloor::unsetBid_floors()
{
    m_Bid_floorsIsSet = false;
}
std::string BidFloor::getType() const
{
    return m_Type;
}
void BidFloor::setType(std::string const& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool BidFloor::typeIsSet() const
{
    return m_TypeIsSet;
}
void BidFloor::unsetType()
{
    m_TypeIsSet = false;
}


} // namespace org::openapitools::server::model

