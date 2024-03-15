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


#include "AdsCreditRedeemRequest.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

AdsCreditRedeemRequest::AdsCreditRedeemRequest()
{
    m_OfferCodeHash = "";
    m_ValidateOnly = false;
    
}

void AdsCreditRedeemRequest::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AdsCreditRedeemRequest::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AdsCreditRedeemRequest::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AdsCreditRedeemRequest" : pathPrefix;

         
    
    /* OfferCodeHash */ {
        const std::string& value = m_OfferCodeHash;
        const std::string currentValuePath = _pathPrefix + ".offerCodeHash";
                
        

    }
        
    return success;
}

bool AdsCreditRedeemRequest::operator==(const AdsCreditRedeemRequest& rhs) const
{
    return
    
    
    (getOfferCodeHash() == rhs.getOfferCodeHash())
     &&
    
    (isValidateOnly() == rhs.isValidateOnly())
    
    
    ;
}

bool AdsCreditRedeemRequest::operator!=(const AdsCreditRedeemRequest& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AdsCreditRedeemRequest& o)
{
    j = nlohmann::json::object();
    j["offerCodeHash"] = o.m_OfferCodeHash;
    j["validateOnly"] = o.m_ValidateOnly;
    
}

void from_json(const nlohmann::json& j, AdsCreditRedeemRequest& o)
{
    j.at("offerCodeHash").get_to(o.m_OfferCodeHash);
    j.at("validateOnly").get_to(o.m_ValidateOnly);
    
}

std::string AdsCreditRedeemRequest::getOfferCodeHash() const
{
    return m_OfferCodeHash;
}
void AdsCreditRedeemRequest::setOfferCodeHash(std::string const& value)
{
    m_OfferCodeHash = value;
}
bool AdsCreditRedeemRequest::isValidateOnly() const
{
    return m_ValidateOnly;
}
void AdsCreditRedeemRequest::setValidateOnly(bool const value)
{
    m_ValidateOnly = value;
}


} // namespace org::openapitools::server::model

