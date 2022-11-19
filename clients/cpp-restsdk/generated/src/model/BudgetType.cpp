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



#include "CppRestOpenAPIClient/model/BudgetType.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = utility::string_t;

BudgetType::eBudgetType toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("DAILY")))
        return BudgetType::eBudgetType::BudgetType_DAILY;
    if (val == utility::conversions::to_string_t(U("LIFETIME")))
        return BudgetType::eBudgetType::BudgetType_LIFETIME;
    if (val == utility::conversions::to_string_t(U("CBO_ADGROUP")))
        return BudgetType::eBudgetType::BudgetType_CBO_ADGROUP;
    return {};
}

EnumUnderlyingType fromEnum(BudgetType::eBudgetType e)
{
    switch (e)
    {
    case BudgetType::eBudgetType::BudgetType_DAILY:
        return U("DAILY");
    case BudgetType::eBudgetType::BudgetType_LIFETIME:
        return U("LIFETIME");
    case BudgetType::eBudgetType::BudgetType_CBO_ADGROUP:
        return U("CBO_ADGROUP");
    default:
        break;
    }
    return {};
}
}

BudgetType::BudgetType()
{
}

BudgetType::~BudgetType()
{
}

void BudgetType::validate()
{
    // TODO: implement validation
}

web::json::value BudgetType::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool BudgetType::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void BudgetType::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool BudgetType::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

BudgetType::eBudgetType BudgetType::getValue() const
{
   return m_value;
}

void BudgetType::setValue(BudgetType::eBudgetType const value)
{
   m_value = value;
}


}
}
}
}


