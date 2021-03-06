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


#include "CatalogsFeedIngestionDetails.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsFeedIngestionDetails::CatalogsFeedIngestionDetails()
{
    
}

void CatalogsFeedIngestionDetails::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsFeedIngestionDetails::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsFeedIngestionDetails::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsFeedIngestionDetails" : pathPrefix;

            
    return success;
}

bool CatalogsFeedIngestionDetails::operator==(const CatalogsFeedIngestionDetails& rhs) const
{
    return
    
    
    (getErrors() == rhs.getErrors())
     &&
    
    (getInfo() == rhs.getInfo())
    
    
    ;
}

bool CatalogsFeedIngestionDetails::operator!=(const CatalogsFeedIngestionDetails& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsFeedIngestionDetails& o)
{
    j = nlohmann::json();
    j["errors"] = o.m_Errors;
    j["info"] = o.m_Info;
    
}

void from_json(const nlohmann::json& j, CatalogsFeedIngestionDetails& o)
{
    j.at("errors").get_to(o.m_Errors);
    j.at("info").get_to(o.m_Info);
    
}

CatalogsFeedIngestionErrors CatalogsFeedIngestionDetails::getErrors() const
{
    return m_Errors;
}
void CatalogsFeedIngestionDetails::setErrors(CatalogsFeedIngestionErrors const& value)
{
    m_Errors = value;
}
CatalogsFeedIngestionInfo CatalogsFeedIngestionDetails::getInfo() const
{
    return m_Info;
}
void CatalogsFeedIngestionDetails::setInfo(CatalogsFeedIngestionInfo const& value)
{
    m_Info = value;
}


} // namespace org::openapitools::server::model

