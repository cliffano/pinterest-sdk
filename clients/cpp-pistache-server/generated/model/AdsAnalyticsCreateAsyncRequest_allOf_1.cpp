/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "AdsAnalyticsCreateAsyncRequest_allOf_1.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

AdsAnalyticsCreateAsyncRequest_allOf_1::AdsAnalyticsCreateAsyncRequest_allOf_1()
{
    m_Level = "";
    m_Report_format = "JSON";
    m_Report_formatIsSet = false;
    
}

void AdsAnalyticsCreateAsyncRequest_allOf_1::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AdsAnalyticsCreateAsyncRequest_allOf_1::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AdsAnalyticsCreateAsyncRequest_allOf_1::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AdsAnalyticsCreateAsyncRequest_allOf_1" : pathPrefix;

         
    
    /* Columns */ {
        const std::vector<ReportingColumnAsync>& value = m_Columns;
        const std::string currentValuePath = _pathPrefix + ".columns";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const ReportingColumnAsync& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath) && success;
        
        
 
                i++;
            }
        }

    }
            
    return success;
}

bool AdsAnalyticsCreateAsyncRequest_allOf_1::operator==(const AdsAnalyticsCreateAsyncRequest_allOf_1& rhs) const
{
    return
    
    
    (getColumns() == rhs.getColumns())
     &&
    
    (getLevel() == rhs.getLevel())
     &&
    
    
    ((!reportFormatIsSet() && !rhs.reportFormatIsSet()) || (reportFormatIsSet() && rhs.reportFormatIsSet() && getReportFormat() == rhs.getReportFormat()))
    
    ;
}

bool AdsAnalyticsCreateAsyncRequest_allOf_1::operator!=(const AdsAnalyticsCreateAsyncRequest_allOf_1& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AdsAnalyticsCreateAsyncRequest_allOf_1& o)
{
    j = nlohmann::json();
    j["columns"] = o.m_Columns;
    j["level"] = o.m_Level;
    if(o.reportFormatIsSet())
        j["report_format"] = o.m_Report_format;
    
}

void from_json(const nlohmann::json& j, AdsAnalyticsCreateAsyncRequest_allOf_1& o)
{
    j.at("columns").get_to(o.m_Columns);
    j.at("level").get_to(o.m_Level);
    if(j.find("report_format") != j.end())
    {
        j.at("report_format").get_to(o.m_Report_format);
        o.m_Report_formatIsSet = true;
    } 
    
}

std::vector<ReportingColumnAsync> AdsAnalyticsCreateAsyncRequest_allOf_1::getColumns() const
{
    return m_Columns;
}
void AdsAnalyticsCreateAsyncRequest_allOf_1::setColumns(std::vector<ReportingColumnAsync> const& value)
{
    m_Columns = value;
}
MetricsReportingLevel AdsAnalyticsCreateAsyncRequest_allOf_1::getLevel() const
{
    return m_Level;
}
void AdsAnalyticsCreateAsyncRequest_allOf_1::setLevel(MetricsReportingLevel const& value)
{
    m_Level = value;
}
DataOutputFormat AdsAnalyticsCreateAsyncRequest_allOf_1::getReportFormat() const
{
    return m_Report_format;
}
void AdsAnalyticsCreateAsyncRequest_allOf_1::setReportFormat(DataOutputFormat const& value)
{
    m_Report_format = value;
    m_Report_formatIsSet = true;
}
bool AdsAnalyticsCreateAsyncRequest_allOf_1::reportFormatIsSet() const
{
    return m_Report_formatIsSet;
}
void AdsAnalyticsCreateAsyncRequest_allOf_1::unsetReport_format()
{
    m_Report_formatIsSet = false;
}


} // namespace org::openapitools::server::model

