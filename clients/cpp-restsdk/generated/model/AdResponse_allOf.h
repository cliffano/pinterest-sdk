/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * AdResponse_allOf.h
 *
 * Creation fields
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_AdResponse_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_AdResponse_allOf_H_


#include "ModelBase.h"

#include "model/TrackingUrls.h"
#include "model/EntityStatus.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Creation fields
/// </summary>
class  AdResponse_allOf
    : public ModelBase
{
public:
    AdResponse_allOf();
    virtual ~AdResponse_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AdResponse_allOf members

    /// <summary>
    /// ID of the ad group that contains the ad.
    /// </summary>
    utility::string_t getAdGroupId() const;
    bool adGroupIdIsSet() const;
    void unsetAd_group_id();

    void setAdGroupId(const utility::string_t& value);

    /// <summary>
    /// Deep link URL for Android devices. Not currently available. Using this field will generate an error.
    /// </summary>
    utility::string_t getAndroidDeepLink() const;
    bool androidDeepLinkIsSet() const;
    void unsetAndroid_deep_link();

    void setAndroidDeepLink(const utility::string_t& value);

    /// <summary>
    /// Comma-separated deep links for the carousel pin on Android.
    /// </summary>
    std::vector<utility::string_t>& getCarouselAndroidDeepLinks();
    bool carouselAndroidDeepLinksIsSet() const;
    void unsetCarousel_android_deep_links();

    void setCarouselAndroidDeepLinks(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Comma-separated destination URLs for the carousel pin to promote.
    /// </summary>
    std::vector<utility::string_t>& getCarouselDestinationUrls();
    bool carouselDestinationUrlsIsSet() const;
    void unsetCarousel_destination_urls();

    void setCarouselDestinationUrls(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Comma-separated deep links for the carousel pin on iOS.
    /// </summary>
    std::vector<utility::string_t>& getCarouselIosDeepLinks();
    bool carouselIosDeepLinksIsSet() const;
    void unsetCarousel_ios_deep_links();

    void setCarouselIosDeepLinks(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Tracking url for the ad clicks.
    /// </summary>
    utility::string_t getClickTrackingUrl() const;
    bool clickTrackingUrlIsSet() const;
    void unsetClick_tracking_url();

    void setClickTrackingUrl(const utility::string_t& value);

    /// <summary>
    /// Ad creative type enum
    /// </summary>
    utility::string_t getCreativeType() const;
    bool creativeTypeIsSet() const;
    void unsetCreative_type();

    void setCreativeType(const utility::string_t& value);

    /// <summary>
    /// Destination URL.
    /// </summary>
    utility::string_t getDestinationUrl() const;
    bool destinationUrlIsSet() const;
    void unsetDestination_url();

    void setDestinationUrl(const utility::string_t& value);

    /// <summary>
    /// Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
    /// </summary>
    utility::string_t getIosDeepLink() const;
    bool iosDeepLinkIsSet() const;
    void unsetIos_deep_link();

    void setIosDeepLink(const utility::string_t& value);

    /// <summary>
    /// Is original pin deleted?
    /// </summary>
    bool isIsPinDeleted() const;
    bool isPinDeletedIsSet() const;
    void unsetIs_pin_deleted();

    void setIsPinDeleted(bool value);

    /// <summary>
    /// Is pin repinnable?
    /// </summary>
    bool isIsRemovable() const;
    bool isRemovableIsSet() const;
    void unsetIs_removable();

    void setIsRemovable(bool value);

    /// <summary>
    /// Name of the ad - 255 chars max.
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// Pin ID.
    /// </summary>
    utility::string_t getPinId() const;
    bool pinIdIsSet() const;
    void unsetPin_id();

    void setPinId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<EntityStatus> getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const std::shared_ptr<EntityStatus>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<TrackingUrls> getTrackingUrls() const;
    bool trackingUrlsIsSet() const;
    void unsetTracking_urls();

    void setTrackingUrls(const std::shared_ptr<TrackingUrls>& value);

    /// <summary>
    /// Tracking URL for ad impressions.
    /// </summary>
    utility::string_t getViewTrackingUrl() const;
    bool viewTrackingUrlIsSet() const;
    void unsetView_tracking_url();

    void setViewTrackingUrl(const utility::string_t& value);


protected:
    utility::string_t m_Ad_group_id;
    bool m_Ad_group_idIsSet;
    utility::string_t m_Android_deep_link;
    bool m_Android_deep_linkIsSet;
    std::vector<utility::string_t> m_Carousel_android_deep_links;
    bool m_Carousel_android_deep_linksIsSet;
    std::vector<utility::string_t> m_Carousel_destination_urls;
    bool m_Carousel_destination_urlsIsSet;
    std::vector<utility::string_t> m_Carousel_ios_deep_links;
    bool m_Carousel_ios_deep_linksIsSet;
    utility::string_t m_Click_tracking_url;
    bool m_Click_tracking_urlIsSet;
    utility::string_t m_Creative_type;
    bool m_Creative_typeIsSet;
    utility::string_t m_Destination_url;
    bool m_Destination_urlIsSet;
    utility::string_t m_Ios_deep_link;
    bool m_Ios_deep_linkIsSet;
    bool m_Is_pin_deleted;
    bool m_Is_pin_deletedIsSet;
    bool m_Is_removable;
    bool m_Is_removableIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Pin_id;
    bool m_Pin_idIsSet;
    std::shared_ptr<EntityStatus> m_Status;
    bool m_StatusIsSet;
    std::shared_ptr<TrackingUrls> m_Tracking_urls;
    bool m_Tracking_urlsIsSet;
    utility::string_t m_View_tracking_url;
    bool m_View_tracking_urlIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_AdResponse_allOf_H_ */
