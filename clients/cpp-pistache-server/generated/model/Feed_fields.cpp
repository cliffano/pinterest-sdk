/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "Feed_fields.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

Feed_fields::Feed_fields()
{
    m_Name = "";
    m_Default_locale = "";
    m_Location = "";
    
}

void Feed_fields::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool Feed_fields::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool Feed_fields::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "Feed_fields" : pathPrefix;

                                            
    return success;
}

bool Feed_fields::operator==(const Feed_fields& rhs) const
{
    return
    
    
    (getDefaultCountry() == rhs.getDefaultCountry())
     &&
    
    (getDefaultAvailability() == rhs.getDefaultAvailability())
     &&
    
    (getDefaultCurrency() == rhs.getDefaultCurrency())
     &&
    
    (getName() == rhs.getName())
     &&
    
    (getFormat() == rhs.getFormat())
     &&
    
    (getDefaultLocale() == rhs.getDefaultLocale())
     &&
    
    (getCredentials() == rhs.getCredentials())
     &&
    
    (getLocation() == rhs.getLocation())
     &&
    
    (getPreferredProcessingSchedule() == rhs.getPreferredProcessingSchedule())
     &&
    
    (getStatus() == rhs.getStatus())
    
    
    ;
}

bool Feed_fields::operator!=(const Feed_fields& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Feed_fields& o)
{
    j = nlohmann::json();
    j["default_country"] = o.m_Default_country;
    j["default_availability"] = o.m_Default_availability;
    j["default_currency"] = o.m_Default_currency;
    j["name"] = o.m_Name;
    j["format"] = o.m_Format;
    j["default_locale"] = o.m_Default_locale;
    j["credentials"] = o.m_Credentials;
    j["location"] = o.m_Location;
    j["preferred_processing_schedule"] = o.m_Preferred_processing_schedule;
    j["status"] = o.m_Status;
    
}

void from_json(const nlohmann::json& j, Feed_fields& o)
{
    j.at("default_country").get_to(o.m_Default_country);
    j.at("default_availability").get_to(o.m_Default_availability);
    j.at("default_currency").get_to(o.m_Default_currency);
    j.at("name").get_to(o.m_Name);
    j.at("format").get_to(o.m_Format);
    j.at("default_locale").get_to(o.m_Default_locale);
    j.at("credentials").get_to(o.m_Credentials);
    j.at("location").get_to(o.m_Location);
    j.at("preferred_processing_schedule").get_to(o.m_Preferred_processing_schedule);
    j.at("status").get_to(o.m_Status);
    
}

Country Feed_fields::getDefaultCountry() const
{
    return m_Default_country;
}
void Feed_fields::setDefaultCountry(Country const& value)
{
    m_Default_country = value;
}
ProductAvailabilityType Feed_fields::getDefaultAvailability() const
{
    return m_Default_availability;
}
void Feed_fields::setDefaultAvailability(ProductAvailabilityType const& value)
{
    m_Default_availability = value;
}
NullableCurrency Feed_fields::getDefaultCurrency() const
{
    return m_Default_currency;
}
void Feed_fields::setDefaultCurrency(NullableCurrency const& value)
{
    m_Default_currency = value;
}
std::string Feed_fields::getName() const
{
    return m_Name;
}
void Feed_fields::setName(std::string const& value)
{
    m_Name = value;
}
CatalogsFormat Feed_fields::getFormat() const
{
    return m_Format;
}
void Feed_fields::setFormat(CatalogsFormat const& value)
{
    m_Format = value;
}
std::string Feed_fields::getDefaultLocale() const
{
    return m_Default_locale;
}
void Feed_fields::setDefaultLocale(std::string const& value)
{
    m_Default_locale = value;
}
CatalogsFeedCredentials Feed_fields::getCredentials() const
{
    return m_Credentials;
}
void Feed_fields::setCredentials(CatalogsFeedCredentials const& value)
{
    m_Credentials = value;
}
std::string Feed_fields::getLocation() const
{
    return m_Location;
}
void Feed_fields::setLocation(std::string const& value)
{
    m_Location = value;
}
CatalogsFeedProcessingSchedule Feed_fields::getPreferredProcessingSchedule() const
{
    return m_Preferred_processing_schedule;
}
void Feed_fields::setPreferredProcessingSchedule(CatalogsFeedProcessingSchedule const& value)
{
    m_Preferred_processing_schedule = value;
}
CatalogsStatus Feed_fields::getStatus() const
{
    return m_Status;
}
void Feed_fields::setStatus(CatalogsStatus const& value)
{
    m_Status = value;
}


} // namespace org::openapitools::server::model

