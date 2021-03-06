/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * AdResponse.h
 *
 * 
 */

#ifndef AdResponse_H_
#define AdResponse_H_


#include "AdResponse_allOf_1.h"
#include "AdResponse_allOf.h"
#include "EntityStatus.h"
#include <string>
#include "TrackingUrls.h"
#include "PinPromotionSummaryStatus.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  AdResponse
{
public:
    AdResponse();
    virtual ~AdResponse() = default;


    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    /// <summary>
    /// Helper overload for validate. Used when one model stores another model and calls it's validate.
    /// Not meant to be called outside that case.
    /// </summary>
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

    bool operator==(const AdResponse& rhs) const;
    bool operator!=(const AdResponse& rhs) const;

    /////////////////////////////////////////////
    /// AdResponse members

    /// <summary>
    /// ID of the ad group that contains the ad.
    /// </summary>
    std::string getAdGroupId() const;
    void setAdGroupId(std::string const& value);
    bool adGroupIdIsSet() const;
    void unsetAd_group_id();
    /// <summary>
    /// Deep link URL for Android devices. Not currently available. Using this field will generate an error.
    /// </summary>
    std::string getAndroidDeepLink() const;
    void setAndroidDeepLink(std::string const& value);
    bool androidDeepLinkIsSet() const;
    void unsetAndroid_deep_link();
    /// <summary>
    /// Comma-separated deep links for the carousel pin on Android.
    /// </summary>
    std::vector<std::string> getCarouselAndroidDeepLinks() const;
    void setCarouselAndroidDeepLinks(std::vector<std::string> const& value);
    bool carouselAndroidDeepLinksIsSet() const;
    void unsetCarousel_android_deep_links();
    /// <summary>
    /// Comma-separated destination URLs for the carousel pin to promote.
    /// </summary>
    std::vector<std::string> getCarouselDestinationUrls() const;
    void setCarouselDestinationUrls(std::vector<std::string> const& value);
    bool carouselDestinationUrlsIsSet() const;
    void unsetCarousel_destination_urls();
    /// <summary>
    /// Comma-separated deep links for the carousel pin on iOS.
    /// </summary>
    std::vector<std::string> getCarouselIosDeepLinks() const;
    void setCarouselIosDeepLinks(std::vector<std::string> const& value);
    bool carouselIosDeepLinksIsSet() const;
    void unsetCarousel_ios_deep_links();
    /// <summary>
    /// Tracking url for the ad clicks.
    /// </summary>
    std::string getClickTrackingUrl() const;
    void setClickTrackingUrl(std::string const& value);
    bool clickTrackingUrlIsSet() const;
    void unsetClick_tracking_url();
    /// <summary>
    /// Ad creative type enum
    /// </summary>
    std::string getCreativeType() const;
    void setCreativeType(std::string const& value);
    bool creativeTypeIsSet() const;
    void unsetCreative_type();
    /// <summary>
    /// Destination URL.
    /// </summary>
    std::string getDestinationUrl() const;
    void setDestinationUrl(std::string const& value);
    bool destinationUrlIsSet() const;
    void unsetDestination_url();
    /// <summary>
    /// Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
    /// </summary>
    std::string getIosDeepLink() const;
    void setIosDeepLink(std::string const& value);
    bool iosDeepLinkIsSet() const;
    void unsetIos_deep_link();
    /// <summary>
    /// Is original pin deleted?
    /// </summary>
    bool isIsPinDeleted() const;
    void setIsPinDeleted(bool const value);
    bool isPinDeletedIsSet() const;
    void unsetIs_pin_deleted();
    /// <summary>
    /// Is pin repinnable?
    /// </summary>
    bool isIsRemovable() const;
    void setIsRemovable(bool const value);
    bool isRemovableIsSet() const;
    void unsetIs_removable();
    /// <summary>
    /// Name of the ad - 255 chars max.
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
    bool nameIsSet() const;
    void unsetName();
    /// <summary>
    /// Pin ID.
    /// </summary>
    std::string getPinId() const;
    void setPinId(std::string const& value);
    bool pinIdIsSet() const;
    void unsetPin_id();
    /// <summary>
    /// 
    /// </summary>
    EntityStatus getStatus() const;
    void setStatus(EntityStatus const& value);
    bool statusIsSet() const;
    void unsetStatus();
    /// <summary>
    /// 
    /// </summary>
    TrackingUrls getTrackingUrls() const;
    void setTrackingUrls(TrackingUrls const& value);
    bool trackingUrlsIsSet() const;
    void unsetTracking_urls();
    /// <summary>
    /// Tracking URL for ad impressions.
    /// </summary>
    std::string getViewTrackingUrl() const;
    void setViewTrackingUrl(std::string const& value);
    bool viewTrackingUrlIsSet() const;
    void unsetView_tracking_url();
    /// <summary>
    /// The ID of the advertiser that this ad belongs to.
    /// </summary>
    std::string getAdAccountId() const;
    void setAdAccountId(std::string const& value);
    bool adAccountIdIsSet() const;
    void unsetAd_account_id();
    /// <summary>
    /// ID of the ad campaign that contains this ad.
    /// </summary>
    std::string getCampaignId() const;
    void setCampaignId(std::string const& value);
    bool campaignIdIsSet() const;
    void unsetCampaign_id();
    /// <summary>
    /// Destination URL template for all items within a collections drawer.
    /// </summary>
    std::string getCollectionItemsDestinationUrlTemplate() const;
    void setCollectionItemsDestinationUrlTemplate(std::string const& value);
    bool collectionItemsDestinationUrlTemplateIsSet() const;
    void unsetCollection_items_destination_url_template();
    /// <summary>
    /// Pin creation time. Unix timestamp in seconds.
    /// </summary>
    int32_t getCreatedTime() const;
    void setCreatedTime(int32_t const value);
    bool createdTimeIsSet() const;
    void unsetCreated_time();
    /// <summary>
    /// The ID of this ad.
    /// </summary>
    std::string getId() const;
    void setId(std::string const& value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// Enum reason why the pin was rejected. Returned if &lt;code&gt;review_status&lt;/code&gt; is \&quot;REJECTED\&quot;.
    /// </summary>
    std::vector<std::string> getRejectedReasons() const;
    void setRejectedReasons(std::vector<std::string> const& value);
    bool rejectedReasonsIsSet() const;
    void unsetRejected_reasons();
    /// <summary>
    /// Text reason why the pin was rejected. Returned if &lt;code&gt;review_status&lt;/code&gt; is \&quot;REJECTED\&quot;.
    /// </summary>
    std::vector<std::string> getRejectionLabels() const;
    void setRejectionLabels(std::vector<std::string> const& value);
    bool rejectionLabelsIsSet() const;
    void unsetRejection_labels();
    /// <summary>
    /// Ad review status
    /// </summary>
    std::string getReviewStatus() const;
    void setReviewStatus(std::string const& value);
    bool reviewStatusIsSet() const;
    void unsetReview_status();
    /// <summary>
    /// Always \&quot;ad\&quot;.
    /// </summary>
    std::string getType() const;
    void setType(std::string const& value);
    bool typeIsSet() const;
    void unsetType();
    /// <summary>
    /// Last update time. Unix timestamp in seconds.
    /// </summary>
    int32_t getUpdatedTime() const;
    void setUpdatedTime(int32_t const value);
    bool updatedTimeIsSet() const;
    void unsetUpdated_time();
    /// <summary>
    /// Ad summary status
    /// </summary>
    PinPromotionSummaryStatus getSummaryStatus() const;
    void setSummaryStatus(PinPromotionSummaryStatus const& value);
    bool summaryStatusIsSet() const;
    void unsetSummary_status();

    friend void to_json(nlohmann::json& j, const AdResponse& o);
    friend void from_json(const nlohmann::json& j, AdResponse& o);
protected:
    std::string m_Ad_group_id;
    bool m_Ad_group_idIsSet;
    std::string m_Android_deep_link;
    bool m_Android_deep_linkIsSet;
    std::vector<std::string> m_Carousel_android_deep_links;
    bool m_Carousel_android_deep_linksIsSet;
    std::vector<std::string> m_Carousel_destination_urls;
    bool m_Carousel_destination_urlsIsSet;
    std::vector<std::string> m_Carousel_ios_deep_links;
    bool m_Carousel_ios_deep_linksIsSet;
    std::string m_Click_tracking_url;
    bool m_Click_tracking_urlIsSet;
    std::string m_Creative_type;
    bool m_Creative_typeIsSet;
    std::string m_Destination_url;
    bool m_Destination_urlIsSet;
    std::string m_Ios_deep_link;
    bool m_Ios_deep_linkIsSet;
    bool m_Is_pin_deleted;
    bool m_Is_pin_deletedIsSet;
    bool m_Is_removable;
    bool m_Is_removableIsSet;
    std::string m_Name;
    bool m_NameIsSet;
    std::string m_Pin_id;
    bool m_Pin_idIsSet;
    EntityStatus m_Status;
    bool m_StatusIsSet;
    TrackingUrls m_Tracking_urls;
    bool m_Tracking_urlsIsSet;
    std::string m_View_tracking_url;
    bool m_View_tracking_urlIsSet;
    std::string m_Ad_account_id;
    bool m_Ad_account_idIsSet;
    std::string m_Campaign_id;
    bool m_Campaign_idIsSet;
    std::string m_Collection_items_destination_url_template;
    bool m_Collection_items_destination_url_templateIsSet;
    int32_t m_Created_time;
    bool m_Created_timeIsSet;
    std::string m_Id;
    bool m_IdIsSet;
    std::vector<std::string> m_Rejected_reasons;
    bool m_Rejected_reasonsIsSet;
    std::vector<std::string> m_Rejection_labels;
    bool m_Rejection_labelsIsSet;
    std::string m_Review_status;
    bool m_Review_statusIsSet;
    std::string m_Type;
    bool m_TypeIsSet;
    int32_t m_Updated_time;
    bool m_Updated_timeIsSet;
    PinPromotionSummaryStatus m_Summary_status;
    bool m_Summary_statusIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* AdResponse_H_ */
