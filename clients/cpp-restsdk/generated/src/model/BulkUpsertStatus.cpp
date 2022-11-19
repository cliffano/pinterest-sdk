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



#include "CppRestOpenAPIClient/model/BulkUpsertStatus.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = utility::string_t;

BulkUpsertStatus::eBulkUpsertStatus toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("RUNNING")))
        return BulkUpsertStatus::eBulkUpsertStatus::BulkUpsertStatus_RUNNING;
    if (val == utility::conversions::to_string_t(U("SUCCEEDED")))
        return BulkUpsertStatus::eBulkUpsertStatus::BulkUpsertStatus_SUCCEEDED;
    if (val == utility::conversions::to_string_t(U("FAILED")))
        return BulkUpsertStatus::eBulkUpsertStatus::BulkUpsertStatus_FAILED;
    return {};
}

EnumUnderlyingType fromEnum(BulkUpsertStatus::eBulkUpsertStatus e)
{
    switch (e)
    {
    case BulkUpsertStatus::eBulkUpsertStatus::BulkUpsertStatus_RUNNING:
        return U("RUNNING");
    case BulkUpsertStatus::eBulkUpsertStatus::BulkUpsertStatus_SUCCEEDED:
        return U("SUCCEEDED");
    case BulkUpsertStatus::eBulkUpsertStatus::BulkUpsertStatus_FAILED:
        return U("FAILED");
    default:
        break;
    }
    return {};
}
}

BulkUpsertStatus::BulkUpsertStatus()
{
}

BulkUpsertStatus::~BulkUpsertStatus()
{
}

void BulkUpsertStatus::validate()
{
    // TODO: implement validation
}

web::json::value BulkUpsertStatus::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool BulkUpsertStatus::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void BulkUpsertStatus::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool BulkUpsertStatus::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

BulkUpsertStatus::eBulkUpsertStatus BulkUpsertStatus::getValue() const
{
   return m_value;
}

void BulkUpsertStatus::setValue(BulkUpsertStatus::eBulkUpsertStatus const value)
{
   m_value = value;
}


}
}
}
}


