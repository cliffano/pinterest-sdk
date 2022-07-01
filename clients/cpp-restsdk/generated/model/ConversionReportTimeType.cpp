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



#include "ConversionReportTimeType.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



namespace
{
using EnumUnderlyingType = utility::string_t;

ConversionReportTimeType::eConversionReportTimeType toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("TIME_OF_AD_ACTION")))
        return ConversionReportTimeType::eConversionReportTimeType::ConversionReportTimeType_AD_ACTION;
    if (val == utility::conversions::to_string_t(U("TIME_OF_CONVERSION")))
        return ConversionReportTimeType::eConversionReportTimeType::ConversionReportTimeType_CONVERSION;
    return {};
}

EnumUnderlyingType fromEnum(ConversionReportTimeType::eConversionReportTimeType e)
{
    switch (e)
    {
    case ConversionReportTimeType::eConversionReportTimeType::ConversionReportTimeType_AD_ACTION:
        return U("TIME_OF_AD_ACTION");
    case ConversionReportTimeType::eConversionReportTimeType::ConversionReportTimeType_CONVERSION:
        return U("TIME_OF_CONVERSION");
    default:
        break;
    }
    return {};
}
}

ConversionReportTimeType::ConversionReportTimeType()
{
}

ConversionReportTimeType::~ConversionReportTimeType()
{
}

void ConversionReportTimeType::validate()
{
    // TODO: implement validation
}

web::json::value ConversionReportTimeType::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool ConversionReportTimeType::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void ConversionReportTimeType::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool ConversionReportTimeType::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

ConversionReportTimeType::eConversionReportTimeType ConversionReportTimeType::getValue() const
{
   return m_value;
}

void ConversionReportTimeType::setValue(ConversionReportTimeType::eConversionReportTimeType const value)
{
   m_value = value;
}


}
}
}
}


