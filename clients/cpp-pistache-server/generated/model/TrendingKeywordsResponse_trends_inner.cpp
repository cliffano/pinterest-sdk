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


#include "TrendingKeywordsResponse_trends_inner.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

TrendingKeywordsResponse_trends_inner::TrendingKeywordsResponse_trends_inner()
{
    m_Keyword = "";
    m_KeywordIsSet = false;
    m_Pct_growth_wow = 0;
    m_Pct_growth_wowIsSet = false;
    m_Pct_growth_mom = 0;
    m_Pct_growth_momIsSet = false;
    m_Pct_growth_yoy = 0;
    m_Pct_growth_yoyIsSet = false;
    m_Time_seriesIsSet = false;
    
}

void TrendingKeywordsResponse_trends_inner::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool TrendingKeywordsResponse_trends_inner::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool TrendingKeywordsResponse_trends_inner::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "TrendingKeywordsResponse_trends_inner" : pathPrefix;

         
    if (keywordIsSet())
    {
        const std::string& value = m_Keyword;
        const std::string currentValuePath = _pathPrefix + ".keyword";
                
        
        if (value.length() < 1)
        {
            success = false;
            msg << currentValuePath << ": must be at least 1 characters long;";
        }

    }
                    
    return success;
}

bool TrendingKeywordsResponse_trends_inner::operator==(const TrendingKeywordsResponse_trends_inner& rhs) const
{
    return
    
    
    
    ((!keywordIsSet() && !rhs.keywordIsSet()) || (keywordIsSet() && rhs.keywordIsSet() && getKeyword() == rhs.getKeyword())) &&
    
    
    ((!pctGrowthWowIsSet() && !rhs.pctGrowthWowIsSet()) || (pctGrowthWowIsSet() && rhs.pctGrowthWowIsSet() && getPctGrowthWow() == rhs.getPctGrowthWow())) &&
    
    
    ((!pctGrowthMomIsSet() && !rhs.pctGrowthMomIsSet()) || (pctGrowthMomIsSet() && rhs.pctGrowthMomIsSet() && getPctGrowthMom() == rhs.getPctGrowthMom())) &&
    
    
    ((!pctGrowthYoyIsSet() && !rhs.pctGrowthYoyIsSet()) || (pctGrowthYoyIsSet() && rhs.pctGrowthYoyIsSet() && getPctGrowthYoy() == rhs.getPctGrowthYoy())) &&
    
    
    ((!timeSeriesIsSet() && !rhs.timeSeriesIsSet()) || (timeSeriesIsSet() && rhs.timeSeriesIsSet() && getTimeSeries() == rhs.getTimeSeries()))
    
    ;
}

bool TrendingKeywordsResponse_trends_inner::operator!=(const TrendingKeywordsResponse_trends_inner& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const TrendingKeywordsResponse_trends_inner& o)
{
    j = nlohmann::json::object();
    if(o.keywordIsSet())
        j["keyword"] = o.m_Keyword;
    if(o.pctGrowthWowIsSet())
        j["pct_growth_wow"] = o.m_Pct_growth_wow;
    if(o.pctGrowthMomIsSet())
        j["pct_growth_mom"] = o.m_Pct_growth_mom;
    if(o.pctGrowthYoyIsSet())
        j["pct_growth_yoy"] = o.m_Pct_growth_yoy;
    if(o.timeSeriesIsSet())
        j["time_series"] = o.m_Time_series;
    
}

void from_json(const nlohmann::json& j, TrendingKeywordsResponse_trends_inner& o)
{
    if(j.find("keyword") != j.end())
    {
        j.at("keyword").get_to(o.m_Keyword);
        o.m_KeywordIsSet = true;
    } 
    if(j.find("pct_growth_wow") != j.end())
    {
        j.at("pct_growth_wow").get_to(o.m_Pct_growth_wow);
        o.m_Pct_growth_wowIsSet = true;
    } 
    if(j.find("pct_growth_mom") != j.end())
    {
        j.at("pct_growth_mom").get_to(o.m_Pct_growth_mom);
        o.m_Pct_growth_momIsSet = true;
    } 
    if(j.find("pct_growth_yoy") != j.end())
    {
        j.at("pct_growth_yoy").get_to(o.m_Pct_growth_yoy);
        o.m_Pct_growth_yoyIsSet = true;
    } 
    if(j.find("time_series") != j.end())
    {
        j.at("time_series").get_to(o.m_Time_series);
        o.m_Time_seriesIsSet = true;
    } 
    
}

std::string TrendingKeywordsResponse_trends_inner::getKeyword() const
{
    return m_Keyword;
}
void TrendingKeywordsResponse_trends_inner::setKeyword(std::string const& value)
{
    m_Keyword = value;
    m_KeywordIsSet = true;
}
bool TrendingKeywordsResponse_trends_inner::keywordIsSet() const
{
    return m_KeywordIsSet;
}
void TrendingKeywordsResponse_trends_inner::unsetKeyword()
{
    m_KeywordIsSet = false;
}
int32_t TrendingKeywordsResponse_trends_inner::getPctGrowthWow() const
{
    return m_Pct_growth_wow;
}
void TrendingKeywordsResponse_trends_inner::setPctGrowthWow(int32_t const value)
{
    m_Pct_growth_wow = value;
    m_Pct_growth_wowIsSet = true;
}
bool TrendingKeywordsResponse_trends_inner::pctGrowthWowIsSet() const
{
    return m_Pct_growth_wowIsSet;
}
void TrendingKeywordsResponse_trends_inner::unsetPct_growth_wow()
{
    m_Pct_growth_wowIsSet = false;
}
int32_t TrendingKeywordsResponse_trends_inner::getPctGrowthMom() const
{
    return m_Pct_growth_mom;
}
void TrendingKeywordsResponse_trends_inner::setPctGrowthMom(int32_t const value)
{
    m_Pct_growth_mom = value;
    m_Pct_growth_momIsSet = true;
}
bool TrendingKeywordsResponse_trends_inner::pctGrowthMomIsSet() const
{
    return m_Pct_growth_momIsSet;
}
void TrendingKeywordsResponse_trends_inner::unsetPct_growth_mom()
{
    m_Pct_growth_momIsSet = false;
}
int32_t TrendingKeywordsResponse_trends_inner::getPctGrowthYoy() const
{
    return m_Pct_growth_yoy;
}
void TrendingKeywordsResponse_trends_inner::setPctGrowthYoy(int32_t const value)
{
    m_Pct_growth_yoy = value;
    m_Pct_growth_yoyIsSet = true;
}
bool TrendingKeywordsResponse_trends_inner::pctGrowthYoyIsSet() const
{
    return m_Pct_growth_yoyIsSet;
}
void TrendingKeywordsResponse_trends_inner::unsetPct_growth_yoy()
{
    m_Pct_growth_yoyIsSet = false;
}
org::openapitools::server::model::TrendingKeywordsResponse_trends_inner_time_series TrendingKeywordsResponse_trends_inner::getTimeSeries() const
{
    return m_Time_series;
}
void TrendingKeywordsResponse_trends_inner::setTimeSeries(org::openapitools::server::model::TrendingKeywordsResponse_trends_inner_time_series const& value)
{
    m_Time_series = value;
    m_Time_seriesIsSet = true;
}
bool TrendingKeywordsResponse_trends_inner::timeSeriesIsSet() const
{
    return m_Time_seriesIsSet;
}
void TrendingKeywordsResponse_trends_inner::unsetTime_series()
{
    m_Time_seriesIsSet = false;
}


} // namespace org::openapitools::server::model

