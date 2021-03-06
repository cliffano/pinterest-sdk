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
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// Request object for updating a feed.
/// </summary>
class  CatalogsFeedsUpdateRequest
{
public:
    CatalogsFeedsUpdateRequest();
    virtual ~CatalogsFeedsUpdateRequest() = default;


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

    bool operator==(const CatalogsFeedsUpdateRequest& rhs) const;
    bool operator!=(const CatalogsFeedsUpdateRequest& rhs) const;

    /////////////////////////////////////////////
    /// CatalogsFeedsUpdateRequest members

    /// <summary>
    /// 
    /// </summary>
    ProductAvailabilityType getDefaultAvailability() const;
    void setDefaultAvailability(ProductAvailabilityType const& value);
    bool defaultAvailabilityIsSet() const;
    void unsetDefault_availability();
    /// <summary>
    /// 
    /// </summary>
    NullableCurrency getDefaultCurrency() const;
    void setDefaultCurrency(NullableCurrency const& value);
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
    CatalogsFormat getFormat() const;
    void setFormat(CatalogsFormat const& value);
    bool formatIsSet() const;
    void unsetFormat();
    /// <summary>
    /// 
    /// </summary>
    CatalogsFeedCredentials getCredentials() const;
    void setCredentials(CatalogsFeedCredentials const& value);
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
    CatalogsFeedProcessingSchedule getPreferredProcessingSchedule() const;
    void setPreferredProcessingSchedule(CatalogsFeedProcessingSchedule const& value);
    bool preferredProcessingScheduleIsSet() const;
    void unsetPreferred_processing_schedule();
    /// <summary>
    /// 
    /// </summary>
    CatalogsStatus getStatus() const;
    void setStatus(CatalogsStatus const& value);
    bool statusIsSet() const;
    void unsetStatus();

    friend void to_json(nlohmann::json& j, const CatalogsFeedsUpdateRequest& o);
    friend void from_json(const nlohmann::json& j, CatalogsFeedsUpdateRequest& o);
protected:
    ProductAvailabilityType m_Default_availability;
    bool m_Default_availabilityIsSet;
    NullableCurrency m_Default_currency;
    bool m_Default_currencyIsSet;
    std::string m_Name;
    bool m_NameIsSet;
    CatalogsFormat m_Format;
    bool m_FormatIsSet;
    CatalogsFeedCredentials m_Credentials;
    bool m_CredentialsIsSet;
    std::string m_Location;
    bool m_LocationIsSet;
    CatalogsFeedProcessingSchedule m_Preferred_processing_schedule;
    bool m_Preferred_processing_scheduleIsSet;
    CatalogsStatus m_Status;
    bool m_StatusIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* CatalogsFeedsUpdateRequest_H_ */
