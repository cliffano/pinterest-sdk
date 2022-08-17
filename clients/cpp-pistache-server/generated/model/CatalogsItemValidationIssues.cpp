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


#include "CatalogsItemValidationIssues.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsItemValidationIssues::CatalogsItemValidationIssues()
{
    m_Item_number = 0;
    m_Item_id = "";
    
}

void CatalogsItemValidationIssues::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsItemValidationIssues::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsItemValidationIssues::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsItemValidationIssues" : pathPrefix;

                    
    return success;
}

bool CatalogsItemValidationIssues::operator==(const CatalogsItemValidationIssues& rhs) const
{
    return
    
    
    (getItemNumber() == rhs.getItemNumber())
     &&
    
    (getItemId() == rhs.getItemId())
     &&
    
    (getErrors() == rhs.getErrors())
     &&
    
    (getWarnings() == rhs.getWarnings())
    
    
    ;
}

bool CatalogsItemValidationIssues::operator!=(const CatalogsItemValidationIssues& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsItemValidationIssues& o)
{
    j = nlohmann::json();
    j["item_number"] = o.m_Item_number;
    j["item_id"] = o.m_Item_id;
    j["errors"] = o.m_Errors;
    j["warnings"] = o.m_Warnings;
    
}

void from_json(const nlohmann::json& j, CatalogsItemValidationIssues& o)
{
    j.at("item_number").get_to(o.m_Item_number);
    j.at("item_id").get_to(o.m_Item_id);
    j.at("errors").get_to(o.m_Errors);
    j.at("warnings").get_to(o.m_Warnings);
    
}

int32_t CatalogsItemValidationIssues::getItemNumber() const
{
    return m_Item_number;
}
void CatalogsItemValidationIssues::setItemNumber(int32_t const value)
{
    m_Item_number = value;
}
std::string CatalogsItemValidationIssues::getItemId() const
{
    return m_Item_id;
}
void CatalogsItemValidationIssues::setItemId(std::string const& value)
{
    m_Item_id = value;
}
org::openapitools::server::model::CatalogsItemValidationErrors CatalogsItemValidationIssues::getErrors() const
{
    return m_Errors;
}
void CatalogsItemValidationIssues::setErrors(org::openapitools::server::model::CatalogsItemValidationErrors const& value)
{
    m_Errors = value;
}
org::openapitools::server::model::CatalogsItemValidationWarnings CatalogsItemValidationIssues::getWarnings() const
{
    return m_Warnings;
}
void CatalogsItemValidationIssues::setWarnings(org::openapitools::server::model::CatalogsItemValidationWarnings const& value)
{
    m_Warnings = value;
}


} // namespace org::openapitools::server::model

