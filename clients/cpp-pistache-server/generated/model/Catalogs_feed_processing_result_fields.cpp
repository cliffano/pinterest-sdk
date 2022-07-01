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


#include "Catalogs_feed_processing_result_fields.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

Catalogs_feed_processing_result_fields::Catalogs_feed_processing_result_fields()
{
    
}

void Catalogs_feed_processing_result_fields::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool Catalogs_feed_processing_result_fields::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool Catalogs_feed_processing_result_fields::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "Catalogs_feed_processing_result_fields" : pathPrefix;

                    
    return success;
}

bool Catalogs_feed_processing_result_fields::operator==(const Catalogs_feed_processing_result_fields& rhs) const
{
    return
    
    
    (getIngestionDetails() == rhs.getIngestionDetails())
     &&
    
    (getStatus() == rhs.getStatus())
     &&
    
    (getProductCounts() == rhs.getProductCounts())
     &&
    
    (getValidationDetails() == rhs.getValidationDetails())
    
    
    ;
}

bool Catalogs_feed_processing_result_fields::operator!=(const Catalogs_feed_processing_result_fields& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Catalogs_feed_processing_result_fields& o)
{
    j = nlohmann::json();
    j["ingestion_details"] = o.m_Ingestion_details;
    j["status"] = o.m_Status;
    j["product_counts"] = o.m_Product_counts;
    j["validation_details"] = o.m_Validation_details;
    
}

void from_json(const nlohmann::json& j, Catalogs_feed_processing_result_fields& o)
{
    j.at("ingestion_details").get_to(o.m_Ingestion_details);
    j.at("status").get_to(o.m_Status);
    j.at("product_counts").get_to(o.m_Product_counts);
    j.at("validation_details").get_to(o.m_Validation_details);
    
}

CatalogsFeedIngestionDetails Catalogs_feed_processing_result_fields::getIngestionDetails() const
{
    return m_Ingestion_details;
}
void Catalogs_feed_processing_result_fields::setIngestionDetails(CatalogsFeedIngestionDetails const& value)
{
    m_Ingestion_details = value;
}
CatalogsFeedProcessingStatus Catalogs_feed_processing_result_fields::getStatus() const
{
    return m_Status;
}
void Catalogs_feed_processing_result_fields::setStatus(CatalogsFeedProcessingStatus const& value)
{
    m_Status = value;
}
CatalogsFeedProductCounts Catalogs_feed_processing_result_fields::getProductCounts() const
{
    return m_Product_counts;
}
void Catalogs_feed_processing_result_fields::setProductCounts(CatalogsFeedProductCounts const& value)
{
    m_Product_counts = value;
}
CatalogsFeedValidationDetails Catalogs_feed_processing_result_fields::getValidationDetails() const
{
    return m_Validation_details;
}
void Catalogs_feed_processing_result_fields::setValidationDetails(CatalogsFeedValidationDetails const& value)
{
    m_Validation_details = value;
}


} // namespace org::openapitools::server::model

