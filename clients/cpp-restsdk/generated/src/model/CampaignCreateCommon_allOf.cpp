/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/CampaignCreateCommon_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CampaignCreateCommon_allOf::CampaignCreateCommon_allOf()
{
    m_Is_campaign_budget_optimization = false;
    m_Is_campaign_budget_optimizationIsSet = false;
    m_Is_flexible_daily_budgets = false;
    m_Is_flexible_daily_budgetsIsSet = false;
    m_Default_ad_group_budget_in_micro_currency = 0;
    m_Default_ad_group_budget_in_micro_currencyIsSet = false;
    m_Is_automated_campaign = false;
    m_Is_automated_campaignIsSet = false;
    m_Objective_typeIsSet = false;
}

CampaignCreateCommon_allOf::~CampaignCreateCommon_allOf()
{
}

void CampaignCreateCommon_allOf::validate()
{
    // TODO: implement validation
}

web::json::value CampaignCreateCommon_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Is_campaign_budget_optimizationIsSet)
    {
        val[utility::conversions::to_string_t(U("is_campaign_budget_optimization"))] = ModelBase::toJson(m_Is_campaign_budget_optimization);
    }
    if(m_Is_flexible_daily_budgetsIsSet)
    {
        val[utility::conversions::to_string_t(U("is_flexible_daily_budgets"))] = ModelBase::toJson(m_Is_flexible_daily_budgets);
    }
    if(m_Default_ad_group_budget_in_micro_currencyIsSet)
    {
        val[utility::conversions::to_string_t(U("default_ad_group_budget_in_micro_currency"))] = ModelBase::toJson(m_Default_ad_group_budget_in_micro_currency);
    }
    if(m_Is_automated_campaignIsSet)
    {
        val[utility::conversions::to_string_t(U("is_automated_campaign"))] = ModelBase::toJson(m_Is_automated_campaign);
    }
    if(m_Objective_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("objective_type"))] = ModelBase::toJson(m_Objective_type);
    }

    return val;
}

bool CampaignCreateCommon_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("is_campaign_budget_optimization"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("is_campaign_budget_optimization")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsCampaignBudgetOptimization;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsCampaignBudgetOptimization);
            setIsCampaignBudgetOptimization(refVal_setIsCampaignBudgetOptimization);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("is_flexible_daily_budgets"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("is_flexible_daily_budgets")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsFlexibleDailyBudgets;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsFlexibleDailyBudgets);
            setIsFlexibleDailyBudgets(refVal_setIsFlexibleDailyBudgets);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("default_ad_group_budget_in_micro_currency"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("default_ad_group_budget_in_micro_currency")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setDefaultAdGroupBudgetInMicroCurrency;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDefaultAdGroupBudgetInMicroCurrency);
            setDefaultAdGroupBudgetInMicroCurrency(refVal_setDefaultAdGroupBudgetInMicroCurrency);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("is_automated_campaign"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("is_automated_campaign")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsAutomatedCampaign;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsAutomatedCampaign);
            setIsAutomatedCampaign(refVal_setIsAutomatedCampaign);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("objective_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("objective_type")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ObjectiveType> refVal_setObjectiveType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setObjectiveType);
            setObjectiveType(refVal_setObjectiveType);
        }
    }
    return ok;
}

void CampaignCreateCommon_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Is_campaign_budget_optimizationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("is_campaign_budget_optimization")), m_Is_campaign_budget_optimization));
    }
    if(m_Is_flexible_daily_budgetsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("is_flexible_daily_budgets")), m_Is_flexible_daily_budgets));
    }
    if(m_Default_ad_group_budget_in_micro_currencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("default_ad_group_budget_in_micro_currency")), m_Default_ad_group_budget_in_micro_currency));
    }
    if(m_Is_automated_campaignIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("is_automated_campaign")), m_Is_automated_campaign));
    }
    if(m_Objective_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("objective_type")), m_Objective_type));
    }
}

bool CampaignCreateCommon_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("is_campaign_budget_optimization"))))
    {
        bool refVal_setIsCampaignBudgetOptimization;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("is_campaign_budget_optimization"))), refVal_setIsCampaignBudgetOptimization );
        setIsCampaignBudgetOptimization(refVal_setIsCampaignBudgetOptimization);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("is_flexible_daily_budgets"))))
    {
        bool refVal_setIsFlexibleDailyBudgets;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("is_flexible_daily_budgets"))), refVal_setIsFlexibleDailyBudgets );
        setIsFlexibleDailyBudgets(refVal_setIsFlexibleDailyBudgets);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("default_ad_group_budget_in_micro_currency"))))
    {
        int32_t refVal_setDefaultAdGroupBudgetInMicroCurrency;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("default_ad_group_budget_in_micro_currency"))), refVal_setDefaultAdGroupBudgetInMicroCurrency );
        setDefaultAdGroupBudgetInMicroCurrency(refVal_setDefaultAdGroupBudgetInMicroCurrency);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("is_automated_campaign"))))
    {
        bool refVal_setIsAutomatedCampaign;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("is_automated_campaign"))), refVal_setIsAutomatedCampaign );
        setIsAutomatedCampaign(refVal_setIsAutomatedCampaign);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("objective_type"))))
    {
        std::shared_ptr<ObjectiveType> refVal_setObjectiveType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("objective_type"))), refVal_setObjectiveType );
        setObjectiveType(refVal_setObjectiveType);
    }
    return ok;
}

bool CampaignCreateCommon_allOf::isIsCampaignBudgetOptimization() const
{
    return m_Is_campaign_budget_optimization;
}

void CampaignCreateCommon_allOf::setIsCampaignBudgetOptimization(bool value)
{
    m_Is_campaign_budget_optimization = value;
    m_Is_campaign_budget_optimizationIsSet = true;
}

bool CampaignCreateCommon_allOf::isCampaignBudgetOptimizationIsSet() const
{
    return m_Is_campaign_budget_optimizationIsSet;
}

void CampaignCreateCommon_allOf::unsetIs_campaign_budget_optimization()
{
    m_Is_campaign_budget_optimizationIsSet = false;
}
bool CampaignCreateCommon_allOf::isIsFlexibleDailyBudgets() const
{
    return m_Is_flexible_daily_budgets;
}

void CampaignCreateCommon_allOf::setIsFlexibleDailyBudgets(bool value)
{
    m_Is_flexible_daily_budgets = value;
    m_Is_flexible_daily_budgetsIsSet = true;
}

bool CampaignCreateCommon_allOf::isFlexibleDailyBudgetsIsSet() const
{
    return m_Is_flexible_daily_budgetsIsSet;
}

void CampaignCreateCommon_allOf::unsetIs_flexible_daily_budgets()
{
    m_Is_flexible_daily_budgetsIsSet = false;
}
int32_t CampaignCreateCommon_allOf::getDefaultAdGroupBudgetInMicroCurrency() const
{
    return m_Default_ad_group_budget_in_micro_currency;
}

void CampaignCreateCommon_allOf::setDefaultAdGroupBudgetInMicroCurrency(int32_t value)
{
    m_Default_ad_group_budget_in_micro_currency = value;
    m_Default_ad_group_budget_in_micro_currencyIsSet = true;
}

bool CampaignCreateCommon_allOf::defaultAdGroupBudgetInMicroCurrencyIsSet() const
{
    return m_Default_ad_group_budget_in_micro_currencyIsSet;
}

void CampaignCreateCommon_allOf::unsetDefault_ad_group_budget_in_micro_currency()
{
    m_Default_ad_group_budget_in_micro_currencyIsSet = false;
}
bool CampaignCreateCommon_allOf::isIsAutomatedCampaign() const
{
    return m_Is_automated_campaign;
}

void CampaignCreateCommon_allOf::setIsAutomatedCampaign(bool value)
{
    m_Is_automated_campaign = value;
    m_Is_automated_campaignIsSet = true;
}

bool CampaignCreateCommon_allOf::isAutomatedCampaignIsSet() const
{
    return m_Is_automated_campaignIsSet;
}

void CampaignCreateCommon_allOf::unsetIs_automated_campaign()
{
    m_Is_automated_campaignIsSet = false;
}
std::shared_ptr<ObjectiveType> CampaignCreateCommon_allOf::getObjectiveType() const
{
    return m_Objective_type;
}

void CampaignCreateCommon_allOf::setObjectiveType(const std::shared_ptr<ObjectiveType>& value)
{
    m_Objective_type = value;
    m_Objective_typeIsSet = true;
}

bool CampaignCreateCommon_allOf::objectiveTypeIsSet() const
{
    return m_Objective_typeIsSet;
}

void CampaignCreateCommon_allOf::unsetObjective_type()
{
    m_Objective_typeIsSet = false;
}
}
}
}
}

