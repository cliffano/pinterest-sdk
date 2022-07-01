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
 * CatalogsFeed.h
 *
 * Catalogs Catalogs Feed object
 */

#ifndef CatalogsFeed_H_
#define CatalogsFeed_H_



#include "Country.h"
#include "ProductAvailabilityType.h"
#include "CatalogsFeedProcessingSchedule.h"
#include "CatalogsFeedCredentials.h"
#include <string>
#include "CatalogsDbItem.h"
#include "CatalogsStatus.h"
#include "Feed_fields.h"
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
/// Catalogs Catalogs Feed object
/// </summary>
class  CatalogsFeed : public CatalogsDbItem, public Feed_fields
{
public:
    CatalogsFeed() = default;
    explicit CatalogsFeed(boost::property_tree::ptree const& pt);
    virtual ~CatalogsFeed() = default;

    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// CatalogsFeed members

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
    std::shared_ptr<Country> getDefaultCountry() const;
    void setDefaultCountry(std::shared_ptr<Country> value);

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
    /// A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.
    /// </summary>
    std::string getName() const;
    void setName(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsFormat> getFormat() const;
    void setFormat(std::shared_ptr<CatalogsFormat> value);

    /// <summary>
    /// The locale used within a feed for product descriptions.
    /// </summary>
    std::string getDefaultLocale() const;
    void setDefaultLocale(std::string value);

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
    std::string m_Created_at = "";
    std::string m_Id = "";
    std::string m_Updated_at = "";
    std::shared_ptr<Country> m_Default_country = std::make_shared<Country>();
    std::shared_ptr<ProductAvailabilityType> m_Default_availability = std::make_shared<ProductAvailabilityType>();
    std::shared_ptr<NullableCurrency> m_Default_currency = std::make_shared<NullableCurrency>();
    std::string m_Name = "";
    std::shared_ptr<CatalogsFormat> m_Format = std::make_shared<CatalogsFormat>();
    std::string m_Default_locale = "";
    std::shared_ptr<CatalogsFeedCredentials> m_Credentials;
    std::string m_Location = "";
    std::shared_ptr<CatalogsFeedProcessingSchedule> m_Preferred_processing_schedule;
    std::shared_ptr<CatalogsStatus> m_Status = std::make_shared<CatalogsStatus>();
};

std::vector<CatalogsFeed> createCatalogsFeedVectorFromJsonString(const std::string& json);

}
}
}
}

#endif /* CatalogsFeed_H_ */
