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


#include "AdCommon_tracking_urls.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

AdCommon_tracking_urls::AdCommon_tracking_urls()
{
    m_ImpressionIsSet = false;
    m_ClickIsSet = false;
    m_EngagementIsSet = false;
    m_Buyable_buttonIsSet = false;
    m_Audience_verificationIsSet = false;
    
}

void AdCommon_tracking_urls::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AdCommon_tracking_urls::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AdCommon_tracking_urls::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AdCommon_tracking_urls" : pathPrefix;

         
    if (impressionIsSet())
    {
        const std::vector<std::string>& value = m_Impression;
        const std::string currentValuePath = _pathPrefix + ".impression";
                
        
        if (value.size() > 3)
        {
            success = false;
            msg << currentValuePath << ": must have at most 3 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
        if (value.length() > 2000)
        {
            success = false;
            msg << currentValuePath << ": must be at most 2000 characters long;";
        }
 
                i++;
            }
        }

    }
         
    if (clickIsSet())
    {
        const std::vector<std::string>& value = m_Click;
        const std::string currentValuePath = _pathPrefix + ".click";
                
        
        if (value.size() > 3)
        {
            success = false;
            msg << currentValuePath << ": must have at most 3 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
        if (value.length() > 2000)
        {
            success = false;
            msg << currentValuePath << ": must be at most 2000 characters long;";
        }
 
                i++;
            }
        }

    }
         
    if (engagementIsSet())
    {
        const std::vector<std::string>& value = m_Engagement;
        const std::string currentValuePath = _pathPrefix + ".engagement";
                
        
        if (value.size() > 3)
        {
            success = false;
            msg << currentValuePath << ": must have at most 3 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
        if (value.length() > 2000)
        {
            success = false;
            msg << currentValuePath << ": must be at most 2000 characters long;";
        }
 
                i++;
            }
        }

    }
         
    if (buyableButtonIsSet())
    {
        const std::vector<std::string>& value = m_Buyable_button;
        const std::string currentValuePath = _pathPrefix + ".buyableButton";
                
        
        if (value.size() > 3)
        {
            success = false;
            msg << currentValuePath << ": must have at most 3 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
        if (value.length() > 2000)
        {
            success = false;
            msg << currentValuePath << ": must be at most 2000 characters long;";
        }
 
                i++;
            }
        }

    }
         
    if (audienceVerificationIsSet())
    {
        const std::vector<std::string>& value = m_Audience_verification;
        const std::string currentValuePath = _pathPrefix + ".audienceVerification";
                
        
        if (value.size() > 3)
        {
            success = false;
            msg << currentValuePath << ": must have at most 3 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
        if (value.length() > 2000)
        {
            success = false;
            msg << currentValuePath << ": must be at most 2000 characters long;";
        }
 
                i++;
            }
        }

    }
    
    return success;
}

bool AdCommon_tracking_urls::operator==(const AdCommon_tracking_urls& rhs) const
{
    return
    
    
    
    ((!impressionIsSet() && !rhs.impressionIsSet()) || (impressionIsSet() && rhs.impressionIsSet() && getImpression() == rhs.getImpression())) &&
    
    
    ((!clickIsSet() && !rhs.clickIsSet()) || (clickIsSet() && rhs.clickIsSet() && getClick() == rhs.getClick())) &&
    
    
    ((!engagementIsSet() && !rhs.engagementIsSet()) || (engagementIsSet() && rhs.engagementIsSet() && getEngagement() == rhs.getEngagement())) &&
    
    
    ((!buyableButtonIsSet() && !rhs.buyableButtonIsSet()) || (buyableButtonIsSet() && rhs.buyableButtonIsSet() && getBuyableButton() == rhs.getBuyableButton())) &&
    
    
    ((!audienceVerificationIsSet() && !rhs.audienceVerificationIsSet()) || (audienceVerificationIsSet() && rhs.audienceVerificationIsSet() && getAudienceVerification() == rhs.getAudienceVerification()))
    
    ;
}

bool AdCommon_tracking_urls::operator!=(const AdCommon_tracking_urls& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AdCommon_tracking_urls& o)
{
    j = nlohmann::json::object();
    if(o.impressionIsSet() || !o.m_Impression.empty())
        j["impression"] = o.m_Impression;
    if(o.clickIsSet() || !o.m_Click.empty())
        j["click"] = o.m_Click;
    if(o.engagementIsSet() || !o.m_Engagement.empty())
        j["engagement"] = o.m_Engagement;
    if(o.buyableButtonIsSet() || !o.m_Buyable_button.empty())
        j["buyable_button"] = o.m_Buyable_button;
    if(o.audienceVerificationIsSet() || !o.m_Audience_verification.empty())
        j["audience_verification"] = o.m_Audience_verification;
    
}

void from_json(const nlohmann::json& j, AdCommon_tracking_urls& o)
{
    if(j.find("impression") != j.end())
    {
        j.at("impression").get_to(o.m_Impression);
        o.m_ImpressionIsSet = true;
    } 
    if(j.find("click") != j.end())
    {
        j.at("click").get_to(o.m_Click);
        o.m_ClickIsSet = true;
    } 
    if(j.find("engagement") != j.end())
    {
        j.at("engagement").get_to(o.m_Engagement);
        o.m_EngagementIsSet = true;
    } 
    if(j.find("buyable_button") != j.end())
    {
        j.at("buyable_button").get_to(o.m_Buyable_button);
        o.m_Buyable_buttonIsSet = true;
    } 
    if(j.find("audience_verification") != j.end())
    {
        j.at("audience_verification").get_to(o.m_Audience_verification);
        o.m_Audience_verificationIsSet = true;
    } 
    
}

std::vector<std::string> AdCommon_tracking_urls::getImpression() const
{
    return m_Impression;
}
void AdCommon_tracking_urls::setImpression(std::vector<std::string> const& value)
{
    m_Impression = value;
    m_ImpressionIsSet = true;
}
bool AdCommon_tracking_urls::impressionIsSet() const
{
    return m_ImpressionIsSet;
}
void AdCommon_tracking_urls::unsetImpression()
{
    m_ImpressionIsSet = false;
}
std::vector<std::string> AdCommon_tracking_urls::getClick() const
{
    return m_Click;
}
void AdCommon_tracking_urls::setClick(std::vector<std::string> const& value)
{
    m_Click = value;
    m_ClickIsSet = true;
}
bool AdCommon_tracking_urls::clickIsSet() const
{
    return m_ClickIsSet;
}
void AdCommon_tracking_urls::unsetClick()
{
    m_ClickIsSet = false;
}
std::vector<std::string> AdCommon_tracking_urls::getEngagement() const
{
    return m_Engagement;
}
void AdCommon_tracking_urls::setEngagement(std::vector<std::string> const& value)
{
    m_Engagement = value;
    m_EngagementIsSet = true;
}
bool AdCommon_tracking_urls::engagementIsSet() const
{
    return m_EngagementIsSet;
}
void AdCommon_tracking_urls::unsetEngagement()
{
    m_EngagementIsSet = false;
}
std::vector<std::string> AdCommon_tracking_urls::getBuyableButton() const
{
    return m_Buyable_button;
}
void AdCommon_tracking_urls::setBuyableButton(std::vector<std::string> const& value)
{
    m_Buyable_button = value;
    m_Buyable_buttonIsSet = true;
}
bool AdCommon_tracking_urls::buyableButtonIsSet() const
{
    return m_Buyable_buttonIsSet;
}
void AdCommon_tracking_urls::unsetBuyable_button()
{
    m_Buyable_buttonIsSet = false;
}
std::vector<std::string> AdCommon_tracking_urls::getAudienceVerification() const
{
    return m_Audience_verification;
}
void AdCommon_tracking_urls::setAudienceVerification(std::vector<std::string> const& value)
{
    m_Audience_verification = value;
    m_Audience_verificationIsSet = true;
}
bool AdCommon_tracking_urls::audienceVerificationIsSet() const
{
    return m_Audience_verificationIsSet;
}
void AdCommon_tracking_urls::unsetAudience_verification()
{
    m_Audience_verificationIsSet = false;
}


} // namespace org::openapitools::server::model

