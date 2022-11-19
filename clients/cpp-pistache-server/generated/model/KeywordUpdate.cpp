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


#include "KeywordUpdate.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

KeywordUpdate::KeywordUpdate()
{
    m_Id = "";
    m_Archived = false;
    m_ArchivedIsSet = false;
    m_Bid = 0;
    m_BidIsSet = false;
    
}

void KeywordUpdate::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool KeywordUpdate::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool KeywordUpdate::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "KeywordUpdate" : pathPrefix;

         
    
    /* Id */ {
        const std::string& value = m_Id;
        const std::string currentValuePath = _pathPrefix + ".id";
                
        

    }
             
    if (bidIsSet())
    {
        const int32_t& value = m_Bid;
        const std::string currentValuePath = _pathPrefix + ".bid";
                
        
        if (value < 1)
        {
            success = false;
            msg << currentValuePath << ": must be greater than or equal to 1;";
        }

    }
    
    return success;
}

bool KeywordUpdate::operator==(const KeywordUpdate& rhs) const
{
    return
    
    
    (getId() == rhs.getId())
     &&
    
    
    ((!archivedIsSet() && !rhs.archivedIsSet()) || (archivedIsSet() && rhs.archivedIsSet() && isArchived() == rhs.isArchived())) &&
    
    
    ((!bidIsSet() && !rhs.bidIsSet()) || (bidIsSet() && rhs.bidIsSet() && getBid() == rhs.getBid()))
    
    ;
}

bool KeywordUpdate::operator!=(const KeywordUpdate& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const KeywordUpdate& o)
{
    j = nlohmann::json();
    j["id"] = o.m_Id;
    if(o.archivedIsSet())
        j["archived"] = o.m_Archived;
    if(o.bidIsSet())
        j["bid"] = o.m_Bid;
    
}

void from_json(const nlohmann::json& j, KeywordUpdate& o)
{
    j.at("id").get_to(o.m_Id);
    if(j.find("archived") != j.end())
    {
        j.at("archived").get_to(o.m_Archived);
        o.m_ArchivedIsSet = true;
    } 
    if(j.find("bid") != j.end())
    {
        j.at("bid").get_to(o.m_Bid);
        o.m_BidIsSet = true;
    } 
    
}

std::string KeywordUpdate::getId() const
{
    return m_Id;
}
void KeywordUpdate::setId(std::string const& value)
{
    m_Id = value;
}
bool KeywordUpdate::isArchived() const
{
    return m_Archived;
}
void KeywordUpdate::setArchived(bool const value)
{
    m_Archived = value;
    m_ArchivedIsSet = true;
}
bool KeywordUpdate::archivedIsSet() const
{
    return m_ArchivedIsSet;
}
void KeywordUpdate::unsetArchived()
{
    m_ArchivedIsSet = false;
}
int32_t KeywordUpdate::getBid() const
{
    return m_Bid;
}
void KeywordUpdate::setBid(int32_t const value)
{
    m_Bid = value;
    m_BidIsSet = true;
}
bool KeywordUpdate::bidIsSet() const
{
    return m_BidIsSet;
}
void KeywordUpdate::unsetBid()
{
    m_BidIsSet = false;
}


} // namespace org::openapitools::server::model

