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



#include "CppRestOpenAPIClient/model/CatalogsProductGroupStatus.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = utility::string_t;

CatalogsProductGroupStatus::eCatalogsProductGroupStatus toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("ACTIVE")))
        return CatalogsProductGroupStatus::eCatalogsProductGroupStatus::CatalogsProductGroupStatus_ACTIVE;
    if (val == utility::conversions::to_string_t(U("INACTIVE")))
        return CatalogsProductGroupStatus::eCatalogsProductGroupStatus::CatalogsProductGroupStatus_INACTIVE;
    return {};
}

EnumUnderlyingType fromEnum(CatalogsProductGroupStatus::eCatalogsProductGroupStatus e)
{
    switch (e)
    {
    case CatalogsProductGroupStatus::eCatalogsProductGroupStatus::CatalogsProductGroupStatus_ACTIVE:
        return U("ACTIVE");
    case CatalogsProductGroupStatus::eCatalogsProductGroupStatus::CatalogsProductGroupStatus_INACTIVE:
        return U("INACTIVE");
    default:
        break;
    }
    return {};
}
}

CatalogsProductGroupStatus::CatalogsProductGroupStatus()
{
}

CatalogsProductGroupStatus::~CatalogsProductGroupStatus()
{
}

void CatalogsProductGroupStatus::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsProductGroupStatus::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool CatalogsProductGroupStatus::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void CatalogsProductGroupStatus::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool CatalogsProductGroupStatus::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

CatalogsProductGroupStatus::eCatalogsProductGroupStatus CatalogsProductGroupStatus::getValue() const
{
   return m_value;
}

void CatalogsProductGroupStatus::setValue(CatalogsProductGroupStatus::eCatalogsProductGroupStatus const value)
{
   m_value = value;
}


}
}
}
}


