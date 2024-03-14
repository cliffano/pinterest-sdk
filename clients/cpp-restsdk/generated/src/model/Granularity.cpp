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



#include "CppRestOpenAPIClient/model/Granularity.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = utility::string_t;

Granularity::eGranularity toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("TOTAL")))
        return Granularity::eGranularity::Granularity_TOTAL;
    if (val == utility::conversions::to_string_t(U("DAY")))
        return Granularity::eGranularity::Granularity_DAY;
    if (val == utility::conversions::to_string_t(U("HOUR")))
        return Granularity::eGranularity::Granularity_HOUR;
    if (val == utility::conversions::to_string_t(U("WEEK")))
        return Granularity::eGranularity::Granularity_WEEK;
    if (val == utility::conversions::to_string_t(U("MONTH")))
        return Granularity::eGranularity::Granularity_MONTH;
    return {};
}

EnumUnderlyingType fromEnum(Granularity::eGranularity e)
{
    switch (e)
    {
    case Granularity::eGranularity::Granularity_TOTAL:
        return U("TOTAL");
    case Granularity::eGranularity::Granularity_DAY:
        return U("DAY");
    case Granularity::eGranularity::Granularity_HOUR:
        return U("HOUR");
    case Granularity::eGranularity::Granularity_WEEK:
        return U("WEEK");
    case Granularity::eGranularity::Granularity_MONTH:
        return U("MONTH");
    default:
        break;
    }
    return {};
}
}

Granularity::Granularity()
{
}

Granularity::~Granularity()
{
}

void Granularity::validate()
{
    // TODO: implement validation
}

web::json::value Granularity::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool Granularity::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void Granularity::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool Granularity::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

Granularity::eGranularity Granularity::getValue() const
{
   return m_value;
}

void Granularity::setValue(Granularity::eGranularity const value)
{
   m_value = value;
}


}
}
}
}


