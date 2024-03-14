/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/PinMediaWithVideo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



PinMediaWithVideo::PinMediaWithVideo()
{
    m_ImagesIsSet = false;
    m_Cover_image_url = utility::conversions::to_string_t("");
    m_Cover_image_urlIsSet = false;
    m_Duration = 0.0;
    m_DurationIsSet = false;
    m_Height = 0;
    m_HeightIsSet = false;
    m_Width = 0;
    m_WidthIsSet = false;
}

PinMediaWithVideo::~PinMediaWithVideo()
{
}

void PinMediaWithVideo::validate()
{
    // TODO: implement validation
}

web::json::value PinMediaWithVideo::toJson() const
{
    web::json::value val = this->PinMedia::toJson();
    
    if(m_ImagesIsSet)
    {
        val[utility::conversions::to_string_t(U("images"))] = ModelBase::toJson(m_Images);
    }
    if(m_Cover_image_urlIsSet)
    {
        val[utility::conversions::to_string_t(U("cover_image_url"))] = ModelBase::toJson(m_Cover_image_url);
    }
    if(m_DurationIsSet)
    {
        val[utility::conversions::to_string_t(U("duration"))] = ModelBase::toJson(m_Duration);
    }
    if(m_HeightIsSet)
    {
        val[utility::conversions::to_string_t(U("height"))] = ModelBase::toJson(m_Height);
    }
    if(m_WidthIsSet)
    {
        val[utility::conversions::to_string_t(U("width"))] = ModelBase::toJson(m_Width);
    }

    return val;
}

bool PinMediaWithVideo::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->PinMedia::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("images"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("images")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, std::shared_ptr<ImageDetails>> refVal_setImages;
            ok &= ModelBase::fromJson(fieldValue, refVal_setImages);
            setImages(refVal_setImages);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("cover_image_url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("cover_image_url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCoverImageUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCoverImageUrl);
            setCoverImageUrl(refVal_setCoverImageUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("duration"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("duration")));
        if(!fieldValue.is_null())
        {
            double refVal_setDuration;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDuration);
            setDuration(refVal_setDuration);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("height"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("height")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setHeight;
            ok &= ModelBase::fromJson(fieldValue, refVal_setHeight);
            setHeight(refVal_setHeight);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("width"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("width")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setWidth;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWidth);
            setWidth(refVal_setWidth);
        }
    }
    return ok;
}

void PinMediaWithVideo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Media_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("media_type")), m_Media_type));
    }
    if(m_ImagesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("images")), m_Images));
    }
    if(m_Cover_image_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cover_image_url")), m_Cover_image_url));
    }
    if(m_DurationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("duration")), m_Duration));
    }
    if(m_HeightIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("height")), m_Height));
    }
    if(m_WidthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("width")), m_Width));
    }
}

bool PinMediaWithVideo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("media_type"))))
    {
        utility::string_t refVal_setMediaType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("media_type"))), refVal_setMediaType );
        setMediaType(refVal_setMediaType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("images"))))
    {
        std::map<utility::string_t, std::shared_ptr<ImageDetails>> refVal_setImages;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("images"))), refVal_setImages );
        setImages(refVal_setImages);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("cover_image_url"))))
    {
        utility::string_t refVal_setCoverImageUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cover_image_url"))), refVal_setCoverImageUrl );
        setCoverImageUrl(refVal_setCoverImageUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("duration"))))
    {
        double refVal_setDuration;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("duration"))), refVal_setDuration );
        setDuration(refVal_setDuration);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("height"))))
    {
        int32_t refVal_setHeight;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("height"))), refVal_setHeight );
        setHeight(refVal_setHeight);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("width"))))
    {
        int32_t refVal_setWidth;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("width"))), refVal_setWidth );
        setWidth(refVal_setWidth);
    }
    return ok;
}

std::map<utility::string_t, std::shared_ptr<ImageDetails>>& PinMediaWithVideo::getImages()
{
    return m_Images;
}

void PinMediaWithVideo::setImages(const std::map<utility::string_t, std::shared_ptr<ImageDetails>>& value)
{
    m_Images = value;
    m_ImagesIsSet = true;
}

bool PinMediaWithVideo::imagesIsSet() const
{
    return m_ImagesIsSet;
}

void PinMediaWithVideo::unsetImages()
{
    m_ImagesIsSet = false;
}
utility::string_t PinMediaWithVideo::getCoverImageUrl() const
{
    return m_Cover_image_url;
}

void PinMediaWithVideo::setCoverImageUrl(const utility::string_t& value)
{
    m_Cover_image_url = value;
    m_Cover_image_urlIsSet = true;
}

bool PinMediaWithVideo::coverImageUrlIsSet() const
{
    return m_Cover_image_urlIsSet;
}

void PinMediaWithVideo::unsetCover_image_url()
{
    m_Cover_image_urlIsSet = false;
}
double PinMediaWithVideo::getDuration() const
{
    return m_Duration;
}

void PinMediaWithVideo::setDuration(double value)
{
    m_Duration = value;
    m_DurationIsSet = true;
}

bool PinMediaWithVideo::durationIsSet() const
{
    return m_DurationIsSet;
}

void PinMediaWithVideo::unsetDuration()
{
    m_DurationIsSet = false;
}
int32_t PinMediaWithVideo::getHeight() const
{
    return m_Height;
}

void PinMediaWithVideo::setHeight(int32_t value)
{
    m_Height = value;
    m_HeightIsSet = true;
}

bool PinMediaWithVideo::heightIsSet() const
{
    return m_HeightIsSet;
}

void PinMediaWithVideo::unsetHeight()
{
    m_HeightIsSet = false;
}
int32_t PinMediaWithVideo::getWidth() const
{
    return m_Width;
}

void PinMediaWithVideo::setWidth(int32_t value)
{
    m_Width = value;
    m_WidthIsSet = true;
}

bool PinMediaWithVideo::widthIsSet() const
{
    return m_WidthIsSet;
}

void PinMediaWithVideo::unsetWidth()
{
    m_WidthIsSet = false;
}
}
}
}
}


