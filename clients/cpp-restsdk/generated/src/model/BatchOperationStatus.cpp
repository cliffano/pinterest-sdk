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



#include "CppRestOpenAPIClient/model/BatchOperationStatus.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = utility::string_t;

BatchOperationStatus::eBatchOperationStatus toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("PROCESSING")))
        return BatchOperationStatus::eBatchOperationStatus::BatchOperationStatus_PROCESSING;
    if (val == utility::conversions::to_string_t(U("COMPLETED")))
        return BatchOperationStatus::eBatchOperationStatus::BatchOperationStatus_COMPLETED;
    return {};
}

EnumUnderlyingType fromEnum(BatchOperationStatus::eBatchOperationStatus e)
{
    switch (e)
    {
    case BatchOperationStatus::eBatchOperationStatus::BatchOperationStatus_PROCESSING:
        return U("PROCESSING");
    case BatchOperationStatus::eBatchOperationStatus::BatchOperationStatus_COMPLETED:
        return U("COMPLETED");
    default:
        break;
    }
    return {};
}
}

BatchOperationStatus::BatchOperationStatus()
{
}

BatchOperationStatus::~BatchOperationStatus()
{
}

void BatchOperationStatus::validate()
{
    // TODO: implement validation
}

web::json::value BatchOperationStatus::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool BatchOperationStatus::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void BatchOperationStatus::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool BatchOperationStatus::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

BatchOperationStatus::eBatchOperationStatus BatchOperationStatus::getValue() const
{
   return m_value;
}

void BatchOperationStatus::setValue(BatchOperationStatus::eBatchOperationStatus const value)
{
   m_value = value;
}


}
}
}
}


