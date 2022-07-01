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



#include "AdsAnalyticsGetAsyncResponse.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




AdsAnalyticsGetAsyncResponse::AdsAnalyticsGetAsyncResponse()
{
    m_Report_status = utility::conversions::to_string_t("");
    m_Report_statusIsSet = false;
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
    m_Size = 0.0;
    m_SizeIsSet = false;
}

AdsAnalyticsGetAsyncResponse::~AdsAnalyticsGetAsyncResponse()
{
}

void AdsAnalyticsGetAsyncResponse::validate()
{
    // TODO: implement validation
}

web::json::value AdsAnalyticsGetAsyncResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Report_statusIsSet)
    {
        val[utility::conversions::to_string_t(U("report_status"))] = ModelBase::toJson(m_Report_status);
    }
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t(U("url"))] = ModelBase::toJson(m_Url);
    }
    if(m_SizeIsSet)
    {
        val[utility::conversions::to_string_t(U("size"))] = ModelBase::toJson(m_Size);
    }

    return val;
}

bool AdsAnalyticsGetAsyncResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("report_status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("report_status")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_report_status;
            ok &= ModelBase::fromJson(fieldValue, refVal_report_status);
            setReportStatus(refVal_report_status);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_url;
            ok &= ModelBase::fromJson(fieldValue, refVal_url);
            setUrl(refVal_url);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("size"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("size")));
        if(!fieldValue.is_null())
        {
            double refVal_size;
            ok &= ModelBase::fromJson(fieldValue, refVal_size);
            setSize(refVal_size);
        }
    }
    return ok;
}

void AdsAnalyticsGetAsyncResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Report_statusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("report_status")), m_Report_status));
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("url")), m_Url));
    }
    if(m_SizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("size")), m_Size));
    }
}

bool AdsAnalyticsGetAsyncResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("report_status"))))
    {
        utility::string_t refVal_report_status;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("report_status"))), refVal_report_status );
        setReportStatus(refVal_report_status);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("url"))))
    {
        utility::string_t refVal_url;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("url"))), refVal_url );
        setUrl(refVal_url);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("size"))))
    {
        double refVal_size;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("size"))), refVal_size );
        setSize(refVal_size);
    }
    return ok;
}

utility::string_t AdsAnalyticsGetAsyncResponse::getReportStatus() const
{
    return m_Report_status;
}

void AdsAnalyticsGetAsyncResponse::setReportStatus(const utility::string_t& value)
{
    m_Report_status = value;
    m_Report_statusIsSet = true;
}

bool AdsAnalyticsGetAsyncResponse::reportStatusIsSet() const
{
    return m_Report_statusIsSet;
}

void AdsAnalyticsGetAsyncResponse::unsetReport_status()
{
    m_Report_statusIsSet = false;
}
utility::string_t AdsAnalyticsGetAsyncResponse::getUrl() const
{
    return m_Url;
}

void AdsAnalyticsGetAsyncResponse::setUrl(const utility::string_t& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}

bool AdsAnalyticsGetAsyncResponse::urlIsSet() const
{
    return m_UrlIsSet;
}

void AdsAnalyticsGetAsyncResponse::unsetUrl()
{
    m_UrlIsSet = false;
}
double AdsAnalyticsGetAsyncResponse::getSize() const
{
    return m_Size;
}

void AdsAnalyticsGetAsyncResponse::setSize(double value)
{
    m_Size = value;
    m_SizeIsSet = true;
}

bool AdsAnalyticsGetAsyncResponse::sizeIsSet() const
{
    return m_SizeIsSet;
}

void AdsAnalyticsGetAsyncResponse::unsetSize()
{
    m_SizeIsSet = false;
}
}
}
}
}


