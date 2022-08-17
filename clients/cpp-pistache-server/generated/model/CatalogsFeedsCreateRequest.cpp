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


#include "CatalogsFeedsCreateRequest.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsFeedsCreateRequest::CatalogsFeedsCreateRequest()
{
    m_Default_countryIsSet = false;
    m_Default_availabilityIsSet = false;
    m_Default_currencyIsSet = false;
    m_Name = "";
    m_Default_locale = "";
    m_Default_localeIsSet = false;
    m_CredentialsIsSet = false;
    m_Location = "";
    m_Preferred_processing_scheduleIsSet = false;
    
}

void CatalogsFeedsCreateRequest::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsFeedsCreateRequest::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsFeedsCreateRequest::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsFeedsCreateRequest" : pathPrefix;

                                     
    
    /* Location */ {
        const std::string& value = m_Location;
        const std::string currentValuePath = _pathPrefix + ".location";
                
        

    }
        
    return success;
}

bool CatalogsFeedsCreateRequest::operator==(const CatalogsFeedsCreateRequest& rhs) const
{
    return
    
    
    
    ((!defaultCountryIsSet() && !rhs.defaultCountryIsSet()) || (defaultCountryIsSet() && rhs.defaultCountryIsSet() && getDefaultCountry() == rhs.getDefaultCountry())) &&
    
    
    ((!defaultAvailabilityIsSet() && !rhs.defaultAvailabilityIsSet()) || (defaultAvailabilityIsSet() && rhs.defaultAvailabilityIsSet() && getDefaultAvailability() == rhs.getDefaultAvailability())) &&
    
    
    ((!defaultCurrencyIsSet() && !rhs.defaultCurrencyIsSet()) || (defaultCurrencyIsSet() && rhs.defaultCurrencyIsSet() && getDefaultCurrency() == rhs.getDefaultCurrency())) &&
    
    (getName() == rhs.getName())
     &&
    
    (getFormat() == rhs.getFormat())
     &&
    
    
    ((!defaultLocaleIsSet() && !rhs.defaultLocaleIsSet()) || (defaultLocaleIsSet() && rhs.defaultLocaleIsSet() && getDefaultLocale() == rhs.getDefaultLocale())) &&
    
    
    ((!credentialsIsSet() && !rhs.credentialsIsSet()) || (credentialsIsSet() && rhs.credentialsIsSet() && getCredentials() == rhs.getCredentials())) &&
    
    (getLocation() == rhs.getLocation())
     &&
    
    
    ((!preferredProcessingScheduleIsSet() && !rhs.preferredProcessingScheduleIsSet()) || (preferredProcessingScheduleIsSet() && rhs.preferredProcessingScheduleIsSet() && getPreferredProcessingSchedule() == rhs.getPreferredProcessingSchedule()))
    
    ;
}

bool CatalogsFeedsCreateRequest::operator!=(const CatalogsFeedsCreateRequest& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsFeedsCreateRequest& o)
{
    j = nlohmann::json();
    if(o.defaultCountryIsSet())
        j["default_country"] = o.m_Default_country;
    if(o.defaultAvailabilityIsSet())
        j["default_availability"] = o.m_Default_availability;
    if(o.defaultCurrencyIsSet())
        j["default_currency"] = o.m_Default_currency;
    j["name"] = o.m_Name;
    j["format"] = o.m_Format;
    if(o.defaultLocaleIsSet())
        j["default_locale"] = o.m_Default_locale;
    if(o.credentialsIsSet())
        j["credentials"] = o.m_Credentials;
    j["location"] = o.m_Location;
    if(o.preferredProcessingScheduleIsSet())
        j["preferred_processing_schedule"] = o.m_Preferred_processing_schedule;
    
}

void from_json(const nlohmann::json& j, CatalogsFeedsCreateRequest& o)
{
    if(j.find("default_country") != j.end())
    {
        j.at("default_country").get_to(o.m_Default_country);
        o.m_Default_countryIsSet = true;
    } 
    if(j.find("default_availability") != j.end())
    {
        j.at("default_availability").get_to(o.m_Default_availability);
        o.m_Default_availabilityIsSet = true;
    } 
    if(j.find("default_currency") != j.end())
    {
        j.at("default_currency").get_to(o.m_Default_currency);
        o.m_Default_currencyIsSet = true;
    } 
    j.at("name").get_to(o.m_Name);
    j.at("format").get_to(o.m_Format);
    if(j.find("default_locale") != j.end())
    {
        j.at("default_locale").get_to(o.m_Default_locale);
        o.m_Default_localeIsSet = true;
    } 
    if(j.find("credentials") != j.end())
    {
        j.at("credentials").get_to(o.m_Credentials);
        o.m_CredentialsIsSet = true;
    } 
    j.at("location").get_to(o.m_Location);
    if(j.find("preferred_processing_schedule") != j.end())
    {
        j.at("preferred_processing_schedule").get_to(o.m_Preferred_processing_schedule);
        o.m_Preferred_processing_scheduleIsSet = true;
    } 
    
}

org::openapitools::server::model::Country CatalogsFeedsCreateRequest::getDefaultCountry() const
{
    return m_Default_country;
}
void CatalogsFeedsCreateRequest::setDefaultCountry(org::openapitools::server::model::Country const& value)
{
    m_Default_country = value;
    m_Default_countryIsSet = true;
}
bool CatalogsFeedsCreateRequest::defaultCountryIsSet() const
{
    return m_Default_countryIsSet;
}
void CatalogsFeedsCreateRequest::unsetDefault_country()
{
    m_Default_countryIsSet = false;
}
org::openapitools::server::model::ProductAvailabilityType CatalogsFeedsCreateRequest::getDefaultAvailability() const
{
    return m_Default_availability;
}
void CatalogsFeedsCreateRequest::setDefaultAvailability(org::openapitools::server::model::ProductAvailabilityType const& value)
{
    m_Default_availability = value;
    m_Default_availabilityIsSet = true;
}
bool CatalogsFeedsCreateRequest::defaultAvailabilityIsSet() const
{
    return m_Default_availabilityIsSet;
}
void CatalogsFeedsCreateRequest::unsetDefault_availability()
{
    m_Default_availabilityIsSet = false;
}
org::openapitools::server::model::NullableCurrency CatalogsFeedsCreateRequest::getDefaultCurrency() const
{
    return m_Default_currency;
}
void CatalogsFeedsCreateRequest::setDefaultCurrency(org::openapitools::server::model::NullableCurrency const& value)
{
    m_Default_currency = value;
    m_Default_currencyIsSet = true;
}
bool CatalogsFeedsCreateRequest::defaultCurrencyIsSet() const
{
    return m_Default_currencyIsSet;
}
void CatalogsFeedsCreateRequest::unsetDefault_currency()
{
    m_Default_currencyIsSet = false;
}
std::string CatalogsFeedsCreateRequest::getName() const
{
    return m_Name;
}
void CatalogsFeedsCreateRequest::setName(std::string const& value)
{
    m_Name = value;
}
org::openapitools::server::model::CatalogsFormat CatalogsFeedsCreateRequest::getFormat() const
{
    return m_Format;
}
void CatalogsFeedsCreateRequest::setFormat(org::openapitools::server::model::CatalogsFormat const& value)
{
    m_Format = value;
}
std::string CatalogsFeedsCreateRequest::getDefaultLocale() const
{
    return m_Default_locale;
}
void CatalogsFeedsCreateRequest::setDefaultLocale(std::string const& value)
{
    m_Default_locale = value;
    m_Default_localeIsSet = true;
}
bool CatalogsFeedsCreateRequest::defaultLocaleIsSet() const
{
    return m_Default_localeIsSet;
}
void CatalogsFeedsCreateRequest::unsetDefault_locale()
{
    m_Default_localeIsSet = false;
}
org::openapitools::server::model::CatalogsFeedCredentials CatalogsFeedsCreateRequest::getCredentials() const
{
    return m_Credentials;
}
void CatalogsFeedsCreateRequest::setCredentials(org::openapitools::server::model::CatalogsFeedCredentials const& value)
{
    m_Credentials = value;
    m_CredentialsIsSet = true;
}
bool CatalogsFeedsCreateRequest::credentialsIsSet() const
{
    return m_CredentialsIsSet;
}
void CatalogsFeedsCreateRequest::unsetCredentials()
{
    m_CredentialsIsSet = false;
}
std::string CatalogsFeedsCreateRequest::getLocation() const
{
    return m_Location;
}
void CatalogsFeedsCreateRequest::setLocation(std::string const& value)
{
    m_Location = value;
}
org::openapitools::server::model::CatalogsFeedProcessingSchedule CatalogsFeedsCreateRequest::getPreferredProcessingSchedule() const
{
    return m_Preferred_processing_schedule;
}
void CatalogsFeedsCreateRequest::setPreferredProcessingSchedule(org::openapitools::server::model::CatalogsFeedProcessingSchedule const& value)
{
    m_Preferred_processing_schedule = value;
    m_Preferred_processing_scheduleIsSet = true;
}
bool CatalogsFeedsCreateRequest::preferredProcessingScheduleIsSet() const
{
    return m_Preferred_processing_scheduleIsSet;
}
void CatalogsFeedsCreateRequest::unsetPreferred_processing_schedule()
{
    m_Preferred_processing_scheduleIsSet = false;
}


} // namespace org::openapitools::server::model

