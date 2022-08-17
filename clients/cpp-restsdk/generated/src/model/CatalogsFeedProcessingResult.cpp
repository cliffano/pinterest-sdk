/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/CatalogsFeedProcessingResult.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



CatalogsFeedProcessingResult::CatalogsFeedProcessingResult()
{
    m_Created_at = utility::datetime();
    m_Created_atIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Updated_at = utility::datetime();
    m_Updated_atIsSet = false;
    m_Ingestion_detailsIsSet = false;
    m_StatusIsSet = false;
    m_Product_countsIsSet = false;
    m_Validation_detailsIsSet = false;
}

CatalogsFeedProcessingResult::~CatalogsFeedProcessingResult()
{
}

void CatalogsFeedProcessingResult::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsFeedProcessingResult::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Created_atIsSet)
    {
        val[utility::conversions::to_string_t(U("created_at"))] = ModelBase::toJson(m_Created_at);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_Updated_atIsSet)
    {
        val[utility::conversions::to_string_t(U("updated_at"))] = ModelBase::toJson(m_Updated_at);
    }
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

bool CatalogsFeedProcessingResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("created_at"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("created_at")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setCreatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatedAt);
            setCreatedAt(refVal_setCreatedAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("updated_at"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("updated_at")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setUpdatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUpdatedAt);
            setUpdatedAt(refVal_setUpdatedAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ingestion_details"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ingestion_details")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsFeedIngestionDetails> refVal_setIngestionDetails;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIngestionDetails);
            setIngestionDetails(refVal_setIngestionDetails);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsFeedProcessingStatus> refVal_setStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatus);
            setStatus(refVal_setStatus);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("product_counts"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("product_counts")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsFeedProductCounts> refVal_setProductCounts;
            ok &= ModelBase::fromJson(fieldValue, refVal_setProductCounts);
            setProductCounts(refVal_setProductCounts);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("validation_details"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("validation_details")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CatalogsFeedValidationDetails> refVal_setValidationDetails;
            ok &= ModelBase::fromJson(fieldValue, refVal_setValidationDetails);
            setValidationDetails(refVal_setValidationDetails);
        }
    }
    return ok;
}

void CatalogsFeedProcessingResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Created_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("created_at")), m_Created_at));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_Updated_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("updated_at")), m_Updated_at));
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

bool CatalogsFeedProcessingResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("created_at"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("created_at"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("updated_at"))))
    {
        utility::datetime refVal_setUpdatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("updated_at"))), refVal_setUpdatedAt );
        setUpdatedAt(refVal_setUpdatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ingestion_details"))))
    {
        std::shared_ptr<CatalogsFeedIngestionDetails> refVal_setIngestionDetails;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ingestion_details"))), refVal_setIngestionDetails );
        setIngestionDetails(refVal_setIngestionDetails);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        std::shared_ptr<CatalogsFeedProcessingStatus> refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("product_counts"))))
    {
        std::shared_ptr<CatalogsFeedProductCounts> refVal_setProductCounts;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("product_counts"))), refVal_setProductCounts );
        setProductCounts(refVal_setProductCounts);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("validation_details"))))
    {
        std::shared_ptr<CatalogsFeedValidationDetails> refVal_setValidationDetails;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("validation_details"))), refVal_setValidationDetails );
        setValidationDetails(refVal_setValidationDetails);
    }
    return ok;
}

utility::datetime CatalogsFeedProcessingResult::getCreatedAt() const
{
    return m_Created_at;
}

void CatalogsFeedProcessingResult::setCreatedAt(const utility::datetime& value)
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
utility::string_t CatalogsFeedProcessingResult::getId() const
{
    return m_Id;
}

void CatalogsFeedProcessingResult::setId(const utility::string_t& value)
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
utility::datetime CatalogsFeedProcessingResult::getUpdatedAt() const
{
    return m_Updated_at;
}

void CatalogsFeedProcessingResult::setUpdatedAt(const utility::datetime& value)
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
std::shared_ptr<CatalogsFeedIngestionDetails> CatalogsFeedProcessingResult::getIngestionDetails() const
{
    return m_Ingestion_details;
}

void CatalogsFeedProcessingResult::setIngestionDetails(const std::shared_ptr<CatalogsFeedIngestionDetails>& value)
{
    m_Ingestion_details = value;
    m_Ingestion_detailsIsSet = true;
}

bool CatalogsFeedProcessingResult::ingestionDetailsIsSet() const
{
    return m_Ingestion_detailsIsSet;
}

void CatalogsFeedProcessingResult::unsetIngestion_details()
{
    m_Ingestion_detailsIsSet = false;
}
std::shared_ptr<CatalogsFeedProcessingStatus> CatalogsFeedProcessingResult::getStatus() const
{
    return m_Status;
}

void CatalogsFeedProcessingResult::setStatus(const std::shared_ptr<CatalogsFeedProcessingStatus>& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool CatalogsFeedProcessingResult::statusIsSet() const
{
    return m_StatusIsSet;
}

void CatalogsFeedProcessingResult::unsetStatus()
{
    m_StatusIsSet = false;
}
std::shared_ptr<CatalogsFeedProductCounts> CatalogsFeedProcessingResult::getProductCounts() const
{
    return m_Product_counts;
}

void CatalogsFeedProcessingResult::setProductCounts(const std::shared_ptr<CatalogsFeedProductCounts>& value)
{
    m_Product_counts = value;
    m_Product_countsIsSet = true;
}

bool CatalogsFeedProcessingResult::productCountsIsSet() const
{
    return m_Product_countsIsSet;
}

void CatalogsFeedProcessingResult::unsetProduct_counts()
{
    m_Product_countsIsSet = false;
}
std::shared_ptr<CatalogsFeedValidationDetails> CatalogsFeedProcessingResult::getValidationDetails() const
{
    return m_Validation_details;
}

void CatalogsFeedProcessingResult::setValidationDetails(const std::shared_ptr<CatalogsFeedValidationDetails>& value)
{
    m_Validation_details = value;
    m_Validation_detailsIsSet = true;
}

bool CatalogsFeedProcessingResult::validationDetailsIsSet() const
{
    return m_Validation_detailsIsSet;
}

void CatalogsFeedProcessingResult::unsetValidation_details()
{
    m_Validation_detailsIsSet = false;
}
}
}
}
}


