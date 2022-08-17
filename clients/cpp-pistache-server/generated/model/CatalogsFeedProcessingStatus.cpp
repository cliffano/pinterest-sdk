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


#include "CatalogsFeedProcessingStatus.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace org::openapitools::server::model
{

CatalogsFeedProcessingStatus::CatalogsFeedProcessingStatus()
{
    
}

void CatalogsFeedProcessingStatus::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsFeedProcessingStatus::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsFeedProcessingStatus::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsFeedProcessingStatus" : pathPrefix;

    
    if (m_value == CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus::INVALID_VALUE_OPENAPI_GENERATED)
    {
        success = false;
        msg << _pathPrefix << ": has no value;";
    }

    return success;
}

bool CatalogsFeedProcessingStatus::operator==(const CatalogsFeedProcessingStatus& rhs) const
{
    return
    getValue() == rhs.getValue()
    
    ;
}

bool CatalogsFeedProcessingStatus::operator!=(const CatalogsFeedProcessingStatus& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsFeedProcessingStatus& o)
{
    j = nlohmann::json();
    
    switch (o.getValue())
    {
        case CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus::INVALID_VALUE_OPENAPI_GENERATED:
            j = "INVALID_VALUE_OPENAPI_GENERATED";
            break;
        case CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus::COMPLETED:
            j = "COMPLETED";
            break;
        case CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus::COMPLETED_EARLY:
            j = "COMPLETED_EARLY";
            break;
        case CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus::DISAPPROVED:
            j = "DISAPPROVED";
            break;
        case CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus::FAILED:
            j = "FAILED";
            break;
        case CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus::PROCESSING:
            j = "PROCESSING";
            break;
        case CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus::QUEUED_FOR_PROCESSING:
            j = "QUEUED_FOR_PROCESSING";
            break;
        case CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus::UNDER_APPEAL:
            j = "UNDER_APPEAL";
            break;
        case CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus::UNDER_REVIEW:
            j = "UNDER_REVIEW";
            break;
    }
}

void from_json(const nlohmann::json& j, CatalogsFeedProcessingStatus& o)
{
    
    auto s = j.get<std::string>();
    if (s == "COMPLETED") {
     o.setValue(CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus::COMPLETED);
    } 
    else if (s == "COMPLETED_EARLY") {
     o.setValue(CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus::COMPLETED_EARLY);
    } 
    else if (s == "DISAPPROVED") {
     o.setValue(CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus::DISAPPROVED);
    } 
    else if (s == "FAILED") {
     o.setValue(CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus::FAILED);
    } 
    else if (s == "PROCESSING") {
     o.setValue(CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus::PROCESSING);
    } 
    else if (s == "QUEUED_FOR_PROCESSING") {
     o.setValue(CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus::QUEUED_FOR_PROCESSING);
    } 
    else if (s == "UNDER_APPEAL") {
     o.setValue(CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus::UNDER_APPEAL);
    } 
    else if (s == "UNDER_REVIEW") {
     o.setValue(CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus::UNDER_REVIEW);
    }  else {
     std::stringstream ss;
     ss << "Unexpected value " << s << " in json"
        << " cannot be converted to enum of type"
        << " CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus";
     throw std::invalid_argument(ss.str());
    } 

}

CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus CatalogsFeedProcessingStatus::getValue() const
{
    return m_value;
}
void CatalogsFeedProcessingStatus::setValue(CatalogsFeedProcessingStatus::eCatalogsFeedProcessingStatus value)
{
    m_value = value;
}

} // namespace org::openapitools::server::model

