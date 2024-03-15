/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * CampaignResponse.h
 *
 * 
 */

#ifndef CampaignResponse_H_
#define CampaignResponse_H_


#include "CampaignSummaryStatus.h"
#include "EntityStatus.h"
#include "ObjectiveType.h"
#include <string>
#include "AdCommon_tracking_urls.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  CampaignResponse
{
public:
    CampaignResponse();
    virtual ~CampaignResponse() = default;


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

    bool operator==(const CampaignResponse& rhs) const;
    bool operator!=(const CampaignResponse& rhs) const;

    /////////////////////////////////////////////
    /// CampaignResponse members

    /// <summary>
    /// Campaign ID.
    /// </summary>
    std::string getId() const;
    void setId(std::string const& value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// Campaign&#39;s Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema.
    /// </summary>
    std::string getAdAccountId() const;
    void setAdAccountId(std::string const& value);
    bool adAccountIdIsSet() const;
    void unsetAd_account_id();
    /// <summary>
    /// Campaign name.
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
    bool nameIsSet() const;
    void unsetName();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::EntityStatus getStatus() const;
    void setStatus(org::openapitools::server::model::EntityStatus const& value);
    bool statusIsSet() const;
    void unsetStatus();
    /// <summary>
    /// Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \&quot;daily_spend_cap\&quot; cannot be set at the same time.
    /// </summary>
    int32_t getLifetimeSpendCap() const;
    void setLifetimeSpendCap(int32_t const value);
    bool lifetimeSpendCapIsSet() const;
    void unsetLifetime_spend_cap();
    /// <summary>
    /// Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \&quot;lifetime_spend_cap\&quot; cannot be set at the same time.
    /// </summary>
    int32_t getDailySpendCap() const;
    void setDailySpendCap(int32_t const value);
    bool dailySpendCapIsSet() const;
    void unsetDaily_spend_cap();
    /// <summary>
    /// Order line ID that appears on the invoice.
    /// </summary>
    std::string getOrderLineId() const;
    void setOrderLineId(std::string const& value);
    bool orderLineIdIsSet() const;
    void unsetOrder_line_id();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::AdCommon_tracking_urls getTrackingUrls() const;
    void setTrackingUrls(org::openapitools::server::model::AdCommon_tracking_urls const& value);
    bool trackingUrlsIsSet() const;
    void unsetTracking_urls();
    /// <summary>
    /// Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
    /// </summary>
    int32_t getStartTime() const;
    void setStartTime(int32_t const value);
    bool startTimeIsSet() const;
    void unsetStart_time();
    /// <summary>
    /// Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
    /// </summary>
    int32_t getEndTime() const;
    void setEndTime(int32_t const value);
    bool endTimeIsSet() const;
    void unsetEnd_time();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CampaignSummaryStatus getSummaryStatus() const;
    void setSummaryStatus(org::openapitools::server::model::CampaignSummaryStatus const& value);
    bool summaryStatusIsSet() const;
    void unsetSummary_status();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::ObjectiveType getObjectiveType() const;
    void setObjectiveType(org::openapitools::server::model::ObjectiveType const& value);
    bool objectiveTypeIsSet() const;
    void unsetObjective_type();
    /// <summary>
    /// Campaign creation time. Unix timestamp in seconds.
    /// </summary>
    int32_t getCreatedTime() const;
    void setCreatedTime(int32_t const value);
    bool createdTimeIsSet() const;
    void unsetCreated_time();
    /// <summary>
    /// UTC timestamp. Last update time.
    /// </summary>
    int32_t getUpdatedTime() const;
    void setUpdatedTime(int32_t const value);
    bool updatedTimeIsSet() const;
    void unsetUpdated_time();
    /// <summary>
    /// Always \&quot;campaign\&quot;.
    /// </summary>
    std::string getType() const;
    void setType(std::string const& value);
    bool typeIsSet() const;
    void unsetType();
    /// <summary>
    /// Determines if a campaign has flexible daily budgets setup.
    /// </summary>
    bool isIsFlexibleDailyBudgets() const;
    void setIsFlexibleDailyBudgets(bool const value);
    bool isFlexibleDailyBudgetsIsSet() const;
    void unsetIs_flexible_daily_budgets();
    /// <summary>
    /// Determines if a campaign automatically generate ad-group level budgets given a campaign budget to maximize campaign outcome. When transitioning from non-cbo to cbo, all previous child ad group budget will be cleared.
    /// </summary>
    bool isIsCampaignBudgetOptimization() const;
    void setIsCampaignBudgetOptimization(bool const value);
    bool isCampaignBudgetOptimizationIsSet() const;
    void unsetIs_campaign_budget_optimization();

    friend  void to_json(nlohmann::json& j, const CampaignResponse& o);
    friend  void from_json(const nlohmann::json& j, CampaignResponse& o);
protected:
    std::string m_Id;
    bool m_IdIsSet;
    std::string m_Ad_account_id;
    bool m_Ad_account_idIsSet;
    std::string m_Name;
    bool m_NameIsSet;
    org::openapitools::server::model::EntityStatus m_Status;
    bool m_StatusIsSet;
    int32_t m_Lifetime_spend_cap;
    bool m_Lifetime_spend_capIsSet;
    int32_t m_Daily_spend_cap;
    bool m_Daily_spend_capIsSet;
    std::string m_Order_line_id;
    bool m_Order_line_idIsSet;
    org::openapitools::server::model::AdCommon_tracking_urls m_Tracking_urls;
    bool m_Tracking_urlsIsSet;
    int32_t m_Start_time;
    bool m_Start_timeIsSet;
    int32_t m_End_time;
    bool m_End_timeIsSet;
    org::openapitools::server::model::CampaignSummaryStatus m_Summary_status;
    bool m_Summary_statusIsSet;
    org::openapitools::server::model::ObjectiveType m_Objective_type;
    bool m_Objective_typeIsSet;
    int32_t m_Created_time;
    bool m_Created_timeIsSet;
    int32_t m_Updated_time;
    bool m_Updated_timeIsSet;
    std::string m_Type;
    bool m_TypeIsSet;
    bool m_Is_flexible_daily_budgets;
    bool m_Is_flexible_daily_budgetsIsSet;
    bool m_Is_campaign_budget_optimization;
    bool m_Is_campaign_budget_optimizationIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* CampaignResponse_H_ */
