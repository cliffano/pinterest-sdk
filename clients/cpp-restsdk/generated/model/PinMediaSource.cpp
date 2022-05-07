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



#include "PinMediaSource.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




PinMediaSource::PinMediaSource()
{
    m_Source_type = utility::conversions::to_string_t("");
    m_Source_typeIsSet = false;
    m_Content_type = utility::conversions::to_string_t("");
    m_Content_typeIsSet = false;
    m_Data = utility::conversions::to_string_t("");
    m_DataIsSet = false;
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
    m_Cover_image_url = utility::conversions::to_string_t("");
    m_Cover_image_urlIsSet = false;
    m_Media_id = utility::conversions::to_string_t("");
    m_Media_idIsSet = false;
}

PinMediaSource::~PinMediaSource()
{
}

void PinMediaSource::validate()
{
    // TODO: implement validation
}

web::json::value PinMediaSource::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Source_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("source_type"))] = ModelBase::toJson(m_Source_type);
    }
    if(m_Content_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("content_type"))] = ModelBase::toJson(m_Content_type);
    }
    if(m_DataIsSet)
    {
        val[utility::conversions::to_string_t(U("data"))] = ModelBase::toJson(m_Data);
    }
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t(U("url"))] = ModelBase::toJson(m_Url);
    }
    if(m_Cover_image_urlIsSet)
    {
        val[utility::conversions::to_string_t(U("cover_image_url"))] = ModelBase::toJson(m_Cover_image_url);
    }
    if(m_Media_idIsSet)
    {
        val[utility::conversions::to_string_t(U("media_id"))] = ModelBase::toJson(m_Media_id);
    }

    return val;
}

bool PinMediaSource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("source_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("source_type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_source_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_source_type);
            setSourceType(refVal_source_type);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("content_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("content_type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_content_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_content_type);
            setContentType(refVal_content_type);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("data"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("data")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_data;
            ok &= ModelBase::fromJson(fieldValue, refVal_data);
            setData(refVal_data);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_url;
            ok &= ModelBase::fromJson(fieldValue, refVal_url);
            setUrl(refVal_url);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("cover_image_url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("cover_image_url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_cover_image_url;
            ok &= ModelBase::fromJson(fieldValue, refVal_cover_image_url);
            setCoverImageUrl(refVal_cover_image_url);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("media_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("media_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_media_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_media_id);
            setMediaId(refVal_media_id);
        }
    }
    return ok;
}

void PinMediaSource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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

bool PinMediaSource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("source_type"))))
    {
        utility::string_t refVal_source_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("source_type"))), refVal_source_type );
        setSourceType(refVal_source_type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("content_type"))))
    {
        utility::string_t refVal_content_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("content_type"))), refVal_content_type );
        setContentType(refVal_content_type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("data"))))
    {
        utility::string_t refVal_data;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("data"))), refVal_data );
        setData(refVal_data);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("url"))))
    {
        utility::string_t refVal_url;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("url"))), refVal_url );
        setUrl(refVal_url);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("cover_image_url"))))
    {
        utility::string_t refVal_cover_image_url;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cover_image_url"))), refVal_cover_image_url );
        setCoverImageUrl(refVal_cover_image_url);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("media_id"))))
    {
        utility::string_t refVal_media_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("media_id"))), refVal_media_id );
        setMediaId(refVal_media_id);
    }
    return ok;
}

utility::string_t PinMediaSource::getSourceType() const
{
    return m_Source_type;
}

void PinMediaSource::setSourceType(const utility::string_t& value)
{
    m_Source_type = value;
    m_Source_typeIsSet = true;
}

bool PinMediaSource::sourceTypeIsSet() const
{
    return m_Source_typeIsSet;
}

void PinMediaSource::unsetSource_type()
{
    m_Source_typeIsSet = false;
}
utility::string_t PinMediaSource::getContentType() const
{
    return m_Content_type;
}

void PinMediaSource::setContentType(const utility::string_t& value)
{
    m_Content_type = value;
    m_Content_typeIsSet = true;
}

bool PinMediaSource::contentTypeIsSet() const
{
    return m_Content_typeIsSet;
}

void PinMediaSource::unsetContent_type()
{
    m_Content_typeIsSet = false;
}
utility::string_t PinMediaSource::getData() const
{
    return m_Data;
}

void PinMediaSource::setData(const utility::string_t& value)
{
    m_Data = value;
    m_DataIsSet = true;
}

bool PinMediaSource::dataIsSet() const
{
    return m_DataIsSet;
}

void PinMediaSource::unsetData()
{
    m_DataIsSet = false;
}
utility::string_t PinMediaSource::getUrl() const
{
    return m_Url;
}

void PinMediaSource::setUrl(const utility::string_t& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}

bool PinMediaSource::urlIsSet() const
{
    return m_UrlIsSet;
}

void PinMediaSource::unsetUrl()
{
    m_UrlIsSet = false;
}
utility::string_t PinMediaSource::getCoverImageUrl() const
{
    return m_Cover_image_url;
}

void PinMediaSource::setCoverImageUrl(const utility::string_t& value)
{
    m_Cover_image_url = value;
    m_Cover_image_urlIsSet = true;
}

bool PinMediaSource::coverImageUrlIsSet() const
{
    return m_Cover_image_urlIsSet;
}

void PinMediaSource::unsetCover_image_url()
{
    m_Cover_image_urlIsSet = false;
}
utility::string_t PinMediaSource::getMediaId() const
{
    return m_Media_id;
}

void PinMediaSource::setMediaId(const utility::string_t& value)
{
    m_Media_id = value;
    m_Media_idIsSet = true;
}

bool PinMediaSource::mediaIdIsSet() const
{
    return m_Media_idIsSet;
}

void PinMediaSource::unsetMedia_id()
{
    m_Media_idIsSet = false;
}
}
}
}
}


