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


#include "CampaignResponse_allOf.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CampaignResponse_allOf::CampaignResponse_allOf()
{
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

void CampaignResponse_allOf::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CampaignResponse_allOf::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CampaignResponse_allOf::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CampaignResponse_allOf" : pathPrefix;

                            
    return success;
}

bool CampaignResponse_allOf::operator==(const CampaignResponse_allOf& rhs) const
{
    return
    
    
    
    ((!objectiveTypeIsSet() && !rhs.objectiveTypeIsSet()) || (objectiveTypeIsSet() && rhs.objectiveTypeIsSet() && getObjectiveType() == rhs.getObjectiveType())) &&
    
    
    ((!createdTimeIsSet() && !rhs.createdTimeIsSet()) || (createdTimeIsSet() && rhs.createdTimeIsSet() && getCreatedTime() == rhs.getCreatedTime())) &&
    
    
    ((!updatedTimeIsSet() && !rhs.updatedTimeIsSet()) || (updatedTimeIsSet() && rhs.updatedTimeIsSet() && getUpdatedTime() == rhs.getUpdatedTime())) &&
    
    
    ((!typeIsSet() && !rhs.typeIsSet()) || (typeIsSet() && rhs.typeIsSet() && getType() == rhs.getType())) &&
    
    
    ((!isFlexibleDailyBudgetsIsSet() && !rhs.isFlexibleDailyBudgetsIsSet()) || (isFlexibleDailyBudgetsIsSet() && rhs.isFlexibleDailyBudgetsIsSet() && isIsFlexibleDailyBudgets() == rhs.isIsFlexibleDailyBudgets())) &&
    
    
    ((!isCampaignBudgetOptimizationIsSet() && !rhs.isCampaignBudgetOptimizationIsSet()) || (isCampaignBudgetOptimizationIsSet() && rhs.isCampaignBudgetOptimizationIsSet() && isIsCampaignBudgetOptimization() == rhs.isIsCampaignBudgetOptimization()))
    
    ;
}

bool CampaignResponse_allOf::operator!=(const CampaignResponse_allOf& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CampaignResponse_allOf& o)
{
    j = nlohmann::json();
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

void from_json(const nlohmann::json& j, CampaignResponse_allOf& o)
{
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

org::openapitools::server::model::ObjectiveType CampaignResponse_allOf::getObjectiveType() const
{
    return m_Objective_type;
}
void CampaignResponse_allOf::setObjectiveType(org::openapitools::server::model::ObjectiveType const& value)
{
    m_Objective_type = value;
    m_Objective_typeIsSet = true;
}
bool CampaignResponse_allOf::objectiveTypeIsSet() const
{
    return m_Objective_typeIsSet;
}
void CampaignResponse_allOf::unsetObjective_type()
{
    m_Objective_typeIsSet = false;
}
int32_t CampaignResponse_allOf::getCreatedTime() const
{
    return m_Created_time;
}
void CampaignResponse_allOf::setCreatedTime(int32_t const value)
{
    m_Created_time = value;
    m_Created_timeIsSet = true;
}
bool CampaignResponse_allOf::createdTimeIsSet() const
{
    return m_Created_timeIsSet;
}
void CampaignResponse_allOf::unsetCreated_time()
{
    m_Created_timeIsSet = false;
}
int32_t CampaignResponse_allOf::getUpdatedTime() const
{
    return m_Updated_time;
}
void CampaignResponse_allOf::setUpdatedTime(int32_t const value)
{
    m_Updated_time = value;
    m_Updated_timeIsSet = true;
}
bool CampaignResponse_allOf::updatedTimeIsSet() const
{
    return m_Updated_timeIsSet;
}
void CampaignResponse_allOf::unsetUpdated_time()
{
    m_Updated_timeIsSet = false;
}
std::string CampaignResponse_allOf::getType() const
{
    return m_Type;
}
void CampaignResponse_allOf::setType(std::string const& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool CampaignResponse_allOf::typeIsSet() const
{
    return m_TypeIsSet;
}
void CampaignResponse_allOf::unsetType()
{
    m_TypeIsSet = false;
}
bool CampaignResponse_allOf::isIsFlexibleDailyBudgets() const
{
    return m_Is_flexible_daily_budgets;
}
void CampaignResponse_allOf::setIsFlexibleDailyBudgets(bool const value)
{
    m_Is_flexible_daily_budgets = value;
    m_Is_flexible_daily_budgetsIsSet = true;
}
bool CampaignResponse_allOf::isFlexibleDailyBudgetsIsSet() const
{
    return m_Is_flexible_daily_budgetsIsSet;
}
void CampaignResponse_allOf::unsetIs_flexible_daily_budgets()
{
    m_Is_flexible_daily_budgetsIsSet = false;
}
bool CampaignResponse_allOf::isIsCampaignBudgetOptimization() const
{
    return m_Is_campaign_budget_optimization;
}
void CampaignResponse_allOf::setIsCampaignBudgetOptimization(bool const value)
{
    m_Is_campaign_budget_optimization = value;
    m_Is_campaign_budget_optimizationIsSet = true;
}
bool CampaignResponse_allOf::isCampaignBudgetOptimizationIsSet() const
{
    return m_Is_campaign_budget_optimizationIsSet;
}
void CampaignResponse_allOf::unsetIs_campaign_budget_optimization()
{
    m_Is_campaign_budget_optimizationIsSet = false;
}


} // namespace org::openapitools::server::model

