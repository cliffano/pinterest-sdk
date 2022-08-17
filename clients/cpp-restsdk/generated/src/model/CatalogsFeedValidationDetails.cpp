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



#include "CppRestOpenAPIClient/model/CatalogsFeedValidationDetails.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CatalogsFeedValidationDetails::CatalogsFeedValidationDetails()
{
    m_ErrorsIsSet = false;
    m_WarningsIsSet = false;
}

CatalogsFeedValidationDetails::~CatalogsFeedValidationDetails()
{
}

void CatalogsFeedValidationDetails::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsFeedValidationDetails::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ErrorsIsSet)
    {
        val[utility::conversions::to_string_t(U("errors"))] = ModelBase::toJson(m_Errors);
    }
    if(m_WarningsIsSet)
    {
        val[utility::conversions::to_string_t(U("warnings"))] = ModelBase::toJson(m_Warnings);
    }

    return val;
}

bool CatalogsFeedValidationDetails::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("errors"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("errors")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsFeedValidationErrors> refVal_setErrors;
            ok &= ModelBase::fromJson(fieldValue, refVal_setErrors);
            setErrors(refVal_setErrors);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("warnings"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("warnings")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsFeedValidationWarnings> refVal_setWarnings;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWarnings);
            setWarnings(refVal_setWarnings);
        }
    }
    return ok;
}

void CatalogsFeedValidationDetails::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_WarningsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("warnings")), m_Warnings));
    }
}

bool CatalogsFeedValidationDetails::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("errors"))))
    {
        std::shared_ptr<CatalogsFeedValidationErrors> refVal_setErrors;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("errors"))), refVal_setErrors );
        setErrors(refVal_setErrors);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("warnings"))))
    {
        std::shared_ptr<CatalogsFeedValidationWarnings> refVal_setWarnings;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("warnings"))), refVal_setWarnings );
        setWarnings(refVal_setWarnings);
    }
    return ok;
}

std::shared_ptr<CatalogsFeedValidationErrors> CatalogsFeedValidationDetails::getErrors() const
{
    return m_Errors;
}

void CatalogsFeedValidationDetails::setErrors(const std::shared_ptr<CatalogsFeedValidationErrors>& value)
{
    m_Errors = value;
    m_ErrorsIsSet = true;
}

bool CatalogsFeedValidationDetails::errorsIsSet() const
{
    return m_ErrorsIsSet;
}

void CatalogsFeedValidationDetails::unsetErrors()
{
    m_ErrorsIsSet = false;
}
std::shared_ptr<CatalogsFeedValidationWarnings> CatalogsFeedValidationDetails::getWarnings() const
{
    return m_Warnings;
}

void CatalogsFeedValidationDetails::setWarnings(const std::shared_ptr<CatalogsFeedValidationWarnings>& value)
{
    m_Warnings = value;
    m_WarningsIsSet = true;
}

bool CatalogsFeedValidationDetails::warningsIsSet() const
{
    return m_WarningsIsSet;
}

void CatalogsFeedValidationDetails::unsetWarnings()
{
    m_WarningsIsSet = false;
}
}
}
}
}


