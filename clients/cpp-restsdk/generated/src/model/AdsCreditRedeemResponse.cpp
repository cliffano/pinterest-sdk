/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/AdsCreditRedeemResponse.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



AdsCreditRedeemResponse::AdsCreditRedeemResponse()
{
    m_Success = false;
    m_SuccessIsSet = false;
    m_ErrorCode = 0;
    m_ErrorCodeIsSet = false;
    m_ErrorMessage = utility::conversions::to_string_t("");
    m_ErrorMessageIsSet = false;
}

AdsCreditRedeemResponse::~AdsCreditRedeemResponse()
{
}

void AdsCreditRedeemResponse::validate()
{
    // TODO: implement validation
}

web::json::value AdsCreditRedeemResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SuccessIsSet)
    {
        val[utility::conversions::to_string_t(U("success"))] = ModelBase::toJson(m_Success);
    }
    if(m_ErrorCodeIsSet)
    {
        val[utility::conversions::to_string_t(U("errorCode"))] = ModelBase::toJson(m_ErrorCode);
    }
    if(m_ErrorMessageIsSet)
    {
        val[utility::conversions::to_string_t(U("errorMessage"))] = ModelBase::toJson(m_ErrorMessage);
    }

    return val;
}

bool AdsCreditRedeemResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("success"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("success")));
        if(!fieldValue.is_null())
        {
            bool refVal_setSuccess;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSuccess);
            setSuccess(refVal_setSuccess);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("errorCode"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("errorCode")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setErrorCode;
            ok &= ModelBase::fromJson(fieldValue, refVal_setErrorCode);
            setErrorCode(refVal_setErrorCode);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("errorMessage"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("errorMessage")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setErrorMessage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setErrorMessage);
            setErrorMessage(refVal_setErrorMessage);
        }
    }
    return ok;
}

void AdsCreditRedeemResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_SuccessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("success")), m_Success));
    }
    if(m_ErrorCodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("errorCode")), m_ErrorCode));
    }
    if(m_ErrorMessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("errorMessage")), m_ErrorMessage));
    }
}

bool AdsCreditRedeemResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("success"))))
    {
        bool refVal_setSuccess;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("success"))), refVal_setSuccess );
        setSuccess(refVal_setSuccess);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("errorCode"))))
    {
        int32_t refVal_setErrorCode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("errorCode"))), refVal_setErrorCode );
        setErrorCode(refVal_setErrorCode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("errorMessage"))))
    {
        utility::string_t refVal_setErrorMessage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("errorMessage"))), refVal_setErrorMessage );
        setErrorMessage(refVal_setErrorMessage);
    }
    return ok;
}

bool AdsCreditRedeemResponse::isSuccess() const
{
    return m_Success;
}

void AdsCreditRedeemResponse::setSuccess(bool value)
{
    m_Success = value;
    m_SuccessIsSet = true;
}

bool AdsCreditRedeemResponse::successIsSet() const
{
    return m_SuccessIsSet;
}

void AdsCreditRedeemResponse::unsetSuccess()
{
    m_SuccessIsSet = false;
}
int32_t AdsCreditRedeemResponse::getErrorCode() const
{
    return m_ErrorCode;
}

void AdsCreditRedeemResponse::setErrorCode(int32_t value)
{
    m_ErrorCode = value;
    m_ErrorCodeIsSet = true;
}

bool AdsCreditRedeemResponse::errorCodeIsSet() const
{
    return m_ErrorCodeIsSet;
}

void AdsCreditRedeemResponse::unsetErrorCode()
{
    m_ErrorCodeIsSet = false;
}
utility::string_t AdsCreditRedeemResponse::getErrorMessage() const
{
    return m_ErrorMessage;
}

void AdsCreditRedeemResponse::setErrorMessage(const utility::string_t& value)
{
    m_ErrorMessage = value;
    m_ErrorMessageIsSet = true;
}

bool AdsCreditRedeemResponse::errorMessageIsSet() const
{
    return m_ErrorMessageIsSet;
}

void AdsCreditRedeemResponse::unsetErrorMessage()
{
    m_ErrorMessageIsSet = false;
}
}
}
}
}


