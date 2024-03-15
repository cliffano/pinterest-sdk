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
 * OrderLine.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OrderLine_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OrderLine_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/OrderLineStatus.h"
#include <cpprest/details/basic_types.h>
#include <vector>
#include "CppRestOpenAPIClient/model/OrderLinePaidType.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  OrderLine
    : public ModelBase
{
public:
    OrderLine();
    virtual ~OrderLine();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OrderLine members

    /// <summary>
    /// Order line ID.
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// Always \&quot;orderline\&quot;.
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(const utility::string_t& value);

    /// <summary>
    /// Ad account ID.
    /// </summary>
    utility::string_t getAdAccountId() const;
    bool adAccountIdIsSet() const;
    void unsetAd_account_id();

    void setAdAccountId(const utility::string_t& value);

    /// <summary>
    /// Purchase order ID.
    /// </summary>
    utility::string_t getPurchaseOrderId() const;
    bool purchaseOrderIdIsSet() const;
    void unsetPurchase_order_id();

    void setPurchaseOrderId(const utility::string_t& value);

    /// <summary>
    /// Start time. Unix timestamp.
    /// </summary>
    double getStartTime() const;
    bool startTimeIsSet() const;
    void unsetStart_time();

    void setStartTime(double value);

    /// <summary>
    /// End time. Unix timestamp.
    /// </summary>
    double getEndTime() const;
    bool endTimeIsSet() const;
    void unsetEnd_time();

    void setEndTime(double value);

    /// <summary>
    /// Order line budget in micro currency.
    /// </summary>
    double getBudget() const;
    bool budgetIsSet() const;
    void unsetBudget();

    void setBudget(double value);

    /// <summary>
    /// Order line paid budget in micro currency.
    /// </summary>
    double getPaidBudget() const;
    bool paidBudgetIsSet() const;
    void unsetPaid_budget();

    void setPaidBudget(double value);

    /// <summary>
    /// Order line status.
    /// </summary>
    std::shared_ptr<OrderLineStatus> getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const std::shared_ptr<OrderLineStatus>& value);

    /// <summary>
    /// Order line name.
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// Order line paid type.
    /// </summary>
    std::shared_ptr<OrderLinePaidType> getPaidType() const;
    bool paidTypeIsSet() const;
    void unsetPaid_type();

    void setPaidType(const std::shared_ptr<OrderLinePaidType>& value);

    /// <summary>
    /// Associated List of campaign IDs.
    /// </summary>
    std::vector<utility::string_t>& getCampaignIds();
    bool campaignIdsIsSet() const;
    void unsetCampaign_ids();

    void setCampaignIds(const std::vector<utility::string_t>& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
    utility::string_t m_Ad_account_id;
    bool m_Ad_account_idIsSet;
    utility::string_t m_Purchase_order_id;
    bool m_Purchase_order_idIsSet;
    double m_Start_time;
    bool m_Start_timeIsSet;
    double m_End_time;
    bool m_End_timeIsSet;
    double m_Budget;
    bool m_BudgetIsSet;
    double m_Paid_budget;
    bool m_Paid_budgetIsSet;
    std::shared_ptr<OrderLineStatus> m_Status;
    bool m_StatusIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    std::shared_ptr<OrderLinePaidType> m_Paid_type;
    bool m_Paid_typeIsSet;
    std::vector<utility::string_t> m_Campaign_ids;
    bool m_Campaign_idsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OrderLine_H_ */
