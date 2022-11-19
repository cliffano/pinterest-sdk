/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "AdsAnalyticsGetAsyncResponse.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

AdsAnalyticsGetAsyncResponse::AdsAnalyticsGetAsyncResponse()
{
    m_Report_status = "";
    m_Report_statusIsSet = false;
    m_Url = "";
    m_UrlIsSet = false;
    m_Size = 0.0;
    m_SizeIsSet = false;
    
}

void AdsAnalyticsGetAsyncResponse::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AdsAnalyticsGetAsyncResponse::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AdsAnalyticsGetAsyncResponse::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AdsAnalyticsGetAsyncResponse" : pathPrefix;

                
    return success;
}

bool AdsAnalyticsGetAsyncResponse::operator==(const AdsAnalyticsGetAsyncResponse& rhs) const
{
    return
    
    
    
    ((!reportStatusIsSet() && !rhs.reportStatusIsSet()) || (reportStatusIsSet() && rhs.reportStatusIsSet() && getReportStatus() == rhs.getReportStatus())) &&
    
    
    ((!urlIsSet() && !rhs.urlIsSet()) || (urlIsSet() && rhs.urlIsSet() && getUrl() == rhs.getUrl())) &&
    
    
    ((!sizeIsSet() && !rhs.sizeIsSet()) || (sizeIsSet() && rhs.sizeIsSet() && getSize() == rhs.getSize()))
    
    ;
}

bool AdsAnalyticsGetAsyncResponse::operator!=(const AdsAnalyticsGetAsyncResponse& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AdsAnalyticsGetAsyncResponse& o)
{
    j = nlohmann::json();
    if(o.reportStatusIsSet())
        j["report_status"] = o.m_Report_status;
    if(o.urlIsSet())
        j["url"] = o.m_Url;
    if(o.sizeIsSet())
        j["size"] = o.m_Size;
    
}

void from_json(const nlohmann::json& j, AdsAnalyticsGetAsyncResponse& o)
{
    if(j.find("report_status") != j.end())
    {
        j.at("report_status").get_to(o.m_Report_status);
        o.m_Report_statusIsSet = true;
    } 
    if(j.find("url") != j.end())
    {
        j.at("url").get_to(o.m_Url);
        o.m_UrlIsSet = true;
    } 
    if(j.find("size") != j.end())
    {
        j.at("size").get_to(o.m_Size);
        o.m_SizeIsSet = true;
    } 
    
}

std::string AdsAnalyticsGetAsyncResponse::getReportStatus() const
{
    return m_Report_status;
}
void AdsAnalyticsGetAsyncResponse::setReportStatus(std::string const& value)
{
    m_Report_status = value;
    m_Report_statusIsSet = true;
}
bool AdsAnalyticsGetAsyncResponse::reportStatusIsSet() const
{
    return m_Report_statusIsSet;
}
void AdsAnalyticsGetAsyncResponse::unsetReport_status()
{
    m_Report_statusIsSet = false;
}
std::string AdsAnalyticsGetAsyncResponse::getUrl() const
{
    return m_Url;
}
void AdsAnalyticsGetAsyncResponse::setUrl(std::string const& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}
bool AdsAnalyticsGetAsyncResponse::urlIsSet() const
{
    return m_UrlIsSet;
}
void AdsAnalyticsGetAsyncResponse::unsetUrl()
{
    m_UrlIsSet = false;
}
double AdsAnalyticsGetAsyncResponse::getSize() const
{
    return m_Size;
}
void AdsAnalyticsGetAsyncResponse::setSize(double const value)
{
    m_Size = value;
    m_SizeIsSet = true;
}
bool AdsAnalyticsGetAsyncResponse::sizeIsSet() const
{
    return m_SizeIsSet;
}
void AdsAnalyticsGetAsyncResponse::unsetSize()
{
    m_SizeIsSet = false;
}


} // namespace org::openapitools::server::model

