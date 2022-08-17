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



#include "CppRestOpenAPIClient/model/CampaignResponse.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CampaignResponse::CampaignResponse()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Ad_account_id = utility::conversions::to_string_t("");
    m_Ad_account_idIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
    m_Lifetime_spend_cap = 0;
    m_Lifetime_spend_capIsSet = false;
    m_Daily_spend_cap = 0;
    m_Daily_spend_capIsSet = false;
    m_Order_line_id = utility::conversions::to_string_t("");
    m_Order_line_idIsSet = false;
    m_Tracking_urlsIsSet = false;
    m_Start_time = 0;
    m_Start_timeIsSet = false;
    m_End_time = 0;
    m_End_timeIsSet = false;
    m_Objective_typeIsSet = false;
    m_Created_time = 0;
    m_Created_timeIsSet = false;
    m_Updated_time = 0;
    m_Updated_timeIsSet = false;
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_Is_flexible_daily_budgets = false;
    m_Is_flexible_daily_budgetsIsSet = false;
    m_Is_campaign_budget_optimization = false;
    m_Is_campaign_budget_optimizationIsSet = false;
}

CampaignResponse::~CampaignResponse()
{
}

void CampaignResponse::validate()
{
    // TODO: implement validation
}

web::json::value CampaignResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_Ad_account_idIsSet)
    {
        val[utility::conversions::to_string_t(U("ad_account_id"))] = ModelBase::toJson(m_Ad_account_id);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }
    if(m_Lifetime_spend_capIsSet)
    {
        val[utility::conversions::to_string_t(U("lifetime_spend_cap"))] = ModelBase::toJson(m_Lifetime_spend_cap);
    }
    if(m_Daily_spend_capIsSet)
    {
        val[utility::conversions::to_string_t(U("daily_spend_cap"))] = ModelBase::toJson(m_Daily_spend_cap);
    }
    if(m_Order_line_idIsSet)
    {
        val[utility::conversions::to_string_t(U("order_line_id"))] = ModelBase::toJson(m_Order_line_id);
    }
    if(m_Tracking_urlsIsSet)
    {
        val[utility::conversions::to_string_t(U("tracking_urls"))] = ModelBase::toJson(m_Tracking_urls);
    }
    if(m_Start_timeIsSet)
    {
        val[utility::conversions::to_string_t(U("start_time"))] = ModelBase::toJson(m_Start_time);
    }
    if(m_End_timeIsSet)
    {
        val[utility::conversions::to_string_t(U("end_time"))] = ModelBase::toJson(m_End_time);
    }
    if(m_Objective_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("objective_type"))] = ModelBase::toJson(m_Objective_type);
    }
    if(m_Created_timeIsSet)
    {
        val[utility::conversions::to_string_t(U("created_time"))] = ModelBase::toJson(m_Created_time);
    }
    if(m_Updated_timeIsSet)
    {
        val[utility::conversions::to_string_t(U("updated_time"))] = ModelBase::toJson(m_Updated_time);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t(U("type"))] = ModelBase::toJson(m_Type);
    }
    if(m_Is_flexible_daily_budgetsIsSet)
    {
        val[utility::conversions::to_string_t(U("is_flexible_daily_budgets"))] = ModelBase::toJson(m_Is_flexible_daily_budgets);
    }
    if(m_Is_campaign_budget_optimizationIsSet)
    {
        val[utility::conversions::to_string_t(U("is_campaign_budget_optimization"))] = ModelBase::toJson(m_Is_campaign_budget_optimization);
    }

    return val;
}

bool CampaignResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ad_account_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ad_account_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAdAccountId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAdAccountId);
            setAdAccountId(refVal_setAdAccountId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            EntityStatus refVal_setStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatus);
            setStatus(refVal_setStatus);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("lifetime_spend_cap"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("lifetime_spend_cap")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setLifetimeSpendCap;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLifetimeSpendCap);
            setLifetimeSpendCap(refVal_setLifetimeSpendCap);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("daily_spend_cap"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("daily_spend_cap")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setDailySpendCap;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDailySpendCap);
            setDailySpendCap(refVal_setDailySpendCap);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("order_line_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("order_line_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setOrderLineId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOrderLineId);
            setOrderLineId(refVal_setOrderLineId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("tracking_urls"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tracking_urls")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<AdCommon_tracking_urls> refVal_setTrackingUrls;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTrackingUrls);
            setTrackingUrls(refVal_setTrackingUrls);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("start_time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("start_time")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setStartTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStartTime);
            setStartTime(refVal_setStartTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("end_time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("end_time")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setEndTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEndTime);
            setEndTime(refVal_setEndTime);
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
    if(val.has_field(utility::conversions::to_string_t(U("created_time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("created_time")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setCreatedTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatedTime);
            setCreatedTime(refVal_setCreatedTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("updated_time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("updated_time")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setUpdatedTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUpdatedTime);
            setUpdatedTime(refVal_setUpdatedTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setType);
            setType(refVal_setType);
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
    return ok;
}

void CampaignResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_Ad_account_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ad_account_id")), m_Ad_account_id));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
    }
    if(m_Lifetime_spend_capIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("lifetime_spend_cap")), m_Lifetime_spend_cap));
    }
    if(m_Daily_spend_capIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("daily_spend_cap")), m_Daily_spend_cap));
    }
    if(m_Order_line_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("order_line_id")), m_Order_line_id));
    }
    if(m_Tracking_urlsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tracking_urls")), m_Tracking_urls));
    }
    if(m_Start_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("start_time")), m_Start_time));
    }
    if(m_End_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("end_time")), m_End_time));
    }
    if(m_Objective_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("objective_type")), m_Objective_type));
    }
    if(m_Created_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("created_time")), m_Created_time));
    }
    if(m_Updated_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("updated_time")), m_Updated_time));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("type")), m_Type));
    }
    if(m_Is_flexible_daily_budgetsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("is_flexible_daily_budgets")), m_Is_flexible_daily_budgets));
    }
    if(m_Is_campaign_budget_optimizationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("is_campaign_budget_optimization")), m_Is_campaign_budget_optimization));
    }
}

bool CampaignResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ad_account_id"))))
    {
        utility::string_t refVal_setAdAccountId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ad_account_id"))), refVal_setAdAccountId );
        setAdAccountId(refVal_setAdAccountId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        EntityStatus refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("lifetime_spend_cap"))))
    {
        int32_t refVal_setLifetimeSpendCap;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("lifetime_spend_cap"))), refVal_setLifetimeSpendCap );
        setLifetimeSpendCap(refVal_setLifetimeSpendCap);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("daily_spend_cap"))))
    {
        int32_t refVal_setDailySpendCap;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("daily_spend_cap"))), refVal_setDailySpendCap );
        setDailySpendCap(refVal_setDailySpendCap);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("order_line_id"))))
    {
        utility::string_t refVal_setOrderLineId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("order_line_id"))), refVal_setOrderLineId );
        setOrderLineId(refVal_setOrderLineId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("tracking_urls"))))
    {
        std::shared_ptr<AdCommon_tracking_urls> refVal_setTrackingUrls;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tracking_urls"))), refVal_setTrackingUrls );
        setTrackingUrls(refVal_setTrackingUrls);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("start_time"))))
    {
        int32_t refVal_setStartTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("start_time"))), refVal_setStartTime );
        setStartTime(refVal_setStartTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("end_time"))))
    {
        int32_t refVal_setEndTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("end_time"))), refVal_setEndTime );
        setEndTime(refVal_setEndTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("objective_type"))))
    {
        std::shared_ptr<ObjectiveType> refVal_setObjectiveType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("objective_type"))), refVal_setObjectiveType );
        setObjectiveType(refVal_setObjectiveType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("created_time"))))
    {
        int32_t refVal_setCreatedTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("created_time"))), refVal_setCreatedTime );
        setCreatedTime(refVal_setCreatedTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("updated_time"))))
    {
        int32_t refVal_setUpdatedTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("updated_time"))), refVal_setUpdatedTime );
        setUpdatedTime(refVal_setUpdatedTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("type"))))
    {
        utility::string_t refVal_setType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("type"))), refVal_setType );
        setType(refVal_setType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("is_flexible_daily_budgets"))))
    {
        bool refVal_setIsFlexibleDailyBudgets;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("is_flexible_daily_budgets"))), refVal_setIsFlexibleDailyBudgets );
        setIsFlexibleDailyBudgets(refVal_setIsFlexibleDailyBudgets);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("is_campaign_budget_optimization"))))
    {
        bool refVal_setIsCampaignBudgetOptimization;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("is_campaign_budget_optimization"))), refVal_setIsCampaignBudgetOptimization );
        setIsCampaignBudgetOptimization(refVal_setIsCampaignBudgetOptimization);
    }
    return ok;
}

utility::string_t CampaignResponse::getId() const
{
    return m_Id;
}

void CampaignResponse::setId(const utility::string_t& value)
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
utility::string_t CampaignResponse::getAdAccountId() const
{
    return m_Ad_account_id;
}

void CampaignResponse::setAdAccountId(const utility::string_t& value)
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
utility::string_t CampaignResponse::getName() const
{
    return m_Name;
}

void CampaignResponse::setName(const utility::string_t& value)
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
EntityStatus CampaignResponse::getStatus() const
{
    return m_Status;
}

void CampaignResponse::setStatus(const EntityStatus& value)
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

void CampaignResponse::setLifetimeSpendCap(int32_t value)
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

void CampaignResponse::setDailySpendCap(int32_t value)
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
utility::string_t CampaignResponse::getOrderLineId() const
{
    return m_Order_line_id;
}

void CampaignResponse::setOrderLineId(const utility::string_t& value)
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
std::shared_ptr<AdCommon_tracking_urls> CampaignResponse::getTrackingUrls() const
{
    return m_Tracking_urls;
}

void CampaignResponse::setTrackingUrls(const std::shared_ptr<AdCommon_tracking_urls>& value)
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

void CampaignResponse::setStartTime(int32_t value)
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

void CampaignResponse::setEndTime(int32_t value)
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
std::shared_ptr<ObjectiveType> CampaignResponse::getObjectiveType() const
{
    return m_Objective_type;
}

void CampaignResponse::setObjectiveType(const std::shared_ptr<ObjectiveType>& value)
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

void CampaignResponse::setCreatedTime(int32_t value)
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

void CampaignResponse::setUpdatedTime(int32_t value)
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
utility::string_t CampaignResponse::getType() const
{
    return m_Type;
}

void CampaignResponse::setType(const utility::string_t& value)
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

void CampaignResponse::setIsFlexibleDailyBudgets(bool value)
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

void CampaignResponse::setIsCampaignBudgetOptimization(bool value)
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
}
}
}
}


