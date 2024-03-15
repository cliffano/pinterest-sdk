/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "CampaignCreateRequest.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CampaignCreateRequest::CampaignCreateRequest()
{
    m_Ad_account_id = "";
    m_Name = "";
    m_StatusIsSet = false;
    m_Lifetime_spend_cap = 0;
    m_Lifetime_spend_capIsSet = false;
    m_Daily_spend_cap = 0;
    m_Daily_spend_capIsSet = false;
    m_Order_line_id = "";
    m_Order_line_idIsSet = false;
    m_Tracking_urlsIsSet = false;
    m_Start_time = 0;
    m_Start_timeIsSet = false;
    m_End_time = 0;
    m_End_timeIsSet = false;
    m_Summary_statusIsSet = false;
    m_Is_flexible_daily_budgets = false;
    m_Is_flexible_daily_budgetsIsSet = false;
    m_Default_ad_group_budget_in_micro_currency = 0;
    m_Default_ad_group_budget_in_micro_currencyIsSet = false;
    m_Is_automated_campaign = false;
    m_Is_automated_campaignIsSet = false;
    
}

void CampaignCreateRequest::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CampaignCreateRequest::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CampaignCreateRequest::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CampaignCreateRequest" : pathPrefix;

         
    
    /* Ad_account_id */ {
        const std::string& value = m_Ad_account_id;
        const std::string currentValuePath = _pathPrefix + ".adAccountId";
                
        

    }
                         
    if (orderLineIdIsSet())
    {
        const std::string& value = m_Order_line_id;
        const std::string currentValuePath = _pathPrefix + ".orderLineId";
                
        

    }
                                    
    return success;
}

bool CampaignCreateRequest::operator==(const CampaignCreateRequest& rhs) const
{
    return
    
    
    (getAdAccountId() == rhs.getAdAccountId())
     &&
    
    (getName() == rhs.getName())
     &&
    
    
    ((!statusIsSet() && !rhs.statusIsSet()) || (statusIsSet() && rhs.statusIsSet() && getStatus() == rhs.getStatus())) &&
    
    
    ((!lifetimeSpendCapIsSet() && !rhs.lifetimeSpendCapIsSet()) || (lifetimeSpendCapIsSet() && rhs.lifetimeSpendCapIsSet() && getLifetimeSpendCap() == rhs.getLifetimeSpendCap())) &&
    
    
    ((!dailySpendCapIsSet() && !rhs.dailySpendCapIsSet()) || (dailySpendCapIsSet() && rhs.dailySpendCapIsSet() && getDailySpendCap() == rhs.getDailySpendCap())) &&
    
    
    ((!orderLineIdIsSet() && !rhs.orderLineIdIsSet()) || (orderLineIdIsSet() && rhs.orderLineIdIsSet() && getOrderLineId() == rhs.getOrderLineId())) &&
    
    
    ((!trackingUrlsIsSet() && !rhs.trackingUrlsIsSet()) || (trackingUrlsIsSet() && rhs.trackingUrlsIsSet() && getTrackingUrls() == rhs.getTrackingUrls())) &&
    
    
    ((!startTimeIsSet() && !rhs.startTimeIsSet()) || (startTimeIsSet() && rhs.startTimeIsSet() && getStartTime() == rhs.getStartTime())) &&
    
    
    ((!endTimeIsSet() && !rhs.endTimeIsSet()) || (endTimeIsSet() && rhs.endTimeIsSet() && getEndTime() == rhs.getEndTime())) &&
    
    
    ((!summaryStatusIsSet() && !rhs.summaryStatusIsSet()) || (summaryStatusIsSet() && rhs.summaryStatusIsSet() && getSummaryStatus() == rhs.getSummaryStatus())) &&
    
    
    ((!isFlexibleDailyBudgetsIsSet() && !rhs.isFlexibleDailyBudgetsIsSet()) || (isFlexibleDailyBudgetsIsSet() && rhs.isFlexibleDailyBudgetsIsSet() && isIsFlexibleDailyBudgets() == rhs.isIsFlexibleDailyBudgets())) &&
    
    
    ((!defaultAdGroupBudgetInMicroCurrencyIsSet() && !rhs.defaultAdGroupBudgetInMicroCurrencyIsSet()) || (defaultAdGroupBudgetInMicroCurrencyIsSet() && rhs.defaultAdGroupBudgetInMicroCurrencyIsSet() && getDefaultAdGroupBudgetInMicroCurrency() == rhs.getDefaultAdGroupBudgetInMicroCurrency())) &&
    
    
    ((!isAutomatedCampaignIsSet() && !rhs.isAutomatedCampaignIsSet()) || (isAutomatedCampaignIsSet() && rhs.isAutomatedCampaignIsSet() && isIsAutomatedCampaign() == rhs.isIsAutomatedCampaign())) &&
    
    (getObjectiveType() == rhs.getObjectiveType())
    
    
    ;
}

bool CampaignCreateRequest::operator!=(const CampaignCreateRequest& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CampaignCreateRequest& o)
{
    j = nlohmann::json::object();
    j["ad_account_id"] = o.m_Ad_account_id;
    j["name"] = o.m_Name;
    if(o.statusIsSet())
        j["status"] = o.m_Status;
    if(o.lifetimeSpendCapIsSet())
        j["lifetime_spend_cap"] = o.m_Lifetime_spend_cap;
    if(o.dailySpendCapIsSet())
        j["daily_spend_cap"] = o.m_Daily_spend_cap;
    if(o.orderLineIdIsSet())
        j["order_line_id"] = o.m_Order_line_id;
    if(o.trackingUrlsIsSet())
        j["tracking_urls"] = o.m_Tracking_urls;
    if(o.startTimeIsSet())
        j["start_time"] = o.m_Start_time;
    if(o.endTimeIsSet())
        j["end_time"] = o.m_End_time;
    if(o.summaryStatusIsSet())
        j["summary_status"] = o.m_Summary_status;
    if(o.isFlexibleDailyBudgetsIsSet())
        j["is_flexible_daily_budgets"] = o.m_Is_flexible_daily_budgets;
    if(o.defaultAdGroupBudgetInMicroCurrencyIsSet())
        j["default_ad_group_budget_in_micro_currency"] = o.m_Default_ad_group_budget_in_micro_currency;
    if(o.isAutomatedCampaignIsSet())
        j["is_automated_campaign"] = o.m_Is_automated_campaign;
    j["objective_type"] = o.m_Objective_type;
    
}

void from_json(const nlohmann::json& j, CampaignCreateRequest& o)
{
    j.at("ad_account_id").get_to(o.m_Ad_account_id);
    j.at("name").get_to(o.m_Name);
    if(j.find("status") != j.end())
    {
        j.at("status").get_to(o.m_Status);
        o.m_StatusIsSet = true;
    } 
    if(j.find("lifetime_spend_cap") != j.end())
    {
        j.at("lifetime_spend_cap").get_to(o.m_Lifetime_spend_cap);
        o.m_Lifetime_spend_capIsSet = true;
    } 
    if(j.find("daily_spend_cap") != j.end())
    {
        j.at("daily_spend_cap").get_to(o.m_Daily_spend_cap);
        o.m_Daily_spend_capIsSet = true;
    } 
    if(j.find("order_line_id") != j.end())
    {
        j.at("order_line_id").get_to(o.m_Order_line_id);
        o.m_Order_line_idIsSet = true;
    } 
    if(j.find("tracking_urls") != j.end())
    {
        j.at("tracking_urls").get_to(o.m_Tracking_urls);
        o.m_Tracking_urlsIsSet = true;
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
    if(j.find("summary_status") != j.end())
    {
        j.at("summary_status").get_to(o.m_Summary_status);
        o.m_Summary_statusIsSet = true;
    } 
    if(j.find("is_flexible_daily_budgets") != j.end())
    {
        j.at("is_flexible_daily_budgets").get_to(o.m_Is_flexible_daily_budgets);
        o.m_Is_flexible_daily_budgetsIsSet = true;
    } 
    if(j.find("default_ad_group_budget_in_micro_currency") != j.end())
    {
        j.at("default_ad_group_budget_in_micro_currency").get_to(o.m_Default_ad_group_budget_in_micro_currency);
        o.m_Default_ad_group_budget_in_micro_currencyIsSet = true;
    } 
    if(j.find("is_automated_campaign") != j.end())
    {
        j.at("is_automated_campaign").get_to(o.m_Is_automated_campaign);
        o.m_Is_automated_campaignIsSet = true;
    } 
    j.at("objective_type").get_to(o.m_Objective_type);
    
}

std::string CampaignCreateRequest::getAdAccountId() const
{
    return m_Ad_account_id;
}
void CampaignCreateRequest::setAdAccountId(std::string const& value)
{
    m_Ad_account_id = value;
}
std::string CampaignCreateRequest::getName() const
{
    return m_Name;
}
void CampaignCreateRequest::setName(std::string const& value)
{
    m_Name = value;
}
org::openapitools::server::model::EntityStatus CampaignCreateRequest::getStatus() const
{
    return m_Status;
}
void CampaignCreateRequest::setStatus(org::openapitools::server::model::EntityStatus const& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool CampaignCreateRequest::statusIsSet() const
{
    return m_StatusIsSet;
}
void CampaignCreateRequest::unsetStatus()
{
    m_StatusIsSet = false;
}
int32_t CampaignCreateRequest::getLifetimeSpendCap() const
{
    return m_Lifetime_spend_cap;
}
void CampaignCreateRequest::setLifetimeSpendCap(int32_t const value)
{
    m_Lifetime_spend_cap = value;
    m_Lifetime_spend_capIsSet = true;
}
bool CampaignCreateRequest::lifetimeSpendCapIsSet() const
{
    return m_Lifetime_spend_capIsSet;
}
void CampaignCreateRequest::unsetLifetime_spend_cap()
{
    m_Lifetime_spend_capIsSet = false;
}
int32_t CampaignCreateRequest::getDailySpendCap() const
{
    return m_Daily_spend_cap;
}
void CampaignCreateRequest::setDailySpendCap(int32_t const value)
{
    m_Daily_spend_cap = value;
    m_Daily_spend_capIsSet = true;
}
bool CampaignCreateRequest::dailySpendCapIsSet() const
{
    return m_Daily_spend_capIsSet;
}
void CampaignCreateRequest::unsetDaily_spend_cap()
{
    m_Daily_spend_capIsSet = false;
}
std::string CampaignCreateRequest::getOrderLineId() const
{
    return m_Order_line_id;
}
void CampaignCreateRequest::setOrderLineId(std::string const& value)
{
    m_Order_line_id = value;
    m_Order_line_idIsSet = true;
}
bool CampaignCreateRequest::orderLineIdIsSet() const
{
    return m_Order_line_idIsSet;
}
void CampaignCreateRequest::unsetOrder_line_id()
{
    m_Order_line_idIsSet = false;
}
org::openapitools::server::model::AdCommon_tracking_urls CampaignCreateRequest::getTrackingUrls() const
{
    return m_Tracking_urls;
}
void CampaignCreateRequest::setTrackingUrls(org::openapitools::server::model::AdCommon_tracking_urls const& value)
{
    m_Tracking_urls = value;
    m_Tracking_urlsIsSet = true;
}
bool CampaignCreateRequest::trackingUrlsIsSet() const
{
    return m_Tracking_urlsIsSet;
}
void CampaignCreateRequest::unsetTracking_urls()
{
    m_Tracking_urlsIsSet = false;
}
int32_t CampaignCreateRequest::getStartTime() const
{
    return m_Start_time;
}
void CampaignCreateRequest::setStartTime(int32_t const value)
{
    m_Start_time = value;
    m_Start_timeIsSet = true;
}
bool CampaignCreateRequest::startTimeIsSet() const
{
    return m_Start_timeIsSet;
}
void CampaignCreateRequest::unsetStart_time()
{
    m_Start_timeIsSet = false;
}
int32_t CampaignCreateRequest::getEndTime() const
{
    return m_End_time;
}
void CampaignCreateRequest::setEndTime(int32_t const value)
{
    m_End_time = value;
    m_End_timeIsSet = true;
}
bool CampaignCreateRequest::endTimeIsSet() const
{
    return m_End_timeIsSet;
}
void CampaignCreateRequest::unsetEnd_time()
{
    m_End_timeIsSet = false;
}
org::openapitools::server::model::CampaignSummaryStatus CampaignCreateRequest::getSummaryStatus() const
{
    return m_Summary_status;
}
void CampaignCreateRequest::setSummaryStatus(org::openapitools::server::model::CampaignSummaryStatus const& value)
{
    m_Summary_status = value;
    m_Summary_statusIsSet = true;
}
bool CampaignCreateRequest::summaryStatusIsSet() const
{
    return m_Summary_statusIsSet;
}
void CampaignCreateRequest::unsetSummary_status()
{
    m_Summary_statusIsSet = false;
}
bool CampaignCreateRequest::isIsFlexibleDailyBudgets() const
{
    return m_Is_flexible_daily_budgets;
}
void CampaignCreateRequest::setIsFlexibleDailyBudgets(bool const value)
{
    m_Is_flexible_daily_budgets = value;
    m_Is_flexible_daily_budgetsIsSet = true;
}
bool CampaignCreateRequest::isFlexibleDailyBudgetsIsSet() const
{
    return m_Is_flexible_daily_budgetsIsSet;
}
void CampaignCreateRequest::unsetIs_flexible_daily_budgets()
{
    m_Is_flexible_daily_budgetsIsSet = false;
}
int32_t CampaignCreateRequest::getDefaultAdGroupBudgetInMicroCurrency() const
{
    return m_Default_ad_group_budget_in_micro_currency;
}
void CampaignCreateRequest::setDefaultAdGroupBudgetInMicroCurrency(int32_t const value)
{
    m_Default_ad_group_budget_in_micro_currency = value;
    m_Default_ad_group_budget_in_micro_currencyIsSet = true;
}
bool CampaignCreateRequest::defaultAdGroupBudgetInMicroCurrencyIsSet() const
{
    return m_Default_ad_group_budget_in_micro_currencyIsSet;
}
void CampaignCreateRequest::unsetDefault_ad_group_budget_in_micro_currency()
{
    m_Default_ad_group_budget_in_micro_currencyIsSet = false;
}
bool CampaignCreateRequest::isIsAutomatedCampaign() const
{
    return m_Is_automated_campaign;
}
void CampaignCreateRequest::setIsAutomatedCampaign(bool const value)
{
    m_Is_automated_campaign = value;
    m_Is_automated_campaignIsSet = true;
}
bool CampaignCreateRequest::isAutomatedCampaignIsSet() const
{
    return m_Is_automated_campaignIsSet;
}
void CampaignCreateRequest::unsetIs_automated_campaign()
{
    m_Is_automated_campaignIsSet = false;
}
org::openapitools::server::model::ObjectiveType CampaignCreateRequest::getObjectiveType() const
{
    return m_Objective_type;
}
void CampaignCreateRequest::setObjectiveType(org::openapitools::server::model::ObjectiveType const& value)
{
    m_Objective_type = value;
}


} // namespace org::openapitools::server::model

