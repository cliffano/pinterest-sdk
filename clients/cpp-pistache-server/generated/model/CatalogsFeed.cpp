/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "CatalogsFeed.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsFeed::CatalogsFeed()
{
    m_Created_at = "";
    m_Created_atIsSet = false;
    m_Id = "";
    m_IdIsSet = false;
    m_Updated_at = "";
    m_Updated_atIsSet = false;
    m_Name = "";
    m_Default_locale = "";
    m_Location = "";
    
}

void CatalogsFeed::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsFeed::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsFeed::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsFeed" : pathPrefix;

                                            
    if (!m_Credentials.validate()) {
        msg << _pathPrefix << ": Credentials is invalid;";
        success = false;
    }        
    if (!m_Preferred_processing_schedule.validate()) {
        msg << _pathPrefix << ": Preferred_processing_schedule is invalid;";
        success = false;
    }    
    return success;
}

bool CatalogsFeed::operator==(const CatalogsFeed& rhs) const
{
    return
    
    
    
    ((!createdAtIsSet() && !rhs.createdAtIsSet()) || (createdAtIsSet() && rhs.createdAtIsSet() && getCreatedAt() == rhs.getCreatedAt())) &&
    
    
    ((!idIsSet() && !rhs.idIsSet()) || (idIsSet() && rhs.idIsSet() && getId() == rhs.getId())) &&
    
    
    ((!updatedAtIsSet() && !rhs.updatedAtIsSet()) || (updatedAtIsSet() && rhs.updatedAtIsSet() && getUpdatedAt() == rhs.getUpdatedAt())) &&
    
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

bool CatalogsFeed::operator!=(const CatalogsFeed& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsFeed& o)
{
    j = nlohmann::json::object();
    if(o.createdAtIsSet())
        j["created_at"] = o.m_Created_at;
    if(o.idIsSet())
        j["id"] = o.m_Id;
    if(o.updatedAtIsSet())
        j["updated_at"] = o.m_Updated_at;
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

void from_json(const nlohmann::json& j, CatalogsFeed& o)
{
    if(j.find("created_at") != j.end())
    {
        j.at("created_at").get_to(o.m_Created_at);
        o.m_Created_atIsSet = true;
    } 
    if(j.find("id") != j.end())
    {
        j.at("id").get_to(o.m_Id);
        o.m_IdIsSet = true;
    } 
    if(j.find("updated_at") != j.end())
    {
        j.at("updated_at").get_to(o.m_Updated_at);
        o.m_Updated_atIsSet = true;
    } 
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

std::string CatalogsFeed::getCreatedAt() const
{
    return m_Created_at;
}
void CatalogsFeed::setCreatedAt(std::string const& value)
{
    m_Created_at = value;
    m_Created_atIsSet = true;
}
bool CatalogsFeed::createdAtIsSet() const
{
    return m_Created_atIsSet;
}
void CatalogsFeed::unsetCreated_at()
{
    m_Created_atIsSet = false;
}
std::string CatalogsFeed::getId() const
{
    return m_Id;
}
void CatalogsFeed::setId(std::string const& value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool CatalogsFeed::idIsSet() const
{
    return m_IdIsSet;
}
void CatalogsFeed::unsetId()
{
    m_IdIsSet = false;
}
std::string CatalogsFeed::getUpdatedAt() const
{
    return m_Updated_at;
}
void CatalogsFeed::setUpdatedAt(std::string const& value)
{
    m_Updated_at = value;
    m_Updated_atIsSet = true;
}
bool CatalogsFeed::updatedAtIsSet() const
{
    return m_Updated_atIsSet;
}
void CatalogsFeed::unsetUpdated_at()
{
    m_Updated_atIsSet = false;
}
org::openapitools::server::model::Country CatalogsFeed::getDefaultCountry() const
{
    return m_Default_country;
}
void CatalogsFeed::setDefaultCountry(org::openapitools::server::model::Country const& value)
{
    m_Default_country = value;
}
org::openapitools::server::model::ProductAvailabilityType CatalogsFeed::getDefaultAvailability() const
{
    return m_Default_availability;
}
void CatalogsFeed::setDefaultAvailability(org::openapitools::server::model::ProductAvailabilityType const& value)
{
    m_Default_availability = value;
}
org::openapitools::server::model::NullableCurrency CatalogsFeed::getDefaultCurrency() const
{
    return m_Default_currency;
}
void CatalogsFeed::setDefaultCurrency(org::openapitools::server::model::NullableCurrency const& value)
{
    m_Default_currency = value;
}
std::string CatalogsFeed::getName() const
{
    return m_Name;
}
void CatalogsFeed::setName(std::string const& value)
{
    m_Name = value;
}
org::openapitools::server::model::CatalogsFormat CatalogsFeed::getFormat() const
{
    return m_Format;
}
void CatalogsFeed::setFormat(org::openapitools::server::model::CatalogsFormat const& value)
{
    m_Format = value;
}
std::string CatalogsFeed::getDefaultLocale() const
{
    return m_Default_locale;
}
void CatalogsFeed::setDefaultLocale(std::string const& value)
{
    m_Default_locale = value;
}
org::openapitools::server::model::CatalogsFeedCredentials CatalogsFeed::getCredentials() const
{
    return m_Credentials;
}
void CatalogsFeed::setCredentials(org::openapitools::server::model::CatalogsFeedCredentials const& value)
{
    m_Credentials = value;
}
std::string CatalogsFeed::getLocation() const
{
    return m_Location;
}
void CatalogsFeed::setLocation(std::string const& value)
{
    m_Location = value;
}
org::openapitools::server::model::CatalogsFeedProcessingSchedule CatalogsFeed::getPreferredProcessingSchedule() const
{
    return m_Preferred_processing_schedule;
}
void CatalogsFeed::setPreferredProcessingSchedule(org::openapitools::server::model::CatalogsFeedProcessingSchedule const& value)
{
    m_Preferred_processing_schedule = value;
}
org::openapitools::server::model::CatalogsStatus CatalogsFeed::getStatus() const
{
    return m_Status;
}
void CatalogsFeed::setStatus(org::openapitools::server::model::CatalogsStatus const& value)
{
    m_Status = value;
}


} // namespace org::openapitools::server::model

