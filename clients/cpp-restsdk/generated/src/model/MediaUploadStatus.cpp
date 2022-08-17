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



#include "CppRestOpenAPIClient/model/MediaUploadStatus.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


namespace
{
using EnumUnderlyingType = utility::string_t;

MediaUploadStatus::eMediaUploadStatus toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("registered")))
        return MediaUploadStatus::eMediaUploadStatus::MediaUploadStatus_REGISTERED;
    if (val == utility::conversions::to_string_t(U("processing")))
        return MediaUploadStatus::eMediaUploadStatus::MediaUploadStatus_PROCESSING;
    if (val == utility::conversions::to_string_t(U("succeeded")))
        return MediaUploadStatus::eMediaUploadStatus::MediaUploadStatus_SUCCEEDED;
    if (val == utility::conversions::to_string_t(U("failed")))
        return MediaUploadStatus::eMediaUploadStatus::MediaUploadStatus_FAILED;
    return {};
}

EnumUnderlyingType fromEnum(MediaUploadStatus::eMediaUploadStatus e)
{
    switch (e)
    {
    case MediaUploadStatus::eMediaUploadStatus::MediaUploadStatus_REGISTERED:
        return U("registered");
    case MediaUploadStatus::eMediaUploadStatus::MediaUploadStatus_PROCESSING:
        return U("processing");
    case MediaUploadStatus::eMediaUploadStatus::MediaUploadStatus_SUCCEEDED:
        return U("succeeded");
    case MediaUploadStatus::eMediaUploadStatus::MediaUploadStatus_FAILED:
        return U("failed");
    default:
        break;
    }
    return {};
}
}

MediaUploadStatus::MediaUploadStatus()
{
}

MediaUploadStatus::~MediaUploadStatus()
{
}

void MediaUploadStatus::validate()
{
    // TODO: implement validation
}

web::json::value MediaUploadStatus::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool MediaUploadStatus::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void MediaUploadStatus::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool MediaUploadStatus::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

MediaUploadStatus::eMediaUploadStatus MediaUploadStatus::getValue() const
{
   return m_value;
}

void MediaUploadStatus::setValue(MediaUploadStatus::eMediaUploadStatus const value)
{
   m_value = value;
}


}
}
}
}


