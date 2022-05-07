/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "AdGroupResponse_allOf_1.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

AdGroupResponse_allOf_1::AdGroupResponse_allOf_1()
{
    m_Campaign_id = "";
    m_Campaign_idIsSet = false;
    m_Billable_eventIsSet = false;
    m_Id = "";
    m_IdIsSet = false;
    m_Type = "";
    m_TypeIsSet = false;
    m_Ad_account_id = "";
    m_Ad_account_idIsSet = false;
    m_Created_time = 0;
    m_Created_timeIsSet = false;
    m_Updated_time = 0;
    m_Updated_timeIsSet = false;
    
}

void AdGroupResponse_allOf_1::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AdGroupResponse_allOf_1::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AdGroupResponse_allOf_1::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AdGroupResponse_allOf_1" : pathPrefix;

         
    if (campaignIdIsSet())
    {
        const std::string& value = m_Campaign_id;
        const std::string currentValuePath = _pathPrefix + ".campaignId";
                
        

    }
             
    if (idIsSet())
    {
        const std::string& value = m_Id;
        const std::string currentValuePath = _pathPrefix + ".id";
                
        

    }
             
    if (adAccountIdIsSet())
    {
        const std::string& value = m_Ad_account_id;
        const std::string currentValuePath = _pathPrefix + ".adAccountId";
                
        

    }
            
    return success;
}

bool AdGroupResponse_allOf_1::operator==(const AdGroupResponse_allOf_1& rhs) const
{
    return
    
    
    
    ((!campaignIdIsSet() && !rhs.campaignIdIsSet()) || (campaignIdIsSet() && rhs.campaignIdIsSet() && getCampaignId() == rhs.getCampaignId())) &&
    
    
    ((!billableEventIsSet() && !rhs.billableEventIsSet()) || (billableEventIsSet() && rhs.billableEventIsSet() && getBillableEvent() == rhs.getBillableEvent())) &&
    
    
    ((!idIsSet() && !rhs.idIsSet()) || (idIsSet() && rhs.idIsSet() && getId() == rhs.getId())) &&
    
    
    ((!typeIsSet() && !rhs.typeIsSet()) || (typeIsSet() && rhs.typeIsSet() && getType() == rhs.getType())) &&
    
    
    ((!adAccountIdIsSet() && !rhs.adAccountIdIsSet()) || (adAccountIdIsSet() && rhs.adAccountIdIsSet() && getAdAccountId() == rhs.getAdAccountId())) &&
    
    
    ((!createdTimeIsSet() && !rhs.createdTimeIsSet()) || (createdTimeIsSet() && rhs.createdTimeIsSet() && getCreatedTime() == rhs.getCreatedTime())) &&
    
    
    ((!updatedTimeIsSet() && !rhs.updatedTimeIsSet()) || (updatedTimeIsSet() && rhs.updatedTimeIsSet() && getUpdatedTime() == rhs.getUpdatedTime()))
    
    ;
}

bool AdGroupResponse_allOf_1::operator!=(const AdGroupResponse_allOf_1& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AdGroupResponse_allOf_1& o)
{
    j = nlohmann::json();
    if(o.campaignIdIsSet())
        j["campaign_id"] = o.m_Campaign_id;
    if(o.billableEventIsSet())
        j["billable_event"] = o.m_Billable_event;
    if(o.idIsSet())
        j["id"] = o.m_Id;
    if(o.typeIsSet())
        j["type"] = o.m_Type;
    if(o.adAccountIdIsSet())
        j["ad_account_id"] = o.m_Ad_account_id;
    if(o.createdTimeIsSet())
        j["created_time"] = o.m_Created_time;
    if(o.updatedTimeIsSet())
        j["updated_time"] = o.m_Updated_time;
    
}

void from_json(const nlohmann::json& j, AdGroupResponse_allOf_1& o)
{
    if(j.find("campaign_id") != j.end())
    {
        j.at("campaign_id").get_to(o.m_Campaign_id);
        o.m_Campaign_idIsSet = true;
    } 
    if(j.find("billable_event") != j.end())
    {
        j.at("billable_event").get_to(o.m_Billable_event);
        o.m_Billable_eventIsSet = true;
    } 
    if(j.find("id") != j.end())
    {
        j.at("id").get_to(o.m_Id);
        o.m_IdIsSet = true;
    } 
    if(j.find("type") != j.end())
    {
        j.at("type").get_to(o.m_Type);
        o.m_TypeIsSet = true;
    } 
    if(j.find("ad_account_id") != j.end())
    {
        j.at("ad_account_id").get_to(o.m_Ad_account_id);
        o.m_Ad_account_idIsSet = true;
    } 
    if(j.find("created_time") != j.end())
    {
        j.at("created_time").get_to(o.m_Created_time);
        o.m_Created_timeIsSet = true;
    } 
    if(j.find("updated_time") != j.end())
    {
        j.at("updated_time").get_to(o.m_Updated_time);
        o.m_Updated_timeIsSet = true;
    } 
    
}

std::string AdGroupResponse_allOf_1::getCampaignId() const
{
    return m_Campaign_id;
}
void AdGroupResponse_allOf_1::setCampaignId(std::string const& value)
{
    m_Campaign_id = value;
    m_Campaign_idIsSet = true;
}
bool AdGroupResponse_allOf_1::campaignIdIsSet() const
{
    return m_Campaign_idIsSet;
}
void AdGroupResponse_allOf_1::unsetCampaign_id()
{
    m_Campaign_idIsSet = false;
}
ActionType AdGroupResponse_allOf_1::getBillableEvent() const
{
    return m_Billable_event;
}
void AdGroupResponse_allOf_1::setBillableEvent(ActionType const& value)
{
    m_Billable_event = value;
    m_Billable_eventIsSet = true;
}
bool AdGroupResponse_allOf_1::billableEventIsSet() const
{
    return m_Billable_eventIsSet;
}
void AdGroupResponse_allOf_1::unsetBillable_event()
{
    m_Billable_eventIsSet = false;
}
std::string AdGroupResponse_allOf_1::getId() const
{
    return m_Id;
}
void AdGroupResponse_allOf_1::setId(std::string const& value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool AdGroupResponse_allOf_1::idIsSet() const
{
    return m_IdIsSet;
}
void AdGroupResponse_allOf_1::unsetId()
{
    m_IdIsSet = false;
}
std::string AdGroupResponse_allOf_1::getType() const
{
    return m_Type;
}
void AdGroupResponse_allOf_1::setType(std::string const& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool AdGroupResponse_allOf_1::typeIsSet() const
{
    return m_TypeIsSet;
}
void AdGroupResponse_allOf_1::unsetType()
{
    m_TypeIsSet = false;
}
std::string AdGroupResponse_allOf_1::getAdAccountId() const
{
    return m_Ad_account_id;
}
void AdGroupResponse_allOf_1::setAdAccountId(std::string const& value)
{
    m_Ad_account_id = value;
    m_Ad_account_idIsSet = true;
}
bool AdGroupResponse_allOf_1::adAccountIdIsSet() const
{
    return m_Ad_account_idIsSet;
}
void AdGroupResponse_allOf_1::unsetAd_account_id()
{
    m_Ad_account_idIsSet = false;
}
int32_t AdGroupResponse_allOf_1::getCreatedTime() const
{
    return m_Created_time;
}
void AdGroupResponse_allOf_1::setCreatedTime(int32_t const value)
{
    m_Created_time = value;
    m_Created_timeIsSet = true;
}
bool AdGroupResponse_allOf_1::createdTimeIsSet() const
{
    return m_Created_timeIsSet;
}
void AdGroupResponse_allOf_1::unsetCreated_time()
{
    m_Created_timeIsSet = false;
}
int32_t AdGroupResponse_allOf_1::getUpdatedTime() const
{
    return m_Updated_time;
}
void AdGroupResponse_allOf_1::setUpdatedTime(int32_t const value)
{
    m_Updated_time = value;
    m_Updated_timeIsSet = true;
}
bool AdGroupResponse_allOf_1::updatedTimeIsSet() const
{
    return m_Updated_timeIsSet;
}
void AdGroupResponse_allOf_1::unsetUpdated_time()
{
    m_Updated_timeIsSet = false;
}


} // namespace org::openapitools::server::model

