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


#include "CatalogsProductGroupPricingCriteria.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsProductGroupPricingCriteria::CatalogsProductGroupPricingCriteria()
{
    m_Inclusion = true;
    m_InclusionIsSet = false;
    m_Values = 0.0;
    m_Negated = false;
    m_NegatedIsSet = false;
    
}

void CatalogsProductGroupPricingCriteria::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsProductGroupPricingCriteria::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsProductGroupPricingCriteria::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsProductGroupPricingCriteria" : pathPrefix;

             
    
    /* Values */ {
        const double& value = m_Values;
        const std::string currentValuePath = _pathPrefix + ".values";
                
        
        if (value < 0)
        {
            success = false;
            msg << currentValuePath << ": must be greater than or equal to 0;";
        }

    }
        
    return success;
}

bool CatalogsProductGroupPricingCriteria::operator==(const CatalogsProductGroupPricingCriteria& rhs) const
{
    return
    
    
    
    ((!inclusionIsSet() && !rhs.inclusionIsSet()) || (inclusionIsSet() && rhs.inclusionIsSet() && isInclusion() == rhs.isInclusion())) &&
    
    (getValues() == rhs.getValues())
     &&
    
    
    ((!negatedIsSet() && !rhs.negatedIsSet()) || (negatedIsSet() && rhs.negatedIsSet() && isNegated() == rhs.isNegated()))
    
    ;
}

bool CatalogsProductGroupPricingCriteria::operator!=(const CatalogsProductGroupPricingCriteria& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsProductGroupPricingCriteria& o)
{
    j = nlohmann::json::object();
    if(o.inclusionIsSet())
        j["inclusion"] = o.m_Inclusion;
    j["values"] = o.m_Values;
    if(o.negatedIsSet())
        j["negated"] = o.m_Negated;
    
}

void from_json(const nlohmann::json& j, CatalogsProductGroupPricingCriteria& o)
{
    if(j.find("inclusion") != j.end())
    {
        j.at("inclusion").get_to(o.m_Inclusion);
        o.m_InclusionIsSet = true;
    } 
    j.at("values").get_to(o.m_Values);
    if(j.find("negated") != j.end())
    {
        j.at("negated").get_to(o.m_Negated);
        o.m_NegatedIsSet = true;
    } 
    
}

bool CatalogsProductGroupPricingCriteria::isInclusion() const
{
    return m_Inclusion;
}
void CatalogsProductGroupPricingCriteria::setInclusion(bool const value)
{
    m_Inclusion = value;
    m_InclusionIsSet = true;
}
bool CatalogsProductGroupPricingCriteria::inclusionIsSet() const
{
    return m_InclusionIsSet;
}
void CatalogsProductGroupPricingCriteria::unsetInclusion()
{
    m_InclusionIsSet = false;
}
double CatalogsProductGroupPricingCriteria::getValues() const
{
    return m_Values;
}
void CatalogsProductGroupPricingCriteria::setValues(double const value)
{
    m_Values = value;
}
bool CatalogsProductGroupPricingCriteria::isNegated() const
{
    return m_Negated;
}
void CatalogsProductGroupPricingCriteria::setNegated(bool const value)
{
    m_Negated = value;
    m_NegatedIsSet = true;
}
bool CatalogsProductGroupPricingCriteria::negatedIsSet() const
{
    return m_NegatedIsSet;
}
void CatalogsProductGroupPricingCriteria::unsetNegated()
{
    m_NegatedIsSet = false;
}


} // namespace org::openapitools::server::model

