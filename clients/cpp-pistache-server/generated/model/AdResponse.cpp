/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.4.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "AdResponse.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

AdResponse::AdResponse()
{
    m_Ad_group_id = "";
    m_Ad_group_idIsSet = false;
    m_Android_deep_link = "";
    m_Android_deep_linkIsSet = false;
    m_Carousel_android_deep_linksIsSet = false;
    m_Carousel_destination_urlsIsSet = false;
    m_Carousel_ios_deep_linksIsSet = false;
    m_Click_tracking_url = "";
    m_Click_tracking_urlIsSet = false;
    m_Creative_typeIsSet = false;
    m_Destination_url = "";
    m_Destination_urlIsSet = false;
    m_Ios_deep_link = "";
    m_Ios_deep_linkIsSet = false;
    m_Is_pin_deleted = false;
    m_Is_pin_deletedIsSet = false;
    m_Is_removable = false;
    m_Is_removableIsSet = false;
    m_Name = "";
    m_NameIsSet = false;
    m_Pin_id = "";
    m_Pin_idIsSet = false;
    m_StatusIsSet = false;
    m_Tracking_urlsIsSet = false;
    m_View_tracking_url = "";
    m_View_tracking_urlIsSet = false;
    m_Ad_account_id = "";
    m_Ad_account_idIsSet = false;
    m_Campaign_id = "";
    m_Campaign_idIsSet = false;
    m_Collection_items_destination_url_template = "";
    m_Collection_items_destination_url_templateIsSet = false;
    m_Created_time = 0;
    m_Created_timeIsSet = false;
    m_Id = "";
    m_IdIsSet = false;
    m_Rejected_reasonsIsSet = false;
    m_Rejection_labelsIsSet = false;
    m_Review_status = "";
    m_Review_statusIsSet = false;
    m_Type = "";
    m_TypeIsSet = false;
    m_Updated_time = 0;
    m_Updated_timeIsSet = false;
    m_Summary_status = "";
    m_Summary_statusIsSet = false;
    
}

void AdResponse::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AdResponse::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AdResponse::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AdResponse" : pathPrefix;

         
    if (adGroupIdIsSet())
    {
        const std::string& value = m_Ad_group_id;
        const std::string currentValuePath = _pathPrefix + ".adGroupId";
                
        

    }
             
    if (carouselAndroidDeepLinksIsSet())
    {
        const std::vector<std::string>& value = m_Carousel_android_deep_links;
        const std::string currentValuePath = _pathPrefix + ".carouselAndroidDeepLinks";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
         
    if (carouselDestinationUrlsIsSet())
    {
        const std::vector<std::string>& value = m_Carousel_destination_urls;
        const std::string currentValuePath = _pathPrefix + ".carouselDestinationUrls";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
         
    if (carouselIosDeepLinksIsSet())
    {
        const std::vector<std::string>& value = m_Carousel_ios_deep_links;
        const std::string currentValuePath = _pathPrefix + ".carouselIosDeepLinks";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
                                     
    if (pinIdIsSet())
    {
        const std::string& value = m_Pin_id;
        const std::string currentValuePath = _pathPrefix + ".pinId";
                
        

    }
                     
    if (adAccountIdIsSet())
    {
        const std::string& value = m_Ad_account_id;
        const std::string currentValuePath = _pathPrefix + ".adAccountId";
                
        

    }
         
    if (campaignIdIsSet())
    {
        const std::string& value = m_Campaign_id;
        const std::string currentValuePath = _pathPrefix + ".campaignId";
                
        

    }
                 
    if (idIsSet())
    {
        const std::string& value = m_Id;
        const std::string currentValuePath = _pathPrefix + ".id";
                
        

    }
         
    if (rejectedReasonsIsSet())
    {
        const std::vector<std::string>& value = m_Rejected_reasons;
        const std::string currentValuePath = _pathPrefix + ".rejectedReasons";
                
        success = value.validate(msg, currentValuePath) && success;
        
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
        if (
            value != "HASHTAGS" &&
            value != "PROMOTIONS_AND_PRICES" &&
            value != "TARGETING" &&
            value != "LANDING_PAGE" &&
            value != "CAPS_AND_SYMBOLS" &&
            value != "SHOCKING" &&
            value != "WEIGHT_LOSS" &&
            value != "PROHIBITED_PRODUCT" &&
            value != "AUTHENTICITY" &&
            value != "NUDITY" &&
            value != "CONFUSING_DESIGN" &&
            value != "URGENCY" &&
            value != "RATINGS" &&
            value != "APP" &&
            value != "ALCOHOL" &&
            value != "CONTESTS" &&
            value != "POLITICAL" &&
            value != "OTHER" &&
            value != "IMAGE" &&
            value != "NAR" &&
            value != "INCONSISTENT" &&
            value != "CLICKBAIT" &&
            value != "NO_DESCRIPTION" &&
            value != "LOW_QUALITY" &&
            value != "EXAGGERATED_CLAIMS" &&
            value != "PINTEREST_BRAND" &&
            value != "ALCOHOL_NO_SALE" &&
            value != "LANDING_PAGE_SPEED" &&
            value != "LANDING_PAGE_HARDWALL" &&
            value != "LANDING_PAGE_BROKEN" &&
            value != "LANDING_PAGE_QUALITY" &&
            value != "OUT_OF_STOCK" &&
            value != "IMAGE_LOW_QUALITY" &&
            value != "IMAGE_BUSY" &&
            value != "IMAGE_POORLY_EDITED" &&
            value != "IMAGE_BEFORE_AFTER" &&
            value != "UGC" &&
            value != "FAKE_BUTTONS" &&
            value != "WEAPONS" &&
            value != "SENSITIVE" &&
            value != "UNACCEPTABLE_BUSINESS" &&
            value != "SUSPICIOUS_CLAIMS" &&
            value != "PHARMA" &&
            value != "SUSPICIOUS_SUPPLEMENTS" &&
            value != "ILLEGAL_RECREATIONAL_DRUG" &&
            value != "LOW_QUALITY_LANDING_PAGE" &&
            value != "RESTRICTED_HEALTHCARE" &&
            value != "INCONSISTENT_LANG_FR"
        ) {
            success = false;
            msg << currentValuePath << ": has invalid value \"" << value << "\";";
        }
 
                i++;
            }
        }

    }
         
    if (rejectionLabelsIsSet())
    {
        const std::vector<std::string>& value = m_Rejection_labels;
        const std::string currentValuePath = _pathPrefix + ".rejectionLabels";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
                    
    return success;
}

bool AdResponse::operator==(const AdResponse& rhs) const
{
    return
    
    
    
    ((!adGroupIdIsSet() && !rhs.adGroupIdIsSet()) || (adGroupIdIsSet() && rhs.adGroupIdIsSet() && getAdGroupId() == rhs.getAdGroupId())) &&
    
    
    ((!androidDeepLinkIsSet() && !rhs.androidDeepLinkIsSet()) || (androidDeepLinkIsSet() && rhs.androidDeepLinkIsSet() && getAndroidDeepLink() == rhs.getAndroidDeepLink())) &&
    
    
    ((!carouselAndroidDeepLinksIsSet() && !rhs.carouselAndroidDeepLinksIsSet()) || (carouselAndroidDeepLinksIsSet() && rhs.carouselAndroidDeepLinksIsSet() && getCarouselAndroidDeepLinks() == rhs.getCarouselAndroidDeepLinks())) &&
    
    
    ((!carouselDestinationUrlsIsSet() && !rhs.carouselDestinationUrlsIsSet()) || (carouselDestinationUrlsIsSet() && rhs.carouselDestinationUrlsIsSet() && getCarouselDestinationUrls() == rhs.getCarouselDestinationUrls())) &&
    
    
    ((!carouselIosDeepLinksIsSet() && !rhs.carouselIosDeepLinksIsSet()) || (carouselIosDeepLinksIsSet() && rhs.carouselIosDeepLinksIsSet() && getCarouselIosDeepLinks() == rhs.getCarouselIosDeepLinks())) &&
    
    
    ((!clickTrackingUrlIsSet() && !rhs.clickTrackingUrlIsSet()) || (clickTrackingUrlIsSet() && rhs.clickTrackingUrlIsSet() && getClickTrackingUrl() == rhs.getClickTrackingUrl())) &&
    
    
    ((!creativeTypeIsSet() && !rhs.creativeTypeIsSet()) || (creativeTypeIsSet() && rhs.creativeTypeIsSet() && getCreativeType() == rhs.getCreativeType())) &&
    
    
    ((!destinationUrlIsSet() && !rhs.destinationUrlIsSet()) || (destinationUrlIsSet() && rhs.destinationUrlIsSet() && getDestinationUrl() == rhs.getDestinationUrl())) &&
    
    
    ((!iosDeepLinkIsSet() && !rhs.iosDeepLinkIsSet()) || (iosDeepLinkIsSet() && rhs.iosDeepLinkIsSet() && getIosDeepLink() == rhs.getIosDeepLink())) &&
    
    
    ((!isPinDeletedIsSet() && !rhs.isPinDeletedIsSet()) || (isPinDeletedIsSet() && rhs.isPinDeletedIsSet() && isIsPinDeleted() == rhs.isIsPinDeleted())) &&
    
    
    ((!isRemovableIsSet() && !rhs.isRemovableIsSet()) || (isRemovableIsSet() && rhs.isRemovableIsSet() && isIsRemovable() == rhs.isIsRemovable())) &&
    
    
    ((!nameIsSet() && !rhs.nameIsSet()) || (nameIsSet() && rhs.nameIsSet() && getName() == rhs.getName())) &&
    
    
    ((!pinIdIsSet() && !rhs.pinIdIsSet()) || (pinIdIsSet() && rhs.pinIdIsSet() && getPinId() == rhs.getPinId())) &&
    
    
    ((!statusIsSet() && !rhs.statusIsSet()) || (statusIsSet() && rhs.statusIsSet() && getStatus() == rhs.getStatus())) &&
    
    
    ((!trackingUrlsIsSet() && !rhs.trackingUrlsIsSet()) || (trackingUrlsIsSet() && rhs.trackingUrlsIsSet() && getTrackingUrls() == rhs.getTrackingUrls())) &&
    
    
    ((!viewTrackingUrlIsSet() && !rhs.viewTrackingUrlIsSet()) || (viewTrackingUrlIsSet() && rhs.viewTrackingUrlIsSet() && getViewTrackingUrl() == rhs.getViewTrackingUrl())) &&
    
    
    ((!adAccountIdIsSet() && !rhs.adAccountIdIsSet()) || (adAccountIdIsSet() && rhs.adAccountIdIsSet() && getAdAccountId() == rhs.getAdAccountId())) &&
    
    
    ((!campaignIdIsSet() && !rhs.campaignIdIsSet()) || (campaignIdIsSet() && rhs.campaignIdIsSet() && getCampaignId() == rhs.getCampaignId())) &&
    
    
    ((!collectionItemsDestinationUrlTemplateIsSet() && !rhs.collectionItemsDestinationUrlTemplateIsSet()) || (collectionItemsDestinationUrlTemplateIsSet() && rhs.collectionItemsDestinationUrlTemplateIsSet() && getCollectionItemsDestinationUrlTemplate() == rhs.getCollectionItemsDestinationUrlTemplate())) &&
    
    
    ((!createdTimeIsSet() && !rhs.createdTimeIsSet()) || (createdTimeIsSet() && rhs.createdTimeIsSet() && getCreatedTime() == rhs.getCreatedTime())) &&
    
    
    ((!idIsSet() && !rhs.idIsSet()) || (idIsSet() && rhs.idIsSet() && getId() == rhs.getId())) &&
    
    
    ((!rejectedReasonsIsSet() && !rhs.rejectedReasonsIsSet()) || (rejectedReasonsIsSet() && rhs.rejectedReasonsIsSet() && getRejectedReasons() == rhs.getRejectedReasons())) &&
    
    
    ((!rejectionLabelsIsSet() && !rhs.rejectionLabelsIsSet()) || (rejectionLabelsIsSet() && rhs.rejectionLabelsIsSet() && getRejectionLabels() == rhs.getRejectionLabels())) &&
    
    
    ((!reviewStatusIsSet() && !rhs.reviewStatusIsSet()) || (reviewStatusIsSet() && rhs.reviewStatusIsSet() && getReviewStatus() == rhs.getReviewStatus())) &&
    
    
    ((!typeIsSet() && !rhs.typeIsSet()) || (typeIsSet() && rhs.typeIsSet() && getType() == rhs.getType())) &&
    
    
    ((!updatedTimeIsSet() && !rhs.updatedTimeIsSet()) || (updatedTimeIsSet() && rhs.updatedTimeIsSet() && getUpdatedTime() == rhs.getUpdatedTime())) &&
    
    
    ((!summaryStatusIsSet() && !rhs.summaryStatusIsSet()) || (summaryStatusIsSet() && rhs.summaryStatusIsSet() && getSummaryStatus() == rhs.getSummaryStatus()))
    
    ;
}

bool AdResponse::operator!=(const AdResponse& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AdResponse& o)
{
    j = nlohmann::json();
    if(o.adGroupIdIsSet())
        j["ad_group_id"] = o.m_Ad_group_id;
    if(o.androidDeepLinkIsSet())
        j["android_deep_link"] = o.m_Android_deep_link;
    if(o.carouselAndroidDeepLinksIsSet() || !o.m_Carousel_android_deep_links.empty())
        j["carousel_android_deep_links"] = o.m_Carousel_android_deep_links;
    if(o.carouselDestinationUrlsIsSet() || !o.m_Carousel_destination_urls.empty())
        j["carousel_destination_urls"] = o.m_Carousel_destination_urls;
    if(o.carouselIosDeepLinksIsSet() || !o.m_Carousel_ios_deep_links.empty())
        j["carousel_ios_deep_links"] = o.m_Carousel_ios_deep_links;
    if(o.clickTrackingUrlIsSet())
        j["click_tracking_url"] = o.m_Click_tracking_url;
    if(o.creativeTypeIsSet())
        j["creative_type"] = o.m_Creative_type;
    if(o.destinationUrlIsSet())
        j["destination_url"] = o.m_Destination_url;
    if(o.iosDeepLinkIsSet())
        j["ios_deep_link"] = o.m_Ios_deep_link;
    if(o.isPinDeletedIsSet())
        j["is_pin_deleted"] = o.m_Is_pin_deleted;
    if(o.isRemovableIsSet())
        j["is_removable"] = o.m_Is_removable;
    if(o.nameIsSet())
        j["name"] = o.m_Name;
    if(o.pinIdIsSet())
        j["pin_id"] = o.m_Pin_id;
    if(o.statusIsSet())
        j["status"] = o.m_Status;
    if(o.trackingUrlsIsSet())
        j["tracking_urls"] = o.m_Tracking_urls;
    if(o.viewTrackingUrlIsSet())
        j["view_tracking_url"] = o.m_View_tracking_url;
    if(o.adAccountIdIsSet())
        j["ad_account_id"] = o.m_Ad_account_id;
    if(o.campaignIdIsSet())
        j["campaign_id"] = o.m_Campaign_id;
    if(o.collectionItemsDestinationUrlTemplateIsSet())
        j["collection_items_destination_url_template"] = o.m_Collection_items_destination_url_template;
    if(o.createdTimeIsSet())
        j["created_time"] = o.m_Created_time;
    if(o.idIsSet())
        j["id"] = o.m_Id;
    if(o.rejectedReasonsIsSet() || !o.m_Rejected_reasons.empty())
        j["rejected_reasons"] = o.m_Rejected_reasons;
    if(o.rejectionLabelsIsSet() || !o.m_Rejection_labels.empty())
        j["rejection_labels"] = o.m_Rejection_labels;
    if(o.reviewStatusIsSet())
        j["review_status"] = o.m_Review_status;
    if(o.typeIsSet())
        j["type"] = o.m_Type;
    if(o.updatedTimeIsSet())
        j["updated_time"] = o.m_Updated_time;
    if(o.summaryStatusIsSet())
        j["summary_status"] = o.m_Summary_status;
    
}

void from_json(const nlohmann::json& j, AdResponse& o)
{
    if(j.find("ad_group_id") != j.end())
    {
        j.at("ad_group_id").get_to(o.m_Ad_group_id);
        o.m_Ad_group_idIsSet = true;
    } 
    if(j.find("android_deep_link") != j.end())
    {
        j.at("android_deep_link").get_to(o.m_Android_deep_link);
        o.m_Android_deep_linkIsSet = true;
    } 
    if(j.find("carousel_android_deep_links") != j.end())
    {
        j.at("carousel_android_deep_links").get_to(o.m_Carousel_android_deep_links);
        o.m_Carousel_android_deep_linksIsSet = true;
    } 
    if(j.find("carousel_destination_urls") != j.end())
    {
        j.at("carousel_destination_urls").get_to(o.m_Carousel_destination_urls);
        o.m_Carousel_destination_urlsIsSet = true;
    } 
    if(j.find("carousel_ios_deep_links") != j.end())
    {
        j.at("carousel_ios_deep_links").get_to(o.m_Carousel_ios_deep_links);
        o.m_Carousel_ios_deep_linksIsSet = true;
    } 
    if(j.find("click_tracking_url") != j.end())
    {
        j.at("click_tracking_url").get_to(o.m_Click_tracking_url);
        o.m_Click_tracking_urlIsSet = true;
    } 
    if(j.find("creative_type") != j.end())
    {
        j.at("creative_type").get_to(o.m_Creative_type);
        o.m_Creative_typeIsSet = true;
    } 
    if(j.find("destination_url") != j.end())
    {
        j.at("destination_url").get_to(o.m_Destination_url);
        o.m_Destination_urlIsSet = true;
    } 
    if(j.find("ios_deep_link") != j.end())
    {
        j.at("ios_deep_link").get_to(o.m_Ios_deep_link);
        o.m_Ios_deep_linkIsSet = true;
    } 
    if(j.find("is_pin_deleted") != j.end())
    {
        j.at("is_pin_deleted").get_to(o.m_Is_pin_deleted);
        o.m_Is_pin_deletedIsSet = true;
    } 
    if(j.find("is_removable") != j.end())
    {
        j.at("is_removable").get_to(o.m_Is_removable);
        o.m_Is_removableIsSet = true;
    } 
    if(j.find("name") != j.end())
    {
        j.at("name").get_to(o.m_Name);
        o.m_NameIsSet = true;
    } 
    if(j.find("pin_id") != j.end())
    {
        j.at("pin_id").get_to(o.m_Pin_id);
        o.m_Pin_idIsSet = true;
    } 
    if(j.find("status") != j.end())
    {
        j.at("status").get_to(o.m_Status);
        o.m_StatusIsSet = true;
    } 
    if(j.find("tracking_urls") != j.end())
    {
        j.at("tracking_urls").get_to(o.m_Tracking_urls);
        o.m_Tracking_urlsIsSet = true;
    } 
    if(j.find("view_tracking_url") != j.end())
    {
        j.at("view_tracking_url").get_to(o.m_View_tracking_url);
        o.m_View_tracking_urlIsSet = true;
    } 
    if(j.find("ad_account_id") != j.end())
    {
        j.at("ad_account_id").get_to(o.m_Ad_account_id);
        o.m_Ad_account_idIsSet = true;
    } 
    if(j.find("campaign_id") != j.end())
    {
        j.at("campaign_id").get_to(o.m_Campaign_id);
        o.m_Campaign_idIsSet = true;
    } 
    if(j.find("collection_items_destination_url_template") != j.end())
    {
        j.at("collection_items_destination_url_template").get_to(o.m_Collection_items_destination_url_template);
        o.m_Collection_items_destination_url_templateIsSet = true;
    } 
    if(j.find("created_time") != j.end())
    {
        j.at("created_time").get_to(o.m_Created_time);
        o.m_Created_timeIsSet = true;
    } 
    if(j.find("id") != j.end())
    {
        j.at("id").get_to(o.m_Id);
        o.m_IdIsSet = true;
    } 
    if(j.find("rejected_reasons") != j.end())
    {
        j.at("rejected_reasons").get_to(o.m_Rejected_reasons);
        o.m_Rejected_reasonsIsSet = true;
    } 
    if(j.find("rejection_labels") != j.end())
    {
        j.at("rejection_labels").get_to(o.m_Rejection_labels);
        o.m_Rejection_labelsIsSet = true;
    } 
    if(j.find("review_status") != j.end())
    {
        j.at("review_status").get_to(o.m_Review_status);
        o.m_Review_statusIsSet = true;
    } 
    if(j.find("type") != j.end())
    {
        j.at("type").get_to(o.m_Type);
        o.m_TypeIsSet = true;
    } 
    if(j.find("updated_time") != j.end())
    {
        j.at("updated_time").get_to(o.m_Updated_time);
        o.m_Updated_timeIsSet = true;
    } 
    if(j.find("summary_status") != j.end())
    {
        j.at("summary_status").get_to(o.m_Summary_status);
        o.m_Summary_statusIsSet = true;
    } 
    
}

std::string AdResponse::getAdGroupId() const
{
    return m_Ad_group_id;
}
void AdResponse::setAdGroupId(std::string const& value)
{
    m_Ad_group_id = value;
    m_Ad_group_idIsSet = true;
}
bool AdResponse::adGroupIdIsSet() const
{
    return m_Ad_group_idIsSet;
}
void AdResponse::unsetAd_group_id()
{
    m_Ad_group_idIsSet = false;
}
std::string AdResponse::getAndroidDeepLink() const
{
    return m_Android_deep_link;
}
void AdResponse::setAndroidDeepLink(std::string const& value)
{
    m_Android_deep_link = value;
    m_Android_deep_linkIsSet = true;
}
bool AdResponse::androidDeepLinkIsSet() const
{
    return m_Android_deep_linkIsSet;
}
void AdResponse::unsetAndroid_deep_link()
{
    m_Android_deep_linkIsSet = false;
}
std::vector<std::string> AdResponse::getCarouselAndroidDeepLinks() const
{
    return m_Carousel_android_deep_links;
}
void AdResponse::setCarouselAndroidDeepLinks(std::vector<std::string> const& value)
{
    m_Carousel_android_deep_links = value;
    m_Carousel_android_deep_linksIsSet = true;
}
bool AdResponse::carouselAndroidDeepLinksIsSet() const
{
    return m_Carousel_android_deep_linksIsSet;
}
void AdResponse::unsetCarousel_android_deep_links()
{
    m_Carousel_android_deep_linksIsSet = false;
}
std::vector<std::string> AdResponse::getCarouselDestinationUrls() const
{
    return m_Carousel_destination_urls;
}
void AdResponse::setCarouselDestinationUrls(std::vector<std::string> const& value)
{
    m_Carousel_destination_urls = value;
    m_Carousel_destination_urlsIsSet = true;
}
bool AdResponse::carouselDestinationUrlsIsSet() const
{
    return m_Carousel_destination_urlsIsSet;
}
void AdResponse::unsetCarousel_destination_urls()
{
    m_Carousel_destination_urlsIsSet = false;
}
std::vector<std::string> AdResponse::getCarouselIosDeepLinks() const
{
    return m_Carousel_ios_deep_links;
}
void AdResponse::setCarouselIosDeepLinks(std::vector<std::string> const& value)
{
    m_Carousel_ios_deep_links = value;
    m_Carousel_ios_deep_linksIsSet = true;
}
bool AdResponse::carouselIosDeepLinksIsSet() const
{
    return m_Carousel_ios_deep_linksIsSet;
}
void AdResponse::unsetCarousel_ios_deep_links()
{
    m_Carousel_ios_deep_linksIsSet = false;
}
std::string AdResponse::getClickTrackingUrl() const
{
    return m_Click_tracking_url;
}
void AdResponse::setClickTrackingUrl(std::string const& value)
{
    m_Click_tracking_url = value;
    m_Click_tracking_urlIsSet = true;
}
bool AdResponse::clickTrackingUrlIsSet() const
{
    return m_Click_tracking_urlIsSet;
}
void AdResponse::unsetClick_tracking_url()
{
    m_Click_tracking_urlIsSet = false;
}
org::openapitools::server::model::CreativeType AdResponse::getCreativeType() const
{
    return m_Creative_type;
}
void AdResponse::setCreativeType(org::openapitools::server::model::CreativeType const& value)
{
    m_Creative_type = value;
    m_Creative_typeIsSet = true;
}
bool AdResponse::creativeTypeIsSet() const
{
    return m_Creative_typeIsSet;
}
void AdResponse::unsetCreative_type()
{
    m_Creative_typeIsSet = false;
}
std::string AdResponse::getDestinationUrl() const
{
    return m_Destination_url;
}
void AdResponse::setDestinationUrl(std::string const& value)
{
    m_Destination_url = value;
    m_Destination_urlIsSet = true;
}
bool AdResponse::destinationUrlIsSet() const
{
    return m_Destination_urlIsSet;
}
void AdResponse::unsetDestination_url()
{
    m_Destination_urlIsSet = false;
}
std::string AdResponse::getIosDeepLink() const
{
    return m_Ios_deep_link;
}
void AdResponse::setIosDeepLink(std::string const& value)
{
    m_Ios_deep_link = value;
    m_Ios_deep_linkIsSet = true;
}
bool AdResponse::iosDeepLinkIsSet() const
{
    return m_Ios_deep_linkIsSet;
}
void AdResponse::unsetIos_deep_link()
{
    m_Ios_deep_linkIsSet = false;
}
bool AdResponse::isIsPinDeleted() const
{
    return m_Is_pin_deleted;
}
void AdResponse::setIsPinDeleted(bool const value)
{
    m_Is_pin_deleted = value;
    m_Is_pin_deletedIsSet = true;
}
bool AdResponse::isPinDeletedIsSet() const
{
    return m_Is_pin_deletedIsSet;
}
void AdResponse::unsetIs_pin_deleted()
{
    m_Is_pin_deletedIsSet = false;
}
bool AdResponse::isIsRemovable() const
{
    return m_Is_removable;
}
void AdResponse::setIsRemovable(bool const value)
{
    m_Is_removable = value;
    m_Is_removableIsSet = true;
}
bool AdResponse::isRemovableIsSet() const
{
    return m_Is_removableIsSet;
}
void AdResponse::unsetIs_removable()
{
    m_Is_removableIsSet = false;
}
std::string AdResponse::getName() const
{
    return m_Name;
}
void AdResponse::setName(std::string const& value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool AdResponse::nameIsSet() const
{
    return m_NameIsSet;
}
void AdResponse::unsetName()
{
    m_NameIsSet = false;
}
std::string AdResponse::getPinId() const
{
    return m_Pin_id;
}
void AdResponse::setPinId(std::string const& value)
{
    m_Pin_id = value;
    m_Pin_idIsSet = true;
}
bool AdResponse::pinIdIsSet() const
{
    return m_Pin_idIsSet;
}
void AdResponse::unsetPin_id()
{
    m_Pin_idIsSet = false;
}
org::openapitools::server::model::EntityStatus AdResponse::getStatus() const
{
    return m_Status;
}
void AdResponse::setStatus(org::openapitools::server::model::EntityStatus const& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool AdResponse::statusIsSet() const
{
    return m_StatusIsSet;
}
void AdResponse::unsetStatus()
{
    m_StatusIsSet = false;
}
org::openapitools::server::model::AdCommon_tracking_urls AdResponse::getTrackingUrls() const
{
    return m_Tracking_urls;
}
void AdResponse::setTrackingUrls(org::openapitools::server::model::AdCommon_tracking_urls const& value)
{
    m_Tracking_urls = value;
    m_Tracking_urlsIsSet = true;
}
bool AdResponse::trackingUrlsIsSet() const
{
    return m_Tracking_urlsIsSet;
}
void AdResponse::unsetTracking_urls()
{
    m_Tracking_urlsIsSet = false;
}
std::string AdResponse::getViewTrackingUrl() const
{
    return m_View_tracking_url;
}
void AdResponse::setViewTrackingUrl(std::string const& value)
{
    m_View_tracking_url = value;
    m_View_tracking_urlIsSet = true;
}
bool AdResponse::viewTrackingUrlIsSet() const
{
    return m_View_tracking_urlIsSet;
}
void AdResponse::unsetView_tracking_url()
{
    m_View_tracking_urlIsSet = false;
}
std::string AdResponse::getAdAccountId() const
{
    return m_Ad_account_id;
}
void AdResponse::setAdAccountId(std::string const& value)
{
    m_Ad_account_id = value;
    m_Ad_account_idIsSet = true;
}
bool AdResponse::adAccountIdIsSet() const
{
    return m_Ad_account_idIsSet;
}
void AdResponse::unsetAd_account_id()
{
    m_Ad_account_idIsSet = false;
}
std::string AdResponse::getCampaignId() const
{
    return m_Campaign_id;
}
void AdResponse::setCampaignId(std::string const& value)
{
    m_Campaign_id = value;
    m_Campaign_idIsSet = true;
}
bool AdResponse::campaignIdIsSet() const
{
    return m_Campaign_idIsSet;
}
void AdResponse::unsetCampaign_id()
{
    m_Campaign_idIsSet = false;
}
std::string AdResponse::getCollectionItemsDestinationUrlTemplate() const
{
    return m_Collection_items_destination_url_template;
}
void AdResponse::setCollectionItemsDestinationUrlTemplate(std::string const& value)
{
    m_Collection_items_destination_url_template = value;
    m_Collection_items_destination_url_templateIsSet = true;
}
bool AdResponse::collectionItemsDestinationUrlTemplateIsSet() const
{
    return m_Collection_items_destination_url_templateIsSet;
}
void AdResponse::unsetCollection_items_destination_url_template()
{
    m_Collection_items_destination_url_templateIsSet = false;
}
int32_t AdResponse::getCreatedTime() const
{
    return m_Created_time;
}
void AdResponse::setCreatedTime(int32_t const value)
{
    m_Created_time = value;
    m_Created_timeIsSet = true;
}
bool AdResponse::createdTimeIsSet() const
{
    return m_Created_timeIsSet;
}
void AdResponse::unsetCreated_time()
{
    m_Created_timeIsSet = false;
}
std::string AdResponse::getId() const
{
    return m_Id;
}
void AdResponse::setId(std::string const& value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool AdResponse::idIsSet() const
{
    return m_IdIsSet;
}
void AdResponse::unsetId()
{
    m_IdIsSet = false;
}
std::vector<std::string> AdResponse::getRejectedReasons() const
{
    return m_Rejected_reasons;
}
void AdResponse::setRejectedReasons(std::vector<std::string> const& value)
{
    m_Rejected_reasons = value;
    m_Rejected_reasonsIsSet = true;
}
bool AdResponse::rejectedReasonsIsSet() const
{
    return m_Rejected_reasonsIsSet;
}
void AdResponse::unsetRejected_reasons()
{
    m_Rejected_reasonsIsSet = false;
}
std::vector<std::string> AdResponse::getRejectionLabels() const
{
    return m_Rejection_labels;
}
void AdResponse::setRejectionLabels(std::vector<std::string> const& value)
{
    m_Rejection_labels = value;
    m_Rejection_labelsIsSet = true;
}
bool AdResponse::rejectionLabelsIsSet() const
{
    return m_Rejection_labelsIsSet;
}
void AdResponse::unsetRejection_labels()
{
    m_Rejection_labelsIsSet = false;
}
std::string AdResponse::getReviewStatus() const
{
    return m_Review_status;
}
void AdResponse::setReviewStatus(std::string const& value)
{
    m_Review_status = value;
    m_Review_statusIsSet = true;
}
bool AdResponse::reviewStatusIsSet() const
{
    return m_Review_statusIsSet;
}
void AdResponse::unsetReview_status()
{
    m_Review_statusIsSet = false;
}
std::string AdResponse::getType() const
{
    return m_Type;
}
void AdResponse::setType(std::string const& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool AdResponse::typeIsSet() const
{
    return m_TypeIsSet;
}
void AdResponse::unsetType()
{
    m_TypeIsSet = false;
}
int32_t AdResponse::getUpdatedTime() const
{
    return m_Updated_time;
}
void AdResponse::setUpdatedTime(int32_t const value)
{
    m_Updated_time = value;
    m_Updated_timeIsSet = true;
}
bool AdResponse::updatedTimeIsSet() const
{
    return m_Updated_timeIsSet;
}
void AdResponse::unsetUpdated_time()
{
    m_Updated_timeIsSet = false;
}
PinPromotionSummaryStatus AdResponse::getSummaryStatus() const
{
    return m_Summary_status;
}
void AdResponse::setSummaryStatus(PinPromotionSummaryStatus const& value)
{
    m_Summary_status = value;
    m_Summary_statusIsSet = true;
}
bool AdResponse::summaryStatusIsSet() const
{
    return m_Summary_statusIsSet;
}
void AdResponse::unsetSummary_status()
{
    m_Summary_statusIsSet = false;
}


} // namespace org::openapitools::server::model

