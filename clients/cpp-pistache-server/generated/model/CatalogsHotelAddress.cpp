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


#include "CatalogsHotelAddress.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsHotelAddress::CatalogsHotelAddress()
{
    m_Addr1 = "";
    m_Addr1IsSet = false;
    m_City = "";
    m_CityIsSet = false;
    m_Region = "";
    m_RegionIsSet = false;
    m_Country = "";
    m_CountryIsSet = false;
    m_Postal_code = "";
    m_Postal_codeIsSet = false;
    
}

void CatalogsHotelAddress::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsHotelAddress::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsHotelAddress::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsHotelAddress" : pathPrefix;

                        
    return success;
}

bool CatalogsHotelAddress::operator==(const CatalogsHotelAddress& rhs) const
{
    return
    
    
    
    ((!addr1IsSet() && !rhs.addr1IsSet()) || (addr1IsSet() && rhs.addr1IsSet() && getAddr1() == rhs.getAddr1())) &&
    
    
    ((!cityIsSet() && !rhs.cityIsSet()) || (cityIsSet() && rhs.cityIsSet() && getCity() == rhs.getCity())) &&
    
    
    ((!regionIsSet() && !rhs.regionIsSet()) || (regionIsSet() && rhs.regionIsSet() && getRegion() == rhs.getRegion())) &&
    
    
    ((!countryIsSet() && !rhs.countryIsSet()) || (countryIsSet() && rhs.countryIsSet() && getCountry() == rhs.getCountry())) &&
    
    
    ((!postalCodeIsSet() && !rhs.postalCodeIsSet()) || (postalCodeIsSet() && rhs.postalCodeIsSet() && getPostalCode() == rhs.getPostalCode()))
    
    ;
}

bool CatalogsHotelAddress::operator!=(const CatalogsHotelAddress& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsHotelAddress& o)
{
    j = nlohmann::json::object();
    if(o.addr1IsSet())
        j["addr1"] = o.m_Addr1;
    if(o.cityIsSet())
        j["city"] = o.m_City;
    if(o.regionIsSet())
        j["region"] = o.m_Region;
    if(o.countryIsSet())
        j["country"] = o.m_Country;
    if(o.postalCodeIsSet())
        j["postal_code"] = o.m_Postal_code;
    
}

void from_json(const nlohmann::json& j, CatalogsHotelAddress& o)
{
    if(j.find("addr1") != j.end())
    {
        j.at("addr1").get_to(o.m_Addr1);
        o.m_Addr1IsSet = true;
    } 
    if(j.find("city") != j.end())
    {
        j.at("city").get_to(o.m_City);
        o.m_CityIsSet = true;
    } 
    if(j.find("region") != j.end())
    {
        j.at("region").get_to(o.m_Region);
        o.m_RegionIsSet = true;
    } 
    if(j.find("country") != j.end())
    {
        j.at("country").get_to(o.m_Country);
        o.m_CountryIsSet = true;
    } 
    if(j.find("postal_code") != j.end())
    {
        j.at("postal_code").get_to(o.m_Postal_code);
        o.m_Postal_codeIsSet = true;
    } 
    
}

std::string CatalogsHotelAddress::getAddr1() const
{
    return m_Addr1;
}
void CatalogsHotelAddress::setAddr1(std::string const& value)
{
    m_Addr1 = value;
    m_Addr1IsSet = true;
}
bool CatalogsHotelAddress::addr1IsSet() const
{
    return m_Addr1IsSet;
}
void CatalogsHotelAddress::unsetAddr1()
{
    m_Addr1IsSet = false;
}
std::string CatalogsHotelAddress::getCity() const
{
    return m_City;
}
void CatalogsHotelAddress::setCity(std::string const& value)
{
    m_City = value;
    m_CityIsSet = true;
}
bool CatalogsHotelAddress::cityIsSet() const
{
    return m_CityIsSet;
}
void CatalogsHotelAddress::unsetCity()
{
    m_CityIsSet = false;
}
std::string CatalogsHotelAddress::getRegion() const
{
    return m_Region;
}
void CatalogsHotelAddress::setRegion(std::string const& value)
{
    m_Region = value;
    m_RegionIsSet = true;
}
bool CatalogsHotelAddress::regionIsSet() const
{
    return m_RegionIsSet;
}
void CatalogsHotelAddress::unsetRegion()
{
    m_RegionIsSet = false;
}
std::string CatalogsHotelAddress::getCountry() const
{
    return m_Country;
}
void CatalogsHotelAddress::setCountry(std::string const& value)
{
    m_Country = value;
    m_CountryIsSet = true;
}
bool CatalogsHotelAddress::countryIsSet() const
{
    return m_CountryIsSet;
}
void CatalogsHotelAddress::unsetCountry()
{
    m_CountryIsSet = false;
}
std::string CatalogsHotelAddress::getPostalCode() const
{
    return m_Postal_code;
}
void CatalogsHotelAddress::setPostalCode(std::string const& value)
{
    m_Postal_code = value;
    m_Postal_codeIsSet = true;
}
bool CatalogsHotelAddress::postalCodeIsSet() const
{
    return m_Postal_codeIsSet;
}
void CatalogsHotelAddress::unsetPostal_code()
{
    m_Postal_codeIsSet = false;
}


} // namespace org::openapitools::server::model

