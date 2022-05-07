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
 * CampaignResponse.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CampaignResponse_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CampaignResponse_H_


#include "ModelBase.h"

#include "model/TrackingUrls.h"
#include "model/CampaignResponse_allOf.h"
#include "model/EntityStatus.h"
#include "model/CampaignResponse_allOf_1.h"
#include <cpprest/details/basic_types.h>
#include "model/CampaignCommon.h"
#include "model/ObjectiveType.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  CampaignResponse
    : public ModelBase
{
public:
    CampaignResponse();
    virtual ~CampaignResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CampaignResponse members

    /// <summary>
    /// Campaign ID.
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

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

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ObjectiveType> getObjectiveType() const;
    bool objectiveTypeIsSet() const;
    void unsetObjective_type();

    void setObjectiveType(const std::shared_ptr<ObjectiveType>& value);

    /// <summary>
    /// Campaign creation time. Unix timestamp in seconds.
    /// </summary>
    int32_t getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetCreated_time();

    void setCreatedTime(int32_t value);

    /// <summary>
    /// UTC timestamp. Last update time.
    /// </summary>
    int32_t getUpdatedTime() const;
    bool updatedTimeIsSet() const;
    void unsetUpdated_time();

    void setUpdatedTime(int32_t value);

    /// <summary>
    /// Always \&quot;campaign\&quot;.
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(const utility::string_t& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
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
    std::shared_ptr<ObjectiveType> m_Objective_type;
    bool m_Objective_typeIsSet;
    int32_t m_Created_time;
    bool m_Created_timeIsSet;
    int32_t m_Updated_time;
    bool m_Updated_timeIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CampaignResponse_H_ */
