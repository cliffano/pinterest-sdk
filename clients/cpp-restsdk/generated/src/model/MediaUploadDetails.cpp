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



#include "CppRestOpenAPIClient/model/MediaUploadDetails.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



MediaUploadDetails::MediaUploadDetails()
{
    m_Media_id = utility::conversions::to_string_t("");
    m_Media_idIsSet = false;
    m_Media_type = utility::conversions::to_string_t("");
    m_Media_typeIsSet = false;
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
}

MediaUploadDetails::~MediaUploadDetails()
{
}

void MediaUploadDetails::validate()
{
    // TODO: implement validation
}

web::json::value MediaUploadDetails::toJson() const
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
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }

    return val;
}

bool MediaUploadDetails::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("media_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("media_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMediaId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMediaId);
            setMediaId(refVal_setMediaId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("media_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("media_type")));
        if(!fieldValue.is_null())
        {
            MediaUploadType refVal_setMediaType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMediaType);
            setMediaType(refVal_setMediaType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            MediaUploadStatus refVal_setStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatus);
            setStatus(refVal_setStatus);
        }
    }
    return ok;
}

void MediaUploadDetails::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
    }
}

bool MediaUploadDetails::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("media_id"))))
    {
        utility::string_t refVal_setMediaId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("media_id"))), refVal_setMediaId );
        setMediaId(refVal_setMediaId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("media_type"))))
    {
        MediaUploadType refVal_setMediaType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("media_type"))), refVal_setMediaType );
        setMediaType(refVal_setMediaType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        MediaUploadStatus refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    return ok;
}

utility::string_t MediaUploadDetails::getMediaId() const
{
    return m_Media_id;
}

void MediaUploadDetails::setMediaId(const utility::string_t& value)
{
    m_Media_id = value;
    m_Media_idIsSet = true;
}

bool MediaUploadDetails::mediaIdIsSet() const
{
    return m_Media_idIsSet;
}

void MediaUploadDetails::unsetMedia_id()
{
    m_Media_idIsSet = false;
}
MediaUploadType MediaUploadDetails::getMediaType() const
{
    return m_Media_type;
}

void MediaUploadDetails::setMediaType(const MediaUploadType& value)
{
    m_Media_type = value;
    m_Media_typeIsSet = true;
}

bool MediaUploadDetails::mediaTypeIsSet() const
{
    return m_Media_typeIsSet;
}

void MediaUploadDetails::unsetMedia_type()
{
    m_Media_typeIsSet = false;
}
MediaUploadStatus MediaUploadDetails::getStatus() const
{
    return m_Status;
}

void MediaUploadDetails::setStatus(const MediaUploadStatus& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool MediaUploadDetails::statusIsSet() const
{
    return m_StatusIsSet;
}

void MediaUploadDetails::unsetStatus()
{
    m_StatusIsSet = false;
}
}
}
}
}


