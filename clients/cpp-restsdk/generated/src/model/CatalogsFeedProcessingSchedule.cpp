/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/CatalogsFeedProcessingSchedule.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CatalogsFeedProcessingSchedule::CatalogsFeedProcessingSchedule()
{
    m_Time = utility::conversions::to_string_t("");
    m_TimeIsSet = false;
    m_Timezone = utility::conversions::to_string_t("");
    m_TimezoneIsSet = false;
}

CatalogsFeedProcessingSchedule::~CatalogsFeedProcessingSchedule()
{
}

void CatalogsFeedProcessingSchedule::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsFeedProcessingSchedule::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TimeIsSet)
    {
        val[utility::conversions::to_string_t(U("time"))] = ModelBase::toJson(m_Time);
    }
    if(m_TimezoneIsSet)
    {
        val[utility::conversions::to_string_t(U("timezone"))] = ModelBase::toJson(m_Timezone);
    }

    return val;
}

bool CatalogsFeedProcessingSchedule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("time")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTime);
            setTime(refVal_setTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("timezone"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("timezone")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setTimezone;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTimezone);
            setTimezone(refVal_setTimezone);
        }
    }
    return ok;
}

void CatalogsFeedProcessingSchedule::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_TimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("time")), m_Time));
    }
    if(m_TimezoneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("timezone")), m_Timezone));
    }
}

bool CatalogsFeedProcessingSchedule::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("time"))))
    {
        utility::string_t refVal_setTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("time"))), refVal_setTime );
        setTime(refVal_setTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("timezone"))))
    {
        utility::string_t refVal_setTimezone;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("timezone"))), refVal_setTimezone );
        setTimezone(refVal_setTimezone);
    }
    return ok;
}

utility::string_t CatalogsFeedProcessingSchedule::getTime() const
{
    return m_Time;
}

void CatalogsFeedProcessingSchedule::setTime(const utility::string_t& value)
{
    m_Time = value;
    m_TimeIsSet = true;
}

bool CatalogsFeedProcessingSchedule::timeIsSet() const
{
    return m_TimeIsSet;
}

void CatalogsFeedProcessingSchedule::unsetTime()
{
    m_TimeIsSet = false;
}
utility::string_t CatalogsFeedProcessingSchedule::getTimezone() const
{
    return m_Timezone;
}

void CatalogsFeedProcessingSchedule::setTimezone(const utility::string_t& value)
{
    m_Timezone = value;
    m_TimezoneIsSet = true;
}

bool CatalogsFeedProcessingSchedule::timezoneIsSet() const
{
    return m_TimezoneIsSet;
}

void CatalogsFeedProcessingSchedule::unsetTimezone()
{
    m_TimezoneIsSet = false;
}
}
}
}
}


