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
 * CatalogsVerticalFeedsUpdateRequest.h
 *
 * Request object for updating a feed.
 */

#ifndef CatalogsVerticalFeedsUpdateRequest_H_
#define CatalogsVerticalFeedsUpdateRequest_H_


#include "ProductAvailabilityType.h"
#include "CatalogsFeedProcessingSchedule.h"
#include "CatalogsFeedCredentials.h"
#include <string>
#include "CatalogsHotelFeedsUpdateRequest.h"
#include "CatalogsStatus.h"
#include "CatalogsRetailFeedsUpdateRequest.h"
#include "CatalogsFormat.h"
#include "CatalogsType.h"
#include "NullableCurrency.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Request object for updating a feed.
/// </summary>
class  CatalogsVerticalFeedsUpdateRequest
{
public:
    CatalogsVerticalFeedsUpdateRequest();
    virtual ~CatalogsVerticalFeedsUpdateRequest() = default;


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

    bool operator==(const CatalogsVerticalFeedsUpdateRequest& rhs) const;
    bool operator!=(const CatalogsVerticalFeedsUpdateRequest& rhs) const;

    /////////////////////////////////////////////
    /// CatalogsVerticalFeedsUpdateRequest members

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
    bool nameIsSet() const;
    void unsetName();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsFormat getFormat() const;
    void setFormat(org::openapitools::server::model::CatalogsFormat const& value);
    bool formatIsSet() const;
    void unsetFormat();
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
    bool locationIsSet() const;
    void unsetLocation();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsFeedProcessingSchedule getPreferredProcessingSchedule() const;
    void setPreferredProcessingSchedule(org::openapitools::server::model::CatalogsFeedProcessingSchedule const& value);
    bool preferredProcessingScheduleIsSet() const;
    void unsetPreferred_processing_schedule();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsStatus getStatus() const;
    void setStatus(org::openapitools::server::model::CatalogsStatus const& value);
    bool statusIsSet() const;
    void unsetStatus();
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::CatalogsType getCatalogType() const;
    void setCatalogType(org::openapitools::server::model::CatalogsType const& value);
    /// <summary>
    /// 
    /// </summary>
    org::openapitools::server::model::ProductAvailabilityType getDefaultAvailability() const;
    void setDefaultAvailability(org::openapitools::server::model::ProductAvailabilityType const& value);
    bool defaultAvailabilityIsSet() const;
    void unsetDefault_availability();

    friend  void to_json(nlohmann::json& j, const CatalogsVerticalFeedsUpdateRequest& o);
    friend  void from_json(const nlohmann::json& j, CatalogsVerticalFeedsUpdateRequest& o);
protected:
    org::openapitools::server::model::NullableCurrency m_Default_currency;
    bool m_Default_currencyIsSet;
    std::string m_Name;
    bool m_NameIsSet;
    org::openapitools::server::model::CatalogsFormat m_Format;
    bool m_FormatIsSet;
    org::openapitools::server::model::CatalogsFeedCredentials m_Credentials;
    bool m_CredentialsIsSet;
    std::string m_Location;
    bool m_LocationIsSet;
    org::openapitools::server::model::CatalogsFeedProcessingSchedule m_Preferred_processing_schedule;
    bool m_Preferred_processing_scheduleIsSet;
    org::openapitools::server::model::CatalogsStatus m_Status;
    bool m_StatusIsSet;
    org::openapitools::server::model::CatalogsType m_Catalog_type;

    org::openapitools::server::model::ProductAvailabilityType m_Default_availability;
    bool m_Default_availabilityIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* CatalogsVerticalFeedsUpdateRequest_H_ */
