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



#include "CppRestOpenAPIClient/model/AdPreviewCreateFromImage.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



AdPreviewCreateFromImage::AdPreviewCreateFromImage()
{
    m_Image_url = utility::conversions::to_string_t("");
    m_Image_urlIsSet = false;
    m_Title = utility::conversions::to_string_t("");
    m_TitleIsSet = false;
}

AdPreviewCreateFromImage::~AdPreviewCreateFromImage()
{
}

void AdPreviewCreateFromImage::validate()
{
    // TODO: implement validation
}

web::json::value AdPreviewCreateFromImage::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Image_urlIsSet)
    {
        val[utility::conversions::to_string_t(U("image_url"))] = ModelBase::toJson(m_Image_url);
    }
    if(m_TitleIsSet)
    {
        val[utility::conversions::to_string_t(U("title"))] = ModelBase::toJson(m_Title);
    }

    return val;
}

bool AdPreviewCreateFromImage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("image_url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("image_url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setImageUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setImageUrl);
            setImageUrl(refVal_setImageUrl);
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
    return ok;
}

void AdPreviewCreateFromImage::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Image_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("image_url")), m_Image_url));
    }
    if(m_TitleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("title")), m_Title));
    }
}

bool AdPreviewCreateFromImage::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("image_url"))))
    {
        utility::string_t refVal_setImageUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("image_url"))), refVal_setImageUrl );
        setImageUrl(refVal_setImageUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("title"))))
    {
        utility::string_t refVal_setTitle;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("title"))), refVal_setTitle );
        setTitle(refVal_setTitle);
    }
    return ok;
}

utility::string_t AdPreviewCreateFromImage::getImageUrl() const
{
    return m_Image_url;
}

void AdPreviewCreateFromImage::setImageUrl(const utility::string_t& value)
{
    m_Image_url = value;
    m_Image_urlIsSet = true;
}

bool AdPreviewCreateFromImage::imageUrlIsSet() const
{
    return m_Image_urlIsSet;
}

void AdPreviewCreateFromImage::unsetImage_url()
{
    m_Image_urlIsSet = false;
}
utility::string_t AdPreviewCreateFromImage::getTitle() const
{
    return m_Title;
}

void AdPreviewCreateFromImage::setTitle(const utility::string_t& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}

bool AdPreviewCreateFromImage::titleIsSet() const
{
    return m_TitleIsSet;
}

void AdPreviewCreateFromImage::unsetTitle()
{
    m_TitleIsSet = false;
}
}
}
}
}


