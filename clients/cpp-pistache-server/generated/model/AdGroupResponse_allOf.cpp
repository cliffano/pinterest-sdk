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


#include "AdGroupResponse_allOf.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

AdGroupResponse_allOf::AdGroupResponse_allOf()
{
    m_Name = "";
    m_NameIsSet = false;
    m_Status = "";
    m_StatusIsSet = false;
    m_Budget_in_micro_currency = 0;
    m_Budget_in_micro_currencyIsSet = false;
    m_Bid_in_micro_currency = 0;
    m_Bid_in_micro_currencyIsSet = false;
    m_Budget_type = "";
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
    m_Conversion_learning_mode_type = "";
    m_Conversion_learning_mode_typeIsSet = false;
    m_Summary_status = "";
    m_Summary_statusIsSet = false;
    m_Feed_profile_id = "";
    m_Feed_profile_idIsSet = false;
    
}

void AdGroupResponse_allOf::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AdGroupResponse_allOf::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AdGroupResponse_allOf::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AdGroupResponse_allOf" : pathPrefix;

                                                                    
    return success;
}

bool AdGroupResponse_allOf::operator==(const AdGroupResponse_allOf& rhs) const
{
    return
    
    
    
    ((!nameIsSet() && !rhs.nameIsSet()) || (nameIsSet() && rhs.nameIsSet() && getName() == rhs.getName())) &&
    
    
    ((!statusIsSet() && !rhs.statusIsSet()) || (statusIsSet() && rhs.statusIsSet() && getStatus() == rhs.getStatus())) &&
    
    
    ((!budgetInMicroCurrencyIsSet() && !rhs.budgetInMicroCurrencyIsSet()) || (budgetInMicroCurrencyIsSet() && rhs.budgetInMicroCurrencyIsSet() && getBudgetInMicroCurrency() == rhs.getBudgetInMicroCurrency())) &&
    
    
    ((!bidInMicroCurrencyIsSet() && !rhs.bidInMicroCurrencyIsSet()) || (bidInMicroCurrencyIsSet() && rhs.bidInMicroCurrencyIsSet() && getBidInMicroCurrency() == rhs.getBidInMicroCurrency())) &&
    
    
    ((!budgetTypeIsSet() && !rhs.budgetTypeIsSet()) || (budgetTypeIsSet() && rhs.budgetTypeIsSet() && getBudgetType() == rhs.getBudgetType())) &&
    
    
    ((!startTimeIsSet() && !rhs.startTimeIsSet()) || (startTimeIsSet() && rhs.startTimeIsSet() && getStartTime() == rhs.getStartTime())) &&
    
    
    ((!endTimeIsSet() && !rhs.endTimeIsSet()) || (endTimeIsSet() && rhs.endTimeIsSet() && getEndTime() == rhs.getEndTime())) &&
    
    
    ((!targetingSpecIsSet() && !rhs.targetingSpecIsSet()) || (targetingSpecIsSet() && rhs.targetingSpecIsSet() && getTargetingSpec() == rhs.getTargetingSpec())) &&
    
    
    ((!lifetimeFrequencyCapIsSet() && !rhs.lifetimeFrequencyCapIsSet()) || (lifetimeFrequencyCapIsSet() && rhs.lifetimeFrequencyCapIsSet() && getLifetimeFrequencyCap() == rhs.getLifetimeFrequencyCap())) &&
    
    
    ((!trackingUrlsIsSet() && !rhs.trackingUrlsIsSet()) || (trackingUrlsIsSet() && rhs.trackingUrlsIsSet() && getTrackingUrls() == rhs.getTrackingUrls())) &&
    
    
    ((!autoTargetingEnabledIsSet() && !rhs.autoTargetingEnabledIsSet()) || (autoTargetingEnabledIsSet() && rhs.autoTargetingEnabledIsSet() && isAutoTargetingEnabled() == rhs.isAutoTargetingEnabled())) &&
    
    
    ((!placementGroupIsSet() && !rhs.placementGroupIsSet()) || (placementGroupIsSet() && rhs.placementGroupIsSet() && getPlacementGroup() == rhs.getPlacementGroup())) &&
    
    
    ((!pacingDeliveryTypeIsSet() && !rhs.pacingDeliveryTypeIsSet()) || (pacingDeliveryTypeIsSet() && rhs.pacingDeliveryTypeIsSet() && getPacingDeliveryType() == rhs.getPacingDeliveryType())) &&
    
    
    ((!conversionLearningModeTypeIsSet() && !rhs.conversionLearningModeTypeIsSet()) || (conversionLearningModeTypeIsSet() && rhs.conversionLearningModeTypeIsSet() && getConversionLearningModeType() == rhs.getConversionLearningModeType())) &&
    
    
    ((!summaryStatusIsSet() && !rhs.summaryStatusIsSet()) || (summaryStatusIsSet() && rhs.summaryStatusIsSet() && getSummaryStatus() == rhs.getSummaryStatus())) &&
    
    
    ((!feedProfileIdIsSet() && !rhs.feedProfileIdIsSet()) || (feedProfileIdIsSet() && rhs.feedProfileIdIsSet() && getFeedProfileId() == rhs.getFeedProfileId()))
    
    ;
}

bool AdGroupResponse_allOf::operator!=(const AdGroupResponse_allOf& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AdGroupResponse_allOf& o)
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
    if(o.conversionLearningModeTypeIsSet())
        j["conversion_learning_mode_type"] = o.m_Conversion_learning_mode_type;
    if(o.summaryStatusIsSet())
        j["summary_status"] = o.m_Summary_status;
    if(o.feedProfileIdIsSet())
        j["feed_profile_id"] = o.m_Feed_profile_id;
    
}

void from_json(const nlohmann::json& j, AdGroupResponse_allOf& o)
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
    
}

std::string AdGroupResponse_allOf::getName() const
{
    return m_Name;
}
void AdGroupResponse_allOf::setName(std::string const& value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool AdGroupResponse_allOf::nameIsSet() const
{
    return m_NameIsSet;
}
void AdGroupResponse_allOf::unsetName()
{
    m_NameIsSet = false;
}
EntityStatus AdGroupResponse_allOf::getStatus() const
{
    return m_Status;
}
void AdGroupResponse_allOf::setStatus(EntityStatus const& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool AdGroupResponse_allOf::statusIsSet() const
{
    return m_StatusIsSet;
}
void AdGroupResponse_allOf::unsetStatus()
{
    m_StatusIsSet = false;
}
int32_t AdGroupResponse_allOf::getBudgetInMicroCurrency() const
{
    return m_Budget_in_micro_currency;
}
void AdGroupResponse_allOf::setBudgetInMicroCurrency(int32_t const value)
{
    m_Budget_in_micro_currency = value;
    m_Budget_in_micro_currencyIsSet = true;
}
bool AdGroupResponse_allOf::budgetInMicroCurrencyIsSet() const
{
    return m_Budget_in_micro_currencyIsSet;
}
void AdGroupResponse_allOf::unsetBudget_in_micro_currency()
{
    m_Budget_in_micro_currencyIsSet = false;
}
int32_t AdGroupResponse_allOf::getBidInMicroCurrency() const
{
    return m_Bid_in_micro_currency;
}
void AdGroupResponse_allOf::setBidInMicroCurrency(int32_t const value)
{
    m_Bid_in_micro_currency = value;
    m_Bid_in_micro_currencyIsSet = true;
}
bool AdGroupResponse_allOf::bidInMicroCurrencyIsSet() const
{
    return m_Bid_in_micro_currencyIsSet;
}
void AdGroupResponse_allOf::unsetBid_in_micro_currency()
{
    m_Bid_in_micro_currencyIsSet = false;
}
std::string AdGroupResponse_allOf::getBudgetType() const
{
    return m_Budget_type;
}
void AdGroupResponse_allOf::setBudgetType(std::string const& value)
{
    m_Budget_type = value;
    m_Budget_typeIsSet = true;
}
bool AdGroupResponse_allOf::budgetTypeIsSet() const
{
    return m_Budget_typeIsSet;
}
void AdGroupResponse_allOf::unsetBudget_type()
{
    m_Budget_typeIsSet = false;
}
int32_t AdGroupResponse_allOf::getStartTime() const
{
    return m_Start_time;
}
void AdGroupResponse_allOf::setStartTime(int32_t const value)
{
    m_Start_time = value;
    m_Start_timeIsSet = true;
}
bool AdGroupResponse_allOf::startTimeIsSet() const
{
    return m_Start_timeIsSet;
}
void AdGroupResponse_allOf::unsetStart_time()
{
    m_Start_timeIsSet = false;
}
int32_t AdGroupResponse_allOf::getEndTime() const
{
    return m_End_time;
}
void AdGroupResponse_allOf::setEndTime(int32_t const value)
{
    m_End_time = value;
    m_End_timeIsSet = true;
}
bool AdGroupResponse_allOf::endTimeIsSet() const
{
    return m_End_timeIsSet;
}
void AdGroupResponse_allOf::unsetEnd_time()
{
    m_End_timeIsSet = false;
}
std::map<std::string, std::vector<std::string>> AdGroupResponse_allOf::getTargetingSpec() const
{
    return m_Targeting_spec;
}
void AdGroupResponse_allOf::setTargetingSpec(std::map<std::string, std::vector<std::string>> const& value)
{
    m_Targeting_spec = value;
    m_Targeting_specIsSet = true;
}
bool AdGroupResponse_allOf::targetingSpecIsSet() const
{
    return m_Targeting_specIsSet;
}
void AdGroupResponse_allOf::unsetTargeting_spec()
{
    m_Targeting_specIsSet = false;
}
int32_t AdGroupResponse_allOf::getLifetimeFrequencyCap() const
{
    return m_Lifetime_frequency_cap;
}
void AdGroupResponse_allOf::setLifetimeFrequencyCap(int32_t const value)
{
    m_Lifetime_frequency_cap = value;
    m_Lifetime_frequency_capIsSet = true;
}
bool AdGroupResponse_allOf::lifetimeFrequencyCapIsSet() const
{
    return m_Lifetime_frequency_capIsSet;
}
void AdGroupResponse_allOf::unsetLifetime_frequency_cap()
{
    m_Lifetime_frequency_capIsSet = false;
}
TrackingUrls AdGroupResponse_allOf::getTrackingUrls() const
{
    return m_Tracking_urls;
}
void AdGroupResponse_allOf::setTrackingUrls(TrackingUrls const& value)
{
    m_Tracking_urls = value;
    m_Tracking_urlsIsSet = true;
}
bool AdGroupResponse_allOf::trackingUrlsIsSet() const
{
    return m_Tracking_urlsIsSet;
}
void AdGroupResponse_allOf::unsetTracking_urls()
{
    m_Tracking_urlsIsSet = false;
}
bool AdGroupResponse_allOf::isAutoTargetingEnabled() const
{
    return m_Auto_targeting_enabled;
}
void AdGroupResponse_allOf::setAutoTargetingEnabled(bool const value)
{
    m_Auto_targeting_enabled = value;
    m_Auto_targeting_enabledIsSet = true;
}
bool AdGroupResponse_allOf::autoTargetingEnabledIsSet() const
{
    return m_Auto_targeting_enabledIsSet;
}
void AdGroupResponse_allOf::unsetAuto_targeting_enabled()
{
    m_Auto_targeting_enabledIsSet = false;
}
PlacementGroupType AdGroupResponse_allOf::getPlacementGroup() const
{
    return m_Placement_group;
}
void AdGroupResponse_allOf::setPlacementGroup(PlacementGroupType const& value)
{
    m_Placement_group = value;
    m_Placement_groupIsSet = true;
}
bool AdGroupResponse_allOf::placementGroupIsSet() const
{
    return m_Placement_groupIsSet;
}
void AdGroupResponse_allOf::unsetPlacement_group()
{
    m_Placement_groupIsSet = false;
}
PacingDeliveryType AdGroupResponse_allOf::getPacingDeliveryType() const
{
    return m_Pacing_delivery_type;
}
void AdGroupResponse_allOf::setPacingDeliveryType(PacingDeliveryType const& value)
{
    m_Pacing_delivery_type = value;
    m_Pacing_delivery_typeIsSet = true;
}
bool AdGroupResponse_allOf::pacingDeliveryTypeIsSet() const
{
    return m_Pacing_delivery_typeIsSet;
}
void AdGroupResponse_allOf::unsetPacing_delivery_type()
{
    m_Pacing_delivery_typeIsSet = false;
}
std::string AdGroupResponse_allOf::getConversionLearningModeType() const
{
    return m_Conversion_learning_mode_type;
}
void AdGroupResponse_allOf::setConversionLearningModeType(std::string const& value)
{
    m_Conversion_learning_mode_type = value;
    m_Conversion_learning_mode_typeIsSet = true;
}
bool AdGroupResponse_allOf::conversionLearningModeTypeIsSet() const
{
    return m_Conversion_learning_mode_typeIsSet;
}
void AdGroupResponse_allOf::unsetConversion_learning_mode_type()
{
    m_Conversion_learning_mode_typeIsSet = false;
}
AdGroupSummaryStatus AdGroupResponse_allOf::getSummaryStatus() const
{
    return m_Summary_status;
}
void AdGroupResponse_allOf::setSummaryStatus(AdGroupSummaryStatus const& value)
{
    m_Summary_status = value;
    m_Summary_statusIsSet = true;
}
bool AdGroupResponse_allOf::summaryStatusIsSet() const
{
    return m_Summary_statusIsSet;
}
void AdGroupResponse_allOf::unsetSummary_status()
{
    m_Summary_statusIsSet = false;
}
std::string AdGroupResponse_allOf::getFeedProfileId() const
{
    return m_Feed_profile_id;
}
void AdGroupResponse_allOf::setFeedProfileId(std::string const& value)
{
    m_Feed_profile_id = value;
    m_Feed_profile_idIsSet = true;
}
bool AdGroupResponse_allOf::feedProfileIdIsSet() const
{
    return m_Feed_profile_idIsSet;
}
void AdGroupResponse_allOf::unsetFeed_profile_id()
{
    m_Feed_profile_idIsSet = false;
}


} // namespace org::openapitools::server::model
