/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * AdGroupResponse_allOf.h
 *
 * 
 */

#ifndef AdGroupResponse_allOf_H_
#define AdGroupResponse_allOf_H_



#include "PlacementGroupType.h"
#include "EntityStatus.h"
#include "PacingDeliveryType.h"
#include <string>
#include "TrackingUrls.h"
#include "AdGroupSummaryStatus.h"
#include <map>
#include <vector>
#include <memory>
#include <vector>
#include <array>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  AdGroupResponse_allOf 
{
public:
    AdGroupResponse_allOf() = default;
    explicit AdGroupResponse_allOf(boost::property_tree::ptree const& pt);
    virtual ~AdGroupResponse_allOf() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// AdGroupResponse_allOf members

    /// <summary>
    /// Ad group name.
    /// </summary>
    std::string getName() const;
    void setName(std::string value);

    /// <summary>
    /// Ad group/entity status.
    /// </summary>
    EntityStatus getStatus() const;
    void setStatus(EntityStatus value);

    /// <summary>
    /// Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.
    /// </summary>
    int32_t getBudgetInMicroCurrency() const;
    void setBudgetInMicroCurrency(int32_t value);

    /// <summary>
    /// Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.
    /// </summary>
    int32_t getBidInMicroCurrency() const;
    void setBidInMicroCurrency(int32_t value);

    /// <summary>
    /// Budget type. If DAILY, an ad group&#39;s daily spend will not exceed the budget parameter value. If LIFETIME, the end_time parameter is **REQUIRED**, and the ad group spend is spread evenly between the ad group &#x60;start_time&#x60; and &#x60;end_time&#x60; range. A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome.
    /// </summary>
    std::string getBudgetType() const;
    void setBudgetType(std::string value);

    /// <summary>
    /// Ad group start time. Unix timestamp in seconds. Defaults to current time.
    /// </summary>
    int32_t getStartTime() const;
    void setStartTime(int32_t value);

    /// <summary>
    /// Ad group end time. Unix timestamp in seconds.
    /// </summary>
    int32_t getEndTime() const;
    void setEndTime(int32_t value);

    /// <summary>
    /// Ad group targeting specification defining the ad group target audience. For example, &#39;{\&quot;APPTYPE\&quot;:[\&quot;iphone\&quot;], \&quot;GENDER\&quot;:[\&quot;male\&quot;], \&quot;LOCALE\&quot;:[\&quot;en-US\&quot;], \&quot;LOCATION\&quot;:[\&quot;501\&quot;], \&quot;AGE_BUCKET\&quot;:[\&quot;25-34\&quot;]}&#39;
    /// </summary>
    std::map<std::string, std::vector<std::string>> getTargetingSpec() const;
    void setTargetingSpec(std::map<std::string, std::vector<std::string>> value);

    /// <summary>
    /// Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION &lt;a href&#x3D;\\\&quot;/docs/redoc/#section/Billable-event\\\&quot;&gt;billable_event&lt;/a&gt; value. This field **REQUIRES** the &#x60;end_time&#x60; field.
    /// </summary>
    int32_t getLifetimeFrequencyCap() const;
    void setLifetimeFrequencyCap(int32_t value);

    /// <summary>
    /// Third-party tracking URLs.&lt;br&gt; JSON object with the format: {\&quot;&lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/#section/Tracking-URL-event\&quot;&gt;Tracking event enum&lt;/a&gt;\&quot;:[URL string array],...}&lt;br&gt; For example: {\&quot;impression\&quot;: [\&quot;URL1\&quot;, \&quot;URL2\&quot;], \&quot;click\&quot;: [\&quot;URL1\&quot;, \&quot;URL2\&quot;, \&quot;URL3\&quot;]}.&lt;br&gt;Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. May be null. Pass in an empty object - {} - to remove tracking URLs.&lt;br&gt;&lt;br&gt; For more information, see &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Third-party and dynamic tracking&lt;/a&gt;.
    /// </summary>
    std::shared_ptr<TrackingUrls> getTrackingUrls() const;
    void setTrackingUrls(std::shared_ptr<TrackingUrls> value);

    /// <summary>
    /// Enable auto-targeting for ad group. Also known as &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/expanded-targeting\&quot; target&#x3D;\&quot;_blank\&quot;&gt;\&quot;expanded targeting\&quot;&lt;/a&gt;.
    /// </summary>
    bool isAutoTargetingEnabled() const;
    void setAutoTargetingEnabled(bool value);

    /// <summary>
    /// &lt;a href&#x3D;\\\&quot;/docs/redoc/#section/Placement-group\\\&quot;&gt;Placement group&lt;/a&gt;.
    /// </summary>
    PlacementGroupType getPlacementGroup() const;
    void setPlacementGroup(PlacementGroupType value);

    /// <summary>
    /// Pacing delivery type. With ACCELERATED, an ad group budget is spent as fast as possible. With STANDARD, an ad group budget is spent smoothly over a day.
    /// </summary>
    PacingDeliveryType getPacingDeliveryType() const;
    void setPacingDeliveryType(PacingDeliveryType value);

    /// <summary>
    /// oCPM learn mode
    /// </summary>
    std::string getConversionLearningModeType() const;
    void setConversionLearningModeType(std::string value);

    /// <summary>
    /// Ad group summary status.
    /// </summary>
    AdGroupSummaryStatus getSummaryStatus() const;
    void setSummaryStatus(AdGroupSummaryStatus value);

    /// <summary>
    /// Feed Profile ID associated to the adgroup.
    /// </summary>
    std::string getFeedProfileId() const;
    void setFeedProfileId(std::string value);

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string toJsonString_internal(bool prettyJson = false);
    virtual void fromJsonString_internal(std::string const& jsonString);
    virtual boost::property_tree::ptree toPropertyTree_internal();
    virtual void fromPropertyTree_internal(boost::property_tree::ptree const& pt);


protected:
    std::string m_Name = "";
    EntityStatus m_Status;
    int32_t m_Budget_in_micro_currency = 0;
    int32_t m_Bid_in_micro_currency = 0;
    std::string m_Budget_type = "";
    int32_t m_Start_time = 0;
    int32_t m_End_time = 0;
    std::map<std::string, std::vector<std::string>> m_Targeting_spec;
    int32_t m_Lifetime_frequency_cap = 0;
    std::shared_ptr<TrackingUrls> m_Tracking_urls;
    bool m_Auto_targeting_enabled = false;
    PlacementGroupType m_Placement_group;
    PacingDeliveryType m_Pacing_delivery_type;
    std::string m_Conversion_learning_mode_type = "";
    AdGroupSummaryStatus m_Summary_status;
    std::string m_Feed_profile_id = "";
    const std::array<std::string, 3> m_Budget_typeEnum = {
          "DAILY","LIFETIME","CBO_ADGROUP"
    };

    const std::array<std::string, 3> m_Conversion_learning_mode_typeEnum = {
          "NOT_ACTIVE","ACTIVE","null"
    };

};

std::vector<AdGroupResponse_allOf> createAdGroupResponse_allOfVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* AdGroupResponse_allOf_H_ */
