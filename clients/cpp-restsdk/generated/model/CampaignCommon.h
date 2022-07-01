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
 * CampaignCommon.h
 *
 * Campaign Data
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CampaignCommon_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CampaignCommon_H_


#include "ModelBase.h"

#include "model/TrackingUrls.h"
#include "model/EntityStatus.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Campaign Data
/// </summary>
class  CampaignCommon
    : public ModelBase
{
public:
    CampaignCommon();
    virtual ~CampaignCommon();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CampaignCommon members

    /// <summary>
    /// Campaign&#39;s Advertiser ID.
    /// </summary>
    utility::string_t getAdAccountId() const;
    bool adAccountIdIsSet() const;
    void unsetAd_account_id();

    void setAdAccountId(const utility::string_t& value);

    /// <summary>
    /// Campaign name.
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    EntityStatus getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const EntityStatus& value);

    /// <summary>
    /// Campaign total spending cap.
    /// </summary>
    int32_t getLifetimeSpendCap() const;
    bool lifetimeSpendCapIsSet() const;
    void unsetLifetime_spend_cap();

    void setLifetimeSpendCap(int32_t value);

    /// <summary>
    /// Campaign daily spending cap.
    /// </summary>
    int32_t getDailySpendCap() const;
    bool dailySpendCapIsSet() const;
    void unsetDaily_spend_cap();

    void setDailySpendCap(int32_t value);

    /// <summary>
    /// Order line ID that appears on the invoice.
    /// </summary>
    utility::string_t getOrderLineId() const;
    bool orderLineIdIsSet() const;
    void unsetOrder_line_id();

    void setOrderLineId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<TrackingUrls> getTrackingUrls() const;
    bool trackingUrlsIsSet() const;
    void unsetTracking_urls();

    void setTrackingUrls(const std::shared_ptr<TrackingUrls>& value);

    /// <summary>
    /// Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
    /// </summary>
    int32_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetStart_time();

    void setStartTime(int32_t value);

    /// <summary>
    /// Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
    /// </summary>
    int32_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetEnd_time();

    void setEndTime(int32_t value);


protected:
    utility::string_t m_Ad_account_id;
    bool m_Ad_account_idIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    EntityStatus m_Status;
    bool m_StatusIsSet;
    int32_t m_Lifetime_spend_cap;
    bool m_Lifetime_spend_capIsSet;
    int32_t m_Daily_spend_cap;
    bool m_Daily_spend_capIsSet;
    utility::string_t m_Order_line_id;
    bool m_Order_line_idIsSet;
    std::shared_ptr<TrackingUrls> m_Tracking_urls;
    bool m_Tracking_urlsIsSet;
    int32_t m_Start_time;
    bool m_Start_timeIsSet;
    int32_t m_End_time;
    bool m_End_timeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CampaignCommon_H_ */
