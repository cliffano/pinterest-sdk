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


#include "FollowUserRequest.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

FollowUserRequest::FollowUserRequest()
{
    m_Auto_follow = false;
    m_Auto_followIsSet = false;
    
}

void FollowUserRequest::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool FollowUserRequest::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool FollowUserRequest::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "FollowUserRequest" : pathPrefix;

        
    return success;
}

bool FollowUserRequest::operator==(const FollowUserRequest& rhs) const
{
    return
    
    
    
    ((!autoFollowIsSet() && !rhs.autoFollowIsSet()) || (autoFollowIsSet() && rhs.autoFollowIsSet() && isAutoFollow() == rhs.isAutoFollow()))
    
    ;
}

bool FollowUserRequest::operator!=(const FollowUserRequest& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const FollowUserRequest& o)
{
    j = nlohmann::json::object();
    if(o.autoFollowIsSet())
        j["auto_follow"] = o.m_Auto_follow;
    
}

void from_json(const nlohmann::json& j, FollowUserRequest& o)
{
    if(j.find("auto_follow") != j.end())
    {
        j.at("auto_follow").get_to(o.m_Auto_follow);
        o.m_Auto_followIsSet = true;
    } 
    
}

bool FollowUserRequest::isAutoFollow() const
{
    return m_Auto_follow;
}
void FollowUserRequest::setAutoFollow(bool const value)
{
    m_Auto_follow = value;
    m_Auto_followIsSet = true;
}
bool FollowUserRequest::autoFollowIsSet() const
{
    return m_Auto_followIsSet;
}
void FollowUserRequest::unsetAuto_follow()
{
    m_Auto_followIsSet = false;
}


} // namespace org::openapitools::server::model
