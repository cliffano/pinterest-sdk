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



#include "CppRestOpenAPIClient/model/EntityStatus.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = utility::string_t;

EntityStatus::eEntityStatus toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("ACTIVE")))
        return EntityStatus::eEntityStatus::EntityStatus_ACTIVE;
    if (val == utility::conversions::to_string_t(U("PAUSED")))
        return EntityStatus::eEntityStatus::EntityStatus_PAUSED;
    if (val == utility::conversions::to_string_t(U("ARCHIVED")))
        return EntityStatus::eEntityStatus::EntityStatus_ARCHIVED;
    if (val == utility::conversions::to_string_t(U("DRAFT")))
        return EntityStatus::eEntityStatus::EntityStatus_DRAFT;
    if (val == utility::conversions::to_string_t(U("DELETED_DRAFT")))
        return EntityStatus::eEntityStatus::EntityStatus_DELETED_DRAFT;
    return {};
}

EnumUnderlyingType fromEnum(EntityStatus::eEntityStatus e)
{
    switch (e)
    {
    case EntityStatus::eEntityStatus::EntityStatus_ACTIVE:
        return U("ACTIVE");
    case EntityStatus::eEntityStatus::EntityStatus_PAUSED:
        return U("PAUSED");
    case EntityStatus::eEntityStatus::EntityStatus_ARCHIVED:
        return U("ARCHIVED");
    case EntityStatus::eEntityStatus::EntityStatus_DRAFT:
        return U("DRAFT");
    case EntityStatus::eEntityStatus::EntityStatus_DELETED_DRAFT:
        return U("DELETED_DRAFT");
    default:
        break;
    }
    return {};
}
}

EntityStatus::EntityStatus()
{
}

EntityStatus::~EntityStatus()
{
}

void EntityStatus::validate()
{
    // TODO: implement validation
}

web::json::value EntityStatus::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool EntityStatus::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void EntityStatus::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool EntityStatus::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

EntityStatus::eEntityStatus EntityStatus::getValue() const
{
   return m_value;
}

void EntityStatus::setValue(EntityStatus::eEntityStatus const value)
{
   m_value = value;
}


}
}
}
}


