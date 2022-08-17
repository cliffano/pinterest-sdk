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



#include "CppRestOpenAPIClient/model/AdUpdateRequest_inner.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



AdUpdateRequest_inner::AdUpdateRequest_inner()
{
    m_Ad_group_id = utility::conversions::to_string_t("");
    m_Ad_group_idIsSet = false;
    m_Android_deep_link = utility::conversions::to_string_t("");
    m_Android_deep_linkIsSet = false;
    m_Carousel_android_deep_linksIsSet = false;
    m_Carousel_destination_urlsIsSet = false;
    m_Carousel_ios_deep_linksIsSet = false;
    m_Click_tracking_url = utility::conversions::to_string_t("");
    m_Click_tracking_urlIsSet = false;
    m_Creative_typeIsSet = false;
    m_Destination_url = utility::conversions::to_string_t("");
    m_Destination_urlIsSet = false;
    m_Ios_deep_link = utility::conversions::to_string_t("");
    m_Ios_deep_linkIsSet = false;
    m_Is_pin_deleted = false;
    m_Is_pin_deletedIsSet = false;
    m_Is_removable = false;
    m_Is_removableIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Pin_id = utility::conversions::to_string_t("");
    m_Pin_idIsSet = false;
    m_StatusIsSet = false;
    m_Tracking_urlsIsSet = false;
    m_View_tracking_url = utility::conversions::to_string_t("");
    m_View_tracking_urlIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
}

AdUpdateRequest_inner::~AdUpdateRequest_inner()
{
}

void AdUpdateRequest_inner::validate()
{
    // TODO: implement validation
}

web::json::value AdUpdateRequest_inner::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Ad_group_idIsSet)
    {
        val[utility::conversions::to_string_t(U("ad_group_id"))] = ModelBase::toJson(m_Ad_group_id);
    }
    if(m_Android_deep_linkIsSet)
    {
        val[utility::conversions::to_string_t(U("android_deep_link"))] = ModelBase::toJson(m_Android_deep_link);
    }
    if(m_Carousel_android_deep_linksIsSet)
    {
        val[utility::conversions::to_string_t(U("carousel_android_deep_links"))] = ModelBase::toJson(m_Carousel_android_deep_links);
    }
    if(m_Carousel_destination_urlsIsSet)
    {
        val[utility::conversions::to_string_t(U("carousel_destination_urls"))] = ModelBase::toJson(m_Carousel_destination_urls);
    }
    if(m_Carousel_ios_deep_linksIsSet)
    {
        val[utility::conversions::to_string_t(U("carousel_ios_deep_links"))] = ModelBase::toJson(m_Carousel_ios_deep_links);
    }
    if(m_Click_tracking_urlIsSet)
    {
        val[utility::conversions::to_string_t(U("click_tracking_url"))] = ModelBase::toJson(m_Click_tracking_url);
    }
    if(m_Creative_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("creative_type"))] = ModelBase::toJson(m_Creative_type);
    }
    if(m_Destination_urlIsSet)
    {
        val[utility::conversions::to_string_t(U("destination_url"))] = ModelBase::toJson(m_Destination_url);
    }
    if(m_Ios_deep_linkIsSet)
    {
        val[utility::conversions::to_string_t(U("ios_deep_link"))] = ModelBase::toJson(m_Ios_deep_link);
    }
    if(m_Is_pin_deletedIsSet)
    {
        val[utility::conversions::to_string_t(U("is_pin_deleted"))] = ModelBase::toJson(m_Is_pin_deleted);
    }
    if(m_Is_removableIsSet)
    {
        val[utility::conversions::to_string_t(U("is_removable"))] = ModelBase::toJson(m_Is_removable);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_Pin_idIsSet)
    {
        val[utility::conversions::to_string_t(U("pin_id"))] = ModelBase::toJson(m_Pin_id);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }
    if(m_Tracking_urlsIsSet)
    {
        val[utility::conversions::to_string_t(U("tracking_urls"))] = ModelBase::toJson(m_Tracking_urls);
    }
    if(m_View_tracking_urlIsSet)
    {
        val[utility::conversions::to_string_t(U("view_tracking_url"))] = ModelBase::toJson(m_View_tracking_url);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }

    return val;
}

bool AdUpdateRequest_inner::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("ad_group_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ad_group_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAdGroupId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAdGroupId);
            setAdGroupId(refVal_setAdGroupId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("android_deep_link"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("android_deep_link")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAndroidDeepLink;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAndroidDeepLink);
            setAndroidDeepLink(refVal_setAndroidDeepLink);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("carousel_android_deep_links"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("carousel_android_deep_links")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setCarouselAndroidDeepLinks;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCarouselAndroidDeepLinks);
            setCarouselAndroidDeepLinks(refVal_setCarouselAndroidDeepLinks);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("carousel_destination_urls"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("carousel_destination_urls")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setCarouselDestinationUrls;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCarouselDestinationUrls);
            setCarouselDestinationUrls(refVal_setCarouselDestinationUrls);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("carousel_ios_deep_links"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("carousel_ios_deep_links")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setCarouselIosDeepLinks;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCarouselIosDeepLinks);
            setCarouselIosDeepLinks(refVal_setCarouselIosDeepLinks);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("click_tracking_url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("click_tracking_url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setClickTrackingUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setClickTrackingUrl);
            setClickTrackingUrl(refVal_setClickTrackingUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("creative_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("creative_type")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CreativeType> refVal_setCreativeType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreativeType);
            setCreativeType(refVal_setCreativeType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("destination_url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("destination_url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDestinationUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDestinationUrl);
            setDestinationUrl(refVal_setDestinationUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ios_deep_link"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ios_deep_link")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setIosDeepLink;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIosDeepLink);
            setIosDeepLink(refVal_setIosDeepLink);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("is_pin_deleted"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("is_pin_deleted")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsPinDeleted;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsPinDeleted);
            setIsPinDeleted(refVal_setIsPinDeleted);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("is_removable"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("is_removable")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsRemovable;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsRemovable);
            setIsRemovable(refVal_setIsRemovable);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("pin_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pin_id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPinId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPinId);
            setPinId(refVal_setPinId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<EntityStatus> refVal_setStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatus);
            setStatus(refVal_setStatus);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("tracking_urls"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tracking_urls")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<AdCommon_tracking_urls> refVal_setTrackingUrls;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTrackingUrls);
            setTrackingUrls(refVal_setTrackingUrls);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("view_tracking_url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("view_tracking_url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setViewTrackingUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setViewTrackingUrl);
            setViewTrackingUrl(refVal_setViewTrackingUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
    return ok;
}

void AdUpdateRequest_inner::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Ad_group_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ad_group_id")), m_Ad_group_id));
    }
    if(m_Android_deep_linkIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("android_deep_link")), m_Android_deep_link));
    }
    if(m_Carousel_android_deep_linksIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("carousel_android_deep_links")), m_Carousel_android_deep_links));
    }
    if(m_Carousel_destination_urlsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("carousel_destination_urls")), m_Carousel_destination_urls));
    }
    if(m_Carousel_ios_deep_linksIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("carousel_ios_deep_links")), m_Carousel_ios_deep_links));
    }
    if(m_Click_tracking_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("click_tracking_url")), m_Click_tracking_url));
    }
    if(m_Creative_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("creative_type")), m_Creative_type));
    }
    if(m_Destination_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("destination_url")), m_Destination_url));
    }
    if(m_Ios_deep_linkIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ios_deep_link")), m_Ios_deep_link));
    }
    if(m_Is_pin_deletedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("is_pin_deleted")), m_Is_pin_deleted));
    }
    if(m_Is_removableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("is_removable")), m_Is_removable));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_Pin_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pin_id")), m_Pin_id));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
    }
    if(m_Tracking_urlsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tracking_urls")), m_Tracking_urls));
    }
    if(m_View_tracking_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("view_tracking_url")), m_View_tracking_url));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
}

bool AdUpdateRequest_inner::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("ad_group_id"))))
    {
        utility::string_t refVal_setAdGroupId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ad_group_id"))), refVal_setAdGroupId );
        setAdGroupId(refVal_setAdGroupId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("android_deep_link"))))
    {
        utility::string_t refVal_setAndroidDeepLink;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("android_deep_link"))), refVal_setAndroidDeepLink );
        setAndroidDeepLink(refVal_setAndroidDeepLink);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("carousel_android_deep_links"))))
    {
        std::vector<utility::string_t> refVal_setCarouselAndroidDeepLinks;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("carousel_android_deep_links"))), refVal_setCarouselAndroidDeepLinks );
        setCarouselAndroidDeepLinks(refVal_setCarouselAndroidDeepLinks);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("carousel_destination_urls"))))
    {
        std::vector<utility::string_t> refVal_setCarouselDestinationUrls;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("carousel_destination_urls"))), refVal_setCarouselDestinationUrls );
        setCarouselDestinationUrls(refVal_setCarouselDestinationUrls);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("carousel_ios_deep_links"))))
    {
        std::vector<utility::string_t> refVal_setCarouselIosDeepLinks;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("carousel_ios_deep_links"))), refVal_setCarouselIosDeepLinks );
        setCarouselIosDeepLinks(refVal_setCarouselIosDeepLinks);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("click_tracking_url"))))
    {
        utility::string_t refVal_setClickTrackingUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("click_tracking_url"))), refVal_setClickTrackingUrl );
        setClickTrackingUrl(refVal_setClickTrackingUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("creative_type"))))
    {
        std::shared_ptr<CreativeType> refVal_setCreativeType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("creative_type"))), refVal_setCreativeType );
        setCreativeType(refVal_setCreativeType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("destination_url"))))
    {
        utility::string_t refVal_setDestinationUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("destination_url"))), refVal_setDestinationUrl );
        setDestinationUrl(refVal_setDestinationUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ios_deep_link"))))
    {
        utility::string_t refVal_setIosDeepLink;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ios_deep_link"))), refVal_setIosDeepLink );
        setIosDeepLink(refVal_setIosDeepLink);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("is_pin_deleted"))))
    {
        bool refVal_setIsPinDeleted;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("is_pin_deleted"))), refVal_setIsPinDeleted );
        setIsPinDeleted(refVal_setIsPinDeleted);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("is_removable"))))
    {
        bool refVal_setIsRemovable;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("is_removable"))), refVal_setIsRemovable );
        setIsRemovable(refVal_setIsRemovable);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("pin_id"))))
    {
        utility::string_t refVal_setPinId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pin_id"))), refVal_setPinId );
        setPinId(refVal_setPinId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        std::shared_ptr<EntityStatus> refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("tracking_urls"))))
    {
        std::shared_ptr<AdCommon_tracking_urls> refVal_setTrackingUrls;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tracking_urls"))), refVal_setTrackingUrls );
        setTrackingUrls(refVal_setTrackingUrls);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("view_tracking_url"))))
    {
        utility::string_t refVal_setViewTrackingUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("view_tracking_url"))), refVal_setViewTrackingUrl );
        setViewTrackingUrl(refVal_setViewTrackingUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    return ok;
}

utility::string_t AdUpdateRequest_inner::getAdGroupId() const
{
    return m_Ad_group_id;
}

void AdUpdateRequest_inner::setAdGroupId(const utility::string_t& value)
{
    m_Ad_group_id = value;
    m_Ad_group_idIsSet = true;
}

bool AdUpdateRequest_inner::adGroupIdIsSet() const
{
    return m_Ad_group_idIsSet;
}

void AdUpdateRequest_inner::unsetAd_group_id()
{
    m_Ad_group_idIsSet = false;
}
utility::string_t AdUpdateRequest_inner::getAndroidDeepLink() const
{
    return m_Android_deep_link;
}

void AdUpdateRequest_inner::setAndroidDeepLink(const utility::string_t& value)
{
    m_Android_deep_link = value;
    m_Android_deep_linkIsSet = true;
}

bool AdUpdateRequest_inner::androidDeepLinkIsSet() const
{
    return m_Android_deep_linkIsSet;
}

void AdUpdateRequest_inner::unsetAndroid_deep_link()
{
    m_Android_deep_linkIsSet = false;
}
std::vector<utility::string_t>& AdUpdateRequest_inner::getCarouselAndroidDeepLinks()
{
    return m_Carousel_android_deep_links;
}

void AdUpdateRequest_inner::setCarouselAndroidDeepLinks(const std::vector<utility::string_t>& value)
{
    m_Carousel_android_deep_links = value;
    m_Carousel_android_deep_linksIsSet = true;
}

bool AdUpdateRequest_inner::carouselAndroidDeepLinksIsSet() const
{
    return m_Carousel_android_deep_linksIsSet;
}

void AdUpdateRequest_inner::unsetCarousel_android_deep_links()
{
    m_Carousel_android_deep_linksIsSet = false;
}
std::vector<utility::string_t>& AdUpdateRequest_inner::getCarouselDestinationUrls()
{
    return m_Carousel_destination_urls;
}

void AdUpdateRequest_inner::setCarouselDestinationUrls(const std::vector<utility::string_t>& value)
{
    m_Carousel_destination_urls = value;
    m_Carousel_destination_urlsIsSet = true;
}

bool AdUpdateRequest_inner::carouselDestinationUrlsIsSet() const
{
    return m_Carousel_destination_urlsIsSet;
}

void AdUpdateRequest_inner::unsetCarousel_destination_urls()
{
    m_Carousel_destination_urlsIsSet = false;
}
std::vector<utility::string_t>& AdUpdateRequest_inner::getCarouselIosDeepLinks()
{
    return m_Carousel_ios_deep_links;
}

void AdUpdateRequest_inner::setCarouselIosDeepLinks(const std::vector<utility::string_t>& value)
{
    m_Carousel_ios_deep_links = value;
    m_Carousel_ios_deep_linksIsSet = true;
}

bool AdUpdateRequest_inner::carouselIosDeepLinksIsSet() const
{
    return m_Carousel_ios_deep_linksIsSet;
}

void AdUpdateRequest_inner::unsetCarousel_ios_deep_links()
{
    m_Carousel_ios_deep_linksIsSet = false;
}
utility::string_t AdUpdateRequest_inner::getClickTrackingUrl() const
{
    return m_Click_tracking_url;
}

void AdUpdateRequest_inner::setClickTrackingUrl(const utility::string_t& value)
{
    m_Click_tracking_url = value;
    m_Click_tracking_urlIsSet = true;
}

bool AdUpdateRequest_inner::clickTrackingUrlIsSet() const
{
    return m_Click_tracking_urlIsSet;
}

void AdUpdateRequest_inner::unsetClick_tracking_url()
{
    m_Click_tracking_urlIsSet = false;
}
std::shared_ptr<CreativeType> AdUpdateRequest_inner::getCreativeType() const
{
    return m_Creative_type;
}

void AdUpdateRequest_inner::setCreativeType(const std::shared_ptr<CreativeType>& value)
{
    m_Creative_type = value;
    m_Creative_typeIsSet = true;
}

bool AdUpdateRequest_inner::creativeTypeIsSet() const
{
    return m_Creative_typeIsSet;
}

void AdUpdateRequest_inner::unsetCreative_type()
{
    m_Creative_typeIsSet = false;
}
utility::string_t AdUpdateRequest_inner::getDestinationUrl() const
{
    return m_Destination_url;
}

void AdUpdateRequest_inner::setDestinationUrl(const utility::string_t& value)
{
    m_Destination_url = value;
    m_Destination_urlIsSet = true;
}

bool AdUpdateRequest_inner::destinationUrlIsSet() const
{
    return m_Destination_urlIsSet;
}

void AdUpdateRequest_inner::unsetDestination_url()
{
    m_Destination_urlIsSet = false;
}
utility::string_t AdUpdateRequest_inner::getIosDeepLink() const
{
    return m_Ios_deep_link;
}

void AdUpdateRequest_inner::setIosDeepLink(const utility::string_t& value)
{
    m_Ios_deep_link = value;
    m_Ios_deep_linkIsSet = true;
}

bool AdUpdateRequest_inner::iosDeepLinkIsSet() const
{
    return m_Ios_deep_linkIsSet;
}

void AdUpdateRequest_inner::unsetIos_deep_link()
{
    m_Ios_deep_linkIsSet = false;
}
bool AdUpdateRequest_inner::isIsPinDeleted() const
{
    return m_Is_pin_deleted;
}

void AdUpdateRequest_inner::setIsPinDeleted(bool value)
{
    m_Is_pin_deleted = value;
    m_Is_pin_deletedIsSet = true;
}

bool AdUpdateRequest_inner::isPinDeletedIsSet() const
{
    return m_Is_pin_deletedIsSet;
}

void AdUpdateRequest_inner::unsetIs_pin_deleted()
{
    m_Is_pin_deletedIsSet = false;
}
bool AdUpdateRequest_inner::isIsRemovable() const
{
    return m_Is_removable;
}

void AdUpdateRequest_inner::setIsRemovable(bool value)
{
    m_Is_removable = value;
    m_Is_removableIsSet = true;
}

bool AdUpdateRequest_inner::isRemovableIsSet() const
{
    return m_Is_removableIsSet;
}

void AdUpdateRequest_inner::unsetIs_removable()
{
    m_Is_removableIsSet = false;
}
utility::string_t AdUpdateRequest_inner::getName() const
{
    return m_Name;
}

void AdUpdateRequest_inner::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool AdUpdateRequest_inner::nameIsSet() const
{
    return m_NameIsSet;
}

void AdUpdateRequest_inner::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t AdUpdateRequest_inner::getPinId() const
{
    return m_Pin_id;
}

void AdUpdateRequest_inner::setPinId(const utility::string_t& value)
{
    m_Pin_id = value;
    m_Pin_idIsSet = true;
}

bool AdUpdateRequest_inner::pinIdIsSet() const
{
    return m_Pin_idIsSet;
}

void AdUpdateRequest_inner::unsetPin_id()
{
    m_Pin_idIsSet = false;
}
std::shared_ptr<EntityStatus> AdUpdateRequest_inner::getStatus() const
{
    return m_Status;
}

void AdUpdateRequest_inner::setStatus(const std::shared_ptr<EntityStatus>& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool AdUpdateRequest_inner::statusIsSet() const
{
    return m_StatusIsSet;
}

void AdUpdateRequest_inner::unsetStatus()
{
    m_StatusIsSet = false;
}
std::shared_ptr<AdCommon_tracking_urls> AdUpdateRequest_inner::getTrackingUrls() const
{
    return m_Tracking_urls;
}

void AdUpdateRequest_inner::setTrackingUrls(const std::shared_ptr<AdCommon_tracking_urls>& value)
{
    m_Tracking_urls = value;
    m_Tracking_urlsIsSet = true;
}

bool AdUpdateRequest_inner::trackingUrlsIsSet() const
{
    return m_Tracking_urlsIsSet;
}

void AdUpdateRequest_inner::unsetTracking_urls()
{
    m_Tracking_urlsIsSet = false;
}
utility::string_t AdUpdateRequest_inner::getViewTrackingUrl() const
{
    return m_View_tracking_url;
}

void AdUpdateRequest_inner::setViewTrackingUrl(const utility::string_t& value)
{
    m_View_tracking_url = value;
    m_View_tracking_urlIsSet = true;
}

bool AdUpdateRequest_inner::viewTrackingUrlIsSet() const
{
    return m_View_tracking_urlIsSet;
}

void AdUpdateRequest_inner::unsetView_tracking_url()
{
    m_View_tracking_urlIsSet = false;
}
utility::string_t AdUpdateRequest_inner::getId() const
{
    return m_Id;
}

void AdUpdateRequest_inner::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool AdUpdateRequest_inner::idIsSet() const
{
    return m_IdIsSet;
}

void AdUpdateRequest_inner::unsetId()
{
    m_IdIsSet = false;
}
}
}
}
}


