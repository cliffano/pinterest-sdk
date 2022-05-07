/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "AdsAnalyticsMetricsFilter.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

AdsAnalyticsMetricsFilter::AdsAnalyticsMetricsFilter()
{
    m_FieldIsSet = false;
    m_r_operatorIsSet = false;
    m_ValuesIsSet = false;
    
}

void AdsAnalyticsMetricsFilter::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AdsAnalyticsMetricsFilter::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AdsAnalyticsMetricsFilter::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AdsAnalyticsMetricsFilter" : pathPrefix;

                 
    if (valuesIsSet())
    {
        const std::vector<double>& value = m_Values;
        const std::string currentValuePath = _pathPrefix + ".values";
                
        
        if (value.size() < 1)
        {
            success = false;
            msg << currentValuePath << ": must have at least 1 elements;";
        }
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const double& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
    
    return success;
}

bool AdsAnalyticsMetricsFilter::operator==(const AdsAnalyticsMetricsFilter& rhs) const
{
    return
    
    
    
    ((!fieldIsSet() && !rhs.fieldIsSet()) || (fieldIsSet() && rhs.fieldIsSet() && getField() == rhs.getField())) &&
    
    
    ((!rOperatorIsSet() && !rhs.rOperatorIsSet()) || (rOperatorIsSet() && rhs.rOperatorIsSet() && getROperator() == rhs.getROperator())) &&
    
    
    ((!valuesIsSet() && !rhs.valuesIsSet()) || (valuesIsSet() && rhs.valuesIsSet() && getValues() == rhs.getValues()))
    
    ;
}

bool AdsAnalyticsMetricsFilter::operator!=(const AdsAnalyticsMetricsFilter& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AdsAnalyticsMetricsFilter& o)
{
    j = nlohmann::json();
    if(o.fieldIsSet())
        j["field"] = o.m_Field;
    if(o.rOperatorIsSet())
        j["operator"] = o.m_r_operator;
    if(o.valuesIsSet() || !o.m_Values.empty())
        j["values"] = o.m_Values;
    
}

void from_json(const nlohmann::json& j, AdsAnalyticsMetricsFilter& o)
{
    if(j.find("field") != j.end())
    {
        j.at("field").get_to(o.m_Field);
        o.m_FieldIsSet = true;
    } 
    if(j.find("operator") != j.end())
    {
        j.at("operator").get_to(o.m_r_operator);
        o.m_r_operatorIsSet = true;
    } 
    if(j.find("values") != j.end())
    {
        j.at("values").get_to(o.m_Values);
        o.m_ValuesIsSet = true;
    } 
    
}

AdsAnalyticsFilterColumn AdsAnalyticsMetricsFilter::getField() const
{
    return m_Field;
}
void AdsAnalyticsMetricsFilter::setField(AdsAnalyticsFilterColumn const& value)
{
    m_Field = value;
    m_FieldIsSet = true;
}
bool AdsAnalyticsMetricsFilter::fieldIsSet() const
{
    return m_FieldIsSet;
}
void AdsAnalyticsMetricsFilter::unsetField()
{
    m_FieldIsSet = false;
}
AdsAnalyticsFilterOperator AdsAnalyticsMetricsFilter::getROperator() const
{
    return m_r_operator;
}
void AdsAnalyticsMetricsFilter::setROperator(AdsAnalyticsFilterOperator const& value)
{
    m_r_operator = value;
    m_r_operatorIsSet = true;
}
bool AdsAnalyticsMetricsFilter::rOperatorIsSet() const
{
    return m_r_operatorIsSet;
}
void AdsAnalyticsMetricsFilter::unsetr_operator()
{
    m_r_operatorIsSet = false;
}
std::vector<double> AdsAnalyticsMetricsFilter::getValues() const
{
    return m_Values;
}
void AdsAnalyticsMetricsFilter::setValues(std::vector<double> const value)
{
    m_Values = value;
    m_ValuesIsSet = true;
}
bool AdsAnalyticsMetricsFilter::valuesIsSet() const
{
    return m_ValuesIsSet;
}
void AdsAnalyticsMetricsFilter::unsetValues()
{
    m_ValuesIsSet = false;
}


} // namespace org::openapitools::server::model

