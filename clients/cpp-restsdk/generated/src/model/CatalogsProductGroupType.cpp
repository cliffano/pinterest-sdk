/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/CatalogsProductGroupType.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = utility::string_t;

CatalogsProductGroupType::eCatalogsProductGroupType toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("MERCHANT_CREATED")))
        return CatalogsProductGroupType::eCatalogsProductGroupType::CatalogsProductGroupType_MERCHANT_CREATED;
    if (val == utility::conversions::to_string_t(U("ALL_PRODUCTS")))
        return CatalogsProductGroupType::eCatalogsProductGroupType::CatalogsProductGroupType_ALL_PRODUCTS;
    if (val == utility::conversions::to_string_t(U("BEST_DEALS")))
        return CatalogsProductGroupType::eCatalogsProductGroupType::CatalogsProductGroupType_BEST_DEALS;
    if (val == utility::conversions::to_string_t(U("PINNER_FAVORITES")))
        return CatalogsProductGroupType::eCatalogsProductGroupType::CatalogsProductGroupType_PINNER_FAVORITES;
    if (val == utility::conversions::to_string_t(U("TOP_SELLERS")))
        return CatalogsProductGroupType::eCatalogsProductGroupType::CatalogsProductGroupType_TOP_SELLERS;
    if (val == utility::conversions::to_string_t(U("BACK_IN_STOCK")))
        return CatalogsProductGroupType::eCatalogsProductGroupType::CatalogsProductGroupType_BACK_IN_STOCK;
    if (val == utility::conversions::to_string_t(U("NEW_ARRIVALS")))
        return CatalogsProductGroupType::eCatalogsProductGroupType::CatalogsProductGroupType_NEW_ARRIVALS;
    return {};
}

EnumUnderlyingType fromEnum(CatalogsProductGroupType::eCatalogsProductGroupType e)
{
    switch (e)
    {
    case CatalogsProductGroupType::eCatalogsProductGroupType::CatalogsProductGroupType_MERCHANT_CREATED:
        return U("MERCHANT_CREATED");
    case CatalogsProductGroupType::eCatalogsProductGroupType::CatalogsProductGroupType_ALL_PRODUCTS:
        return U("ALL_PRODUCTS");
    case CatalogsProductGroupType::eCatalogsProductGroupType::CatalogsProductGroupType_BEST_DEALS:
        return U("BEST_DEALS");
    case CatalogsProductGroupType::eCatalogsProductGroupType::CatalogsProductGroupType_PINNER_FAVORITES:
        return U("PINNER_FAVORITES");
    case CatalogsProductGroupType::eCatalogsProductGroupType::CatalogsProductGroupType_TOP_SELLERS:
        return U("TOP_SELLERS");
    case CatalogsProductGroupType::eCatalogsProductGroupType::CatalogsProductGroupType_BACK_IN_STOCK:
        return U("BACK_IN_STOCK");
    case CatalogsProductGroupType::eCatalogsProductGroupType::CatalogsProductGroupType_NEW_ARRIVALS:
        return U("NEW_ARRIVALS");
    default:
        break;
    }
    return {};
}
}

CatalogsProductGroupType::CatalogsProductGroupType()
{
}

CatalogsProductGroupType::~CatalogsProductGroupType()
{
}

void CatalogsProductGroupType::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsProductGroupType::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool CatalogsProductGroupType::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void CatalogsProductGroupType::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool CatalogsProductGroupType::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

CatalogsProductGroupType::eCatalogsProductGroupType CatalogsProductGroupType::getValue() const
{
   return m_value;
}

void CatalogsProductGroupType::setValue(CatalogsProductGroupType::eCatalogsProductGroupType const value)
{
   m_value = value;
}


}
}
}
}


