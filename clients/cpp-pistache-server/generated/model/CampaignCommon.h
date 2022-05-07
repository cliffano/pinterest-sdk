/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * CampaignCommon.h
 *
 * Campaign Data
 */

#ifndef CampaignCommon_H_
#define CampaignCommon_H_


#include "EntityStatus.h"
#include <string>
#include "TrackingUrls.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Campaign Data
/// </summary>
class  CampaignCommon
{
public:
    CampaignCommon();
    virtual ~CampaignCommon() = default;


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

    bool operator==(const CampaignCommon& rhs) const;
    bool operator!=(const CampaignCommon& rhs) const;

    /////////////////////////////////////////////
    /// CampaignCommon members

    /// <summary>
    /// Campaign&#39;s Advertiser ID.
    /// </summary>
    std::string getAdAccountId() const;
    void setAdAccountId(std::string const& value);
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
    EntityStatus getStatus() const;
    void setStatus(EntityStatus const& value);
    bool statusIsSet() const;
    void unsetStatus();
    /// <summary>
    /// Campaign total spending cap.
    /// </summary>
    int32_t getLifetimeSpendCap() const;
    void setLifetimeSpendCap(int32_t const value);
    bool lifetimeSpendCapIsSet() const;
    void unsetLifetime_spend_cap();
    /// <summary>
    /// Campaign daily spending cap.
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
    TrackingUrls getTrackingUrls() const;
    void setTrackingUrls(TrackingUrls const& value);
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

    friend void to_json(nlohmann::json& j, const CampaignCommon& o);
    friend void from_json(const nlohmann::json& j, CampaignCommon& o);
protected:
    std::string m_Ad_account_id;

    std::string m_Name;
    bool m_NameIsSet;
    EntityStatus m_Status;
    bool m_StatusIsSet;
    int32_t m_Lifetime_spend_cap;
    bool m_Lifetime_spend_capIsSet;
    int32_t m_Daily_spend_cap;
    bool m_Daily_spend_capIsSet;
    std::string m_Order_line_id;
    bool m_Order_line_idIsSet;
    TrackingUrls m_Tracking_urls;
    bool m_Tracking_urlsIsSet;
    int32_t m_Start_time;
    bool m_Start_timeIsSet;
    int32_t m_End_time;
    bool m_End_timeIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* CampaignCommon_H_ */
