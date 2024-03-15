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



#include "CppRestOpenAPIClient/model/ConversionAttributionWindowDays.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = int64_t;

ConversionAttributionWindowDays::eConversionAttributionWindowDays toEnum(const EnumUnderlyingType& val)
{
    switch (val)
    {
    case 0:
        return ConversionAttributionWindowDays::eConversionAttributionWindowDays::ConversionAttributionWindowDays__0;
    case 1:
        return ConversionAttributionWindowDays::eConversionAttributionWindowDays::ConversionAttributionWindowDays__1;
    case 7:
        return ConversionAttributionWindowDays::eConversionAttributionWindowDays::ConversionAttributionWindowDays__7;
    case 14:
        return ConversionAttributionWindowDays::eConversionAttributionWindowDays::ConversionAttributionWindowDays__14;
    case 30:
        return ConversionAttributionWindowDays::eConversionAttributionWindowDays::ConversionAttributionWindowDays__30;
    case 60:
        return ConversionAttributionWindowDays::eConversionAttributionWindowDays::ConversionAttributionWindowDays__60;
    default:
        break;
    }
    return {};
}

EnumUnderlyingType fromEnum(ConversionAttributionWindowDays::eConversionAttributionWindowDays e)
{
    switch (e)
    {
    case ConversionAttributionWindowDays::eConversionAttributionWindowDays::ConversionAttributionWindowDays__0:
        return 0;
    case ConversionAttributionWindowDays::eConversionAttributionWindowDays::ConversionAttributionWindowDays__1:
        return 1;
    case ConversionAttributionWindowDays::eConversionAttributionWindowDays::ConversionAttributionWindowDays__7:
        return 7;
    case ConversionAttributionWindowDays::eConversionAttributionWindowDays::ConversionAttributionWindowDays__14:
        return 14;
    case ConversionAttributionWindowDays::eConversionAttributionWindowDays::ConversionAttributionWindowDays__30:
        return 30;
    case ConversionAttributionWindowDays::eConversionAttributionWindowDays::ConversionAttributionWindowDays__60:
        return 60;
    default:
        break;
    }
    return {};
}
}

ConversionAttributionWindowDays::ConversionAttributionWindowDays()
{
}

ConversionAttributionWindowDays::~ConversionAttributionWindowDays()
{
}

void ConversionAttributionWindowDays::validate()
{
    // TODO: implement validation
}

web::json::value ConversionAttributionWindowDays::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool ConversionAttributionWindowDays::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_number().to_int64());
    return true;
}

void ConversionAttributionWindowDays::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool ConversionAttributionWindowDays::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

ConversionAttributionWindowDays::eConversionAttributionWindowDays ConversionAttributionWindowDays::getValue() const
{
   return m_value;
}

void ConversionAttributionWindowDays::setValue(ConversionAttributionWindowDays::eConversionAttributionWindowDays const value)
{
   m_value = value;
}


}
}
}
}


