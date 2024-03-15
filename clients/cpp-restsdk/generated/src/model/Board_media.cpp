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



#include "CppRestOpenAPIClient/model/Board_media.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Board_media::Board_media()
{
    m_Image_cover_url = utility::conversions::to_string_t("");
    m_Image_cover_urlIsSet = false;
    m_Pin_thumbnail_urlsIsSet = false;
}

Board_media::~Board_media()
{
}

void Board_media::validate()
{
    // TODO: implement validation
}

web::json::value Board_media::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Image_cover_urlIsSet)
    {
        val[utility::conversions::to_string_t(U("image_cover_url"))] = ModelBase::toJson(m_Image_cover_url);
    }
    if(m_Pin_thumbnail_urlsIsSet)
    {
        val[utility::conversions::to_string_t(U("pin_thumbnail_urls"))] = ModelBase::toJson(m_Pin_thumbnail_urls);
    }

    return val;
}

bool Board_media::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("image_cover_url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("image_cover_url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setImageCoverUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setImageCoverUrl);
            setImageCoverUrl(refVal_setImageCoverUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("pin_thumbnail_urls"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pin_thumbnail_urls")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setPinThumbnailUrls;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPinThumbnailUrls);
            setPinThumbnailUrls(refVal_setPinThumbnailUrls);
        }
    }
    return ok;
}

void Board_media::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Image_cover_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("image_cover_url")), m_Image_cover_url));
    }
    if(m_Pin_thumbnail_urlsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pin_thumbnail_urls")), m_Pin_thumbnail_urls));
    }
}

bool Board_media::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("image_cover_url"))))
    {
        utility::string_t refVal_setImageCoverUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("image_cover_url"))), refVal_setImageCoverUrl );
        setImageCoverUrl(refVal_setImageCoverUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("pin_thumbnail_urls"))))
    {
        std::vector<utility::string_t> refVal_setPinThumbnailUrls;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pin_thumbnail_urls"))), refVal_setPinThumbnailUrls );
        setPinThumbnailUrls(refVal_setPinThumbnailUrls);
    }
    return ok;
}

utility::string_t Board_media::getImageCoverUrl() const
{
    return m_Image_cover_url;
}

void Board_media::setImageCoverUrl(const utility::string_t& value)
{
    m_Image_cover_url = value;
    m_Image_cover_urlIsSet = true;
}

bool Board_media::imageCoverUrlIsSet() const
{
    return m_Image_cover_urlIsSet;
}

void Board_media::unsetImage_cover_url()
{
    m_Image_cover_urlIsSet = false;
}
std::vector<utility::string_t>& Board_media::getPinThumbnailUrls()
{
    return m_Pin_thumbnail_urls;
}

void Board_media::setPinThumbnailUrls(const std::vector<utility::string_t>& value)
{
    m_Pin_thumbnail_urls = value;
    m_Pin_thumbnail_urlsIsSet = true;
}

bool Board_media::pinThumbnailUrlsIsSet() const
{
    return m_Pin_thumbnail_urlsIsSet;
}

void Board_media::unsetPin_thumbnail_urls()
{
    m_Pin_thumbnail_urlsIsSet = false;
}
}
}
}
}


