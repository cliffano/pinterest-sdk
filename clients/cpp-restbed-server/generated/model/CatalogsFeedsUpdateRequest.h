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

/*
 * CatalogsFeedsUpdateRequest.h
 *
 * Request object for updating a feed.
 */

#ifndef CatalogsFeedsUpdateRequest_H_
#define CatalogsFeedsUpdateRequest_H_



#include "ProductAvailabilityType.h"
#include "CatalogsFeedProcessingSchedule.h"
#include "CatalogsFeedCredentials.h"
#include <string>
#include "CatalogsStatus.h"
#include "CatalogsFormat.h"
#include "NullableCurrency.h"
#include <memory>
#include <vector>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Request object for updating a feed.
/// </summary>
class  CatalogsFeedsUpdateRequest 
{
public:
    CatalogsFeedsUpdateRequest() = default;
    explicit CatalogsFeedsUpdateRequest(boost::property_tree::ptree const& pt);
    virtual ~CatalogsFeedsUpdateRequest() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// CatalogsFeedsUpdateRequest members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ProductAvailabilityType> getDefaultAvailability() const;
    void setDefaultAvailability(std::shared_ptr<ProductAvailabilityType> value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<NullableCurrency> getDefaultCurrency() const;
    void setDefaultCurrency(std::shared_ptr<NullableCurrency> value);

    /// <summary>
    /// A human-friendly name associated to a given feed.
    /// </summary>
    std::string getName() const;
    void setName(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsFormat> getFormat() const;
    void setFormat(std::shared_ptr<CatalogsFormat> value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsFeedCredentials> getCredentials() const;
    void setCredentials(std::shared_ptr<CatalogsFeedCredentials> value);

    /// <summary>
    /// The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
    /// </summary>
    std::string getLocation() const;
    void setLocation(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsFeedProcessingSchedule> getPreferredProcessingSchedule() const;
    void setPreferredProcessingSchedule(std::shared_ptr<CatalogsFeedProcessingSchedule> value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsStatus> getStatus() const;
    void setStatus(std::shared_ptr<CatalogsStatus> value);

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string toJsonString_internal(bool prettyJson = false);
    virtual void fromJsonString_internal(std::string const& jsonString);
    virtual boost::property_tree::ptree toPropertyTree_internal();
    virtual void fromPropertyTree_internal(boost::property_tree::ptree const& pt);


protected:
    std::shared_ptr<ProductAvailabilityType> m_Default_availability = std::make_shared<ProductAvailabilityType>();
    std::shared_ptr<NullableCurrency> m_Default_currency = std::make_shared<NullableCurrency>();
    std::string m_Name = "";
    std::shared_ptr<CatalogsFormat> m_Format = std::make_shared<CatalogsFormat>();
    std::shared_ptr<CatalogsFeedCredentials> m_Credentials;
    std::string m_Location = "";
    std::shared_ptr<CatalogsFeedProcessingSchedule> m_Preferred_processing_schedule;
    std::shared_ptr<CatalogsStatus> m_Status = std::make_shared<CatalogsStatus>();
};

std::vector<CatalogsFeedsUpdateRequest> createCatalogsFeedsUpdateRequestVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* CatalogsFeedsUpdateRequest_H_ */
