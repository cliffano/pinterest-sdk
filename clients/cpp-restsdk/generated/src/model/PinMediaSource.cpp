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



#include "CppRestOpenAPIClient/model/PinMediaSource.h"

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
    m_Is_standard = false;
    m_Is_standardIsSet = false;
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
    m_Cover_image_url = utility::conversions::to_string_t("");
    m_Cover_image_urlIsSet = false;
    m_Cover_image_content_type = utility::conversions::to_string_t("");
    m_Cover_image_content_typeIsSet = false;
    m_Cover_image_data = utility::conversions::to_string_t("");
    m_Cover_image_dataIsSet = false;
    m_Media_id = utility::conversions::to_string_t("");
    m_Media_idIsSet = false;
    m_ItemsIsSet = false;
    m_Index = 0;
    m_IndexIsSet = false;
    m_Is_affiliate_link = false;
    m_Is_affiliate_linkIsSet = false;
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
    if(m_Is_standardIsSet)
    {
        val[utility::conversions::to_string_t(U("is_standard"))] = ModelBase::toJson(m_Is_standard);
    }
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t(U("url"))] = ModelBase::toJson(m_Url);
    }
    if(m_Cover_image_urlIsSet)
    {
        val[utility::conversions::to_string_t(U("cover_image_url"))] = ModelBase::toJson(m_Cover_image_url);
    }
    if(m_Cover_image_content_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("cover_image_content_type"))] = ModelBase::toJson(m_Cover_image_content_type);
    }
    if(m_Cover_image_dataIsSet)
    {
        val[utility::conversions::to_string_t(U("cover_image_data"))] = ModelBase::toJson(m_Cover_image_data);
    }
    if(m_Media_idIsSet)
    {
        val[utility::conversions::to_string_t(U("media_id"))] = ModelBase::toJson(m_Media_id);
    }
    if(m_ItemsIsSet)
    {
        val[utility::conversions::to_string_t(U("items"))] = ModelBase::toJson(m_Items);
    }
    if(m_IndexIsSet)
    {
        val[utility::conversions::to_string_t(U("index"))] = ModelBase::toJson(m_Index);
    }
    if(m_Is_affiliate_linkIsSet)
    {
        val[utility::conversions::to_string_t(U("is_affiliate_link"))] = ModelBase::toJson(m_Is_affiliate_link);
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
            utility::string_t refVal_setSourceType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSourceType);
            setSourceType(refVal_setSourceType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("content_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("content_type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setContentType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setContentType);
            setContentType(refVal_setContentType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("data"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("data")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setData;
            ok &= ModelBase::fromJson(fieldValue, refVal_setData);
            setData(refVal_setData);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("is_standard"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("is_standard")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsStandard;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsStandard);
            setIsStandard(refVal_setIsStandard);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUrl);
            setUrl(refVal_setUrl);
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
    if(val.has_field(utility::conversions::to_string_t(U("cover_image_content_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("cover_image_content_type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCoverImageContentType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCoverImageContentType);
            setCoverImageContentType(refVal_setCoverImageContentType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("cover_image_data"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("cover_image_data")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCoverImageData;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCoverImageData);
            setCoverImageData(refVal_setCoverImageData);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t(U("items"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("items")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<PinMediaSourceImagesURL_items_inner>> refVal_setItems;
            ok &= ModelBase::fromJson(fieldValue, refVal_setItems);
            setItems(refVal_setItems);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("index"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("index")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setIndex;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIndex);
            setIndex(refVal_setIndex);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("is_affiliate_link"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("is_affiliate_link")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsAffiliateLink;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsAffiliateLink);
            setIsAffiliateLink(refVal_setIsAffiliateLink);
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
    if(m_Is_standardIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("is_standard")), m_Is_standard));
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("url")), m_Url));
    }
    if(m_Cover_image_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cover_image_url")), m_Cover_image_url));
    }
    if(m_Cover_image_content_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cover_image_content_type")), m_Cover_image_content_type));
    }
    if(m_Cover_image_dataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cover_image_data")), m_Cover_image_data));
    }
    if(m_Media_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("media_id")), m_Media_id));
    }
    if(m_ItemsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("items")), m_Items));
    }
    if(m_IndexIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("index")), m_Index));
    }
    if(m_Is_affiliate_linkIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("is_affiliate_link")), m_Is_affiliate_link));
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("is_standard"))))
    {
        bool refVal_setIsStandard;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("is_standard"))), refVal_setIsStandard );
        setIsStandard(refVal_setIsStandard);
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("cover_image_content_type"))))
    {
        utility::string_t refVal_setCoverImageContentType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cover_image_content_type"))), refVal_setCoverImageContentType );
        setCoverImageContentType(refVal_setCoverImageContentType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("cover_image_data"))))
    {
        utility::string_t refVal_setCoverImageData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cover_image_data"))), refVal_setCoverImageData );
        setCoverImageData(refVal_setCoverImageData);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("media_id"))))
    {
        utility::string_t refVal_setMediaId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("media_id"))), refVal_setMediaId );
        setMediaId(refVal_setMediaId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("items"))))
    {
        std::vector<std::shared_ptr<PinMediaSourceImagesURL_items_inner>> refVal_setItems;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("items"))), refVal_setItems );
        setItems(refVal_setItems);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("index"))))
    {
        int32_t refVal_setIndex;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("index"))), refVal_setIndex );
        setIndex(refVal_setIndex);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("is_affiliate_link"))))
    {
        bool refVal_setIsAffiliateLink;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("is_affiliate_link"))), refVal_setIsAffiliateLink );
        setIsAffiliateLink(refVal_setIsAffiliateLink);
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
bool PinMediaSource::isIsStandard() const
{
    return m_Is_standard;
}

void PinMediaSource::setIsStandard(bool value)
{
    m_Is_standard = value;
    m_Is_standardIsSet = true;
}

bool PinMediaSource::isStandardIsSet() const
{
    return m_Is_standardIsSet;
}

void PinMediaSource::unsetIs_standard()
{
    m_Is_standardIsSet = false;
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
utility::string_t PinMediaSource::getCoverImageContentType() const
{
    return m_Cover_image_content_type;
}

void PinMediaSource::setCoverImageContentType(const utility::string_t& value)
{
    m_Cover_image_content_type = value;
    m_Cover_image_content_typeIsSet = true;
}

bool PinMediaSource::coverImageContentTypeIsSet() const
{
    return m_Cover_image_content_typeIsSet;
}

void PinMediaSource::unsetCover_image_content_type()
{
    m_Cover_image_content_typeIsSet = false;
}
utility::string_t PinMediaSource::getCoverImageData() const
{
    return m_Cover_image_data;
}

void PinMediaSource::setCoverImageData(const utility::string_t& value)
{
    m_Cover_image_data = value;
    m_Cover_image_dataIsSet = true;
}

bool PinMediaSource::coverImageDataIsSet() const
{
    return m_Cover_image_dataIsSet;
}

void PinMediaSource::unsetCover_image_data()
{
    m_Cover_image_dataIsSet = false;
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
std::vector<std::shared_ptr<PinMediaSourceImagesURL_items_inner>>& PinMediaSource::getItems()
{
    return m_Items;
}

void PinMediaSource::setItems(const std::vector<std::shared_ptr<PinMediaSourceImagesURL_items_inner>>& value)
{
    m_Items = value;
    m_ItemsIsSet = true;
}

bool PinMediaSource::itemsIsSet() const
{
    return m_ItemsIsSet;
}

void PinMediaSource::unsetItems()
{
    m_ItemsIsSet = false;
}
int32_t PinMediaSource::getIndex() const
{
    return m_Index;
}

void PinMediaSource::setIndex(int32_t value)
{
    m_Index = value;
    m_IndexIsSet = true;
}

bool PinMediaSource::indexIsSet() const
{
    return m_IndexIsSet;
}

void PinMediaSource::unsetIndex()
{
    m_IndexIsSet = false;
}
bool PinMediaSource::isIsAffiliateLink() const
{
    return m_Is_affiliate_link;
}

void PinMediaSource::setIsAffiliateLink(bool value)
{
    m_Is_affiliate_link = value;
    m_Is_affiliate_linkIsSet = true;
}

bool PinMediaSource::isAffiliateLinkIsSet() const
{
    return m_Is_affiliate_linkIsSet;
}

void PinMediaSource::unsetIs_affiliate_link()
{
    m_Is_affiliate_linkIsSet = false;
}
}
}
}
}


