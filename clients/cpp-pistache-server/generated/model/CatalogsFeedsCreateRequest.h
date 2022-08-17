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
/*
 * CatalogsFeedsCreateRequest.h
 *
 * Request object for creating a feed. Please, be aware that \&quot;default_country\&quot; and \&quot;default_locale\&quot; are not required in the spec for forward compatibility but for now the API will not accept requests without those fields.
 */

#ifndef CatalogsFeedsCreateRequest_H_
#define CatalogsFeedsCreateRequest_H_


#include "Country.h"
#include "ProductAvailabilityType.h"
#include "CatalogsFeedProcessingSchedule.h"
#include "CatalogsFeedCredentials.h"
#include <string>
#include "CatalogsFormat.h"
#include "NullableCurrency.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Request object for creating a feed. Please, be aware that \&quot;default_country\&quot; and \&quot;default_locale\&quot; are not required in the spec for forward compatibility but for now the API will not accept requests without those fields.
/// </summary>
class  CatalogsFeedsCreateRequest
{
public:
    CatalogsFeedsCreateRequest();
    virtual ~CatalogsFeedsCreateRequest() = default;


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

    bool operator==(const CatalogsFeedsCreateRequest& rhs) const;
    bool operator!=(const CatalogsFeedsCreateRequest& rhs) const;

    /////////////////////////////////////////////
    /// CatalogsFeedsCreateRequest members

    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::Country getDefaultCountry() const;
    void setDefaultCountry(org::openapitools::server::model::Country const& value);
    bool defaultCountryIsSet() const;
    void unsetDefault_country();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::ProductAvailabilityType getDefaultAvailability() const;
    void setDefaultAvailability(org::openapitools::server::model::ProductAvailabilityType const& value);
    bool defaultAvailabilityIsSet() const;
    void unsetDefault_availability();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::NullableCurrency getDefaultCurrency() const;
    void setDefaultCurrency(org::openapitools::server::model::NullableCurrency const& value);
    bool defaultCurrencyIsSet() const;
    void unsetDefault_currency();
    /// <summary>
    /// A human-friendly name associated to a given feed.
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsFormat getFormat() const;
    void setFormat(org::openapitools::server::model::CatalogsFormat const& value);
    /// <summary>
    /// The locale used within a feed for product descriptions.
    /// </summary>
    std::string getDefaultLocale() const;
    void setDefaultLocale(std::string const& value);
    bool defaultLocaleIsSet() const;
    void unsetDefault_locale();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsFeedCredentials getCredentials() const;
    void setCredentials(org::openapitools::server::model::CatalogsFeedCredentials const& value);
    bool credentialsIsSet() const;
    void unsetCredentials();
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
    bool preferredProcessingScheduleIsSet() const;
    void unsetPreferred_processing_schedule();

    friend void to_json(nlohmann::json& j, const CatalogsFeedsCreateRequest& o);
    friend void from_json(const nlohmann::json& j, CatalogsFeedsCreateRequest& o);
protected:
    org::openapitools::server::model::Country m_Default_country;
    bool m_Default_countryIsSet;
    org::openapitools::server::model::ProductAvailabilityType m_Default_availability;
    bool m_Default_availabilityIsSet;
    org::openapitools::server::model::NullableCurrency m_Default_currency;
    bool m_Default_currencyIsSet;
    std::string m_Name;

    org::openapitools::server::model::CatalogsFormat m_Format;

    std::string m_Default_locale;
    bool m_Default_localeIsSet;
    org::openapitools::server::model::CatalogsFeedCredentials m_Credentials;
    bool m_CredentialsIsSet;
    std::string m_Location;

    org::openapitools::server::model::CatalogsFeedProcessingSchedule m_Preferred_processing_schedule;
    bool m_Preferred_processing_scheduleIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* CatalogsFeedsCreateRequest_H_ */
