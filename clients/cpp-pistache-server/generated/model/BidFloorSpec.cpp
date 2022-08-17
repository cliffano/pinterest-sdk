/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.4.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "BidFloorSpec.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

BidFloorSpec::BidFloorSpec()
{
    m_CountriesIsSet = false;
    m_CurrencyIsSet = false;
    m_Objective_typeIsSet = false;
    m_Optimization_goal_metadataIsSet = false;
    m_Creative_typeIsSet = false;
    
}

void BidFloorSpec::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool BidFloorSpec::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool BidFloorSpec::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "BidFloorSpec" : pathPrefix;

         
    if (countriesIsSet())
    {
        const std::vector<org::openapitools::server::model::Country>& value = m_Countries;
        const std::string currentValuePath = _pathPrefix + ".countries";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const org::openapitools::server::model::Country& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath) && success;
        
        
 
                i++;
            }
        }

    }
                        
    return success;
}

bool BidFloorSpec::operator==(const BidFloorSpec& rhs) const
{
    return
    
    
    
    ((!countriesIsSet() && !rhs.countriesIsSet()) || (countriesIsSet() && rhs.countriesIsSet() && getCountries() == rhs.getCountries())) &&
    
    
    ((!currencyIsSet() && !rhs.currencyIsSet()) || (currencyIsSet() && rhs.currencyIsSet() && getCurrency() == rhs.getCurrency())) &&
    
    
    ((!objectiveTypeIsSet() && !rhs.objectiveTypeIsSet()) || (objectiveTypeIsSet() && rhs.objectiveTypeIsSet() && getObjectiveType() == rhs.getObjectiveType())) &&
    
    (getBillableEvent() == rhs.getBillableEvent())
     &&
    
    
    ((!optimizationGoalMetadataIsSet() && !rhs.optimizationGoalMetadataIsSet()) || (optimizationGoalMetadataIsSet() && rhs.optimizationGoalMetadataIsSet() && getOptimizationGoalMetadata() == rhs.getOptimizationGoalMetadata())) &&
    
    
    ((!creativeTypeIsSet() && !rhs.creativeTypeIsSet()) || (creativeTypeIsSet() && rhs.creativeTypeIsSet() && getCreativeType() == rhs.getCreativeType()))
    
    ;
}

bool BidFloorSpec::operator!=(const BidFloorSpec& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const BidFloorSpec& o)
{
    j = nlohmann::json();
    if(o.countriesIsSet() || !o.m_Countries.empty())
        j["countries"] = o.m_Countries;
    if(o.currencyIsSet())
        j["currency"] = o.m_Currency;
    if(o.objectiveTypeIsSet())
        j["objective_type"] = o.m_Objective_type;
    j["billable_event"] = o.m_Billable_event;
    if(o.optimizationGoalMetadataIsSet())
        j["optimization_goal_metadata"] = o.m_Optimization_goal_metadata;
    if(o.creativeTypeIsSet())
        j["creative_type"] = o.m_Creative_type;
    
}

void from_json(const nlohmann::json& j, BidFloorSpec& o)
{
    if(j.find("countries") != j.end())
    {
        j.at("countries").get_to(o.m_Countries);
        o.m_CountriesIsSet = true;
    } 
    if(j.find("currency") != j.end())
    {
        j.at("currency").get_to(o.m_Currency);
        o.m_CurrencyIsSet = true;
    } 
    if(j.find("objective_type") != j.end())
    {
        j.at("objective_type").get_to(o.m_Objective_type);
        o.m_Objective_typeIsSet = true;
    } 
    j.at("billable_event").get_to(o.m_Billable_event);
    if(j.find("optimization_goal_metadata") != j.end())
    {
        j.at("optimization_goal_metadata").get_to(o.m_Optimization_goal_metadata);
        o.m_Optimization_goal_metadataIsSet = true;
    } 
    if(j.find("creative_type") != j.end())
    {
        j.at("creative_type").get_to(o.m_Creative_type);
        o.m_Creative_typeIsSet = true;
    } 
    
}

std::vector<org::openapitools::server::model::Country> BidFloorSpec::getCountries() const
{
    return m_Countries;
}
void BidFloorSpec::setCountries(std::vector<org::openapitools::server::model::Country> const& value)
{
    m_Countries = value;
    m_CountriesIsSet = true;
}
bool BidFloorSpec::countriesIsSet() const
{
    return m_CountriesIsSet;
}
void BidFloorSpec::unsetCountries()
{
    m_CountriesIsSet = false;
}
org::openapitools::server::model::Currency BidFloorSpec::getCurrency() const
{
    return m_Currency;
}
void BidFloorSpec::setCurrency(org::openapitools::server::model::Currency const& value)
{
    m_Currency = value;
    m_CurrencyIsSet = true;
}
bool BidFloorSpec::currencyIsSet() const
{
    return m_CurrencyIsSet;
}
void BidFloorSpec::unsetCurrency()
{
    m_CurrencyIsSet = false;
}
org::openapitools::server::model::ObjectiveType BidFloorSpec::getObjectiveType() const
{
    return m_Objective_type;
}
void BidFloorSpec::setObjectiveType(org::openapitools::server::model::ObjectiveType const& value)
{
    m_Objective_type = value;
    m_Objective_typeIsSet = true;
}
bool BidFloorSpec::objectiveTypeIsSet() const
{
    return m_Objective_typeIsSet;
}
void BidFloorSpec::unsetObjective_type()
{
    m_Objective_typeIsSet = false;
}
org::openapitools::server::model::ActionType BidFloorSpec::getBillableEvent() const
{
    return m_Billable_event;
}
void BidFloorSpec::setBillableEvent(org::openapitools::server::model::ActionType const& value)
{
    m_Billable_event = value;
}
org::openapitools::server::model::Object BidFloorSpec::getOptimizationGoalMetadata() const
{
    return m_Optimization_goal_metadata;
}
void BidFloorSpec::setOptimizationGoalMetadata(org::openapitools::server::model::Object const& value)
{
    m_Optimization_goal_metadata = value;
    m_Optimization_goal_metadataIsSet = true;
}
bool BidFloorSpec::optimizationGoalMetadataIsSet() const
{
    return m_Optimization_goal_metadataIsSet;
}
void BidFloorSpec::unsetOptimization_goal_metadata()
{
    m_Optimization_goal_metadataIsSet = false;
}
org::openapitools::server::model::CreativeType BidFloorSpec::getCreativeType() const
{
    return m_Creative_type;
}
void BidFloorSpec::setCreativeType(org::openapitools::server::model::CreativeType const& value)
{
    m_Creative_type = value;
    m_Creative_typeIsSet = true;
}
bool BidFloorSpec::creativeTypeIsSet() const
{
    return m_Creative_typeIsSet;
}
void BidFloorSpec::unsetCreative_type()
{
    m_Creative_typeIsSet = false;
}


} // namespace org::openapitools::server::model

