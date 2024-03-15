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



#include "CppRestOpenAPIClient/model/AdsAnalyticsFilterColumn.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = utility::string_t;

AdsAnalyticsFilterColumn::eAdsAnalyticsFilterColumn toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("SPEND_IN_DOLLAR")))
        return AdsAnalyticsFilterColumn::eAdsAnalyticsFilterColumn::AdsAnalyticsFilterColumn_SPEND_IN_DOLLAR;
    if (val == utility::conversions::to_string_t(U("TOTAL_IMPRESSION")))
        return AdsAnalyticsFilterColumn::eAdsAnalyticsFilterColumn::AdsAnalyticsFilterColumn_TOTAL_IMPRESSION;
    return {};
}

EnumUnderlyingType fromEnum(AdsAnalyticsFilterColumn::eAdsAnalyticsFilterColumn e)
{
    switch (e)
    {
    case AdsAnalyticsFilterColumn::eAdsAnalyticsFilterColumn::AdsAnalyticsFilterColumn_SPEND_IN_DOLLAR:
        return U("SPEND_IN_DOLLAR");
    case AdsAnalyticsFilterColumn::eAdsAnalyticsFilterColumn::AdsAnalyticsFilterColumn_TOTAL_IMPRESSION:
        return U("TOTAL_IMPRESSION");
    default:
        break;
    }
    return {};
}
}

AdsAnalyticsFilterColumn::AdsAnalyticsFilterColumn()
{
}

AdsAnalyticsFilterColumn::~AdsAnalyticsFilterColumn()
{
}

void AdsAnalyticsFilterColumn::validate()
{
    // TODO: implement validation
}

web::json::value AdsAnalyticsFilterColumn::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool AdsAnalyticsFilterColumn::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void AdsAnalyticsFilterColumn::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool AdsAnalyticsFilterColumn::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

AdsAnalyticsFilterColumn::eAdsAnalyticsFilterColumn AdsAnalyticsFilterColumn::getValue() const
{
   return m_value;
}

void AdsAnalyticsFilterColumn::setValue(AdsAnalyticsFilterColumn::eAdsAnalyticsFilterColumn const value)
{
   m_value = value;
}


}
}
}
}


