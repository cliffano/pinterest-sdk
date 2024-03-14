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


#include "CatalogsFeedIngestionErrors.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsFeedIngestionErrors::CatalogsFeedIngestionErrors()
{
    m_IMAGE_DOWNLOAD_ERROR = 0;
    m_IMAGE_DOWNLOAD_ERRORIsSet = false;
    m_LINE_LEVEL_INTERNAL_ERROR = 0;
    m_LINE_LEVEL_INTERNAL_ERRORIsSet = false;
    m_LARGE_PRODUCT_COUNT_DECREASE = 0;
    m_LARGE_PRODUCT_COUNT_DECREASEIsSet = false;
    m_ACCOUNT_FLAGGED = 0;
    m_ACCOUNT_FLAGGEDIsSet = false;
    
}

void CatalogsFeedIngestionErrors::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsFeedIngestionErrors::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsFeedIngestionErrors::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsFeedIngestionErrors" : pathPrefix;

                    
    return success;
}

bool CatalogsFeedIngestionErrors::operator==(const CatalogsFeedIngestionErrors& rhs) const
{
    return
    
    
    
    ((!iMAGEDOWNLOADERRORIsSet() && !rhs.iMAGEDOWNLOADERRORIsSet()) || (iMAGEDOWNLOADERRORIsSet() && rhs.iMAGEDOWNLOADERRORIsSet() && getIMAGEDOWNLOADERROR() == rhs.getIMAGEDOWNLOADERROR())) &&
    
    
    ((!lINELEVELINTERNALERRORIsSet() && !rhs.lINELEVELINTERNALERRORIsSet()) || (lINELEVELINTERNALERRORIsSet() && rhs.lINELEVELINTERNALERRORIsSet() && getLINELEVELINTERNALERROR() == rhs.getLINELEVELINTERNALERROR())) &&
    
    
    ((!lARGEPRODUCTCOUNTDECREASEIsSet() && !rhs.lARGEPRODUCTCOUNTDECREASEIsSet()) || (lARGEPRODUCTCOUNTDECREASEIsSet() && rhs.lARGEPRODUCTCOUNTDECREASEIsSet() && getLARGEPRODUCTCOUNTDECREASE() == rhs.getLARGEPRODUCTCOUNTDECREASE())) &&
    
    
    ((!aCCOUNTFLAGGEDIsSet() && !rhs.aCCOUNTFLAGGEDIsSet()) || (aCCOUNTFLAGGEDIsSet() && rhs.aCCOUNTFLAGGEDIsSet() && getACCOUNTFLAGGED() == rhs.getACCOUNTFLAGGED()))
    
    ;
}

bool CatalogsFeedIngestionErrors::operator!=(const CatalogsFeedIngestionErrors& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsFeedIngestionErrors& o)
{
    j = nlohmann::json::object();
    if(o.iMAGEDOWNLOADERRORIsSet())
        j["IMAGE_DOWNLOAD_ERROR"] = o.m_IMAGE_DOWNLOAD_ERROR;
    if(o.lINELEVELINTERNALERRORIsSet())
        j["LINE_LEVEL_INTERNAL_ERROR"] = o.m_LINE_LEVEL_INTERNAL_ERROR;
    if(o.lARGEPRODUCTCOUNTDECREASEIsSet())
        j["LARGE_PRODUCT_COUNT_DECREASE"] = o.m_LARGE_PRODUCT_COUNT_DECREASE;
    if(o.aCCOUNTFLAGGEDIsSet())
        j["ACCOUNT_FLAGGED"] = o.m_ACCOUNT_FLAGGED;
    
}

void from_json(const nlohmann::json& j, CatalogsFeedIngestionErrors& o)
{
    if(j.find("IMAGE_DOWNLOAD_ERROR") != j.end())
    {
        j.at("IMAGE_DOWNLOAD_ERROR").get_to(o.m_IMAGE_DOWNLOAD_ERROR);
        o.m_IMAGE_DOWNLOAD_ERRORIsSet = true;
    } 
    if(j.find("LINE_LEVEL_INTERNAL_ERROR") != j.end())
    {
        j.at("LINE_LEVEL_INTERNAL_ERROR").get_to(o.m_LINE_LEVEL_INTERNAL_ERROR);
        o.m_LINE_LEVEL_INTERNAL_ERRORIsSet = true;
    } 
    if(j.find("LARGE_PRODUCT_COUNT_DECREASE") != j.end())
    {
        j.at("LARGE_PRODUCT_COUNT_DECREASE").get_to(o.m_LARGE_PRODUCT_COUNT_DECREASE);
        o.m_LARGE_PRODUCT_COUNT_DECREASEIsSet = true;
    } 
    if(j.find("ACCOUNT_FLAGGED") != j.end())
    {
        j.at("ACCOUNT_FLAGGED").get_to(o.m_ACCOUNT_FLAGGED);
        o.m_ACCOUNT_FLAGGEDIsSet = true;
    } 
    
}

int32_t CatalogsFeedIngestionErrors::getIMAGEDOWNLOADERROR() const
{
    return m_IMAGE_DOWNLOAD_ERROR;
}
void CatalogsFeedIngestionErrors::setIMAGEDOWNLOADERROR(int32_t const value)
{
    m_IMAGE_DOWNLOAD_ERROR = value;
    m_IMAGE_DOWNLOAD_ERRORIsSet = true;
}
bool CatalogsFeedIngestionErrors::iMAGEDOWNLOADERRORIsSet() const
{
    return m_IMAGE_DOWNLOAD_ERRORIsSet;
}
void CatalogsFeedIngestionErrors::unsetIMAGE_DOWNLOAD_ERROR()
{
    m_IMAGE_DOWNLOAD_ERRORIsSet = false;
}
int32_t CatalogsFeedIngestionErrors::getLINELEVELINTERNALERROR() const
{
    return m_LINE_LEVEL_INTERNAL_ERROR;
}
void CatalogsFeedIngestionErrors::setLINELEVELINTERNALERROR(int32_t const value)
{
    m_LINE_LEVEL_INTERNAL_ERROR = value;
    m_LINE_LEVEL_INTERNAL_ERRORIsSet = true;
}
bool CatalogsFeedIngestionErrors::lINELEVELINTERNALERRORIsSet() const
{
    return m_LINE_LEVEL_INTERNAL_ERRORIsSet;
}
void CatalogsFeedIngestionErrors::unsetLINE_LEVEL_INTERNAL_ERROR()
{
    m_LINE_LEVEL_INTERNAL_ERRORIsSet = false;
}
int32_t CatalogsFeedIngestionErrors::getLARGEPRODUCTCOUNTDECREASE() const
{
    return m_LARGE_PRODUCT_COUNT_DECREASE;
}
void CatalogsFeedIngestionErrors::setLARGEPRODUCTCOUNTDECREASE(int32_t const value)
{
    m_LARGE_PRODUCT_COUNT_DECREASE = value;
    m_LARGE_PRODUCT_COUNT_DECREASEIsSet = true;
}
bool CatalogsFeedIngestionErrors::lARGEPRODUCTCOUNTDECREASEIsSet() const
{
    return m_LARGE_PRODUCT_COUNT_DECREASEIsSet;
}
void CatalogsFeedIngestionErrors::unsetLARGE_PRODUCT_COUNT_DECREASE()
{
    m_LARGE_PRODUCT_COUNT_DECREASEIsSet = false;
}
int32_t CatalogsFeedIngestionErrors::getACCOUNTFLAGGED() const
{
    return m_ACCOUNT_FLAGGED;
}
void CatalogsFeedIngestionErrors::setACCOUNTFLAGGED(int32_t const value)
{
    m_ACCOUNT_FLAGGED = value;
    m_ACCOUNT_FLAGGEDIsSet = true;
}
bool CatalogsFeedIngestionErrors::aCCOUNTFLAGGEDIsSet() const
{
    return m_ACCOUNT_FLAGGEDIsSet;
}
void CatalogsFeedIngestionErrors::unsetACCOUNT_FLAGGED()
{
    m_ACCOUNT_FLAGGEDIsSet = false;
}


} // namespace org::openapitools::server::model

