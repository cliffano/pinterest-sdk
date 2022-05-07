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



#include "MediaUpload_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




MediaUpload_allOf::MediaUpload_allOf()
{
    m_Media_id = utility::conversions::to_string_t("");
    m_Media_idIsSet = false;
    m_Media_type = utility::conversions::to_string_t("");
    m_Media_typeIsSet = false;
    m_Upload_url = utility::conversions::to_string_t("");
    m_Upload_urlIsSet = false;
    m_Upload_parametersIsSet = false;
}

MediaUpload_allOf::~MediaUpload_allOf()
{
}

void MediaUpload_allOf::validate()
{
    // TODO: implement validation
}

web::json::value MediaUpload_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Media_idIsSet)
    {
        val[utility::conversions::to_string_t(U("media_id"))] = ModelBase::toJson(m_Media_id);
    }
    if(m_Media_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("media_type"))] = ModelBase::toJson(m_Media_type);
    }
    if(m_Upload_urlIsSet)
    {
        val[utility::conversions::to_string_t(U("upload_url"))] = ModelBase::toJson(m_Upload_url);
    }
    if(m_Upload_parametersIsSet)
    {
        val[utility::conversions::to_string_t(U("upload_parameters"))] = ModelBase::toJson(m_Upload_parameters);
    }

    return val;
}

bool MediaUpload_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t(U("media_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("media_type")));
        if(!fieldValue.is_null())
        {
            MediaUploadType refVal_media_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_media_type);
            setMediaType(refVal_media_type);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("upload_url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("upload_url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_upload_url;
            ok &= ModelBase::fromJson(fieldValue, refVal_upload_url);
            setUploadUrl(refVal_upload_url);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("upload_parameters"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("upload_parameters")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<MediaUpload_allOf_upload_parameters> refVal_upload_parameters;
            ok &= ModelBase::fromJson(fieldValue, refVal_upload_parameters);
            setUploadParameters(refVal_upload_parameters);
        }
    }
    return ok;
}

void MediaUpload_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Media_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("media_id")), m_Media_id));
    }
    if(m_Media_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("media_type")), m_Media_type));
    }
    if(m_Upload_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("upload_url")), m_Upload_url));
    }
    if(m_Upload_parametersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("upload_parameters")), m_Upload_parameters));
    }
}

bool MediaUpload_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("media_id"))))
    {
        utility::string_t refVal_media_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("media_id"))), refVal_media_id );
        setMediaId(refVal_media_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("media_type"))))
    {
        MediaUploadType refVal_media_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("media_type"))), refVal_media_type );
        setMediaType(refVal_media_type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("upload_url"))))
    {
        utility::string_t refVal_upload_url;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("upload_url"))), refVal_upload_url );
        setUploadUrl(refVal_upload_url);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("upload_parameters"))))
    {
        std::shared_ptr<MediaUpload_allOf_upload_parameters> refVal_upload_parameters;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("upload_parameters"))), refVal_upload_parameters );
        setUploadParameters(refVal_upload_parameters);
    }
    return ok;
}

utility::string_t MediaUpload_allOf::getMediaId() const
{
    return m_Media_id;
}

void MediaUpload_allOf::setMediaId(const utility::string_t& value)
{
    m_Media_id = value;
    m_Media_idIsSet = true;
}

bool MediaUpload_allOf::mediaIdIsSet() const
{
    return m_Media_idIsSet;
}

void MediaUpload_allOf::unsetMedia_id()
{
    m_Media_idIsSet = false;
}
MediaUploadType MediaUpload_allOf::getMediaType() const
{
    return m_Media_type;
}

void MediaUpload_allOf::setMediaType(const MediaUploadType& value)
{
    m_Media_type = value;
    m_Media_typeIsSet = true;
}

bool MediaUpload_allOf::mediaTypeIsSet() const
{
    return m_Media_typeIsSet;
}

void MediaUpload_allOf::unsetMedia_type()
{
    m_Media_typeIsSet = false;
}
utility::string_t MediaUpload_allOf::getUploadUrl() const
{
    return m_Upload_url;
}

void MediaUpload_allOf::setUploadUrl(const utility::string_t& value)
{
    m_Upload_url = value;
    m_Upload_urlIsSet = true;
}

bool MediaUpload_allOf::uploadUrlIsSet() const
{
    return m_Upload_urlIsSet;
}

void MediaUpload_allOf::unsetUpload_url()
{
    m_Upload_urlIsSet = false;
}
std::shared_ptr<MediaUpload_allOf_upload_parameters> MediaUpload_allOf::getUploadParameters() const
{
    return m_Upload_parameters;
}

void MediaUpload_allOf::setUploadParameters(const std::shared_ptr<MediaUpload_allOf_upload_parameters>& value)
{
    m_Upload_parameters = value;
    m_Upload_parametersIsSet = true;
}

bool MediaUpload_allOf::uploadParametersIsSet() const
{
    return m_Upload_parametersIsSet;
}

void MediaUpload_allOf::unsetUpload_parameters()
{
    m_Upload_parametersIsSet = false;
}
}
}
}
}


