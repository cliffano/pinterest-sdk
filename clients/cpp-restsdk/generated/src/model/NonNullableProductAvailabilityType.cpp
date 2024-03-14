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



#include "CppRestOpenAPIClient/model/NonNullableProductAvailabilityType.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = utility::string_t;

NonNullableProductAvailabilityType::eNonNullableProductAvailabilityType toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("IN_STOCK")))
        return NonNullableProductAvailabilityType::eNonNullableProductAvailabilityType::NonNullableProductAvailabilityType_IN_STOCK;
    if (val == utility::conversions::to_string_t(U("OUT_OF_STOCK")))
        return NonNullableProductAvailabilityType::eNonNullableProductAvailabilityType::NonNullableProductAvailabilityType_OUT_OF_STOCK;
    if (val == utility::conversions::to_string_t(U("PREORDER")))
        return NonNullableProductAvailabilityType::eNonNullableProductAvailabilityType::NonNullableProductAvailabilityType_PREORDER;
    return {};
}

EnumUnderlyingType fromEnum(NonNullableProductAvailabilityType::eNonNullableProductAvailabilityType e)
{
    switch (e)
    {
    case NonNullableProductAvailabilityType::eNonNullableProductAvailabilityType::NonNullableProductAvailabilityType_IN_STOCK:
        return U("IN_STOCK");
    case NonNullableProductAvailabilityType::eNonNullableProductAvailabilityType::NonNullableProductAvailabilityType_OUT_OF_STOCK:
        return U("OUT_OF_STOCK");
    case NonNullableProductAvailabilityType::eNonNullableProductAvailabilityType::NonNullableProductAvailabilityType_PREORDER:
        return U("PREORDER");
    default:
        break;
    }
    return {};
}
}

NonNullableProductAvailabilityType::NonNullableProductAvailabilityType()
{
}

NonNullableProductAvailabilityType::~NonNullableProductAvailabilityType()
{
}

void NonNullableProductAvailabilityType::validate()
{
    // TODO: implement validation
}

web::json::value NonNullableProductAvailabilityType::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool NonNullableProductAvailabilityType::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void NonNullableProductAvailabilityType::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool NonNullableProductAvailabilityType::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

NonNullableProductAvailabilityType::eNonNullableProductAvailabilityType NonNullableProductAvailabilityType::getValue() const
{
   return m_value;
}

void NonNullableProductAvailabilityType::setValue(NonNullableProductAvailabilityType::eNonNullableProductAvailabilityType const value)
{
   m_value = value;
}


}
}
}
}


