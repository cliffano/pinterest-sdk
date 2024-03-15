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


#include "CatalogsFeedProcessingResult.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsFeedProcessingResult::CatalogsFeedProcessingResult()
{
    m_Created_at = "";
    m_Created_atIsSet = false;
    m_Id = "";
    m_IdIsSet = false;
    m_Updated_at = "";
    m_Updated_atIsSet = false;
    
}

void CatalogsFeedProcessingResult::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsFeedProcessingResult::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsFeedProcessingResult::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsFeedProcessingResult" : pathPrefix;

                    
    if (!m_Ingestion_details.validate()) {
        msg << _pathPrefix << ": Ingestion_details is invalid;";
        success = false;
    }        
    if (!m_Product_counts.validate()) {
        msg << _pathPrefix << ": Product_counts is invalid;";
        success = false;
    }    
    if (!m_Validation_details.validate()) {
        msg << _pathPrefix << ": Validation_details is invalid;";
        success = false;
    }
    return success;
}

bool CatalogsFeedProcessingResult::operator==(const CatalogsFeedProcessingResult& rhs) const
{
    return
    
    
    
    ((!createdAtIsSet() && !rhs.createdAtIsSet()) || (createdAtIsSet() && rhs.createdAtIsSet() && getCreatedAt() == rhs.getCreatedAt())) &&
    
    
    ((!idIsSet() && !rhs.idIsSet()) || (idIsSet() && rhs.idIsSet() && getId() == rhs.getId())) &&
    
    
    ((!updatedAtIsSet() && !rhs.updatedAtIsSet()) || (updatedAtIsSet() && rhs.updatedAtIsSet() && getUpdatedAt() == rhs.getUpdatedAt())) &&
    
    (getIngestionDetails() == rhs.getIngestionDetails())
     &&
    
    (getStatus() == rhs.getStatus())
     &&
    
    (getProductCounts() == rhs.getProductCounts())
     &&
    
    (getValidationDetails() == rhs.getValidationDetails())
    
    
    ;
}

bool CatalogsFeedProcessingResult::operator!=(const CatalogsFeedProcessingResult& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsFeedProcessingResult& o)
{
    j = nlohmann::json::object();
    if(o.createdAtIsSet())
        j["created_at"] = o.m_Created_at;
    if(o.idIsSet())
        j["id"] = o.m_Id;
    if(o.updatedAtIsSet())
        j["updated_at"] = o.m_Updated_at;
    j["ingestion_details"] = o.m_Ingestion_details;
    j["status"] = o.m_Status;
    j["product_counts"] = o.m_Product_counts;
    j["validation_details"] = o.m_Validation_details;
    
}

void from_json(const nlohmann::json& j, CatalogsFeedProcessingResult& o)
{
    if(j.find("created_at") != j.end())
    {
        j.at("created_at").get_to(o.m_Created_at);
        o.m_Created_atIsSet = true;
    } 
    if(j.find("id") != j.end())
    {
        j.at("id").get_to(o.m_Id);
        o.m_IdIsSet = true;
    } 
    if(j.find("updated_at") != j.end())
    {
        j.at("updated_at").get_to(o.m_Updated_at);
        o.m_Updated_atIsSet = true;
    } 
    j.at("ingestion_details").get_to(o.m_Ingestion_details);
    j.at("status").get_to(o.m_Status);
    j.at("product_counts").get_to(o.m_Product_counts);
    j.at("validation_details").get_to(o.m_Validation_details);
    
}

std::string CatalogsFeedProcessingResult::getCreatedAt() const
{
    return m_Created_at;
}
void CatalogsFeedProcessingResult::setCreatedAt(std::string const& value)
{
    m_Created_at = value;
    m_Created_atIsSet = true;
}
bool CatalogsFeedProcessingResult::createdAtIsSet() const
{
    return m_Created_atIsSet;
}
void CatalogsFeedProcessingResult::unsetCreated_at()
{
    m_Created_atIsSet = false;
}
std::string CatalogsFeedProcessingResult::getId() const
{
    return m_Id;
}
void CatalogsFeedProcessingResult::setId(std::string const& value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool CatalogsFeedProcessingResult::idIsSet() const
{
    return m_IdIsSet;
}
void CatalogsFeedProcessingResult::unsetId()
{
    m_IdIsSet = false;
}
std::string CatalogsFeedProcessingResult::getUpdatedAt() const
{
    return m_Updated_at;
}
void CatalogsFeedProcessingResult::setUpdatedAt(std::string const& value)
{
    m_Updated_at = value;
    m_Updated_atIsSet = true;
}
bool CatalogsFeedProcessingResult::updatedAtIsSet() const
{
    return m_Updated_atIsSet;
}
void CatalogsFeedProcessingResult::unsetUpdated_at()
{
    m_Updated_atIsSet = false;
}
org::openapitools::server::model::CatalogsFeedIngestionDetails CatalogsFeedProcessingResult::getIngestionDetails() const
{
    return m_Ingestion_details;
}
void CatalogsFeedProcessingResult::setIngestionDetails(org::openapitools::server::model::CatalogsFeedIngestionDetails const& value)
{
    m_Ingestion_details = value;
}
org::openapitools::server::model::CatalogsFeedProcessingStatus CatalogsFeedProcessingResult::getStatus() const
{
    return m_Status;
}
void CatalogsFeedProcessingResult::setStatus(org::openapitools::server::model::CatalogsFeedProcessingStatus const& value)
{
    m_Status = value;
}
org::openapitools::server::model::CatalogsFeedProductCounts CatalogsFeedProcessingResult::getProductCounts() const
{
    return m_Product_counts;
}
void CatalogsFeedProcessingResult::setProductCounts(org::openapitools::server::model::CatalogsFeedProductCounts const& value)
{
    m_Product_counts = value;
}
org::openapitools::server::model::CatalogsFeedValidationDetails CatalogsFeedProcessingResult::getValidationDetails() const
{
    return m_Validation_details;
}
void CatalogsFeedProcessingResult::setValidationDetails(org::openapitools::server::model::CatalogsFeedValidationDetails const& value)
{
    m_Validation_details = value;
}


} // namespace org::openapitools::server::model

