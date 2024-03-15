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


#include "BulkUpsertRequest.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

BulkUpsertRequest::BulkUpsertRequest()
{
    m_CreateIsSet = false;
    m_UpdateIsSet = false;
    
}

void BulkUpsertRequest::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool BulkUpsertRequest::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool BulkUpsertRequest::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "BulkUpsertRequest" : pathPrefix;

            
    return success;
}

bool BulkUpsertRequest::operator==(const BulkUpsertRequest& rhs) const
{
    return
    
    
    
    ((!createIsSet() && !rhs.createIsSet()) || (createIsSet() && rhs.createIsSet() && getCreate() == rhs.getCreate())) &&
    
    
    ((!updateIsSet() && !rhs.updateIsSet()) || (updateIsSet() && rhs.updateIsSet() && getUpdate() == rhs.getUpdate()))
    
    ;
}

bool BulkUpsertRequest::operator!=(const BulkUpsertRequest& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const BulkUpsertRequest& o)
{
    j = nlohmann::json::object();
    if(o.createIsSet())
        j["create"] = o.m_Create;
    if(o.updateIsSet())
        j["update"] = o.m_Update;
    
}

void from_json(const nlohmann::json& j, BulkUpsertRequest& o)
{
    if(j.find("create") != j.end())
    {
        j.at("create").get_to(o.m_Create);
        o.m_CreateIsSet = true;
    } 
    if(j.find("update") != j.end())
    {
        j.at("update").get_to(o.m_Update);
        o.m_UpdateIsSet = true;
    } 
    
}

org::openapitools::server::model::BulkUpsertRequestCreate BulkUpsertRequest::getCreate() const
{
    return m_Create;
}
void BulkUpsertRequest::setCreate(org::openapitools::server::model::BulkUpsertRequestCreate const& value)
{
    m_Create = value;
    m_CreateIsSet = true;
}
bool BulkUpsertRequest::createIsSet() const
{
    return m_CreateIsSet;
}
void BulkUpsertRequest::unsetCreate()
{
    m_CreateIsSet = false;
}
org::openapitools::server::model::BulkUpsertRequestUpdate BulkUpsertRequest::getUpdate() const
{
    return m_Update;
}
void BulkUpsertRequest::setUpdate(org::openapitools::server::model::BulkUpsertRequestUpdate const& value)
{
    m_Update = value;
    m_UpdateIsSet = true;
}
bool BulkUpsertRequest::updateIsSet() const
{
    return m_UpdateIsSet;
}
void BulkUpsertRequest::unsetUpdate()
{
    m_UpdateIsSet = false;
}


} // namespace org::openapitools::server::model

