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



#include "CppRestOpenAPIClient/model/UserWebsiteVerifyRequest.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



UserWebsiteVerifyRequest::UserWebsiteVerifyRequest()
{
    m_Website = utility::conversions::to_string_t("");
    m_WebsiteIsSet = false;
    m_Verification_method = utility::conversions::to_string_t("");
    m_Verification_methodIsSet = false;
}

UserWebsiteVerifyRequest::~UserWebsiteVerifyRequest()
{
}

void UserWebsiteVerifyRequest::validate()
{
    // TODO: implement validation
}

web::json::value UserWebsiteVerifyRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_WebsiteIsSet)
    {
        val[utility::conversions::to_string_t(U("website"))] = ModelBase::toJson(m_Website);
    }
    if(m_Verification_methodIsSet)
    {
        val[utility::conversions::to_string_t(U("verification_method"))] = ModelBase::toJson(m_Verification_method);
    }

    return val;
}

bool UserWebsiteVerifyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("website"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("website")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setWebsite;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWebsite);
            setWebsite(refVal_setWebsite);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("verification_method"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("verification_method")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setVerificationMethod;
            ok &= ModelBase::fromJson(fieldValue, refVal_setVerificationMethod);
            setVerificationMethod(refVal_setVerificationMethod);
        }
    }
    return ok;
}

void UserWebsiteVerifyRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_WebsiteIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("website")), m_Website));
    }
    if(m_Verification_methodIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("verification_method")), m_Verification_method));
    }
}

bool UserWebsiteVerifyRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("website"))))
    {
        utility::string_t refVal_setWebsite;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("website"))), refVal_setWebsite );
        setWebsite(refVal_setWebsite);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("verification_method"))))
    {
        utility::string_t refVal_setVerificationMethod;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("verification_method"))), refVal_setVerificationMethod );
        setVerificationMethod(refVal_setVerificationMethod);
    }
    return ok;
}

utility::string_t UserWebsiteVerifyRequest::getWebsite() const
{
    return m_Website;
}

void UserWebsiteVerifyRequest::setWebsite(const utility::string_t& value)
{
    m_Website = value;
    m_WebsiteIsSet = true;
}

bool UserWebsiteVerifyRequest::websiteIsSet() const
{
    return m_WebsiteIsSet;
}

void UserWebsiteVerifyRequest::unsetWebsite()
{
    m_WebsiteIsSet = false;
}
utility::string_t UserWebsiteVerifyRequest::getVerificationMethod() const
{
    return m_Verification_method;
}

void UserWebsiteVerifyRequest::setVerificationMethod(const utility::string_t& value)
{
    m_Verification_method = value;
    m_Verification_methodIsSet = true;
}

bool UserWebsiteVerifyRequest::verificationMethodIsSet() const
{
    return m_Verification_methodIsSet;
}

void UserWebsiteVerifyRequest::unsetVerification_method()
{
    m_Verification_methodIsSet = false;
}
}
}
}
}

