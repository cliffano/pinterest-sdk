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



#include "CppRestOpenAPIClient/model/ObjectiveType.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = utility::string_t;

ObjectiveType::eObjectiveType toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("AWARENESS")))
        return ObjectiveType::eObjectiveType::ObjectiveType_AWARENESS;
    if (val == utility::conversions::to_string_t(U("CONSIDERATION")))
        return ObjectiveType::eObjectiveType::ObjectiveType_CONSIDERATION;
    if (val == utility::conversions::to_string_t(U("VIDEO_VIEW")))
        return ObjectiveType::eObjectiveType::ObjectiveType_VIDEO_VIEW;
    if (val == utility::conversions::to_string_t(U("WEB_CONVERSION")))
        return ObjectiveType::eObjectiveType::ObjectiveType_WEB_CONVERSION;
    if (val == utility::conversions::to_string_t(U("CATALOG_SALES")))
        return ObjectiveType::eObjectiveType::ObjectiveType_CATALOG_SALES;
    if (val == utility::conversions::to_string_t(U("WEB_SESSIONS")))
        return ObjectiveType::eObjectiveType::ObjectiveType_WEB_SESSIONS;
    return {};
}

EnumUnderlyingType fromEnum(ObjectiveType::eObjectiveType e)
{
    switch (e)
    {
    case ObjectiveType::eObjectiveType::ObjectiveType_AWARENESS:
        return U("AWARENESS");
    case ObjectiveType::eObjectiveType::ObjectiveType_CONSIDERATION:
        return U("CONSIDERATION");
    case ObjectiveType::eObjectiveType::ObjectiveType_VIDEO_VIEW:
        return U("VIDEO_VIEW");
    case ObjectiveType::eObjectiveType::ObjectiveType_WEB_CONVERSION:
        return U("WEB_CONVERSION");
    case ObjectiveType::eObjectiveType::ObjectiveType_CATALOG_SALES:
        return U("CATALOG_SALES");
    case ObjectiveType::eObjectiveType::ObjectiveType_WEB_SESSIONS:
        return U("WEB_SESSIONS");
    default:
        break;
    }
    return {};
}
}

ObjectiveType::ObjectiveType()
{
}

ObjectiveType::~ObjectiveType()
{
}

void ObjectiveType::validate()
{
    // TODO: implement validation
}

web::json::value ObjectiveType::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool ObjectiveType::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void ObjectiveType::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool ObjectiveType::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

ObjectiveType::eObjectiveType ObjectiveType::getValue() const
{
   return m_value;
}

void ObjectiveType::setValue(ObjectiveType::eObjectiveType const value)
{
   m_value = value;
}


}
}
}
}


