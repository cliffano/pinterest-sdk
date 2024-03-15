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



#include "CppRestOpenAPIClient/model/PinMediaMetadata.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



PinMediaMetadata::PinMediaMetadata()
{
    m_Item_type = utility::conversions::to_string_t("");
    m_Item_typeIsSet = false;
    m_Title = utility::conversions::to_string_t("");
    m_TitleIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_Link = utility::conversions::to_string_t("");
    m_LinkIsSet = false;
    m_ImagesIsSet = false;
    m_Cover_image_url = utility::conversions::to_string_t("");
    m_Cover_image_urlIsSet = false;
    m_Video_url = utility::conversions::to_string_t("");
    m_Video_urlIsSet = false;
    m_Duration = 0.0;
    m_DurationIsSet = false;
    m_Height = 0;
    m_HeightIsSet = false;
    m_Width = 0;
    m_WidthIsSet = false;
}

PinMediaMetadata::~PinMediaMetadata()
{
}

void PinMediaMetadata::validate()
{
    // TODO: implement validation
}

web::json::value PinMediaMetadata::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Item_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("item_type"))] = ModelBase::toJson(m_Item_type);
    }
    if(m_TitleIsSet)
    {
        val[utility::conversions::to_string_t(U("title"))] = ModelBase::toJson(m_Title);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("description"))] = ModelBase::toJson(m_Description);
    }
    if(m_LinkIsSet)
    {
        val[utility::conversions::to_string_t(U("link"))] = ModelBase::toJson(m_Link);
    }
    if(m_ImagesIsSet)
    {
        val[utility::conversions::to_string_t(U("images"))] = ModelBase::toJson(m_Images);
    }
    if(m_Cover_image_urlIsSet)
    {
        val[utility::conversions::to_string_t(U("cover_image_url"))] = ModelBase::toJson(m_Cover_image_url);
    }
    if(m_Video_urlIsSet)
    {
        val[utility::conversions::to_string_t(U("video_url"))] = ModelBase::toJson(m_Video_url);
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

bool PinMediaMetadata::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("item_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("item_type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setItemType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setItemType);
            setItemType(refVal_setItemType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("title"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("title")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setTitle;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTitle);
            setTitle(refVal_setTitle);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("description"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("description")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDescription;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDescription);
            setDescription(refVal_setDescription);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("link"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("link")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setLink;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLink);
            setLink(refVal_setLink);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("images"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("images")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ImageMetadata_images> refVal_setImages;
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
    if(val.has_field(utility::conversions::to_string_t(U("video_url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("video_url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setVideoUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setVideoUrl);
            setVideoUrl(refVal_setVideoUrl);
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

void PinMediaMetadata::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Item_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("item_type")), m_Item_type));
    }
    if(m_TitleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("title")), m_Title));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("description")), m_Description));
    }
    if(m_LinkIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("link")), m_Link));
    }
    if(m_ImagesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("images")), m_Images));
    }
    if(m_Cover_image_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cover_image_url")), m_Cover_image_url));
    }
    if(m_Video_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("video_url")), m_Video_url));
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

bool PinMediaMetadata::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("item_type"))))
    {
        utility::string_t refVal_setItemType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("item_type"))), refVal_setItemType );
        setItemType(refVal_setItemType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("title"))))
    {
        utility::string_t refVal_setTitle;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("title"))), refVal_setTitle );
        setTitle(refVal_setTitle);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("description"))))
    {
        utility::string_t refVal_setDescription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("description"))), refVal_setDescription );
        setDescription(refVal_setDescription);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("link"))))
    {
        utility::string_t refVal_setLink;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("link"))), refVal_setLink );
        setLink(refVal_setLink);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("images"))))
    {
        std::shared_ptr<ImageMetadata_images> refVal_setImages;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("images"))), refVal_setImages );
        setImages(refVal_setImages);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("cover_image_url"))))
    {
        utility::string_t refVal_setCoverImageUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cover_image_url"))), refVal_setCoverImageUrl );
        setCoverImageUrl(refVal_setCoverImageUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("video_url"))))
    {
        utility::string_t refVal_setVideoUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("video_url"))), refVal_setVideoUrl );
        setVideoUrl(refVal_setVideoUrl);
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

utility::string_t PinMediaMetadata::getItemType() const
{
    return m_Item_type;
}

void PinMediaMetadata::setItemType(const utility::string_t& value)
{
    m_Item_type = value;
    m_Item_typeIsSet = true;
}

bool PinMediaMetadata::itemTypeIsSet() const
{
    return m_Item_typeIsSet;
}

void PinMediaMetadata::unsetItem_type()
{
    m_Item_typeIsSet = false;
}
utility::string_t PinMediaMetadata::getTitle() const
{
    return m_Title;
}

void PinMediaMetadata::setTitle(const utility::string_t& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}

bool PinMediaMetadata::titleIsSet() const
{
    return m_TitleIsSet;
}

void PinMediaMetadata::unsetTitle()
{
    m_TitleIsSet = false;
}
utility::string_t PinMediaMetadata::getDescription() const
{
    return m_Description;
}

void PinMediaMetadata::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool PinMediaMetadata::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void PinMediaMetadata::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t PinMediaMetadata::getLink() const
{
    return m_Link;
}

void PinMediaMetadata::setLink(const utility::string_t& value)
{
    m_Link = value;
    m_LinkIsSet = true;
}

bool PinMediaMetadata::linkIsSet() const
{
    return m_LinkIsSet;
}

void PinMediaMetadata::unsetLink()
{
    m_LinkIsSet = false;
}
std::shared_ptr<ImageMetadata_images> PinMediaMetadata::getImages() const
{
    return m_Images;
}

void PinMediaMetadata::setImages(const std::shared_ptr<ImageMetadata_images>& value)
{
    m_Images = value;
    m_ImagesIsSet = true;
}

bool PinMediaMetadata::imagesIsSet() const
{
    return m_ImagesIsSet;
}

void PinMediaMetadata::unsetImages()
{
    m_ImagesIsSet = false;
}
utility::string_t PinMediaMetadata::getCoverImageUrl() const
{
    return m_Cover_image_url;
}

void PinMediaMetadata::setCoverImageUrl(const utility::string_t& value)
{
    m_Cover_image_url = value;
    m_Cover_image_urlIsSet = true;
}

bool PinMediaMetadata::coverImageUrlIsSet() const
{
    return m_Cover_image_urlIsSet;
}

void PinMediaMetadata::unsetCover_image_url()
{
    m_Cover_image_urlIsSet = false;
}
utility::string_t PinMediaMetadata::getVideoUrl() const
{
    return m_Video_url;
}

void PinMediaMetadata::setVideoUrl(const utility::string_t& value)
{
    m_Video_url = value;
    m_Video_urlIsSet = true;
}

bool PinMediaMetadata::videoUrlIsSet() const
{
    return m_Video_urlIsSet;
}

void PinMediaMetadata::unsetVideo_url()
{
    m_Video_urlIsSet = false;
}
double PinMediaMetadata::getDuration() const
{
    return m_Duration;
}

void PinMediaMetadata::setDuration(double value)
{
    m_Duration = value;
    m_DurationIsSet = true;
}

bool PinMediaMetadata::durationIsSet() const
{
    return m_DurationIsSet;
}

void PinMediaMetadata::unsetDuration()
{
    m_DurationIsSet = false;
}
int32_t PinMediaMetadata::getHeight() const
{
    return m_Height;
}

void PinMediaMetadata::setHeight(int32_t value)
{
    m_Height = value;
    m_HeightIsSet = true;
}

bool PinMediaMetadata::heightIsSet() const
{
    return m_HeightIsSet;
}

void PinMediaMetadata::unsetHeight()
{
    m_HeightIsSet = false;
}
int32_t PinMediaMetadata::getWidth() const
{
    return m_Width;
}

void PinMediaMetadata::setWidth(int32_t value)
{
    m_Width = value;
    m_WidthIsSet = true;
}

bool PinMediaMetadata::widthIsSet() const
{
    return m_WidthIsSet;
}

void PinMediaMetadata::unsetWidth()
{
    m_WidthIsSet = false;
}
}
}
}
}


