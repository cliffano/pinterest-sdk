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


#include "AdGroupCommon.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

AdGroupCommon::AdGroupCommon()
{
    m_Name = "";
    m_NameIsSet = false;
    m_Status = "";
    m_StatusIsSet = false;
    m_Budget_in_micro_currency = 0;
    m_Budget_in_micro_currencyIsSet = false;
    m_Bid_in_micro_currency = 0;
    m_Bid_in_micro_currencyIsSet = false;
    m_Bid_strategy_type = "";
    m_Bid_strategy_typeIsSet = false;
    m_Budget_typeIsSet = false;
    m_Start_time = 0;
    m_Start_timeIsSet = false;
    m_End_time = 0;
    m_End_timeIsSet = false;
    m_Targeting_specIsSet = false;
    m_Lifetime_frequency_cap = 0;
    m_Lifetime_frequency_capIsSet = false;
    m_Tracking_urlsIsSet = false;
    m_Auto_targeting_enabled = false;
    m_Auto_targeting_enabledIsSet = false;
    m_Placement_group = "";
    m_Placement_groupIsSet = false;
    m_Pacing_delivery_type = "";
    m_Pacing_delivery_typeIsSet = false;
    m_Campaign_id = "";
    m_Campaign_idIsSet = false;
    m_Billable_eventIsSet = false;
    
}

void AdGroupCommon::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AdGroupCommon::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AdGroupCommon::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AdGroupCommon" : pathPrefix;

                                                                 
    if (campaignIdIsSet())
    {
        const std::string& value = m_Campaign_id;
        const std::string currentValuePath = _pathPrefix + ".campaignId";
                
        

    }
        
    return success;
}

bool AdGroupCommon::operator==(const AdGroupCommon& rhs) const
{
    return
    
    
    
    ((!nameIsSet() && !rhs.nameIsSet()) || (nameIsSet() && rhs.nameIsSet() && getName() == rhs.getName())) &&
    
    
    ((!statusIsSet() && !rhs.statusIsSet()) || (statusIsSet() && rhs.statusIsSet() && getStatus() == rhs.getStatus())) &&
    
    
    ((!budgetInMicroCurrencyIsSet() && !rhs.budgetInMicroCurrencyIsSet()) || (budgetInMicroCurrencyIsSet() && rhs.budgetInMicroCurrencyIsSet() && getBudgetInMicroCurrency() == rhs.getBudgetInMicroCurrency())) &&
    
    
    ((!bidInMicroCurrencyIsSet() && !rhs.bidInMicroCurrencyIsSet()) || (bidInMicroCurrencyIsSet() && rhs.bidInMicroCurrencyIsSet() && getBidInMicroCurrency() == rhs.getBidInMicroCurrency())) &&
    
    
    ((!bidStrategyTypeIsSet() && !rhs.bidStrategyTypeIsSet()) || (bidStrategyTypeIsSet() && rhs.bidStrategyTypeIsSet() && getBidStrategyType() == rhs.getBidStrategyType())) &&
    
    
    ((!budgetTypeIsSet() && !rhs.budgetTypeIsSet()) || (budgetTypeIsSet() && rhs.budgetTypeIsSet() && getBudgetType() == rhs.getBudgetType())) &&
    
    
    ((!startTimeIsSet() && !rhs.startTimeIsSet()) || (startTimeIsSet() && rhs.startTimeIsSet() && getStartTime() == rhs.getStartTime())) &&
    
    
    ((!endTimeIsSet() && !rhs.endTimeIsSet()) || (endTimeIsSet() && rhs.endTimeIsSet() && getEndTime() == rhs.getEndTime())) &&
    
    
    ((!targetingSpecIsSet() && !rhs.targetingSpecIsSet()) || (targetingSpecIsSet() && rhs.targetingSpecIsSet() && getTargetingSpec() == rhs.getTargetingSpec())) &&
    
    
    ((!lifetimeFrequencyCapIsSet() && !rhs.lifetimeFrequencyCapIsSet()) || (lifetimeFrequencyCapIsSet() && rhs.lifetimeFrequencyCapIsSet() && getLifetimeFrequencyCap() == rhs.getLifetimeFrequencyCap())) &&
    
    
    ((!trackingUrlsIsSet() && !rhs.trackingUrlsIsSet()) || (trackingUrlsIsSet() && rhs.trackingUrlsIsSet() && getTrackingUrls() == rhs.getTrackingUrls())) &&
    
    
    ((!autoTargetingEnabledIsSet() && !rhs.autoTargetingEnabledIsSet()) || (autoTargetingEnabledIsSet() && rhs.autoTargetingEnabledIsSet() && isAutoTargetingEnabled() == rhs.isAutoTargetingEnabled())) &&
    
    
    ((!placementGroupIsSet() && !rhs.placementGroupIsSet()) || (placementGroupIsSet() && rhs.placementGroupIsSet() && getPlacementGroup() == rhs.getPlacementGroup())) &&
    
    
    ((!pacingDeliveryTypeIsSet() && !rhs.pacingDeliveryTypeIsSet()) || (pacingDeliveryTypeIsSet() && rhs.pacingDeliveryTypeIsSet() && getPacingDeliveryType() == rhs.getPacingDeliveryType())) &&
    
    
    ((!campaignIdIsSet() && !rhs.campaignIdIsSet()) || (campaignIdIsSet() && rhs.campaignIdIsSet() && getCampaignId() == rhs.getCampaignId())) &&
    
    
    ((!billableEventIsSet() && !rhs.billableEventIsSet()) || (billableEventIsSet() && rhs.billableEventIsSet() && getBillableEvent() == rhs.getBillableEvent()))
    
    ;
}

bool AdGroupCommon::operator!=(const AdGroupCommon& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AdGroupCommon& o)
{
    j = nlohmann::json();
    if(o.nameIsSet())
        j["name"] = o.m_Name;
    if(o.statusIsSet())
        j["status"] = o.m_Status;
    if(o.budgetInMicroCurrencyIsSet())
        j["budget_in_micro_currency"] = o.m_Budget_in_micro_currency;
    if(o.bidInMicroCurrencyIsSet())
        j["bid_in_micro_currency"] = o.m_Bid_in_micro_currency;
    if(o.bidStrategyTypeIsSet())
        j["bid_strategy_type"] = o.m_Bid_strategy_type;
    if(o.budgetTypeIsSet())
        j["budget_type"] = o.m_Budget_type;
    if(o.startTimeIsSet())
        j["start_time"] = o.m_Start_time;
    if(o.endTimeIsSet())
        j["end_time"] = o.m_End_time;
    if(o.targetingSpecIsSet() || !o.m_Targeting_spec.empty())
        j["targeting_spec"] = o.m_Targeting_spec;
    if(o.lifetimeFrequencyCapIsSet())
        j["lifetime_frequency_cap"] = o.m_Lifetime_frequency_cap;
    if(o.trackingUrlsIsSet())
        j["tracking_urls"] = o.m_Tracking_urls;
    if(o.autoTargetingEnabledIsSet())
        j["auto_targeting_enabled"] = o.m_Auto_targeting_enabled;
    if(o.placementGroupIsSet())
        j["placement_group"] = o.m_Placement_group;
    if(o.pacingDeliveryTypeIsSet())
        j["pacing_delivery_type"] = o.m_Pacing_delivery_type;
    if(o.campaignIdIsSet())
        j["campaign_id"] = o.m_Campaign_id;
    if(o.billableEventIsSet())
        j["billable_event"] = o.m_Billable_event;
    
}

void from_json(const nlohmann::json& j, AdGroupCommon& o)
{
    if(j.find("name") != j.end())
    {
        j.at("name").get_to(o.m_Name);
        o.m_NameIsSet = true;
    } 
    if(j.find("status") != j.end())
    {
        j.at("status").get_to(o.m_Status);
        o.m_StatusIsSet = true;
    } 
    if(j.find("budget_in_micro_currency") != j.end())
    {
        j.at("budget_in_micro_currency").get_to(o.m_Budget_in_micro_currency);
        o.m_Budget_in_micro_currencyIsSet = true;
    } 
    if(j.find("bid_in_micro_currency") != j.end())
    {
        j.at("bid_in_micro_currency").get_to(o.m_Bid_in_micro_currency);
        o.m_Bid_in_micro_currencyIsSet = true;
    } 
    if(j.find("bid_strategy_type") != j.end())
    {
        j.at("bid_strategy_type").get_to(o.m_Bid_strategy_type);
        o.m_Bid_strategy_typeIsSet = true;
    } 
    if(j.find("budget_type") != j.end())
    {
        j.at("budget_type").get_to(o.m_Budget_type);
        o.m_Budget_typeIsSet = true;
    } 
    if(j.find("start_time") != j.end())
    {
        j.at("start_time").get_to(o.m_Start_time);
        o.m_Start_timeIsSet = true;
    } 
    if(j.find("end_time") != j.end())
    {
        j.at("end_time").get_to(o.m_End_time);
        o.m_End_timeIsSet = true;
    } 
    if(j.find("targeting_spec") != j.end())
    {
        j.at("targeting_spec").get_to(o.m_Targeting_spec);
        o.m_Targeting_specIsSet = true;
    } 
    if(j.find("lifetime_frequency_cap") != j.end())
    {
        j.at("lifetime_frequency_cap").get_to(o.m_Lifetime_frequency_cap);
        o.m_Lifetime_frequency_capIsSet = true;
    } 
    if(j.find("tracking_urls") != j.end())
    {
        j.at("tracking_urls").get_to(o.m_Tracking_urls);
        o.m_Tracking_urlsIsSet = true;
    } 
    if(j.find("auto_targeting_enabled") != j.end())
    {
        j.at("auto_targeting_enabled").get_to(o.m_Auto_targeting_enabled);
        o.m_Auto_targeting_enabledIsSet = true;
    } 
    if(j.find("placement_group") != j.end())
    {
        j.at("placement_group").get_to(o.m_Placement_group);
        o.m_Placement_groupIsSet = true;
    } 
    if(j.find("pacing_delivery_type") != j.end())
    {
        j.at("pacing_delivery_type").get_to(o.m_Pacing_delivery_type);
        o.m_Pacing_delivery_typeIsSet = true;
    } 
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
    
}

std::string AdGroupCommon::getName() const
{
    return m_Name;
}
void AdGroupCommon::setName(std::string const& value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool AdGroupCommon::nameIsSet() const
{
    return m_NameIsSet;
}
void AdGroupCommon::unsetName()
{
    m_NameIsSet = false;
}
EntityStatus AdGroupCommon::getStatus() const
{
    return m_Status;
}
void AdGroupCommon::setStatus(EntityStatus const& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool AdGroupCommon::statusIsSet() const
{
    return m_StatusIsSet;
}
void AdGroupCommon::unsetStatus()
{
    m_StatusIsSet = false;
}
int32_t AdGroupCommon::getBudgetInMicroCurrency() const
{
    return m_Budget_in_micro_currency;
}
void AdGroupCommon::setBudgetInMicroCurrency(int32_t const value)
{
    m_Budget_in_micro_currency = value;
    m_Budget_in_micro_currencyIsSet = true;
}
bool AdGroupCommon::budgetInMicroCurrencyIsSet() const
{
    return m_Budget_in_micro_currencyIsSet;
}
void AdGroupCommon::unsetBudget_in_micro_currency()
{
    m_Budget_in_micro_currencyIsSet = false;
}
int32_t AdGroupCommon::getBidInMicroCurrency() const
{
    return m_Bid_in_micro_currency;
}
void AdGroupCommon::setBidInMicroCurrency(int32_t const value)
{
    m_Bid_in_micro_currency = value;
    m_Bid_in_micro_currencyIsSet = true;
}
bool AdGroupCommon::bidInMicroCurrencyIsSet() const
{
    return m_Bid_in_micro_currencyIsSet;
}
void AdGroupCommon::unsetBid_in_micro_currency()
{
    m_Bid_in_micro_currencyIsSet = false;
}
std::string AdGroupCommon::getBidStrategyType() const
{
    return m_Bid_strategy_type;
}
void AdGroupCommon::setBidStrategyType(std::string const& value)
{
    m_Bid_strategy_type = value;
    m_Bid_strategy_typeIsSet = true;
}
bool AdGroupCommon::bidStrategyTypeIsSet() const
{
    return m_Bid_strategy_typeIsSet;
}
void AdGroupCommon::unsetBid_strategy_type()
{
    m_Bid_strategy_typeIsSet = false;
}
org::openapitools::server::model::BudgetType AdGroupCommon::getBudgetType() const
{
    return m_Budget_type;
}
void AdGroupCommon::setBudgetType(org::openapitools::server::model::BudgetType const& value)
{
    m_Budget_type = value;
    m_Budget_typeIsSet = true;
}
bool AdGroupCommon::budgetTypeIsSet() const
{
    return m_Budget_typeIsSet;
}
void AdGroupCommon::unsetBudget_type()
{
    m_Budget_typeIsSet = false;
}
int32_t AdGroupCommon::getStartTime() const
{
    return m_Start_time;
}
void AdGroupCommon::setStartTime(int32_t const value)
{
    m_Start_time = value;
    m_Start_timeIsSet = true;
}
bool AdGroupCommon::startTimeIsSet() const
{
    return m_Start_timeIsSet;
}
void AdGroupCommon::unsetStart_time()
{
    m_Start_timeIsSet = false;
}
int32_t AdGroupCommon::getEndTime() const
{
    return m_End_time;
}
void AdGroupCommon::setEndTime(int32_t const value)
{
    m_End_time = value;
    m_End_timeIsSet = true;
}
bool AdGroupCommon::endTimeIsSet() const
{
    return m_End_timeIsSet;
}
void AdGroupCommon::unsetEnd_time()
{
    m_End_timeIsSet = false;
}
std::map<std::string, std::vector<std::string>> AdGroupCommon::getTargetingSpec() const
{
    return m_Targeting_spec;
}
void AdGroupCommon::setTargetingSpec(std::map<std::string, std::vector<std::string>> const& value)
{
    m_Targeting_spec = value;
    m_Targeting_specIsSet = true;
}
bool AdGroupCommon::targetingSpecIsSet() const
{
    return m_Targeting_specIsSet;
}
void AdGroupCommon::unsetTargeting_spec()
{
    m_Targeting_specIsSet = false;
}
int32_t AdGroupCommon::getLifetimeFrequencyCap() const
{
    return m_Lifetime_frequency_cap;
}
void AdGroupCommon::setLifetimeFrequencyCap(int32_t const value)
{
    m_Lifetime_frequency_cap = value;
    m_Lifetime_frequency_capIsSet = true;
}
bool AdGroupCommon::lifetimeFrequencyCapIsSet() const
{
    return m_Lifetime_frequency_capIsSet;
}
void AdGroupCommon::unsetLifetime_frequency_cap()
{
    m_Lifetime_frequency_capIsSet = false;
}
org::openapitools::server::model::AdGroupCommon_tracking_urls AdGroupCommon::getTrackingUrls() const
{
    return m_Tracking_urls;
}
void AdGroupCommon::setTrackingUrls(org::openapitools::server::model::AdGroupCommon_tracking_urls const& value)
{
    m_Tracking_urls = value;
    m_Tracking_urlsIsSet = true;
}
bool AdGroupCommon::trackingUrlsIsSet() const
{
    return m_Tracking_urlsIsSet;
}
void AdGroupCommon::unsetTracking_urls()
{
    m_Tracking_urlsIsSet = false;
}
bool AdGroupCommon::isAutoTargetingEnabled() const
{
    return m_Auto_targeting_enabled;
}
void AdGroupCommon::setAutoTargetingEnabled(bool const value)
{
    m_Auto_targeting_enabled = value;
    m_Auto_targeting_enabledIsSet = true;
}
bool AdGroupCommon::autoTargetingEnabledIsSet() const
{
    return m_Auto_targeting_enabledIsSet;
}
void AdGroupCommon::unsetAuto_targeting_enabled()
{
    m_Auto_targeting_enabledIsSet = false;
}
PlacementGroupType AdGroupCommon::getPlacementGroup() const
{
    return m_Placement_group;
}
void AdGroupCommon::setPlacementGroup(PlacementGroupType const& value)
{
    m_Placement_group = value;
    m_Placement_groupIsSet = true;
}
bool AdGroupCommon::placementGroupIsSet() const
{
    return m_Placement_groupIsSet;
}
void AdGroupCommon::unsetPlacement_group()
{
    m_Placement_groupIsSet = false;
}
PacingDeliveryType AdGroupCommon::getPacingDeliveryType() const
{
    return m_Pacing_delivery_type;
}
void AdGroupCommon::setPacingDeliveryType(PacingDeliveryType const& value)
{
    m_Pacing_delivery_type = value;
    m_Pacing_delivery_typeIsSet = true;
}
bool AdGroupCommon::pacingDeliveryTypeIsSet() const
{
    return m_Pacing_delivery_typeIsSet;
}
void AdGroupCommon::unsetPacing_delivery_type()
{
    m_Pacing_delivery_typeIsSet = false;
}
std::string AdGroupCommon::getCampaignId() const
{
    return m_Campaign_id;
}
void AdGroupCommon::setCampaignId(std::string const& value)
{
    m_Campaign_id = value;
    m_Campaign_idIsSet = true;
}
bool AdGroupCommon::campaignIdIsSet() const
{
    return m_Campaign_idIsSet;
}
void AdGroupCommon::unsetCampaign_id()
{
    m_Campaign_idIsSet = false;
}
org::openapitools::server::model::ActionType AdGroupCommon::getBillableEvent() const
{
    return m_Billable_event;
}
void AdGroupCommon::setBillableEvent(org::openapitools::server::model::ActionType const& value)
{
    m_Billable_event = value;
    m_Billable_eventIsSet = true;
}
bool AdGroupCommon::billableEventIsSet() const
{
    return m_Billable_eventIsSet;
}
void AdGroupCommon::unsetBillable_event()
{
    m_Billable_eventIsSet = false;
}


} // namespace org::openapitools::server::model

