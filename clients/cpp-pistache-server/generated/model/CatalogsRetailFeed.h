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
/*
 * CatalogsRetailFeed.h
 *
 * Catalogs Retail Feed object
 */

#ifndef CatalogsRetailFeed_H_
#define CatalogsRetailFeed_H_


#include "Country.h"
#include "ProductAvailabilityType.h"
#include "CatalogsFeedProcessingSchedule.h"
#include "CatalogsFeedCredentials.h"
#include <string>
#include "CatalogsStatus.h"
#include "CatalogsFormat.h"
#include "CatalogsType.h"
#include "NullableCurrency.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Catalogs Retail Feed object
/// </summary>
class  CatalogsRetailFeed
{
public:
    CatalogsRetailFeed();
    virtual ~CatalogsRetailFeed() = default;


    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    /// <summary>
    /// Helper overload for validate. Used when one model stores another model and calls it's validate.
    /// Not meant to be called outside that case.
    /// </summary>
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

    bool operator==(const CatalogsRetailFeed& rhs) const;
    bool operator!=(const CatalogsRetailFeed& rhs) const;

    /////////////////////////////////////////////
    /// CatalogsRetailFeed members

    /// <summary>
    /// 
    /// </summary>
    std::string getCreatedAt() const;
    void setCreatedAt(std::string const& value);
    bool createdAtIsSet() const;
    void unsetCreated_at();
    /// <summary>
    /// 
    /// </summary>
    std::string getId() const;
    void setId(std::string const& value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// 
    /// </summary>
    std::string getUpdatedAt() const;
    void setUpdatedAt(std::string const& value);
    bool updatedAtIsSet() const;
    void unsetUpdated_at();
    /// <summary>
    /// A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsFormat getFormat() const;
    void setFormat(org::openapitools::server::model::CatalogsFormat const& value);
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsType getCatalogType() const;
    void setCatalogType(org::openapitools::server::model::CatalogsType const& value);
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsFeedCredentials getCredentials() const;
    void setCredentials(org::openapitools::server::model::CatalogsFeedCredentials const& value);
    /// <summary>
    /// The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
    /// </summary>
    std::string getLocation() const;
    void setLocation(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsFeedProcessingSchedule getPreferredProcessingSchedule() const;
    void setPreferredProcessingSchedule(org::openapitools::server::model::CatalogsFeedProcessingSchedule const& value);
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsStatus getStatus() const;
    void setStatus(org::openapitools::server::model::CatalogsStatus const& value);
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::NullableCurrency getDefaultCurrency() const;
    void setDefaultCurrency(org::openapitools::server::model::NullableCurrency const& value);
    /// <summary>
    /// The locale used within a feed for product descriptions.
    /// </summary>
    std::string getDefaultLocale() const;
    void setDefaultLocale(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::Country getDefaultCountry() const;
    void setDefaultCountry(org::openapitools::server::model::Country const& value);
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::ProductAvailabilityType getDefaultAvailability() const;
    void setDefaultAvailability(org::openapitools::server::model::ProductAvailabilityType const& value);

    friend  void to_json(nlohmann::json& j, const CatalogsRetailFeed& o);
    friend  void from_json(const nlohmann::json& j, CatalogsRetailFeed& o);
protected:
    std::string m_Created_at;
    bool m_Created_atIsSet;
    std::string m_Id;
    bool m_IdIsSet;
    std::string m_Updated_at;
    bool m_Updated_atIsSet;
    std::string m_Name;

    org::openapitools::server::model::CatalogsFormat m_Format;

    org::openapitools::server::model::CatalogsType m_Catalog_type;

    org::openapitools::server::model::CatalogsFeedCredentials m_Credentials;

    std::string m_Location;

    org::openapitools::server::model::CatalogsFeedProcessingSchedule m_Preferred_processing_schedule;

    org::openapitools::server::model::CatalogsStatus m_Status;

    org::openapitools::server::model::NullableCurrency m_Default_currency;

    std::string m_Default_locale;

    org::openapitools::server::model::Country m_Default_country;

    org::openapitools::server::model::ProductAvailabilityType m_Default_availability;

    
};

} // namespace org::openapitools::server::model

#endif /* CatalogsRetailFeed_H_ */
