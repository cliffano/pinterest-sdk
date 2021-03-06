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


#include "AdAccount.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

AdAccount::AdAccount()
{
    m_Id = "";
    m_IdIsSet = false;
    m_Name = "";
    m_NameIsSet = false;
    m_OwnerIsSet = false;
    m_CountryIsSet = false;
    m_CurrencyIsSet = false;
    
}

void AdAccount::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AdAccount::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AdAccount::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AdAccount" : pathPrefix;

                        
    return success;
}

bool AdAccount::operator==(const AdAccount& rhs) const
{
    return
    
    
    
    ((!idIsSet() && !rhs.idIsSet()) || (idIsSet() && rhs.idIsSet() && getId() == rhs.getId())) &&
    
    
    ((!nameIsSet() && !rhs.nameIsSet()) || (nameIsSet() && rhs.nameIsSet() && getName() == rhs.getName())) &&
    
    
    ((!ownerIsSet() && !rhs.ownerIsSet()) || (ownerIsSet() && rhs.ownerIsSet() && getOwner() == rhs.getOwner())) &&
    
    
    ((!countryIsSet() && !rhs.countryIsSet()) || (countryIsSet() && rhs.countryIsSet() && getCountry() == rhs.getCountry())) &&
    
    
    ((!currencyIsSet() && !rhs.currencyIsSet()) || (currencyIsSet() && rhs.currencyIsSet() && getCurrency() == rhs.getCurrency()))
    
    ;
}

bool AdAccount::operator!=(const AdAccount& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AdAccount& o)
{
    j = nlohmann::json();
    if(o.idIsSet())
        j["id"] = o.m_Id;
    if(o.nameIsSet())
        j["name"] = o.m_Name;
    if(o.ownerIsSet())
        j["owner"] = o.m_Owner;
    if(o.countryIsSet())
        j["country"] = o.m_Country;
    if(o.currencyIsSet())
        j["currency"] = o.m_Currency;
    
}

void from_json(const nlohmann::json& j, AdAccount& o)
{
    if(j.find("id") != j.end())
    {
        j.at("id").get_to(o.m_Id);
        o.m_IdIsSet = true;
    } 
    if(j.find("name") != j.end())
    {
        j.at("name").get_to(o.m_Name);
        o.m_NameIsSet = true;
    } 
    if(j.find("owner") != j.end())
    {
        j.at("owner").get_to(o.m_Owner);
        o.m_OwnerIsSet = true;
    } 
    if(j.find("country") != j.end())
    {
        j.at("country").get_to(o.m_Country);
        o.m_CountryIsSet = true;
    } 
    if(j.find("currency") != j.end())
    {
        j.at("currency").get_to(o.m_Currency);
        o.m_CurrencyIsSet = true;
    } 
    
}

std::string AdAccount::getId() const
{
    return m_Id;
}
void AdAccount::setId(std::string const& value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool AdAccount::idIsSet() const
{
    return m_IdIsSet;
}
void AdAccount::unsetId()
{
    m_IdIsSet = false;
}
std::string AdAccount::getName() const
{
    return m_Name;
}
void AdAccount::setName(std::string const& value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool AdAccount::nameIsSet() const
{
    return m_NameIsSet;
}
void AdAccount::unsetName()
{
    m_NameIsSet = false;
}
Ad_account_owner AdAccount::getOwner() const
{
    return m_Owner;
}
void AdAccount::setOwner(Ad_account_owner const& value)
{
    m_Owner = value;
    m_OwnerIsSet = true;
}
bool AdAccount::ownerIsSet() const
{
    return m_OwnerIsSet;
}
void AdAccount::unsetOwner()
{
    m_OwnerIsSet = false;
}
Country AdAccount::getCountry() const
{
    return m_Country;
}
void AdAccount::setCountry(Country const& value)
{
    m_Country = value;
    m_CountryIsSet = true;
}
bool AdAccount::countryIsSet() const
{
    return m_CountryIsSet;
}
void AdAccount::unsetCountry()
{
    m_CountryIsSet = false;
}
Currency AdAccount::getCurrency() const
{
    return m_Currency;
}
void AdAccount::setCurrency(Currency const& value)
{
    m_Currency = value;
    m_CurrencyIsSet = true;
}
bool AdAccount::currencyIsSet() const
{
    return m_CurrencyIsSet;
}
void AdAccount::unsetCurrency()
{
    m_CurrencyIsSet = false;
}


} // namespace org::openapitools::server::model

