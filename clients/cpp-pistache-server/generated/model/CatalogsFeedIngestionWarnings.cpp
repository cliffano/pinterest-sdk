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


#include "CatalogsFeedIngestionWarnings.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsFeedIngestionWarnings::CatalogsFeedIngestionWarnings()
{
    m_ADDITIONAL_IMAGE_LEVEL_INTERNAL_ERROR = 0;
    m_ADDITIONAL_IMAGE_LEVEL_INTERNAL_ERRORIsSet = false;
    m_ADDITIONAL_IMAGE_FILE_NOT_ACCESSIBLE = 0;
    m_ADDITIONAL_IMAGE_FILE_NOT_ACCESSIBLEIsSet = false;
    m_ADDITIONAL_IMAGE_MALFORMED_URL = 0;
    m_ADDITIONAL_IMAGE_MALFORMED_URLIsSet = false;
    m_ADDITIONAL_IMAGE_FILE_NOT_FOUND = 0;
    m_ADDITIONAL_IMAGE_FILE_NOT_FOUNDIsSet = false;
    m_ADDITIONAL_IMAGE_INVALID_FILE = 0;
    m_ADDITIONAL_IMAGE_INVALID_FILEIsSet = false;
    m_HOTEL_PRICE_HEADER_IS_PRESENT = 0;
    m_HOTEL_PRICE_HEADER_IS_PRESENTIsSet = false;
    
}

void CatalogsFeedIngestionWarnings::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsFeedIngestionWarnings::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsFeedIngestionWarnings::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsFeedIngestionWarnings" : pathPrefix;

                            
    return success;
}

bool CatalogsFeedIngestionWarnings::operator==(const CatalogsFeedIngestionWarnings& rhs) const
{
    return
    
    
    
    ((!aDDITIONALIMAGELEVELINTERNALERRORIsSet() && !rhs.aDDITIONALIMAGELEVELINTERNALERRORIsSet()) || (aDDITIONALIMAGELEVELINTERNALERRORIsSet() && rhs.aDDITIONALIMAGELEVELINTERNALERRORIsSet() && getADDITIONALIMAGELEVELINTERNALERROR() == rhs.getADDITIONALIMAGELEVELINTERNALERROR())) &&
    
    
    ((!aDDITIONALIMAGEFILENOTACCESSIBLEIsSet() && !rhs.aDDITIONALIMAGEFILENOTACCESSIBLEIsSet()) || (aDDITIONALIMAGEFILENOTACCESSIBLEIsSet() && rhs.aDDITIONALIMAGEFILENOTACCESSIBLEIsSet() && getADDITIONALIMAGEFILENOTACCESSIBLE() == rhs.getADDITIONALIMAGEFILENOTACCESSIBLE())) &&
    
    
    ((!aDDITIONALIMAGEMALFORMEDURLIsSet() && !rhs.aDDITIONALIMAGEMALFORMEDURLIsSet()) || (aDDITIONALIMAGEMALFORMEDURLIsSet() && rhs.aDDITIONALIMAGEMALFORMEDURLIsSet() && getADDITIONALIMAGEMALFORMEDURL() == rhs.getADDITIONALIMAGEMALFORMEDURL())) &&
    
    
    ((!aDDITIONALIMAGEFILENOTFOUNDIsSet() && !rhs.aDDITIONALIMAGEFILENOTFOUNDIsSet()) || (aDDITIONALIMAGEFILENOTFOUNDIsSet() && rhs.aDDITIONALIMAGEFILENOTFOUNDIsSet() && getADDITIONALIMAGEFILENOTFOUND() == rhs.getADDITIONALIMAGEFILENOTFOUND())) &&
    
    
    ((!aDDITIONALIMAGEINVALIDFILEIsSet() && !rhs.aDDITIONALIMAGEINVALIDFILEIsSet()) || (aDDITIONALIMAGEINVALIDFILEIsSet() && rhs.aDDITIONALIMAGEINVALIDFILEIsSet() && getADDITIONALIMAGEINVALIDFILE() == rhs.getADDITIONALIMAGEINVALIDFILE())) &&
    
    
    ((!hOTELPRICEHEADERISPRESENTIsSet() && !rhs.hOTELPRICEHEADERISPRESENTIsSet()) || (hOTELPRICEHEADERISPRESENTIsSet() && rhs.hOTELPRICEHEADERISPRESENTIsSet() && getHOTELPRICEHEADERISPRESENT() == rhs.getHOTELPRICEHEADERISPRESENT()))
    
    ;
}

bool CatalogsFeedIngestionWarnings::operator!=(const CatalogsFeedIngestionWarnings& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsFeedIngestionWarnings& o)
{
    j = nlohmann::json::object();
    if(o.aDDITIONALIMAGELEVELINTERNALERRORIsSet())
        j["ADDITIONAL_IMAGE_LEVEL_INTERNAL_ERROR"] = o.m_ADDITIONAL_IMAGE_LEVEL_INTERNAL_ERROR;
    if(o.aDDITIONALIMAGEFILENOTACCESSIBLEIsSet())
        j["ADDITIONAL_IMAGE_FILE_NOT_ACCESSIBLE"] = o.m_ADDITIONAL_IMAGE_FILE_NOT_ACCESSIBLE;
    if(o.aDDITIONALIMAGEMALFORMEDURLIsSet())
        j["ADDITIONAL_IMAGE_MALFORMED_URL"] = o.m_ADDITIONAL_IMAGE_MALFORMED_URL;
    if(o.aDDITIONALIMAGEFILENOTFOUNDIsSet())
        j["ADDITIONAL_IMAGE_FILE_NOT_FOUND"] = o.m_ADDITIONAL_IMAGE_FILE_NOT_FOUND;
    if(o.aDDITIONALIMAGEINVALIDFILEIsSet())
        j["ADDITIONAL_IMAGE_INVALID_FILE"] = o.m_ADDITIONAL_IMAGE_INVALID_FILE;
    if(o.hOTELPRICEHEADERISPRESENTIsSet())
        j["HOTEL_PRICE_HEADER_IS_PRESENT"] = o.m_HOTEL_PRICE_HEADER_IS_PRESENT;
    
}

void from_json(const nlohmann::json& j, CatalogsFeedIngestionWarnings& o)
{
    if(j.find("ADDITIONAL_IMAGE_LEVEL_INTERNAL_ERROR") != j.end())
    {
        j.at("ADDITIONAL_IMAGE_LEVEL_INTERNAL_ERROR").get_to(o.m_ADDITIONAL_IMAGE_LEVEL_INTERNAL_ERROR);
        o.m_ADDITIONAL_IMAGE_LEVEL_INTERNAL_ERRORIsSet = true;
    } 
    if(j.find("ADDITIONAL_IMAGE_FILE_NOT_ACCESSIBLE") != j.end())
    {
        j.at("ADDITIONAL_IMAGE_FILE_NOT_ACCESSIBLE").get_to(o.m_ADDITIONAL_IMAGE_FILE_NOT_ACCESSIBLE);
        o.m_ADDITIONAL_IMAGE_FILE_NOT_ACCESSIBLEIsSet = true;
    } 
    if(j.find("ADDITIONAL_IMAGE_MALFORMED_URL") != j.end())
    {
        j.at("ADDITIONAL_IMAGE_MALFORMED_URL").get_to(o.m_ADDITIONAL_IMAGE_MALFORMED_URL);
        o.m_ADDITIONAL_IMAGE_MALFORMED_URLIsSet = true;
    } 
    if(j.find("ADDITIONAL_IMAGE_FILE_NOT_FOUND") != j.end())
    {
        j.at("ADDITIONAL_IMAGE_FILE_NOT_FOUND").get_to(o.m_ADDITIONAL_IMAGE_FILE_NOT_FOUND);
        o.m_ADDITIONAL_IMAGE_FILE_NOT_FOUNDIsSet = true;
    } 
    if(j.find("ADDITIONAL_IMAGE_INVALID_FILE") != j.end())
    {
        j.at("ADDITIONAL_IMAGE_INVALID_FILE").get_to(o.m_ADDITIONAL_IMAGE_INVALID_FILE);
        o.m_ADDITIONAL_IMAGE_INVALID_FILEIsSet = true;
    } 
    if(j.find("HOTEL_PRICE_HEADER_IS_PRESENT") != j.end())
    {
        j.at("HOTEL_PRICE_HEADER_IS_PRESENT").get_to(o.m_HOTEL_PRICE_HEADER_IS_PRESENT);
        o.m_HOTEL_PRICE_HEADER_IS_PRESENTIsSet = true;
    } 
    
}

int32_t CatalogsFeedIngestionWarnings::getADDITIONALIMAGELEVELINTERNALERROR() const
{
    return m_ADDITIONAL_IMAGE_LEVEL_INTERNAL_ERROR;
}
void CatalogsFeedIngestionWarnings::setADDITIONALIMAGELEVELINTERNALERROR(int32_t const value)
{
    m_ADDITIONAL_IMAGE_LEVEL_INTERNAL_ERROR = value;
    m_ADDITIONAL_IMAGE_LEVEL_INTERNAL_ERRORIsSet = true;
}
bool CatalogsFeedIngestionWarnings::aDDITIONALIMAGELEVELINTERNALERRORIsSet() const
{
    return m_ADDITIONAL_IMAGE_LEVEL_INTERNAL_ERRORIsSet;
}
void CatalogsFeedIngestionWarnings::unsetADDITIONAL_IMAGE_LEVEL_INTERNAL_ERROR()
{
    m_ADDITIONAL_IMAGE_LEVEL_INTERNAL_ERRORIsSet = false;
}
int32_t CatalogsFeedIngestionWarnings::getADDITIONALIMAGEFILENOTACCESSIBLE() const
{
    return m_ADDITIONAL_IMAGE_FILE_NOT_ACCESSIBLE;
}
void CatalogsFeedIngestionWarnings::setADDITIONALIMAGEFILENOTACCESSIBLE(int32_t const value)
{
    m_ADDITIONAL_IMAGE_FILE_NOT_ACCESSIBLE = value;
    m_ADDITIONAL_IMAGE_FILE_NOT_ACCESSIBLEIsSet = true;
}
bool CatalogsFeedIngestionWarnings::aDDITIONALIMAGEFILENOTACCESSIBLEIsSet() const
{
    return m_ADDITIONAL_IMAGE_FILE_NOT_ACCESSIBLEIsSet;
}
void CatalogsFeedIngestionWarnings::unsetADDITIONAL_IMAGE_FILE_NOT_ACCESSIBLE()
{
    m_ADDITIONAL_IMAGE_FILE_NOT_ACCESSIBLEIsSet = false;
}
int32_t CatalogsFeedIngestionWarnings::getADDITIONALIMAGEMALFORMEDURL() const
{
    return m_ADDITIONAL_IMAGE_MALFORMED_URL;
}
void CatalogsFeedIngestionWarnings::setADDITIONALIMAGEMALFORMEDURL(int32_t const value)
{
    m_ADDITIONAL_IMAGE_MALFORMED_URL = value;
    m_ADDITIONAL_IMAGE_MALFORMED_URLIsSet = true;
}
bool CatalogsFeedIngestionWarnings::aDDITIONALIMAGEMALFORMEDURLIsSet() const
{
    return m_ADDITIONAL_IMAGE_MALFORMED_URLIsSet;
}
void CatalogsFeedIngestionWarnings::unsetADDITIONAL_IMAGE_MALFORMED_URL()
{
    m_ADDITIONAL_IMAGE_MALFORMED_URLIsSet = false;
}
int32_t CatalogsFeedIngestionWarnings::getADDITIONALIMAGEFILENOTFOUND() const
{
    return m_ADDITIONAL_IMAGE_FILE_NOT_FOUND;
}
void CatalogsFeedIngestionWarnings::setADDITIONALIMAGEFILENOTFOUND(int32_t const value)
{
    m_ADDITIONAL_IMAGE_FILE_NOT_FOUND = value;
    m_ADDITIONAL_IMAGE_FILE_NOT_FOUNDIsSet = true;
}
bool CatalogsFeedIngestionWarnings::aDDITIONALIMAGEFILENOTFOUNDIsSet() const
{
    return m_ADDITIONAL_IMAGE_FILE_NOT_FOUNDIsSet;
}
void CatalogsFeedIngestionWarnings::unsetADDITIONAL_IMAGE_FILE_NOT_FOUND()
{
    m_ADDITIONAL_IMAGE_FILE_NOT_FOUNDIsSet = false;
}
int32_t CatalogsFeedIngestionWarnings::getADDITIONALIMAGEINVALIDFILE() const
{
    return m_ADDITIONAL_IMAGE_INVALID_FILE;
}
void CatalogsFeedIngestionWarnings::setADDITIONALIMAGEINVALIDFILE(int32_t const value)
{
    m_ADDITIONAL_IMAGE_INVALID_FILE = value;
    m_ADDITIONAL_IMAGE_INVALID_FILEIsSet = true;
}
bool CatalogsFeedIngestionWarnings::aDDITIONALIMAGEINVALIDFILEIsSet() const
{
    return m_ADDITIONAL_IMAGE_INVALID_FILEIsSet;
}
void CatalogsFeedIngestionWarnings::unsetADDITIONAL_IMAGE_INVALID_FILE()
{
    m_ADDITIONAL_IMAGE_INVALID_FILEIsSet = false;
}
int32_t CatalogsFeedIngestionWarnings::getHOTELPRICEHEADERISPRESENT() const
{
    return m_HOTEL_PRICE_HEADER_IS_PRESENT;
}
void CatalogsFeedIngestionWarnings::setHOTELPRICEHEADERISPRESENT(int32_t const value)
{
    m_HOTEL_PRICE_HEADER_IS_PRESENT = value;
    m_HOTEL_PRICE_HEADER_IS_PRESENTIsSet = true;
}
bool CatalogsFeedIngestionWarnings::hOTELPRICEHEADERISPRESENTIsSet() const
{
    return m_HOTEL_PRICE_HEADER_IS_PRESENTIsSet;
}
void CatalogsFeedIngestionWarnings::unsetHOTEL_PRICE_HEADER_IS_PRESENT()
{
    m_HOTEL_PRICE_HEADER_IS_PRESENTIsSet = false;
}


} // namespace org::openapitools::server::model

