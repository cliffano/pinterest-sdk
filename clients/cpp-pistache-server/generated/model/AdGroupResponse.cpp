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


#include "AdGroupResponse.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

AdGroupResponse::AdGroupResponse()
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
    m_Id = "";
    m_IdIsSet = false;
    m_Ad_account_id = "";
    m_Ad_account_idIsSet = false;
    m_Created_time = 0;
    m_Created_timeIsSet = false;
    m_Updated_time = 0;
    m_Updated_timeIsSet = false;
    m_Type = "adgroup";
    m_TypeIsSet = false;
    m_Conversion_learning_mode_type = "";
    m_Conversion_learning_mode_typeIsSet = false;
    m_Summary_status = "";
    m_Summary_statusIsSet = false;
    m_Feed_profile_id = "";
    m_Feed_profile_idIsSet = false;
    m_Dca_assetsIsSet = false;
    
}

void AdGroupResponse::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AdGroupResponse::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AdGroupResponse::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AdGroupResponse" : pathPrefix;

                                                                 
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

bool AdGroupResponse::operator==(const AdGroupResponse& rhs) const
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
    
    
    ((!billableEventIsSet() && !rhs.billableEventIsSet()) || (billableEventIsSet() && rhs.billableEventIsSet() && getBillableEvent() == rhs.getBillableEvent())) &&
    
    
    ((!idIsSet() && !rhs.idIsSet()) || (idIsSet() && rhs.idIsSet() && getId() == rhs.getId())) &&
    
    
    ((!adAccountIdIsSet() && !rhs.adAccountIdIsSet()) || (adAccountIdIsSet() && rhs.adAccountIdIsSet() && getAdAccountId() == rhs.getAdAccountId())) &&
    
    
    ((!createdTimeIsSet() && !rhs.createdTimeIsSet()) || (createdTimeIsSet() && rhs.createdTimeIsSet() && getCreatedTime() == rhs.getCreatedTime())) &&
    
    
    ((!updatedTimeIsSet() && !rhs.updatedTimeIsSet()) || (updatedTimeIsSet() && rhs.updatedTimeIsSet() && getUpdatedTime() == rhs.getUpdatedTime())) &&
    
    
    ((!typeIsSet() && !rhs.typeIsSet()) || (typeIsSet() && rhs.typeIsSet() && getType() == rhs.getType())) &&
    
    
    ((!conversionLearningModeTypeIsSet() && !rhs.conversionLearningModeTypeIsSet()) || (conversionLearningModeTypeIsSet() && rhs.conversionLearningModeTypeIsSet() && getConversionLearningModeType() == rhs.getConversionLearningModeType())) &&
    
    
    ((!summaryStatusIsSet() && !rhs.summaryStatusIsSet()) || (summaryStatusIsSet() && rhs.summaryStatusIsSet() && getSummaryStatus() == rhs.getSummaryStatus())) &&
    
    
    ((!feedProfileIdIsSet() && !rhs.feedProfileIdIsSet()) || (feedProfileIdIsSet() && rhs.feedProfileIdIsSet() && getFeedProfileId() == rhs.getFeedProfileId())) &&
    
    
    ((!dcaAssetsIsSet() && !rhs.dcaAssetsIsSet()) || (dcaAssetsIsSet() && rhs.dcaAssetsIsSet() && getDcaAssets() == rhs.getDcaAssets()))
    
    ;
}

bool AdGroupResponse::operator!=(const AdGroupResponse& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AdGroupResponse& o)
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
    if(o.idIsSet())
        j["id"] = o.m_Id;
    if(o.adAccountIdIsSet())
        j["ad_account_id"] = o.m_Ad_account_id;
    if(o.createdTimeIsSet())
        j["created_time"] = o.m_Created_time;
    if(o.updatedTimeIsSet())
        j["updated_time"] = o.m_Updated_time;
    if(o.typeIsSet())
        j["type"] = o.m_Type;
    if(o.conversionLearningModeTypeIsSet())
        j["conversion_learning_mode_type"] = o.m_Conversion_learning_mode_type;
    if(o.summaryStatusIsSet())
        j["summary_status"] = o.m_Summary_status;
    if(o.feedProfileIdIsSet())
        j["feed_profile_id"] = o.m_Feed_profile_id;
    if(o.dcaAssetsIsSet())
        j["dca_assets"] = o.m_Dca_assets;
    
}

void from_json(const nlohmann::json& j, AdGroupResponse& o)
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
    if(j.find("id") != j.end())
    {
        j.at("id").get_to(o.m_Id);
        o.m_IdIsSet = true;
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
    if(j.find("type") != j.end())
    {
        j.at("type").get_to(o.m_Type);
        o.m_TypeIsSet = true;
    } 
    if(j.find("conversion_learning_mode_type") != j.end())
    {
        j.at("conversion_learning_mode_type").get_to(o.m_Conversion_learning_mode_type);
        o.m_Conversion_learning_mode_typeIsSet = true;
    } 
    if(j.find("summary_status") != j.end())
    {
        j.at("summary_status").get_to(o.m_Summary_status);
        o.m_Summary_statusIsSet = true;
    } 
    if(j.find("feed_profile_id") != j.end())
    {
        j.at("feed_profile_id").get_to(o.m_Feed_profile_id);
        o.m_Feed_profile_idIsSet = true;
    } 
    if(j.find("dca_assets") != j.end())
    {
        j.at("dca_assets").get_to(o.m_Dca_assets);
        o.m_Dca_assetsIsSet = true;
    } 
    
}

std::string AdGroupResponse::getName() const
{
    return m_Name;
}
void AdGroupResponse::setName(std::string const& value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool AdGroupResponse::nameIsSet() const
{
    return m_NameIsSet;
}
void AdGroupResponse::unsetName()
{
    m_NameIsSet = false;
}
EntityStatus AdGroupResponse::getStatus() const
{
    return m_Status;
}
void AdGroupResponse::setStatus(EntityStatus const& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool AdGroupResponse::statusIsSet() const
{
    return m_StatusIsSet;
}
void AdGroupResponse::unsetStatus()
{
    m_StatusIsSet = false;
}
int32_t AdGroupResponse::getBudgetInMicroCurrency() const
{
    return m_Budget_in_micro_currency;
}
void AdGroupResponse::setBudgetInMicroCurrency(int32_t const value)
{
    m_Budget_in_micro_currency = value;
    m_Budget_in_micro_currencyIsSet = true;
}
bool AdGroupResponse::budgetInMicroCurrencyIsSet() const
{
    return m_Budget_in_micro_currencyIsSet;
}
void AdGroupResponse::unsetBudget_in_micro_currency()
{
    m_Budget_in_micro_currencyIsSet = false;
}
int32_t AdGroupResponse::getBidInMicroCurrency() const
{
    return m_Bid_in_micro_currency;
}
void AdGroupResponse::setBidInMicroCurrency(int32_t const value)
{
    m_Bid_in_micro_currency = value;
    m_Bid_in_micro_currencyIsSet = true;
}
bool AdGroupResponse::bidInMicroCurrencyIsSet() const
{
    return m_Bid_in_micro_currencyIsSet;
}
void AdGroupResponse::unsetBid_in_micro_currency()
{
    m_Bid_in_micro_currencyIsSet = false;
}
std::string AdGroupResponse::getBidStrategyType() const
{
    return m_Bid_strategy_type;
}
void AdGroupResponse::setBidStrategyType(std::string const& value)
{
    m_Bid_strategy_type = value;
    m_Bid_strategy_typeIsSet = true;
}
bool AdGroupResponse::bidStrategyTypeIsSet() const
{
    return m_Bid_strategy_typeIsSet;
}
void AdGroupResponse::unsetBid_strategy_type()
{
    m_Bid_strategy_typeIsSet = false;
}
org::openapitools::server::model::BudgetType AdGroupResponse::getBudgetType() const
{
    return m_Budget_type;
}
void AdGroupResponse::setBudgetType(org::openapitools::server::model::BudgetType const& value)
{
    m_Budget_type = value;
    m_Budget_typeIsSet = true;
}
bool AdGroupResponse::budgetTypeIsSet() const
{
    return m_Budget_typeIsSet;
}
void AdGroupResponse::unsetBudget_type()
{
    m_Budget_typeIsSet = false;
}
int32_t AdGroupResponse::getStartTime() const
{
    return m_Start_time;
}
void AdGroupResponse::setStartTime(int32_t const value)
{
    m_Start_time = value;
    m_Start_timeIsSet = true;
}
bool AdGroupResponse::startTimeIsSet() const
{
    return m_Start_timeIsSet;
}
void AdGroupResponse::unsetStart_time()
{
    m_Start_timeIsSet = false;
}
int32_t AdGroupResponse::getEndTime() const
{
    return m_End_time;
}
void AdGroupResponse::setEndTime(int32_t const value)
{
    m_End_time = value;
    m_End_timeIsSet = true;
}
bool AdGroupResponse::endTimeIsSet() const
{
    return m_End_timeIsSet;
}
void AdGroupResponse::unsetEnd_time()
{
    m_End_timeIsSet = false;
}
std::map<std::string, std::vector<std::string>> AdGroupResponse::getTargetingSpec() const
{
    return m_Targeting_spec;
}
void AdGroupResponse::setTargetingSpec(std::map<std::string, std::vector<std::string>> const& value)
{
    m_Targeting_spec = value;
    m_Targeting_specIsSet = true;
}
bool AdGroupResponse::targetingSpecIsSet() const
{
    return m_Targeting_specIsSet;
}
void AdGroupResponse::unsetTargeting_spec()
{
    m_Targeting_specIsSet = false;
}
int32_t AdGroupResponse::getLifetimeFrequencyCap() const
{
    return m_Lifetime_frequency_cap;
}
void AdGroupResponse::setLifetimeFrequencyCap(int32_t const value)
{
    m_Lifetime_frequency_cap = value;
    m_Lifetime_frequency_capIsSet = true;
}
bool AdGroupResponse::lifetimeFrequencyCapIsSet() const
{
    return m_Lifetime_frequency_capIsSet;
}
void AdGroupResponse::unsetLifetime_frequency_cap()
{
    m_Lifetime_frequency_capIsSet = false;
}
org::openapitools::server::model::AdGroupCommon_tracking_urls AdGroupResponse::getTrackingUrls() const
{
    return m_Tracking_urls;
}
void AdGroupResponse::setTrackingUrls(org::openapitools::server::model::AdGroupCommon_tracking_urls const& value)
{
    m_Tracking_urls = value;
    m_Tracking_urlsIsSet = true;
}
bool AdGroupResponse::trackingUrlsIsSet() const
{
    return m_Tracking_urlsIsSet;
}
void AdGroupResponse::unsetTracking_urls()
{
    m_Tracking_urlsIsSet = false;
}
bool AdGroupResponse::isAutoTargetingEnabled() const
{
    return m_Auto_targeting_enabled;
}
void AdGroupResponse::setAutoTargetingEnabled(bool const value)
{
    m_Auto_targeting_enabled = value;
    m_Auto_targeting_enabledIsSet = true;
}
bool AdGroupResponse::autoTargetingEnabledIsSet() const
{
    return m_Auto_targeting_enabledIsSet;
}
void AdGroupResponse::unsetAuto_targeting_enabled()
{
    m_Auto_targeting_enabledIsSet = false;
}
PlacementGroupType AdGroupResponse::getPlacementGroup() const
{
    return m_Placement_group;
}
void AdGroupResponse::setPlacementGroup(PlacementGroupType const& value)
{
    m_Placement_group = value;
    m_Placement_groupIsSet = true;
}
bool AdGroupResponse::placementGroupIsSet() const
{
    return m_Placement_groupIsSet;
}
void AdGroupResponse::unsetPlacement_group()
{
    m_Placement_groupIsSet = false;
}
PacingDeliveryType AdGroupResponse::getPacingDeliveryType() const
{
    return m_Pacing_delivery_type;
}
void AdGroupResponse::setPacingDeliveryType(PacingDeliveryType const& value)
{
    m_Pacing_delivery_type = value;
    m_Pacing_delivery_typeIsSet = true;
}
bool AdGroupResponse::pacingDeliveryTypeIsSet() const
{
    return m_Pacing_delivery_typeIsSet;
}
void AdGroupResponse::unsetPacing_delivery_type()
{
    m_Pacing_delivery_typeIsSet = false;
}
std::string AdGroupResponse::getCampaignId() const
{
    return m_Campaign_id;
}
void AdGroupResponse::setCampaignId(std::string const& value)
{
    m_Campaign_id = value;
    m_Campaign_idIsSet = true;
}
bool AdGroupResponse::campaignIdIsSet() const
{
    return m_Campaign_idIsSet;
}
void AdGroupResponse::unsetCampaign_id()
{
    m_Campaign_idIsSet = false;
}
org::openapitools::server::model::ActionType AdGroupResponse::getBillableEvent() const
{
    return m_Billable_event;
}
void AdGroupResponse::setBillableEvent(org::openapitools::server::model::ActionType const& value)
{
    m_Billable_event = value;
    m_Billable_eventIsSet = true;
}
bool AdGroupResponse::billableEventIsSet() const
{
    return m_Billable_eventIsSet;
}
void AdGroupResponse::unsetBillable_event()
{
    m_Billable_eventIsSet = false;
}
std::string AdGroupResponse::getId() const
{
    return m_Id;
}
void AdGroupResponse::setId(std::string const& value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool AdGroupResponse::idIsSet() const
{
    return m_IdIsSet;
}
void AdGroupResponse::unsetId()
{
    m_IdIsSet = false;
}
std::string AdGroupResponse::getAdAccountId() const
{
    return m_Ad_account_id;
}
void AdGroupResponse::setAdAccountId(std::string const& value)
{
    m_Ad_account_id = value;
    m_Ad_account_idIsSet = true;
}
bool AdGroupResponse::adAccountIdIsSet() const
{
    return m_Ad_account_idIsSet;
}
void AdGroupResponse::unsetAd_account_id()
{
    m_Ad_account_idIsSet = false;
}
int32_t AdGroupResponse::getCreatedTime() const
{
    return m_Created_time;
}
void AdGroupResponse::setCreatedTime(int32_t const value)
{
    m_Created_time = value;
    m_Created_timeIsSet = true;
}
bool AdGroupResponse::createdTimeIsSet() const
{
    return m_Created_timeIsSet;
}
void AdGroupResponse::unsetCreated_time()
{
    m_Created_timeIsSet = false;
}
int32_t AdGroupResponse::getUpdatedTime() const
{
    return m_Updated_time;
}
void AdGroupResponse::setUpdatedTime(int32_t const value)
{
    m_Updated_time = value;
    m_Updated_timeIsSet = true;
}
bool AdGroupResponse::updatedTimeIsSet() const
{
    return m_Updated_timeIsSet;
}
void AdGroupResponse::unsetUpdated_time()
{
    m_Updated_timeIsSet = false;
}
std::string AdGroupResponse::getType() const
{
    return m_Type;
}
void AdGroupResponse::setType(std::string const& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool AdGroupResponse::typeIsSet() const
{
    return m_TypeIsSet;
}
void AdGroupResponse::unsetType()
{
    m_TypeIsSet = false;
}
std::string AdGroupResponse::getConversionLearningModeType() const
{
    return m_Conversion_learning_mode_type;
}
void AdGroupResponse::setConversionLearningModeType(std::string const& value)
{
    m_Conversion_learning_mode_type = value;
    m_Conversion_learning_mode_typeIsSet = true;
}
bool AdGroupResponse::conversionLearningModeTypeIsSet() const
{
    return m_Conversion_learning_mode_typeIsSet;
}
void AdGroupResponse::unsetConversion_learning_mode_type()
{
    m_Conversion_learning_mode_typeIsSet = false;
}
AdGroupSummaryStatus AdGroupResponse::getSummaryStatus() const
{
    return m_Summary_status;
}
void AdGroupResponse::setSummaryStatus(AdGroupSummaryStatus const& value)
{
    m_Summary_status = value;
    m_Summary_statusIsSet = true;
}
bool AdGroupResponse::summaryStatusIsSet() const
{
    return m_Summary_statusIsSet;
}
void AdGroupResponse::unsetSummary_status()
{
    m_Summary_statusIsSet = false;
}
std::string AdGroupResponse::getFeedProfileId() const
{
    return m_Feed_profile_id;
}
void AdGroupResponse::setFeedProfileId(std::string const& value)
{
    m_Feed_profile_id = value;
    m_Feed_profile_idIsSet = true;
}
bool AdGroupResponse::feedProfileIdIsSet() const
{
    return m_Feed_profile_idIsSet;
}
void AdGroupResponse::unsetFeed_profile_id()
{
    m_Feed_profile_idIsSet = false;
}
org::openapitools::server::model::nlohmann::json AdGroupResponse::getDcaAssets() const
{
    return m_Dca_assets;
}
void AdGroupResponse::setDcaAssets(org::openapitools::server::model::nlohmann::json const& value)
{
    m_Dca_assets = value;
    m_Dca_assetsIsSet = true;
}
bool AdGroupResponse::dcaAssetsIsSet() const
{
    return m_Dca_assetsIsSet;
}
void AdGroupResponse::unsetDca_assets()
{
    m_Dca_assetsIsSet = false;
}


} // namespace org::openapitools::server::model

