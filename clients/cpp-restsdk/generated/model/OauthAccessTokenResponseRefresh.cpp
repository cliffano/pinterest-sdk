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



#include "OauthAccessTokenResponseRefresh.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




OauthAccessTokenResponseRefresh::OauthAccessTokenResponseRefresh()
{
}

OauthAccessTokenResponseRefresh::~OauthAccessTokenResponseRefresh()
{
}

void OauthAccessTokenResponseRefresh::validate()
{
    // TODO: implement validation
}

web::json::value OauthAccessTokenResponseRefresh::toJson() const
{

    web::json::value val = web::json::value::object();
    

    return val;
}

bool OauthAccessTokenResponseRefresh::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}

void OauthAccessTokenResponseRefresh::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Response_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("response_type")), m_Response_type));
    }
    if(m_Access_tokenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("access_token")), m_Access_token));
    }
    if(m_Token_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("token_type")), m_Token_type));
    }
    if(m_Expires_inIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("expires_in")), m_Expires_in));
    }
    if(m_ScopeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("scope")), m_Scope));
    }
}

bool OauthAccessTokenResponseRefresh::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("response_type"))))
    {
        utility::string_t refVal_response_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("response_type"))), refVal_response_type );
        setResponseType(refVal_response_type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("access_token"))))
    {
        utility::string_t refVal_access_token;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("access_token"))), refVal_access_token );
        setAccessToken(refVal_access_token);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("token_type"))))
    {
        utility::string_t refVal_token_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("token_type"))), refVal_token_type );
        setTokenType(refVal_token_type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("expires_in"))))
    {
        int32_t refVal_expires_in;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("expires_in"))), refVal_expires_in );
        setExpiresIn(refVal_expires_in);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("scope"))))
    {
        utility::string_t refVal_scope;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("scope"))), refVal_scope );
        setScope(refVal_scope);
    }
    return ok;
}

}
}
}
}


