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



#include "CppRestOpenAPIClient/model/EnhancedMatchStatusType.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = utility::string_t;

EnhancedMatchStatusType::eEnhancedMatchStatusType toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("UNKNOWN")))
        return EnhancedMatchStatusType::eEnhancedMatchStatusType::EnhancedMatchStatusType_UNKNOWN;
    if (val == utility::conversions::to_string_t(U("NOT_VALIDATED")))
        return EnhancedMatchStatusType::eEnhancedMatchStatusType::EnhancedMatchStatusType_NOT_VALIDATED;
    if (val == utility::conversions::to_string_t(U("VALIDATING_IN_PROGRESS")))
        return EnhancedMatchStatusType::eEnhancedMatchStatusType::EnhancedMatchStatusType_VALIDATING_IN_PROGRESS;
    if (val == utility::conversions::to_string_t(U("VALIDATION_COMPLETE")))
        return EnhancedMatchStatusType::eEnhancedMatchStatusType::EnhancedMatchStatusType_VALIDATION_COMPLETE;
    if (val == utility::conversions::to_string_t(U("null")))
        return EnhancedMatchStatusType::eEnhancedMatchStatusType::EnhancedMatchStatusType_r_NULL;
    return {};
}

EnumUnderlyingType fromEnum(EnhancedMatchStatusType::eEnhancedMatchStatusType e)
{
    switch (e)
    {
    case EnhancedMatchStatusType::eEnhancedMatchStatusType::EnhancedMatchStatusType_UNKNOWN:
        return U("UNKNOWN");
    case EnhancedMatchStatusType::eEnhancedMatchStatusType::EnhancedMatchStatusType_NOT_VALIDATED:
        return U("NOT_VALIDATED");
    case EnhancedMatchStatusType::eEnhancedMatchStatusType::EnhancedMatchStatusType_VALIDATING_IN_PROGRESS:
        return U("VALIDATING_IN_PROGRESS");
    case EnhancedMatchStatusType::eEnhancedMatchStatusType::EnhancedMatchStatusType_VALIDATION_COMPLETE:
        return U("VALIDATION_COMPLETE");
    case EnhancedMatchStatusType::eEnhancedMatchStatusType::EnhancedMatchStatusType_r_NULL:
        return U("null");
    default:
        break;
    }
    return {};
}
}

EnhancedMatchStatusType::EnhancedMatchStatusType()
{
}

EnhancedMatchStatusType::~EnhancedMatchStatusType()
{
}

void EnhancedMatchStatusType::validate()
{
    // TODO: implement validation
}

web::json::value EnhancedMatchStatusType::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool EnhancedMatchStatusType::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void EnhancedMatchStatusType::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool EnhancedMatchStatusType::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

EnhancedMatchStatusType::eEnhancedMatchStatusType EnhancedMatchStatusType::getValue() const
{
   return m_value;
}

void EnhancedMatchStatusType::setValue(EnhancedMatchStatusType::eEnhancedMatchStatusType const value)
{
   m_value = value;
}


}
}
}
}

