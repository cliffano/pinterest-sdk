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



#include "MediaUploadType.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



namespace
{
using EnumUnderlyingType = utility::string_t;

MediaUploadType::eMediaUploadType toEnum(const EnumUnderlyingType& val)
{
    if (val == utility::conversions::to_string_t(U("video")))
        return MediaUploadType::eMediaUploadType::MediaUploadType_VIDEO;
    return {};
}

EnumUnderlyingType fromEnum(MediaUploadType::eMediaUploadType e)
{
    switch (e)
    {
    case MediaUploadType::eMediaUploadType::MediaUploadType_VIDEO:
        return U("video");
    default:
        break;
    }
    return {};
}
}

MediaUploadType::MediaUploadType()
{
}

MediaUploadType::~MediaUploadType()
{
}

void MediaUploadType::validate()
{
    // TODO: implement validation
}

web::json::value MediaUploadType::toJson() const
{
    auto val = fromEnum(m_value);
    return web::json::value(val);
}

bool MediaUploadType::fromJson(const web::json::value& val)
{
    m_value = toEnum(val.as_string());
    return true;
}

void MediaUploadType::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if (!namePrefix.empty() && namePrefix.back() != U('.'))
    {
        namePrefix.push_back(U('.'));
    }

    auto e = fromEnum(m_value);
    multipart->add(ModelBase::toHttpContent(namePrefix, e));
}

bool MediaUploadType::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

MediaUploadType::eMediaUploadType MediaUploadType::getValue() const
{
   return m_value;
}

void MediaUploadType::setValue(MediaUploadType::eMediaUploadType const value)
{
   m_value = value;
}


}
}
}
}


