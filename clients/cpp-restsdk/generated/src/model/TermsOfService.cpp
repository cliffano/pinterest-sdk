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



#include "CppRestOpenAPIClient/model/TermsOfService.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



TermsOfService::TermsOfService()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Html = utility::conversions::to_string_t("");
    m_HtmlIsSet = false;
    m_Has_accepted = false;
    m_Has_acceptedIsSet = false;
    m_Ad_account_id = utility::conversions::to_string_t("");
    m_Ad_account_idIsSet = false;
}

TermsOfService::~TermsOfService()
{
}

void TermsOfService::validate()
{
    // TODO: implement validation
}

web::json::value TermsOfService::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_HtmlIsSet)
    {
        val[utility::conversions::to_string_t(U("html"))] = ModelBase::toJson(m_Html);
    }
    if(m_Has_acceptedIsSet)
    {
        val[utility::conversions::to_string_t(U("has_accepted"))] = ModelBase::toJson(m_Has_accepted);
    }
    if(m_Ad_account_idIsSet)
    {
        val[utility::conversions::to_string_t(U("ad_account_id"))] = ModelBase::toJson(m_Ad_account_id);
    }

    return val;
}

bool TermsOfService::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("html"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("html")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setHtml;
            ok &= ModelBase::fromJson(fieldValue, refVal_setHtml);
            setHtml(refVal_setHtml);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("has_accepted"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("has_accepted")));
        if(!fieldValue.is_null())
        {
            bool refVal_setHasAccepted;
            ok &= ModelBase::fromJson(fieldValue, refVal_setHasAccepted);
            setHasAccepted(refVal_setHasAccepted);
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
    return ok;
}

void TermsOfService::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_HtmlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("html")), m_Html));
    }
    if(m_Has_acceptedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("has_accepted")), m_Has_accepted));
    }
    if(m_Ad_account_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ad_account_id")), m_Ad_account_id));
    }
}

bool TermsOfService::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("html"))))
    {
        utility::string_t refVal_setHtml;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("html"))), refVal_setHtml );
        setHtml(refVal_setHtml);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("has_accepted"))))
    {
        bool refVal_setHasAccepted;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("has_accepted"))), refVal_setHasAccepted );
        setHasAccepted(refVal_setHasAccepted);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ad_account_id"))))
    {
        utility::string_t refVal_setAdAccountId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ad_account_id"))), refVal_setAdAccountId );
        setAdAccountId(refVal_setAdAccountId);
    }
    return ok;
}

utility::string_t TermsOfService::getId() const
{
    return m_Id;
}

void TermsOfService::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool TermsOfService::idIsSet() const
{
    return m_IdIsSet;
}

void TermsOfService::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t TermsOfService::getHtml() const
{
    return m_Html;
}

void TermsOfService::setHtml(const utility::string_t& value)
{
    m_Html = value;
    m_HtmlIsSet = true;
}

bool TermsOfService::htmlIsSet() const
{
    return m_HtmlIsSet;
}

void TermsOfService::unsetHtml()
{
    m_HtmlIsSet = false;
}
bool TermsOfService::isHasAccepted() const
{
    return m_Has_accepted;
}

void TermsOfService::setHasAccepted(bool value)
{
    m_Has_accepted = value;
    m_Has_acceptedIsSet = true;
}

bool TermsOfService::hasAcceptedIsSet() const
{
    return m_Has_acceptedIsSet;
}

void TermsOfService::unsetHas_accepted()
{
    m_Has_acceptedIsSet = false;
}
utility::string_t TermsOfService::getAdAccountId() const
{
    return m_Ad_account_id;
}

void TermsOfService::setAdAccountId(const utility::string_t& value)
{
    m_Ad_account_id = value;
    m_Ad_account_idIsSet = true;
}

bool TermsOfService::adAccountIdIsSet() const
{
    return m_Ad_account_idIsSet;
}

void TermsOfService::unsetAd_account_id()
{
    m_Ad_account_idIsSet = false;
}
}
}
}
}


