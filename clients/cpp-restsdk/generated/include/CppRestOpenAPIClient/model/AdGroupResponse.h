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

/*
 * AdGroupResponse.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_AdGroupResponse_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_AdGroupResponse_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/ActionType.h"
#include "CppRestOpenAPIClient/model/BudgetType.h"
#include "CppRestOpenAPIClient/model/EntityStatus.h"
#include "CppRestOpenAPIClient/model/AdGroupSummaryStatus.h"
#include "CppRestOpenAPIClient/model/AnyType.h"
#include "CppRestOpenAPIClient/model/PacingDeliveryType.h"
#include "CppRestOpenAPIClient/model/PlacementGroupType.h"
#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/AdGroupCommon_optimization_goal_metadata.h"
#include "CppRestOpenAPIClient/model/AdGroupCommon_tracking_urls.h"
#include "CppRestOpenAPIClient/model/TargetingSpec.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class AdGroupCommon_optimization_goal_metadata;
class TargetingSpec;
class AdGroupCommon_tracking_urls;

/// <summary>
/// 
/// </summary>
class  AdGroupResponse
    : public ModelBase
{
public:
    AdGroupResponse();
    virtual ~AdGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AdGroupResponse members

    /// <summary>
    /// Ad group name.
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// Ad group/entity status.
    /// </summary>
    std::shared_ptr<EntityStatus> getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const std::shared_ptr<EntityStatus>& value);

    /// <summary>
    /// Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.
    /// </summary>
    int32_t getBudgetInMicroCurrency() const;
    bool budgetInMicroCurrencyIsSet() const;
    void unsetBudget_in_micro_currency();

    void setBudgetInMicroCurrency(int32_t value);

    /// <summary>
    /// Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.
    /// </summary>
    int32_t getBidInMicroCurrency() const;
    bool bidInMicroCurrencyIsSet() const;
    void unsetBid_in_micro_currency();

    void setBidInMicroCurrency(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<AdGroupCommon_optimization_goal_metadata> getOptimizationGoalMetadata() const;
    bool optimizationGoalMetadataIsSet() const;
    void unsetOptimization_goal_metadata();

    void setOptimizationGoalMetadata(const std::shared_ptr<AdGroupCommon_optimization_goal_metadata>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BudgetType> getBudgetType() const;
    bool budgetTypeIsSet() const;
    void unsetBudget_type();

    void setBudgetType(const std::shared_ptr<BudgetType>& value);

    /// <summary>
    /// Ad group start time. Unix timestamp in seconds. Defaults to current time.
    /// </summary>
    int32_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetStart_time();

    void setStartTime(int32_t value);

    /// <summary>
    /// Ad group end time. Unix timestamp in seconds.
    /// </summary>
    int32_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetEnd_time();

    void setEndTime(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<TargetingSpec> getTargetingSpec() const;
    bool targetingSpecIsSet() const;
    void unsetTargeting_spec();

    void setTargetingSpec(const std::shared_ptr<TargetingSpec>& value);

    /// <summary>
    /// Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/#section/Billable-event\&quot;&gt;billable_event&lt;/a&gt; value. This field **REQUIRES** the &#x60;end_time&#x60; field.
    /// </summary>
    int32_t getLifetimeFrequencyCap() const;
    bool lifetimeFrequencyCapIsSet() const;
    void unsetLifetime_frequency_cap();

    void setLifetimeFrequencyCap(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<AdGroupCommon_tracking_urls> getTrackingUrls() const;
    bool trackingUrlsIsSet() const;
    void unsetTracking_urls();

    void setTrackingUrls(const std::shared_ptr<AdGroupCommon_tracking_urls>& value);

    /// <summary>
    /// Enable auto-targeting for ad group. Also known as &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/expanded-targeting\&quot; target&#x3D;\&quot;_blank\&quot;&gt;\&quot;expanded targeting\&quot;&lt;/a&gt;.
    /// </summary>
    bool isAutoTargetingEnabled() const;
    bool autoTargetingEnabledIsSet() const;
    void unsetAuto_targeting_enabled();

    void setAutoTargetingEnabled(bool value);

    /// <summary>
    /// &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/#section/Placement-group\&quot;&gt;Placement group&lt;/a&gt;.
    /// </summary>
    std::shared_ptr<PlacementGroupType> getPlacementGroup() const;
    bool placementGroupIsSet() const;
    void unsetPlacement_group();

    void setPlacementGroup(const std::shared_ptr<PlacementGroupType>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PacingDeliveryType> getPacingDeliveryType() const;
    bool pacingDeliveryTypeIsSet() const;
    void unsetPacing_delivery_type();

    void setPacingDeliveryType(const std::shared_ptr<PacingDeliveryType>& value);

    /// <summary>
    /// Campaign ID of the ad group.
    /// </summary>
    utility::string_t getCampaignId() const;
    bool campaignIdIsSet() const;
    void unsetCampaign_id();

    void setCampaignId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ActionType> getBillableEvent() const;
    bool billableEventIsSet() const;
    void unsetBillable_event();

    void setBillableEvent(const std::shared_ptr<ActionType>& value);

    /// <summary>
    /// Bid strategy type
    /// </summary>
    utility::string_t getBidStrategyType() const;
    bool bidStrategyTypeIsSet() const;
    void unsetBid_strategy_type();

    void setBidStrategyType(const utility::string_t& value);

    /// <summary>
    /// Ad group ID.
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// Advertiser ID.
    /// </summary>
    utility::string_t getAdAccountId() const;
    bool adAccountIdIsSet() const;
    void unsetAd_account_id();

    void setAdAccountId(const utility::string_t& value);

    /// <summary>
    /// Ad group creation time. Unix timestamp in seconds.
    /// </summary>
    int32_t getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetCreated_time();

    void setCreatedTime(int32_t value);

    /// <summary>
    /// Ad group last update time. Unix timestamp in seconds.
    /// </summary>
    int32_t getUpdatedTime() const;
    bool updatedTimeIsSet() const;
    void unsetUpdated_time();

    void setUpdatedTime(int32_t value);

    /// <summary>
    /// Always \&quot;adgroup\&quot;.
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(const utility::string_t& value);

    /// <summary>
    /// oCPM learn mode
    /// </summary>
    utility::string_t getConversionLearningModeType() const;
    bool conversionLearningModeTypeIsSet() const;
    void unsetConversion_learning_mode_type();

    void setConversionLearningModeType(const utility::string_t& value);

    /// <summary>
    /// Ad group summary status.
    /// </summary>
    std::shared_ptr<AdGroupSummaryStatus> getSummaryStatus() const;
    bool summaryStatusIsSet() const;
    void unsetSummary_status();

    void setSummaryStatus(const std::shared_ptr<AdGroupSummaryStatus>& value);

    /// <summary>
    /// Feed Profile ID associated to the adgroup.
    /// </summary>
    utility::string_t getFeedProfileId() const;
    bool feedProfileIdIsSet() const;
    void unsetFeed_profile_id();

    void setFeedProfileId(const utility::string_t& value);

    /// <summary>
    /// [DCA] The Dynamic creative assets to use for DCA. Dynamic Creative Assembly (DCA) accepts basic creative assets of an ad (image, video, title, call to action, logo etc). Then it automatically generates optimized ad combinations based on these assets.
    /// </summary>
    std::shared_ptr<AnyType> getDcaAssets() const;
    bool dcaAssetsIsSet() const;
    void unsetDca_assets();

    void setDcaAssets(const std::shared_ptr<AnyType>& value);


protected:
    utility::string_t m_Name;
    bool m_NameIsSet;
    std::shared_ptr<EntityStatus> m_Status;
    bool m_StatusIsSet;
    int32_t m_Budget_in_micro_currency;
    bool m_Budget_in_micro_currencyIsSet;
    int32_t m_Bid_in_micro_currency;
    bool m_Bid_in_micro_currencyIsSet;
    std::shared_ptr<AdGroupCommon_optimization_goal_metadata> m_Optimization_goal_metadata;
    bool m_Optimization_goal_metadataIsSet;
    std::shared_ptr<BudgetType> m_Budget_type;
    bool m_Budget_typeIsSet;
    int32_t m_Start_time;
    bool m_Start_timeIsSet;
    int32_t m_End_time;
    bool m_End_timeIsSet;
    std::shared_ptr<TargetingSpec> m_Targeting_spec;
    bool m_Targeting_specIsSet;
    int32_t m_Lifetime_frequency_cap;
    bool m_Lifetime_frequency_capIsSet;
    std::shared_ptr<AdGroupCommon_tracking_urls> m_Tracking_urls;
    bool m_Tracking_urlsIsSet;
    bool m_Auto_targeting_enabled;
    bool m_Auto_targeting_enabledIsSet;
    std::shared_ptr<PlacementGroupType> m_Placement_group;
    bool m_Placement_groupIsSet;
    std::shared_ptr<PacingDeliveryType> m_Pacing_delivery_type;
    bool m_Pacing_delivery_typeIsSet;
    utility::string_t m_Campaign_id;
    bool m_Campaign_idIsSet;
    std::shared_ptr<ActionType> m_Billable_event;
    bool m_Billable_eventIsSet;
    utility::string_t m_Bid_strategy_type;
    bool m_Bid_strategy_typeIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Ad_account_id;
    bool m_Ad_account_idIsSet;
    int32_t m_Created_time;
    bool m_Created_timeIsSet;
    int32_t m_Updated_time;
    bool m_Updated_timeIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
    utility::string_t m_Conversion_learning_mode_type;
    bool m_Conversion_learning_mode_typeIsSet;
    std::shared_ptr<AdGroupSummaryStatus> m_Summary_status;
    bool m_Summary_statusIsSet;
    utility::string_t m_Feed_profile_id;
    bool m_Feed_profile_idIsSet;
    std::shared_ptr<AnyType> m_Dca_assets;
    bool m_Dca_assetsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_AdGroupResponse_H_ */
