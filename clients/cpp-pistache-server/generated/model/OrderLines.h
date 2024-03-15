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
 * OrderLines.h
 *
 * Order Line
 */

#ifndef OrderLines_H_
#define OrderLines_H_


#include "OrderLineStatus.h"
#include <string>
#include "OrderLinePaidType.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Order Line
/// </summary>
class  OrderLines
{
public:
    OrderLines();
    virtual ~OrderLines() = default;


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

    bool operator==(const OrderLines& rhs) const;
    bool operator!=(const OrderLines& rhs) const;

    /////////////////////////////////////////////
    /// OrderLines members

    /// <summary>
    /// Order line ID.
    /// </summary>
    std::string getId() const;
    void setId(std::string const& value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// Always \&quot;orderline\&quot;.
    /// </summary>
    std::string getType() const;
    void setType(std::string const& value);
    bool typeIsSet() const;
    void unsetType();
    /// <summary>
    /// Ad account ID.
    /// </summary>
    std::string getAdAccountId() const;
    void setAdAccountId(std::string const& value);
    bool adAccountIdIsSet() const;
    void unsetAd_account_id();
    /// <summary>
    /// Purchase order ID.
    /// </summary>
    std::string getPurchaseOrderId() const;
    void setPurchaseOrderId(std::string const& value);
    bool purchaseOrderIdIsSet() const;
    void unsetPurchase_order_id();
    /// <summary>
    /// Start time. Unix timestamp.
    /// </summary>
    double getStartTime() const;
    void setStartTime(double const value);
    bool startTimeIsSet() const;
    void unsetStart_time();
    /// <summary>
    /// End time. Unix timestamp.
    /// </summary>
    double getEndTime() const;
    void setEndTime(double const value);
    bool endTimeIsSet() const;
    void unsetEnd_time();
    /// <summary>
    /// Order line budget in micro currency.
    /// </summary>
    double getBudget() const;
    void setBudget(double const value);
    bool budgetIsSet() const;
    void unsetBudget();
    /// <summary>
    /// Order line paid budget in micro currency.
    /// </summary>
    double getPaidBudget() const;
    void setPaidBudget(double const value);
    bool paidBudgetIsSet() const;
    void unsetPaid_budget();
    /// <summary>
    /// Order line status.
    /// </summary>
    org::openapitools::server::model::OrderLineStatus getStatus() const;
    void setStatus(org::openapitools::server::model::OrderLineStatus const& value);
    bool statusIsSet() const;
    void unsetStatus();
    /// <summary>
    /// Order line name.
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
    bool nameIsSet() const;
    void unsetName();
    /// <summary>
    /// Order line paid type.
    /// </summary>
    org::openapitools::server::model::OrderLinePaidType getPaidType() const;
    void setPaidType(org::openapitools::server::model::OrderLinePaidType const& value);
    bool paidTypeIsSet() const;
    void unsetPaid_type();

    friend  void to_json(nlohmann::json& j, const OrderLines& o);
    friend  void from_json(const nlohmann::json& j, OrderLines& o);
protected:
    std::string m_Id;
    bool m_IdIsSet;
    std::string m_Type;
    bool m_TypeIsSet;
    std::string m_Ad_account_id;
    bool m_Ad_account_idIsSet;
    std::string m_Purchase_order_id;
    bool m_Purchase_order_idIsSet;
    double m_Start_time;
    bool m_Start_timeIsSet;
    double m_End_time;
    bool m_End_timeIsSet;
    double m_Budget;
    bool m_BudgetIsSet;
    double m_Paid_budget;
    bool m_Paid_budgetIsSet;
    org::openapitools::server::model::OrderLineStatus m_Status;
    bool m_StatusIsSet;
    std::string m_Name;
    bool m_NameIsSet;
    org::openapitools::server::model::OrderLinePaidType m_Paid_type;
    bool m_Paid_typeIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* OrderLines_H_ */