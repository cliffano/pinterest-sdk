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



#include "CppRestOpenAPIClient/model/UserListOperationType.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = utility::string_t;

UserListOperationType::eUserListOperationType toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("ADD")))
        return UserListOperationType::eUserListOperationType::UserListOperationType_ADD;
    if (val == utility::conversions::to_string_t(U("REMOVE")))
        return UserListOperationType::eUserListOperationType::UserListOperationType_REMOVE;
    return {};
}

EnumUnderlyingType fromEnum(UserListOperationType::eUserListOperationType e)
{
    switch (e)
    {
    case UserListOperationType::eUserListOperationType::UserListOperationType_ADD:
        return U("ADD");
    case UserListOperationType::eUserListOperationType::UserListOperationType_REMOVE:
        return U("REMOVE");
    default:
        break;
    }
    return {};
}
}

UserListOperationType::UserListOperationType()
{
}

UserListOperationType::~UserListOperationType()
{
}

void UserListOperationType::validate()
{
    // TODO: implement validation
}

web::json::value UserListOperationType::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool UserListOperationType::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void UserListOperationType::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool UserListOperationType::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }
    {
        EnumUnderlyingType e;
        ok = ModelBase::fromHttpContent(multipart->getContent(namePrefix), e);
        if (ok)
        {
            auto v = toEnum(e);
            setValue(v);
        }
    }
    return ok;
}

UserListOperationType::eUserListOperationType UserListOperationType::getValue() const
{
   return m_value;
}

void UserListOperationType::setValue(UserListOperationType::eUserListOperationType const value)
{
   m_value = value;
}


}
}
}
}


