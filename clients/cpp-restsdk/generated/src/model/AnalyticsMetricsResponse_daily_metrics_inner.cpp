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



#include "CppRestOpenAPIClient/model/AnalyticsMetricsResponse_daily_metrics_inner.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



AnalyticsMetricsResponse_daily_metrics_inner::AnalyticsMetricsResponse_daily_metrics_inner()
{
    m_Data_statusIsSet = false;
    m_date = utility::conversions::to_string_t("");
    m_dateIsSet = false;
    m_MetricsIsSet = false;
}

AnalyticsMetricsResponse_daily_metrics_inner::~AnalyticsMetricsResponse_daily_metrics_inner()
{
}

void AnalyticsMetricsResponse_daily_metrics_inner::validate()
{
    // TODO: implement validation
}

web::json::value AnalyticsMetricsResponse_daily_metrics_inner::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Data_statusIsSet)
    {
        val[utility::conversions::to_string_t(U("data_status"))] = ModelBase::toJson(m_Data_status);
    }
    if(m_dateIsSet)
    {
        val[utility::conversions::to_string_t(U("date"))] = ModelBase::toJson(m_date);
    }
    if(m_MetricsIsSet)
    {
        val[utility::conversions::to_string_t(U("metrics"))] = ModelBase::toJson(m_Metrics);
    }

    return val;
}

bool AnalyticsMetricsResponse_daily_metrics_inner::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("data_status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("data_status")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DataStatus> refVal_setDataStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDataStatus);
            setDataStatus(refVal_setDataStatus);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("date"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("date")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDate;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDate);
            setDate(refVal_setDate);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("metrics"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("metrics")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, double> refVal_setMetrics;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMetrics);
            setMetrics(refVal_setMetrics);
        }
    }
    return ok;
}

void AnalyticsMetricsResponse_daily_metrics_inner::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Data_statusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("data_status")), m_Data_status));
    }
    if(m_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("date")), m_date));
    }
    if(m_MetricsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("metrics")), m_Metrics));
    }
}

bool AnalyticsMetricsResponse_daily_metrics_inner::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("data_status"))))
    {
        std::shared_ptr<DataStatus> refVal_setDataStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("data_status"))), refVal_setDataStatus );
        setDataStatus(refVal_setDataStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("date"))))
    {
        utility::string_t refVal_setDate;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("date"))), refVal_setDate );
        setDate(refVal_setDate);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("metrics"))))
    {
        std::map<utility::string_t, double> refVal_setMetrics;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("metrics"))), refVal_setMetrics );
        setMetrics(refVal_setMetrics);
    }
    return ok;
}

std::shared_ptr<DataStatus> AnalyticsMetricsResponse_daily_metrics_inner::getDataStatus() const
{
    return m_Data_status;
}

void AnalyticsMetricsResponse_daily_metrics_inner::setDataStatus(const std::shared_ptr<DataStatus>& value)
{
    m_Data_status = value;
    m_Data_statusIsSet = true;
}

bool AnalyticsMetricsResponse_daily_metrics_inner::dataStatusIsSet() const
{
    return m_Data_statusIsSet;
}

void AnalyticsMetricsResponse_daily_metrics_inner::unsetData_status()
{
    m_Data_statusIsSet = false;
}
utility::string_t AnalyticsMetricsResponse_daily_metrics_inner::getDate() const
{
    return m_date;
}

void AnalyticsMetricsResponse_daily_metrics_inner::setDate(const utility::string_t& value)
{
    m_date = value;
    m_dateIsSet = true;
}

bool AnalyticsMetricsResponse_daily_metrics_inner::dateIsSet() const
{
    return m_dateIsSet;
}

void AnalyticsMetricsResponse_daily_metrics_inner::unsetdate()
{
    m_dateIsSet = false;
}
std::map<utility::string_t, double>& AnalyticsMetricsResponse_daily_metrics_inner::getMetrics()
{
    return m_Metrics;
}

void AnalyticsMetricsResponse_daily_metrics_inner::setMetrics(std::map<utility::string_t, double> value)
{
    m_Metrics = value;
    m_MetricsIsSet = true;
}

bool AnalyticsMetricsResponse_daily_metrics_inner::metricsIsSet() const
{
    return m_MetricsIsSet;
}

void AnalyticsMetricsResponse_daily_metrics_inner::unsetMetrics()
{
    m_MetricsIsSet = false;
}
}
}
}
}


