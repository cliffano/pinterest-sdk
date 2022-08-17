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



#include "CppRestOpenAPIClient/model/CampaignCommon.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CampaignCommon::CampaignCommon()
{
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
}

CampaignCommon::~CampaignCommon()
{
}

void CampaignCommon::validate()
{
    // TODO: implement validation
}

web::json::value CampaignCommon::toJson() const
{

    web::json::value val = web::json::value::object();
    
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

    return val;
}

bool CampaignCommon::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}

void CampaignCommon::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
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
}

bool CampaignCommon::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
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
    return ok;
}

utility::string_t CampaignCommon::getAdAccountId() const
{
    return m_Ad_account_id;
}

void CampaignCommon::setAdAccountId(const utility::string_t& value)
{
    m_Ad_account_id = value;
    m_Ad_account_idIsSet = true;
}

bool CampaignCommon::adAccountIdIsSet() const
{
    return m_Ad_account_idIsSet;
}

void CampaignCommon::unsetAd_account_id()
{
    m_Ad_account_idIsSet = false;
}
utility::string_t CampaignCommon::getName() const
{
    return m_Name;
}

void CampaignCommon::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool CampaignCommon::nameIsSet() const
{
    return m_NameIsSet;
}

void CampaignCommon::unsetName()
{
    m_NameIsSet = false;
}
EntityStatus CampaignCommon::getStatus() const
{
    return m_Status;
}

void CampaignCommon::setStatus(const EntityStatus& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool CampaignCommon::statusIsSet() const
{
    return m_StatusIsSet;
}

void CampaignCommon::unsetStatus()
{
    m_StatusIsSet = false;
}
int32_t CampaignCommon::getLifetimeSpendCap() const
{
    return m_Lifetime_spend_cap;
}

void CampaignCommon::setLifetimeSpendCap(int32_t value)
{
    m_Lifetime_spend_cap = value;
    m_Lifetime_spend_capIsSet = true;
}

bool CampaignCommon::lifetimeSpendCapIsSet() const
{
    return m_Lifetime_spend_capIsSet;
}

void CampaignCommon::unsetLifetime_spend_cap()
{
    m_Lifetime_spend_capIsSet = false;
}
int32_t CampaignCommon::getDailySpendCap() const
{
    return m_Daily_spend_cap;
}

void CampaignCommon::setDailySpendCap(int32_t value)
{
    m_Daily_spend_cap = value;
    m_Daily_spend_capIsSet = true;
}

bool CampaignCommon::dailySpendCapIsSet() const
{
    return m_Daily_spend_capIsSet;
}

void CampaignCommon::unsetDaily_spend_cap()
{
    m_Daily_spend_capIsSet = false;
}
utility::string_t CampaignCommon::getOrderLineId() const
{
    return m_Order_line_id;
}

void CampaignCommon::setOrderLineId(const utility::string_t& value)
{
    m_Order_line_id = value;
    m_Order_line_idIsSet = true;
}

bool CampaignCommon::orderLineIdIsSet() const
{
    return m_Order_line_idIsSet;
}

void CampaignCommon::unsetOrder_line_id()
{
    m_Order_line_idIsSet = false;
}
std::shared_ptr<AdCommon_tracking_urls> CampaignCommon::getTrackingUrls() const
{
    return m_Tracking_urls;
}

void CampaignCommon::setTrackingUrls(const std::shared_ptr<AdCommon_tracking_urls>& value)
{
    m_Tracking_urls = value;
    m_Tracking_urlsIsSet = true;
}

bool CampaignCommon::trackingUrlsIsSet() const
{
    return m_Tracking_urlsIsSet;
}

void CampaignCommon::unsetTracking_urls()
{
    m_Tracking_urlsIsSet = false;
}
int32_t CampaignCommon::getStartTime() const
{
    return m_Start_time;
}

void CampaignCommon::setStartTime(int32_t value)
{
    m_Start_time = value;
    m_Start_timeIsSet = true;
}

bool CampaignCommon::startTimeIsSet() const
{
    return m_Start_timeIsSet;
}

void CampaignCommon::unsetStart_time()
{
    m_Start_timeIsSet = false;
}
int32_t CampaignCommon::getEndTime() const
{
    return m_End_time;
}

void CampaignCommon::setEndTime(int32_t value)
{
    m_End_time = value;
    m_End_timeIsSet = true;
}

bool CampaignCommon::endTimeIsSet() const
{
    return m_End_timeIsSet;
}

void CampaignCommon::unsetEnd_time()
{
    m_End_timeIsSet = false;
}
}
}
}
}


