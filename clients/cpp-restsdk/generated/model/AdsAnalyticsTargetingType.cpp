/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "AdsAnalyticsTargetingType.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



namespace
{
using EnumUnderlyingType = utility::string_t;

AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("KEYWORD")))
        return AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_KEYWORD;
    if (val == utility::conversions::to_string_t(U("APPTYPE")))
        return AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_APPTYPE;
    if (val == utility::conversions::to_string_t(U("GENDER")))
        return AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_GENDER;
    if (val == utility::conversions::to_string_t(U("LOCATION")))
        return AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_LOCATION;
    if (val == utility::conversions::to_string_t(U("PLACEMENT")))
        return AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_PLACEMENT;
    if (val == utility::conversions::to_string_t(U("COUNTRY")))
        return AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_COUNTRY;
    if (val == utility::conversions::to_string_t(U("TARGETED_INTEREST")))
        return AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_TARGETED_INTEREST;
    if (val == utility::conversions::to_string_t(U("PINNER_INTEREST")))
        return AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_PINNER_INTEREST;
    if (val == utility::conversions::to_string_t(U("AUDIENCE_INCLUDE")))
        return AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_AUDIENCE_INCLUDE;
    if (val == utility::conversions::to_string_t(U("AUDIENCE_EXCLUDE")))
        return AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_AUDIENCE_EXCLUDE;
    if (val == utility::conversions::to_string_t(U("GEO")))
        return AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_GEO;
    if (val == utility::conversions::to_string_t(U("AGE_BUCKET")))
        return AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_AGE_BUCKET;
    if (val == utility::conversions::to_string_t(U("REGION")))
        return AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_REGION;
    return {};
}

EnumUnderlyingType fromEnum(AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType e)
{
    switch (e)
    {
    case AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_KEYWORD:
        return U("KEYWORD");
    case AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_APPTYPE:
        return U("APPTYPE");
    case AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_GENDER:
        return U("GENDER");
    case AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_LOCATION:
        return U("LOCATION");
    case AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_PLACEMENT:
        return U("PLACEMENT");
    case AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_COUNTRY:
        return U("COUNTRY");
    case AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_TARGETED_INTEREST:
        return U("TARGETED_INTEREST");
    case AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_PINNER_INTEREST:
        return U("PINNER_INTEREST");
    case AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_AUDIENCE_INCLUDE:
        return U("AUDIENCE_INCLUDE");
    case AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_AUDIENCE_EXCLUDE:
        return U("AUDIENCE_EXCLUDE");
    case AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_GEO:
        return U("GEO");
    case AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_AGE_BUCKET:
        return U("AGE_BUCKET");
    case AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType::AdsAnalyticsTargetingType_REGION:
        return U("REGION");
    default:
        break;
    }
    return {};
}
}

AdsAnalyticsTargetingType::AdsAnalyticsTargetingType()
{
}

AdsAnalyticsTargetingType::~AdsAnalyticsTargetingType()
{
}

void AdsAnalyticsTargetingType::validate()
{
    // TODO: implement validation
}

web::json::value AdsAnalyticsTargetingType::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool AdsAnalyticsTargetingType::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void AdsAnalyticsTargetingType::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool AdsAnalyticsTargetingType::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType AdsAnalyticsTargetingType::getValue() const
{
   return m_value;
}

void AdsAnalyticsTargetingType::setValue(AdsAnalyticsTargetingType::eAdsAnalyticsTargetingType const value)
{
   m_value = value;
}


}
}
}
}


