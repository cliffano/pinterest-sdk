/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "AnalyticsMetricsResponse_daily_metrics.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




AnalyticsMetricsResponse_daily_metrics::AnalyticsMetricsResponse_daily_metrics()
{
    m_Data_status = utility::conversions::to_string_t("");
    m_Data_statusIsSet = false;
    m_date = utility::conversions::to_string_t("");
    m_dateIsSet = false;
    m_MetricsIsSet = false;
}

AnalyticsMetricsResponse_daily_metrics::~AnalyticsMetricsResponse_daily_metrics()
{
}

void AnalyticsMetricsResponse_daily_metrics::validate()
{
    // TODO: implement validation
}

web::json::value AnalyticsMetricsResponse_daily_metrics::toJson() const
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

bool AnalyticsMetricsResponse_daily_metrics::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("data_status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("data_status")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_data_status;
            ok &= ModelBase::fromJson(fieldValue, refVal_data_status);
            setDataStatus(refVal_data_status);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("date"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("date")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_date;
            ok &= ModelBase::fromJson(fieldValue, refVal_date);
            setDate(refVal_date);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("metrics"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("metrics")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, double> refVal_metrics;
            ok &= ModelBase::fromJson(fieldValue, refVal_metrics);
            setMetrics(refVal_metrics);
        }
    }
    return ok;
}

void AnalyticsMetricsResponse_daily_metrics::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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

bool AnalyticsMetricsResponse_daily_metrics::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("data_status"))))
    {
        utility::string_t refVal_data_status;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("data_status"))), refVal_data_status );
        setDataStatus(refVal_data_status);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("date"))))
    {
        utility::string_t refVal_date;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("date"))), refVal_date );
        setDate(refVal_date);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("metrics"))))
    {
        std::map<utility::string_t, double> refVal_metrics;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("metrics"))), refVal_metrics );
        setMetrics(refVal_metrics);
    }
    return ok;
}

utility::string_t AnalyticsMetricsResponse_daily_metrics::getDataStatus() const
{
    return m_Data_status;
}

void AnalyticsMetricsResponse_daily_metrics::setDataStatus(const utility::string_t& value)
{
    m_Data_status = value;
    m_Data_statusIsSet = true;
}

bool AnalyticsMetricsResponse_daily_metrics::dataStatusIsSet() const
{
    return m_Data_statusIsSet;
}

void AnalyticsMetricsResponse_daily_metrics::unsetData_status()
{
    m_Data_statusIsSet = false;
}
utility::string_t AnalyticsMetricsResponse_daily_metrics::getDate() const
{
    return m_date;
}

void AnalyticsMetricsResponse_daily_metrics::setDate(const utility::string_t& value)
{
    m_date = value;
    m_dateIsSet = true;
}

bool AnalyticsMetricsResponse_daily_metrics::dateIsSet() const
{
    return m_dateIsSet;
}

void AnalyticsMetricsResponse_daily_metrics::unsetdate()
{
    m_dateIsSet = false;
}
std::map<utility::string_t, double>& AnalyticsMetricsResponse_daily_metrics::getMetrics()
{
    return m_Metrics;
}

void AnalyticsMetricsResponse_daily_metrics::setMetrics(std::map<utility::string_t, double> value)
{
    m_Metrics = value;
    m_MetricsIsSet = true;
}

bool AnalyticsMetricsResponse_daily_metrics::metricsIsSet() const
{
    return m_MetricsIsSet;
}

void AnalyticsMetricsResponse_daily_metrics::unsetMetrics()
{
    m_MetricsIsSet = false;
}
}
}
}
}


