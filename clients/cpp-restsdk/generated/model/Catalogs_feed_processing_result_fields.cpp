/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Catalogs_feed_processing_result_fields.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Catalogs_feed_processing_result_fields::Catalogs_feed_processing_result_fields()
{
    m_Ingestion_detailsIsSet = false;
    m_StatusIsSet = false;
    m_Product_countsIsSet = false;
    m_Validation_detailsIsSet = false;
}

Catalogs_feed_processing_result_fields::~Catalogs_feed_processing_result_fields()
{
}

void Catalogs_feed_processing_result_fields::validate()
{
    // TODO: implement validation
}

web::json::value Catalogs_feed_processing_result_fields::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Ingestion_detailsIsSet)
    {
        val[utility::conversions::to_string_t(U("ingestion_details"))] = ModelBase::toJson(m_Ingestion_details);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }
    if(m_Product_countsIsSet)
    {
        val[utility::conversions::to_string_t(U("product_counts"))] = ModelBase::toJson(m_Product_counts);
    }
    if(m_Validation_detailsIsSet)
    {
        val[utility::conversions::to_string_t(U("validation_details"))] = ModelBase::toJson(m_Validation_details);
    }

    return val;
}

bool Catalogs_feed_processing_result_fields::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("ingestion_details"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ingestion_details")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsFeedIngestionDetails> refVal_ingestion_details;
            ok &= ModelBase::fromJson(fieldValue, refVal_ingestion_details);
            setIngestionDetails(refVal_ingestion_details);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsFeedProcessingStatus> refVal_status;
            ok &= ModelBase::fromJson(fieldValue, refVal_status);
            setStatus(refVal_status);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("product_counts"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("product_counts")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsFeedProductCounts> refVal_product_counts;
            ok &= ModelBase::fromJson(fieldValue, refVal_product_counts);
            setProductCounts(refVal_product_counts);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("validation_details"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("validation_details")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsFeedValidationDetails> refVal_validation_details;
            ok &= ModelBase::fromJson(fieldValue, refVal_validation_details);
            setValidationDetails(refVal_validation_details);
        }
    }
    return ok;
}

void Catalogs_feed_processing_result_fields::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Ingestion_detailsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ingestion_details")), m_Ingestion_details));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
    }
    if(m_Product_countsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("product_counts")), m_Product_counts));
    }
    if(m_Validation_detailsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("validation_details")), m_Validation_details));
    }
}

bool Catalogs_feed_processing_result_fields::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("ingestion_details"))))
    {
        std::shared_ptr<CatalogsFeedIngestionDetails> refVal_ingestion_details;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ingestion_details"))), refVal_ingestion_details );
        setIngestionDetails(refVal_ingestion_details);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        std::shared_ptr<CatalogsFeedProcessingStatus> refVal_status;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_status );
        setStatus(refVal_status);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("product_counts"))))
    {
        std::shared_ptr<CatalogsFeedProductCounts> refVal_product_counts;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("product_counts"))), refVal_product_counts );
        setProductCounts(refVal_product_counts);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("validation_details"))))
    {
        std::shared_ptr<CatalogsFeedValidationDetails> refVal_validation_details;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("validation_details"))), refVal_validation_details );
        setValidationDetails(refVal_validation_details);
    }
    return ok;
}

std::shared_ptr<CatalogsFeedIngestionDetails> Catalogs_feed_processing_result_fields::getIngestionDetails() const
{
    return m_Ingestion_details;
}

void Catalogs_feed_processing_result_fields::setIngestionDetails(const std::shared_ptr<CatalogsFeedIngestionDetails>& value)
{
    m_Ingestion_details = value;
    m_Ingestion_detailsIsSet = true;
}

bool Catalogs_feed_processing_result_fields::ingestionDetailsIsSet() const
{
    return m_Ingestion_detailsIsSet;
}

void Catalogs_feed_processing_result_fields::unsetIngestion_details()
{
    m_Ingestion_detailsIsSet = false;
}
std::shared_ptr<CatalogsFeedProcessingStatus> Catalogs_feed_processing_result_fields::getStatus() const
{
    return m_Status;
}

void Catalogs_feed_processing_result_fields::setStatus(const std::shared_ptr<CatalogsFeedProcessingStatus>& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool Catalogs_feed_processing_result_fields::statusIsSet() const
{
    return m_StatusIsSet;
}

void Catalogs_feed_processing_result_fields::unsetStatus()
{
    m_StatusIsSet = false;
}
std::shared_ptr<CatalogsFeedProductCounts> Catalogs_feed_processing_result_fields::getProductCounts() const
{
    return m_Product_counts;
}

void Catalogs_feed_processing_result_fields::setProductCounts(const std::shared_ptr<CatalogsFeedProductCounts>& value)
{
    m_Product_counts = value;
    m_Product_countsIsSet = true;
}

bool Catalogs_feed_processing_result_fields::productCountsIsSet() const
{
    return m_Product_countsIsSet;
}

void Catalogs_feed_processing_result_fields::unsetProduct_counts()
{
    m_Product_countsIsSet = false;
}
std::shared_ptr<CatalogsFeedValidationDetails> Catalogs_feed_processing_result_fields::getValidationDetails() const
{
    return m_Validation_details;
}

void Catalogs_feed_processing_result_fields::setValidationDetails(const std::shared_ptr<CatalogsFeedValidationDetails>& value)
{
    m_Validation_details = value;
    m_Validation_detailsIsSet = true;
}

bool Catalogs_feed_processing_result_fields::validationDetailsIsSet() const
{
    return m_Validation_detailsIsSet;
}

void Catalogs_feed_processing_result_fields::unsetValidation_details()
{
    m_Validation_detailsIsSet = false;
}
}
}
}
}

