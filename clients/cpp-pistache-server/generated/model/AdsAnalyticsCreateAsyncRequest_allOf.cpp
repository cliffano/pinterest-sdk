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


#include "AdsAnalyticsCreateAsyncRequest_allOf.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

AdsAnalyticsCreateAsyncRequest_allOf::AdsAnalyticsCreateAsyncRequest_allOf()
{
    m_Start_date = "";
    m_End_date = "";
    m_Granularity = "";
    m_Click_window_daysIsSet = false;
    m_Engagement_window_daysIsSet = false;
    m_View_window_daysIsSet = false;
    m_Conversion_report_time = "TIME_OF_AD_ACTION";
    m_Conversion_report_timeIsSet = false;
    m_Attribution_typesIsSet = false;
    
}

void AdsAnalyticsCreateAsyncRequest_allOf::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AdsAnalyticsCreateAsyncRequest_allOf::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AdsAnalyticsCreateAsyncRequest_allOf::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AdsAnalyticsCreateAsyncRequest_allOf" : pathPrefix;

         
    
    /* Start_date */ {
        const std::string& value = m_Start_date;
        const std::string currentValuePath = _pathPrefix + ".startDate";
                
        

    }
         
    
    /* End_date */ {
        const std::string& value = m_End_date;
        const std::string currentValuePath = _pathPrefix + ".endDate";
                
        

    }
                             
    if (attributionTypesIsSet())
    {
        const std::vector<org::openapitools::server::model::ConversionReportAttributionType>& value = m_Attribution_types;
        const std::string currentValuePath = _pathPrefix + ".attributionTypes";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const org::openapitools::server::model::ConversionReportAttributionType& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath) && success;
        
        
 
                i++;
            }
        }

    }
    
    return success;
}

bool AdsAnalyticsCreateAsyncRequest_allOf::operator==(const AdsAnalyticsCreateAsyncRequest_allOf& rhs) const
{
    return
    
    
    (getStartDate() == rhs.getStartDate())
     &&
    
    (getEndDate() == rhs.getEndDate())
     &&
    
    (getGranularity() == rhs.getGranularity())
     &&
    
    
    ((!clickWindowDaysIsSet() && !rhs.clickWindowDaysIsSet()) || (clickWindowDaysIsSet() && rhs.clickWindowDaysIsSet() && getClickWindowDays() == rhs.getClickWindowDays())) &&
    
    
    ((!engagementWindowDaysIsSet() && !rhs.engagementWindowDaysIsSet()) || (engagementWindowDaysIsSet() && rhs.engagementWindowDaysIsSet() && getEngagementWindowDays() == rhs.getEngagementWindowDays())) &&
    
    
    ((!viewWindowDaysIsSet() && !rhs.viewWindowDaysIsSet()) || (viewWindowDaysIsSet() && rhs.viewWindowDaysIsSet() && getViewWindowDays() == rhs.getViewWindowDays())) &&
    
    
    ((!conversionReportTimeIsSet() && !rhs.conversionReportTimeIsSet()) || (conversionReportTimeIsSet() && rhs.conversionReportTimeIsSet() && getConversionReportTime() == rhs.getConversionReportTime())) &&
    
    
    ((!attributionTypesIsSet() && !rhs.attributionTypesIsSet()) || (attributionTypesIsSet() && rhs.attributionTypesIsSet() && getAttributionTypes() == rhs.getAttributionTypes()))
    
    ;
}

bool AdsAnalyticsCreateAsyncRequest_allOf::operator!=(const AdsAnalyticsCreateAsyncRequest_allOf& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AdsAnalyticsCreateAsyncRequest_allOf& o)
{
    j = nlohmann::json();
    j["start_date"] = o.m_Start_date;
    j["end_date"] = o.m_End_date;
    j["granularity"] = o.m_Granularity;
    if(o.clickWindowDaysIsSet())
        j["click_window_days"] = o.m_Click_window_days;
    if(o.engagementWindowDaysIsSet())
        j["engagement_window_days"] = o.m_Engagement_window_days;
    if(o.viewWindowDaysIsSet())
        j["view_window_days"] = o.m_View_window_days;
    if(o.conversionReportTimeIsSet())
        j["conversion_report_time"] = o.m_Conversion_report_time;
    if(o.attributionTypesIsSet() || !o.m_Attribution_types.empty())
        j["attribution_types"] = o.m_Attribution_types;
    
}

void from_json(const nlohmann::json& j, AdsAnalyticsCreateAsyncRequest_allOf& o)
{
    j.at("start_date").get_to(o.m_Start_date);
    j.at("end_date").get_to(o.m_End_date);
    j.at("granularity").get_to(o.m_Granularity);
    if(j.find("click_window_days") != j.end())
    {
        j.at("click_window_days").get_to(o.m_Click_window_days);
        o.m_Click_window_daysIsSet = true;
    } 
    if(j.find("engagement_window_days") != j.end())
    {
        j.at("engagement_window_days").get_to(o.m_Engagement_window_days);
        o.m_Engagement_window_daysIsSet = true;
    } 
    if(j.find("view_window_days") != j.end())
    {
        j.at("view_window_days").get_to(o.m_View_window_days);
        o.m_View_window_daysIsSet = true;
    } 
    if(j.find("conversion_report_time") != j.end())
    {
        j.at("conversion_report_time").get_to(o.m_Conversion_report_time);
        o.m_Conversion_report_timeIsSet = true;
    } 
    if(j.find("attribution_types") != j.end())
    {
        j.at("attribution_types").get_to(o.m_Attribution_types);
        o.m_Attribution_typesIsSet = true;
    } 
    
}

std::string AdsAnalyticsCreateAsyncRequest_allOf::getStartDate() const
{
    return m_Start_date;
}
void AdsAnalyticsCreateAsyncRequest_allOf::setStartDate(std::string const& value)
{
    m_Start_date = value;
}
std::string AdsAnalyticsCreateAsyncRequest_allOf::getEndDate() const
{
    return m_End_date;
}
void AdsAnalyticsCreateAsyncRequest_allOf::setEndDate(std::string const& value)
{
    m_End_date = value;
}
Granularity AdsAnalyticsCreateAsyncRequest_allOf::getGranularity() const
{
    return m_Granularity;
}
void AdsAnalyticsCreateAsyncRequest_allOf::setGranularity(Granularity const& value)
{
    m_Granularity = value;
}
org::openapitools::server::model::ConversionAttributionWindowDays AdsAnalyticsCreateAsyncRequest_allOf::getClickWindowDays() const
{
    return m_Click_window_days;
}
void AdsAnalyticsCreateAsyncRequest_allOf::setClickWindowDays(org::openapitools::server::model::ConversionAttributionWindowDays const& value)
{
    m_Click_window_days = value;
    m_Click_window_daysIsSet = true;
}
bool AdsAnalyticsCreateAsyncRequest_allOf::clickWindowDaysIsSet() const
{
    return m_Click_window_daysIsSet;
}
void AdsAnalyticsCreateAsyncRequest_allOf::unsetClick_window_days()
{
    m_Click_window_daysIsSet = false;
}
org::openapitools::server::model::ConversionAttributionWindowDays AdsAnalyticsCreateAsyncRequest_allOf::getEngagementWindowDays() const
{
    return m_Engagement_window_days;
}
void AdsAnalyticsCreateAsyncRequest_allOf::setEngagementWindowDays(org::openapitools::server::model::ConversionAttributionWindowDays const& value)
{
    m_Engagement_window_days = value;
    m_Engagement_window_daysIsSet = true;
}
bool AdsAnalyticsCreateAsyncRequest_allOf::engagementWindowDaysIsSet() const
{
    return m_Engagement_window_daysIsSet;
}
void AdsAnalyticsCreateAsyncRequest_allOf::unsetEngagement_window_days()
{
    m_Engagement_window_daysIsSet = false;
}
org::openapitools::server::model::ConversionAttributionWindowDays AdsAnalyticsCreateAsyncRequest_allOf::getViewWindowDays() const
{
    return m_View_window_days;
}
void AdsAnalyticsCreateAsyncRequest_allOf::setViewWindowDays(org::openapitools::server::model::ConversionAttributionWindowDays const& value)
{
    m_View_window_days = value;
    m_View_window_daysIsSet = true;
}
bool AdsAnalyticsCreateAsyncRequest_allOf::viewWindowDaysIsSet() const
{
    return m_View_window_daysIsSet;
}
void AdsAnalyticsCreateAsyncRequest_allOf::unsetView_window_days()
{
    m_View_window_daysIsSet = false;
}
ConversionReportTimeType AdsAnalyticsCreateAsyncRequest_allOf::getConversionReportTime() const
{
    return m_Conversion_report_time;
}
void AdsAnalyticsCreateAsyncRequest_allOf::setConversionReportTime(ConversionReportTimeType const& value)
{
    m_Conversion_report_time = value;
    m_Conversion_report_timeIsSet = true;
}
bool AdsAnalyticsCreateAsyncRequest_allOf::conversionReportTimeIsSet() const
{
    return m_Conversion_report_timeIsSet;
}
void AdsAnalyticsCreateAsyncRequest_allOf::unsetConversion_report_time()
{
    m_Conversion_report_timeIsSet = false;
}
std::vector<org::openapitools::server::model::ConversionReportAttributionType> AdsAnalyticsCreateAsyncRequest_allOf::getAttributionTypes() const
{
    return m_Attribution_types;
}
void AdsAnalyticsCreateAsyncRequest_allOf::setAttributionTypes(std::vector<org::openapitools::server::model::ConversionReportAttributionType> const& value)
{
    m_Attribution_types = value;
    m_Attribution_typesIsSet = true;
}
bool AdsAnalyticsCreateAsyncRequest_allOf::attributionTypesIsSet() const
{
    return m_Attribution_typesIsSet;
}
void AdsAnalyticsCreateAsyncRequest_allOf::unsetAttribution_types()
{
    m_Attribution_typesIsSet = false;
}


} // namespace org::openapitools::server::model

