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


#include "SSIOCreateInsertionOrderResponse.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

SSIOCreateInsertionOrderResponse::SSIOCreateInsertionOrderResponse()
{
    m_Pin_order_id = "";
    m_Pin_order_idIsSet = false;
    
}

void SSIOCreateInsertionOrderResponse::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool SSIOCreateInsertionOrderResponse::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool SSIOCreateInsertionOrderResponse::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "SSIOCreateInsertionOrderResponse" : pathPrefix;

        
    return success;
}

bool SSIOCreateInsertionOrderResponse::operator==(const SSIOCreateInsertionOrderResponse& rhs) const
{
    return
    
    
    
    ((!pinOrderIdIsSet() && !rhs.pinOrderIdIsSet()) || (pinOrderIdIsSet() && rhs.pinOrderIdIsSet() && getPinOrderId() == rhs.getPinOrderId()))
    
    ;
}

bool SSIOCreateInsertionOrderResponse::operator!=(const SSIOCreateInsertionOrderResponse& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const SSIOCreateInsertionOrderResponse& o)
{
    j = nlohmann::json::object();
    if(o.pinOrderIdIsSet())
        j["pin_order_id"] = o.m_Pin_order_id;
    
}

void from_json(const nlohmann::json& j, SSIOCreateInsertionOrderResponse& o)
{
    if(j.find("pin_order_id") != j.end())
    {
        j.at("pin_order_id").get_to(o.m_Pin_order_id);
        o.m_Pin_order_idIsSet = true;
    } 
    
}

std::string SSIOCreateInsertionOrderResponse::getPinOrderId() const
{
    return m_Pin_order_id;
}
void SSIOCreateInsertionOrderResponse::setPinOrderId(std::string const& value)
{
    m_Pin_order_id = value;
    m_Pin_order_idIsSet = true;
}
bool SSIOCreateInsertionOrderResponse::pinOrderIdIsSet() const
{
    return m_Pin_order_idIsSet;
}
void SSIOCreateInsertionOrderResponse::unsetPin_order_id()
{
    m_Pin_order_idIsSet = false;
}


} // namespace org::openapitools::server::model
