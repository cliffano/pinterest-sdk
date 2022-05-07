/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CatalogsFeedIngestionDetails.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




CatalogsFeedIngestionDetails::CatalogsFeedIngestionDetails()
{
    m_ErrorsIsSet = false;
    m_InfoIsSet = false;
}

CatalogsFeedIngestionDetails::~CatalogsFeedIngestionDetails()
{
}

void CatalogsFeedIngestionDetails::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsFeedIngestionDetails::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ErrorsIsSet)
    {
        val[utility::conversions::to_string_t(U("errors"))] = ModelBase::toJson(m_Errors);
    }
    if(m_InfoIsSet)
    {
        val[utility::conversions::to_string_t(U("info"))] = ModelBase::toJson(m_Info);
    }

    return val;
}

bool CatalogsFeedIngestionDetails::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("errors"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("errors")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsFeedIngestionErrors> refVal_errors;
            ok &= ModelBase::fromJson(fieldValue, refVal_errors);
            setErrors(refVal_errors);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("info"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("info")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsFeedIngestionInfo> refVal_info;
            ok &= ModelBase::fromJson(fieldValue, refVal_info);
            setInfo(refVal_info);
        }
    }
    return ok;
}

void CatalogsFeedIngestionDetails::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ErrorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("errors")), m_Errors));
    }
    if(m_InfoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("info")), m_Info));
    }
}

bool CatalogsFeedIngestionDetails::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("errors"))))
    {
        std::shared_ptr<CatalogsFeedIngestionErrors> refVal_errors;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("errors"))), refVal_errors );
        setErrors(refVal_errors);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("info"))))
    {
        std::shared_ptr<CatalogsFeedIngestionInfo> refVal_info;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("info"))), refVal_info );
        setInfo(refVal_info);
    }
    return ok;
}

std::shared_ptr<CatalogsFeedIngestionErrors> CatalogsFeedIngestionDetails::getErrors() const
{
    return m_Errors;
}

void CatalogsFeedIngestionDetails::setErrors(const std::shared_ptr<CatalogsFeedIngestionErrors>& value)
{
    m_Errors = value;
    m_ErrorsIsSet = true;
}

bool CatalogsFeedIngestionDetails::errorsIsSet() const
{
    return m_ErrorsIsSet;
}

void CatalogsFeedIngestionDetails::unsetErrors()
{
    m_ErrorsIsSet = false;
}
std::shared_ptr<CatalogsFeedIngestionInfo> CatalogsFeedIngestionDetails::getInfo() const
{
    return m_Info;
}

void CatalogsFeedIngestionDetails::setInfo(const std::shared_ptr<CatalogsFeedIngestionInfo>& value)
{
    m_Info = value;
    m_InfoIsSet = true;
}

bool CatalogsFeedIngestionDetails::infoIsSet() const
{
    return m_InfoIsSet;
}

void CatalogsFeedIngestionDetails::unsetInfo()
{
    m_InfoIsSet = false;
}
}
}
}
}


