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
 * OrderLineResponse.h
 *
 * 
 */

#ifndef OrderLineResponse_H_
#define OrderLineResponse_H_


#include "OrderLine.h"
#include "OrderLineError.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  OrderLineResponse
{
public:
    OrderLineResponse();
    virtual ~OrderLineResponse() = default;


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

    bool operator==(const OrderLineResponse& rhs) const;
    bool operator!=(const OrderLineResponse& rhs) const;

    /////////////////////////////////////////////
    /// OrderLineResponse members

    /// <summary>
    /// Error list if update(s) fail.
    /// </summary>
    std::vector<org::openapitools::server::model::OrderLineError> getErrors() const;
    void setErrors(std::vector<org::openapitools::server::model::OrderLineError> const& value);
    bool errorsIsSet() const;
    void unsetErrors();
    /// <summary>
    /// Order Line object array.
    /// </summary>
    std::vector<org::openapitools::server::model::OrderLine> getOrderLine() const;
    void setOrderLine(std::vector<org::openapitools::server::model::OrderLine> const& value);
    bool orderLineIsSet() const;
    void unsetOrder_line();

    friend  void to_json(nlohmann::json& j, const OrderLineResponse& o);
    friend  void from_json(const nlohmann::json& j, OrderLineResponse& o);
protected:
    std::vector<org::openapitools::server::model::OrderLineError> m_Errors;
    bool m_ErrorsIsSet;
    std::vector<org::openapitools::server::model::OrderLine> m_Order_line;
    bool m_Order_lineIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* OrderLineResponse_H_ */
