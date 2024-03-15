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



#include "CppRestOpenAPIClient/model/UserListType.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = utility::string_t;

UserListType::eUserListType toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("EMAIL")))
        return UserListType::eUserListType::UserListType_EMAIL;
    if (val == utility::conversions::to_string_t(U("IDFA")))
        return UserListType::eUserListType::UserListType_IDFA;
    if (val == utility::conversions::to_string_t(U("MAID")))
        return UserListType::eUserListType::UserListType_MAID;
    if (val == utility::conversions::to_string_t(U("LR_ID")))
        return UserListType::eUserListType::UserListType_LR_ID;
    if (val == utility::conversions::to_string_t(U("DLX_ID")))
        return UserListType::eUserListType::UserListType_DLX_ID;
    if (val == utility::conversions::to_string_t(U("HASHED_PINNER_ID")))
        return UserListType::eUserListType::UserListType_HASHED_PINNER_ID;
    return {};
}

EnumUnderlyingType fromEnum(UserListType::eUserListType e)
{
    switch (e)
    {
    case UserListType::eUserListType::UserListType_EMAIL:
        return U("EMAIL");
    case UserListType::eUserListType::UserListType_IDFA:
        return U("IDFA");
    case UserListType::eUserListType::UserListType_MAID:
        return U("MAID");
    case UserListType::eUserListType::UserListType_LR_ID:
        return U("LR_ID");
    case UserListType::eUserListType::UserListType_DLX_ID:
        return U("DLX_ID");
    case UserListType::eUserListType::UserListType_HASHED_PINNER_ID:
        return U("HASHED_PINNER_ID");
    default:
        break;
    }
    return {};
}
}

UserListType::UserListType()
{
}

UserListType::~UserListType()
{
}

void UserListType::validate()
{
    // TODO: implement validation
}

web::json::value UserListType::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool UserListType::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void UserListType::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool UserListType::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

UserListType::eUserListType UserListType::getValue() const
{
   return m_value;
}

void UserListType::setValue(UserListType::eUserListType const value)
{
   m_value = value;
}


}
}
}
}


