/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * CatalogsFeedProcessingResult.h
 *
 * 
 */

#ifndef CatalogsFeedProcessingResult_H_
#define CatalogsFeedProcessingResult_H_



#include "CatalogsFeedValidationDetails.h"
#include "Catalogs_feed_processing_result_fields.h"
#include "CatalogsFeedProductCounts.h"
#include "CatalogsFeedProcessingStatus.h"
#include <string>
#include "CatalogsDbItem.h"
#include "CatalogsFeedIngestionDetails.h"
#include <memory>
#include <vector>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  CatalogsFeedProcessingResult : public CatalogsDbItem, public Catalogs_feed_processing_result_fields
{
public:
    CatalogsFeedProcessingResult() = default;
    explicit CatalogsFeedProcessingResult(boost::property_tree::ptree const& pt);
    virtual ~CatalogsFeedProcessingResult() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// CatalogsFeedProcessingResult members

    /// <summary>
    /// 
    /// </summary>
    std::string getCreatedAt() const;
    void setCreatedAt(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::string getId() const;
    void setId(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::string getUpdatedAt() const;
    void setUpdatedAt(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsFeedIngestionDetails> getIngestionDetails() const;
    void setIngestionDetails(std::shared_ptr<CatalogsFeedIngestionDetails> value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsFeedProcessingStatus> getStatus() const;
    void setStatus(std::shared_ptr<CatalogsFeedProcessingStatus> value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsFeedProductCounts> getProductCounts() const;
    void setProductCounts(std::shared_ptr<CatalogsFeedProductCounts> value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsFeedValidationDetails> getValidationDetails() const;
    void setValidationDetails(std::shared_ptr<CatalogsFeedValidationDetails> value);

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string toJsonString_internal(bool prettyJson = false);
    virtual void fromJsonString_internal(std::string const& jsonString);
    virtual boost::property_tree::ptree toPropertyTree_internal();
    virtual void fromPropertyTree_internal(boost::property_tree::ptree const& pt);


protected:
    std::string m_Created_at = "";
    std::string m_Id = "";
    std::string m_Updated_at = "";
    std::shared_ptr<CatalogsFeedIngestionDetails> m_Ingestion_details;
    std::shared_ptr<CatalogsFeedProcessingStatus> m_Status = std::make_shared<CatalogsFeedProcessingStatus>();
    std::shared_ptr<CatalogsFeedProductCounts> m_Product_counts;
    std::shared_ptr<CatalogsFeedValidationDetails> m_Validation_details;
};

std::vector<CatalogsFeedProcessingResult> createCatalogsFeedProcessingResultVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* CatalogsFeedProcessingResult_H_ */
