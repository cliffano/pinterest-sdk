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



#include "CppRestOpenAPIClient/model/OauthAccessTokenRequestCode.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



OauthAccessTokenRequestCode::OauthAccessTokenRequestCode()
{
    m_Grant_type = utility::conversions::to_string_t("");
    m_Grant_typeIsSet = false;
    m_Code = utility::conversions::to_string_t("");
    m_CodeIsSet = false;
    m_Redirect_uri = utility::conversions::to_string_t("");
    m_Redirect_uriIsSet = false;
}

OauthAccessTokenRequestCode::~OauthAccessTokenRequestCode()
{
}

void OauthAccessTokenRequestCode::validate()
{
    // TODO: implement validation
}

web::json::value OauthAccessTokenRequestCode::toJson() const
{
    web::json::value val = this->OauthAccessTokenRequest::toJson();
    
    if(m_Grant_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("grant_type"))] = ModelBase::toJson(m_Grant_type);
    }
    if(m_CodeIsSet)
    {
        val[utility::conversions::to_string_t(U("code"))] = ModelBase::toJson(m_Code);
    }
    if(m_Redirect_uriIsSet)
    {
        val[utility::conversions::to_string_t(U("redirect_uri"))] = ModelBase::toJson(m_Redirect_uri);
    }

    return val;
}

bool OauthAccessTokenRequestCode::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->OauthAccessTokenRequest::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("grant_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("grant_type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setGrantType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGrantType);
            setGrantType(refVal_setGrantType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("code"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("code")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCode;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCode);
            setCode(refVal_setCode);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("redirect_uri"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("redirect_uri")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setRedirectUri;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRedirectUri);
            setRedirectUri(refVal_setRedirectUri);
        }
    }
    return ok;
}

void OauthAccessTokenRequestCode::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Grant_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("grant_type")), m_Grant_type));
    }
    if(m_CodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("code")), m_Code));
    }
    if(m_Redirect_uriIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("redirect_uri")), m_Redirect_uri));
    }
}

bool OauthAccessTokenRequestCode::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("grant_type"))))
    {
        utility::string_t refVal_setGrantType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("grant_type"))), refVal_setGrantType );
        setGrantType(refVal_setGrantType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("code"))))
    {
        utility::string_t refVal_setCode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("code"))), refVal_setCode );
        setCode(refVal_setCode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("redirect_uri"))))
    {
        utility::string_t refVal_setRedirectUri;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("redirect_uri"))), refVal_setRedirectUri );
        setRedirectUri(refVal_setRedirectUri);
    }
    return ok;
}

utility::string_t OauthAccessTokenRequestCode::getGrantType() const
{
    return m_Grant_type;
}

void OauthAccessTokenRequestCode::setGrantType(const utility::string_t& value)
{
    m_Grant_type = value;
    m_Grant_typeIsSet = true;
}

bool OauthAccessTokenRequestCode::grantTypeIsSet() const
{
    return m_Grant_typeIsSet;
}

void OauthAccessTokenRequestCode::unsetGrant_type()
{
    m_Grant_typeIsSet = false;
}
utility::string_t OauthAccessTokenRequestCode::getCode() const
{
    return m_Code;
}

void OauthAccessTokenRequestCode::setCode(const utility::string_t& value)
{
    m_Code = value;
    m_CodeIsSet = true;
}

bool OauthAccessTokenRequestCode::codeIsSet() const
{
    return m_CodeIsSet;
}

void OauthAccessTokenRequestCode::unsetCode()
{
    m_CodeIsSet = false;
}
utility::string_t OauthAccessTokenRequestCode::getRedirectUri() const
{
    return m_Redirect_uri;
}

void OauthAccessTokenRequestCode::setRedirectUri(const utility::string_t& value)
{
    m_Redirect_uri = value;
    m_Redirect_uriIsSet = true;
}

bool OauthAccessTokenRequestCode::redirectUriIsSet() const
{
    return m_Redirect_uriIsSet;
}

void OauthAccessTokenRequestCode::unsetRedirect_uri()
{
    m_Redirect_uriIsSet = false;
}
}
}
}
}

