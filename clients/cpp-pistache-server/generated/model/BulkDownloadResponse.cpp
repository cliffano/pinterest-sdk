/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "BulkDownloadResponse.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

BulkDownloadResponse::BulkDownloadResponse()
{
    m_Request_id = "";
    m_Request_idIsSet = false;
    
}

void BulkDownloadResponse::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool BulkDownloadResponse::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool BulkDownloadResponse::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "BulkDownloadResponse" : pathPrefix;

        
    return success;
}

bool BulkDownloadResponse::operator==(const BulkDownloadResponse& rhs) const
{
    return
    
    
    
    ((!requestIdIsSet() && !rhs.requestIdIsSet()) || (requestIdIsSet() && rhs.requestIdIsSet() && getRequestId() == rhs.getRequestId()))
    
    ;
}

bool BulkDownloadResponse::operator!=(const BulkDownloadResponse& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const BulkDownloadResponse& o)
{
    j = nlohmann::json::object();
    if(o.requestIdIsSet())
        j["request_id"] = o.m_Request_id;
    
}

void from_json(const nlohmann::json& j, BulkDownloadResponse& o)
{
    if(j.find("request_id") != j.end())
    {
        j.at("request_id").get_to(o.m_Request_id);
        o.m_Request_idIsSet = true;
    } 
    
}

std::string BulkDownloadResponse::getRequestId() const
{
    return m_Request_id;
}
void BulkDownloadResponse::setRequestId(std::string const& value)
{
    m_Request_id = value;
    m_Request_idIsSet = true;
}
bool BulkDownloadResponse::requestIdIsSet() const
{
    return m_Request_idIsSet;
}
void BulkDownloadResponse::unsetRequest_id()
{
    m_Request_idIsSet = false;
}


} // namespace org::openapitools::server::model
