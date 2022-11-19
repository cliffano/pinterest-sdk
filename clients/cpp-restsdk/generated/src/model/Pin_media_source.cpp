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



#include "CppRestOpenAPIClient/model/Pin_media_source.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Pin_media_source::Pin_media_source()
{
}

Pin_media_source::~Pin_media_source()
{
}

void Pin_media_source::validate()
{
    // TODO: implement validation
}

web::json::value Pin_media_source::toJson() const
{

    web::json::value val = web::json::value::object();
    

    return val;
}

bool Pin_media_source::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}

void Pin_media_source::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Source_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("source_type")), m_Source_type));
    }
    if(m_Content_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("content_type")), m_Content_type));
    }
    if(m_DataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("data")), m_Data));
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("url")), m_Url));
    }
    if(m_Cover_image_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cover_image_url")), m_Cover_image_url));
    }
    if(m_Media_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("media_id")), m_Media_id));
    }
}

bool Pin_media_source::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("source_type"))))
    {
        utility::string_t refVal_setSourceType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("source_type"))), refVal_setSourceType );
        setSourceType(refVal_setSourceType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("content_type"))))
    {
        utility::string_t refVal_setContentType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("content_type"))), refVal_setContentType );
        setContentType(refVal_setContentType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("data"))))
    {
        utility::string_t refVal_setData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("data"))), refVal_setData );
        setData(refVal_setData);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("url"))))
    {
        utility::string_t refVal_setUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("url"))), refVal_setUrl );
        setUrl(refVal_setUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("cover_image_url"))))
    {
        utility::string_t refVal_setCoverImageUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cover_image_url"))), refVal_setCoverImageUrl );
        setCoverImageUrl(refVal_setCoverImageUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("media_id"))))
    {
        utility::string_t refVal_setMediaId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("media_id"))), refVal_setMediaId );
        setMediaId(refVal_setMediaId);
    }
    return ok;
}

}
}
}
}


