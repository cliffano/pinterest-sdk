/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * CampaignResponse_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CampaignResponse_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CampaignResponse_allOf_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/ObjectiveType.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  CampaignResponse_allOf
    : public ModelBase
{
public:
    CampaignResponse_allOf();
    virtual ~CampaignResponse_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CampaignResponse_allOf members

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

    /// <summary>
    /// Determines if a campaign has flexible daily budgets setup.
    /// </summary>
    bool isIsFlexibleDailyBudgets() const;
    bool isFlexibleDailyBudgetsIsSet() const;
    void unsetIs_flexible_daily_budgets();

    void setIsFlexibleDailyBudgets(bool value);

    /// <summary>
    /// Determines if a campaign automatically generate ad-group level budgets given a campaign budget to maximize campaign outcome. When transitioning from non-cbo to cbo, all previous child ad group budget will be cleared.
    /// </summary>
    bool isIsCampaignBudgetOptimization() const;
    bool isCampaignBudgetOptimizationIsSet() const;
    void unsetIs_campaign_budget_optimization();

    void setIsCampaignBudgetOptimization(bool value);


protected:
    std::shared_ptr<ObjectiveType> m_Objective_type;
    bool m_Objective_typeIsSet;
    int32_t m_Created_time;
    bool m_Created_timeIsSet;
    int32_t m_Updated_time;
    bool m_Updated_timeIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
    bool m_Is_flexible_daily_budgets;
    bool m_Is_flexible_daily_budgetsIsSet;
    bool m_Is_campaign_budget_optimization;
    bool m_Is_campaign_budget_optimizationIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CampaignResponse_allOf_H_ */
