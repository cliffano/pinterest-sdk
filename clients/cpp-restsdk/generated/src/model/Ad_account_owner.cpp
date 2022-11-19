/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/Ad_account_owner.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Ad_account_owner::Ad_account_owner()
{
    m_Username = utility::conversions::to_string_t("");
    m_UsernameIsSet = false;
}

Ad_account_owner::~Ad_account_owner()
{
}

void Ad_account_owner::validate()
{
    // TODO: implement validation
}

web::json::value Ad_account_owner::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_UsernameIsSet)
    {
        val[utility::conversions::to_string_t(U("username"))] = ModelBase::toJson(m_Username);
    }

    return val;
}

bool Ad_account_owner::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("username"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("username")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUsername;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUsername);
            setUsername(refVal_setUsername);
        }
    }
    return ok;
}

void Ad_account_owner::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_UsernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("username")), m_Username));
    }
}

bool Ad_account_owner::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("username"))))
    {
        utility::string_t refVal_setUsername;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("username"))), refVal_setUsername );
        setUsername(refVal_setUsername);
    }
    return ok;
}

utility::string_t Ad_account_owner::getUsername() const
{
    return m_Username;
}

void Ad_account_owner::setUsername(const utility::string_t& value)
{
    m_Username = value;
    m_UsernameIsSet = true;
}

bool Ad_account_owner::usernameIsSet() const
{
    return m_UsernameIsSet;
}

void Ad_account_owner::unsetUsername()
{
    m_UsernameIsSet = false;
}
}
}
}
}


