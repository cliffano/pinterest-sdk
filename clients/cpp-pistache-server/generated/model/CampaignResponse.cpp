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


#include "CampaignResponse.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CampaignResponse::CampaignResponse()
{
    m_Id = "";
    m_IdIsSet = false;
    m_Ad_account_id = "";
    m_Ad_account_idIsSet = false;
    m_Name = "";
    m_NameIsSet = false;
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
    m_Objective_typeIsSet = false;
    m_Created_time = 0;
    m_Created_timeIsSet = false;
    m_Updated_time = 0;
    m_Updated_timeIsSet = false;
    m_Type = "";
    m_TypeIsSet = false;
    m_Is_flexible_daily_budgets = false;
    m_Is_flexible_daily_budgetsIsSet = false;
    m_Is_campaign_budget_optimization = false;
    m_Is_campaign_budget_optimizationIsSet = false;
    
}

void CampaignResponse::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CampaignResponse::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CampaignResponse::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CampaignResponse" : pathPrefix;

         
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
                         
    if (orderLineIdIsSet())
    {
        const std::string& value = m_Order_line_id;
        const std::string currentValuePath = _pathPrefix + ".orderLineId";
                
        

    }
                                            
    return success;
}

bool CampaignResponse::operator==(const CampaignResponse& rhs) const
{
    return
    
    
    
    ((!idIsSet() && !rhs.idIsSet()) || (idIsSet() && rhs.idIsSet() && getId() == rhs.getId())) &&
    
    
    ((!adAccountIdIsSet() && !rhs.adAccountIdIsSet()) || (adAccountIdIsSet() && rhs.adAccountIdIsSet() && getAdAccountId() == rhs.getAdAccountId())) &&
    
    
    ((!nameIsSet() && !rhs.nameIsSet()) || (nameIsSet() && rhs.nameIsSet() && getName() == rhs.getName())) &&
    
    
    ((!statusIsSet() && !rhs.statusIsSet()) || (statusIsSet() && rhs.statusIsSet() && getStatus() == rhs.getStatus())) &&
    
    
    ((!lifetimeSpendCapIsSet() && !rhs.lifetimeSpendCapIsSet()) || (lifetimeSpendCapIsSet() && rhs.lifetimeSpendCapIsSet() && getLifetimeSpendCap() == rhs.getLifetimeSpendCap())) &&
    
    
    ((!dailySpendCapIsSet() && !rhs.dailySpendCapIsSet()) || (dailySpendCapIsSet() && rhs.dailySpendCapIsSet() && getDailySpendCap() == rhs.getDailySpendCap())) &&
    
    
    ((!orderLineIdIsSet() && !rhs.orderLineIdIsSet()) || (orderLineIdIsSet() && rhs.orderLineIdIsSet() && getOrderLineId() == rhs.getOrderLineId())) &&
    
    
    ((!trackingUrlsIsSet() && !rhs.trackingUrlsIsSet()) || (trackingUrlsIsSet() && rhs.trackingUrlsIsSet() && getTrackingUrls() == rhs.getTrackingUrls())) &&
    
    
    ((!startTimeIsSet() && !rhs.startTimeIsSet()) || (startTimeIsSet() && rhs.startTimeIsSet() && getStartTime() == rhs.getStartTime())) &&
    
    
    ((!endTimeIsSet() && !rhs.endTimeIsSet()) || (endTimeIsSet() && rhs.endTimeIsSet() && getEndTime() == rhs.getEndTime())) &&
    
    
    ((!summaryStatusIsSet() && !rhs.summaryStatusIsSet()) || (summaryStatusIsSet() && rhs.summaryStatusIsSet() && getSummaryStatus() == rhs.getSummaryStatus())) &&
    
    
    ((!objectiveTypeIsSet() && !rhs.objectiveTypeIsSet()) || (objectiveTypeIsSet() && rhs.objectiveTypeIsSet() && getObjectiveType() == rhs.getObjectiveType())) &&
    
    
    ((!createdTimeIsSet() && !rhs.createdTimeIsSet()) || (createdTimeIsSet() && rhs.createdTimeIsSet() && getCreatedTime() == rhs.getCreatedTime())) &&
    
    
    ((!updatedTimeIsSet() && !rhs.updatedTimeIsSet()) || (updatedTimeIsSet() && rhs.updatedTimeIsSet() && getUpdatedTime() == rhs.getUpdatedTime())) &&
    
    
    ((!typeIsSet() && !rhs.typeIsSet()) || (typeIsSet() && rhs.typeIsSet() && getType() == rhs.getType())) &&
    
    
    ((!isFlexibleDailyBudgetsIsSet() && !rhs.isFlexibleDailyBudgetsIsSet()) || (isFlexibleDailyBudgetsIsSet() && rhs.isFlexibleDailyBudgetsIsSet() && isIsFlexibleDailyBudgets() == rhs.isIsFlexibleDailyBudgets())) &&
    
    
    ((!isCampaignBudgetOptimizationIsSet() && !rhs.isCampaignBudgetOptimizationIsSet()) || (isCampaignBudgetOptimizationIsSet() && rhs.isCampaignBudgetOptimizationIsSet() && isIsCampaignBudgetOptimization() == rhs.isIsCampaignBudgetOptimization()))
    
    ;
}

bool CampaignResponse::operator!=(const CampaignResponse& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CampaignResponse& o)
{
    j = nlohmann::json::object();
    if(o.idIsSet())
        j["id"] = o.m_Id;
    if(o.adAccountIdIsSet())
        j["ad_account_id"] = o.m_Ad_account_id;
    if(o.nameIsSet())
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
    if(o.objectiveTypeIsSet())
        j["objective_type"] = o.m_Objective_type;
    if(o.createdTimeIsSet())
        j["created_time"] = o.m_Created_time;
    if(o.updatedTimeIsSet())
        j["updated_time"] = o.m_Updated_time;
    if(o.typeIsSet())
        j["type"] = o.m_Type;
    if(o.isFlexibleDailyBudgetsIsSet())
        j["is_flexible_daily_budgets"] = o.m_Is_flexible_daily_budgets;
    if(o.isCampaignBudgetOptimizationIsSet())
        j["is_campaign_budget_optimization"] = o.m_Is_campaign_budget_optimization;
    
}

void from_json(const nlohmann::json& j, CampaignResponse& o)
{
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
    if(j.find("objective_type") != j.end())
    {
        j.at("objective_type").get_to(o.m_Objective_type);
        o.m_Objective_typeIsSet = true;
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
    if(j.find("is_flexible_daily_budgets") != j.end())
    {
        j.at("is_flexible_daily_budgets").get_to(o.m_Is_flexible_daily_budgets);
        o.m_Is_flexible_daily_budgetsIsSet = true;
    } 
    if(j.find("is_campaign_budget_optimization") != j.end())
    {
        j.at("is_campaign_budget_optimization").get_to(o.m_Is_campaign_budget_optimization);
        o.m_Is_campaign_budget_optimizationIsSet = true;
    } 
    
}

std::string CampaignResponse::getId() const
{
    return m_Id;
}
void CampaignResponse::setId(std::string const& value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool CampaignResponse::idIsSet() const
{
    return m_IdIsSet;
}
void CampaignResponse::unsetId()
{
    m_IdIsSet = false;
}
std::string CampaignResponse::getAdAccountId() const
{
    return m_Ad_account_id;
}
void CampaignResponse::setAdAccountId(std::string const& value)
{
    m_Ad_account_id = value;
    m_Ad_account_idIsSet = true;
}
bool CampaignResponse::adAccountIdIsSet() const
{
    return m_Ad_account_idIsSet;
}
void CampaignResponse::unsetAd_account_id()
{
    m_Ad_account_idIsSet = false;
}
std::string CampaignResponse::getName() const
{
    return m_Name;
}
void CampaignResponse::setName(std::string const& value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool CampaignResponse::nameIsSet() const
{
    return m_NameIsSet;
}
void CampaignResponse::unsetName()
{
    m_NameIsSet = false;
}
org::openapitools::server::model::EntityStatus CampaignResponse::getStatus() const
{
    return m_Status;
}
void CampaignResponse::setStatus(org::openapitools::server::model::EntityStatus const& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool CampaignResponse::statusIsSet() const
{
    return m_StatusIsSet;
}
void CampaignResponse::unsetStatus()
{
    m_StatusIsSet = false;
}
int32_t CampaignResponse::getLifetimeSpendCap() const
{
    return m_Lifetime_spend_cap;
}
void CampaignResponse::setLifetimeSpendCap(int32_t const value)
{
    m_Lifetime_spend_cap = value;
    m_Lifetime_spend_capIsSet = true;
}
bool CampaignResponse::lifetimeSpendCapIsSet() const
{
    return m_Lifetime_spend_capIsSet;
}
void CampaignResponse::unsetLifetime_spend_cap()
{
    m_Lifetime_spend_capIsSet = false;
}
int32_t CampaignResponse::getDailySpendCap() const
{
    return m_Daily_spend_cap;
}
void CampaignResponse::setDailySpendCap(int32_t const value)
{
    m_Daily_spend_cap = value;
    m_Daily_spend_capIsSet = true;
}
bool CampaignResponse::dailySpendCapIsSet() const
{
    return m_Daily_spend_capIsSet;
}
void CampaignResponse::unsetDaily_spend_cap()
{
    m_Daily_spend_capIsSet = false;
}
std::string CampaignResponse::getOrderLineId() const
{
    return m_Order_line_id;
}
void CampaignResponse::setOrderLineId(std::string const& value)
{
    m_Order_line_id = value;
    m_Order_line_idIsSet = true;
}
bool CampaignResponse::orderLineIdIsSet() const
{
    return m_Order_line_idIsSet;
}
void CampaignResponse::unsetOrder_line_id()
{
    m_Order_line_idIsSet = false;
}
org::openapitools::server::model::AdCommon_tracking_urls CampaignResponse::getTrackingUrls() const
{
    return m_Tracking_urls;
}
void CampaignResponse::setTrackingUrls(org::openapitools::server::model::AdCommon_tracking_urls const& value)
{
    m_Tracking_urls = value;
    m_Tracking_urlsIsSet = true;
}
bool CampaignResponse::trackingUrlsIsSet() const
{
    return m_Tracking_urlsIsSet;
}
void CampaignResponse::unsetTracking_urls()
{
    m_Tracking_urlsIsSet = false;
}
int32_t CampaignResponse::getStartTime() const
{
    return m_Start_time;
}
void CampaignResponse::setStartTime(int32_t const value)
{
    m_Start_time = value;
    m_Start_timeIsSet = true;
}
bool CampaignResponse::startTimeIsSet() const
{
    return m_Start_timeIsSet;
}
void CampaignResponse::unsetStart_time()
{
    m_Start_timeIsSet = false;
}
int32_t CampaignResponse::getEndTime() const
{
    return m_End_time;
}
void CampaignResponse::setEndTime(int32_t const value)
{
    m_End_time = value;
    m_End_timeIsSet = true;
}
bool CampaignResponse::endTimeIsSet() const
{
    return m_End_timeIsSet;
}
void CampaignResponse::unsetEnd_time()
{
    m_End_timeIsSet = false;
}
org::openapitools::server::model::CampaignSummaryStatus CampaignResponse::getSummaryStatus() const
{
    return m_Summary_status;
}
void CampaignResponse::setSummaryStatus(org::openapitools::server::model::CampaignSummaryStatus const& value)
{
    m_Summary_status = value;
    m_Summary_statusIsSet = true;
}
bool CampaignResponse::summaryStatusIsSet() const
{
    return m_Summary_statusIsSet;
}
void CampaignResponse::unsetSummary_status()
{
    m_Summary_statusIsSet = false;
}
org::openapitools::server::model::ObjectiveType CampaignResponse::getObjectiveType() const
{
    return m_Objective_type;
}
void CampaignResponse::setObjectiveType(org::openapitools::server::model::ObjectiveType const& value)
{
    m_Objective_type = value;
    m_Objective_typeIsSet = true;
}
bool CampaignResponse::objectiveTypeIsSet() const
{
    return m_Objective_typeIsSet;
}
void CampaignResponse::unsetObjective_type()
{
    m_Objective_typeIsSet = false;
}
int32_t CampaignResponse::getCreatedTime() const
{
    return m_Created_time;
}
void CampaignResponse::setCreatedTime(int32_t const value)
{
    m_Created_time = value;
    m_Created_timeIsSet = true;
}
bool CampaignResponse::createdTimeIsSet() const
{
    return m_Created_timeIsSet;
}
void CampaignResponse::unsetCreated_time()
{
    m_Created_timeIsSet = false;
}
int32_t CampaignResponse::getUpdatedTime() const
{
    return m_Updated_time;
}
void CampaignResponse::setUpdatedTime(int32_t const value)
{
    m_Updated_time = value;
    m_Updated_timeIsSet = true;
}
bool CampaignResponse::updatedTimeIsSet() const
{
    return m_Updated_timeIsSet;
}
void CampaignResponse::unsetUpdated_time()
{
    m_Updated_timeIsSet = false;
}
std::string CampaignResponse::getType() const
{
    return m_Type;
}
void CampaignResponse::setType(std::string const& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool CampaignResponse::typeIsSet() const
{
    return m_TypeIsSet;
}
void CampaignResponse::unsetType()
{
    m_TypeIsSet = false;
}
bool CampaignResponse::isIsFlexibleDailyBudgets() const
{
    return m_Is_flexible_daily_budgets;
}
void CampaignResponse::setIsFlexibleDailyBudgets(bool const value)
{
    m_Is_flexible_daily_budgets = value;
    m_Is_flexible_daily_budgetsIsSet = true;
}
bool CampaignResponse::isFlexibleDailyBudgetsIsSet() const
{
    return m_Is_flexible_daily_budgetsIsSet;
}
void CampaignResponse::unsetIs_flexible_daily_budgets()
{
    m_Is_flexible_daily_budgetsIsSet = false;
}
bool CampaignResponse::isIsCampaignBudgetOptimization() const
{
    return m_Is_campaign_budget_optimization;
}
void CampaignResponse::setIsCampaignBudgetOptimization(bool const value)
{
    m_Is_campaign_budget_optimization = value;
    m_Is_campaign_budget_optimizationIsSet = true;
}
bool CampaignResponse::isCampaignBudgetOptimizationIsSet() const
{
    return m_Is_campaign_budget_optimizationIsSet;
}
void CampaignResponse::unsetIs_campaign_budget_optimization()
{
    m_Is_campaign_budget_optimizationIsSet = false;
}


} // namespace org::openapitools::server::model

